# Implementation of All Known Instruction Opcodes
#
# This module contains the implementation of all identified instruction opcodes
# for the Google Play Integrity Protect VM. The format of each instruction was
# derived from the decompiled source using Ghidra.
#
# Each method is prefixed with 'VMOp_' to clearly distinguish them from other
# VM-related functions. The module begins with utility functions and generalized
# instruction implementations. Opcode-specific implementations based on the
# reversed library are provided at the end.
from pairipcore.context import VMContext
from pairipcore.opcode import *  # noqa

import ctypes

from typing import Callable

# -----------------------------------------------------------------------------
# Typing stuff
# -----------------------------------------------------------------------------
StoreFn = Callable[[int, int], None]  # fn(val, addr)
LoadFn = Callable[[int], int]  # fn(addr) -> val


# -----------------------------------------------------------------------------
# Pre-Initialization
# -----------------------------------------------------------------------------
def VMOp_PreInitialize(context: VMContext) -> None:
    # Setup entry point address
    if context.pc < 0:
        context.pc = context.entry_point


def VMOp_Interpret(context: VMContext, table: dict, cb=None) -> None:
    VMOp_PreInitialize(context)

    context.psection("init")
    VMOp_JumpNext(context, context.pc)
    while not context.should_exit:
        label = context.next_label or f"lab_{context.pc:x}"
        context.pline("")
        context.psection(label)

        opcode = context.current_opcode()
        print(hex(opcode))
        context += 2  # skip opcode bytes
        handler = table.get(opcode, None)
        if handler is None:
            if cb:
                cb(context, opcode)
            else:
                context.pline(f"Unknown opcode {opcode:#x}")
                context.should_exit = True
        else:
            handler(context)

    context.pline("")


# -----------------------------------------------------------------------------
# Utility operations
# -----------------------------------------------------------------------------
def VMOp_LoadAddressToRegister(context: VMContext, name: str, off: int) -> int:
    """Parses the address given at offset 'off' and returns it."""
    addr_val = context.addr(off)
    VMOp_LoadToRegister(context, name, addr_val)
    return addr_val


def VMOp_LoadToRegister(context: VMContext, name: str, value: str | int) -> None:
    if isinstance(value, int):
        value = f"#{value:#x}"
    context.pinsn("LOAD", f"{name}, {value}")


def VMOp_Copy(
    context: VMContext,
    fn: Callable[[int, int], None],
    output: tuple[str, int] | int,
    input: tuple[str, int] | int,
    *comments: str,
    offset: int = -1,
) -> None:
    VMOp_Store(context, fn, output, input, *comments, offset=offset, pcode_insn="COPY")


def VMOp_Store(
    context: VMContext,
    fn: Callable[[int, int], None],
    output: tuple[str, int] | int,
    input: tuple[str, int] | int,
    *comments: str,
    offset: int = -1,
    pcode_insn: str | None = None,
) -> None:
    """Stores the input value(s) in the output register or at the output address.

    This function implements the behaviour of the STORE PCode instruction and
    can be used as a generic store instruction (see :func:`VMOp_Copy`). Output
    can be a constant address or a register name with its target address. Same
    applies to the :code:`Input` parameter.

    For instance, the following call will use a constant address as output, but
    a register reference as input:

    >>> VMOp_Store(context, 0x1234, ("v0", 0x00))

    If you use a register reference make sure the value to be stored is given as
    well.
    """
    if isinstance(output, int):
        output, addr = f"#{output:#x}", output
    else:
        output, addr = output

    if isinstance(input, int):
        input, val = f"#{input:#x}", input
    else:
        input, val = input

    if offset >= 0:
        output = f"[{output}+{offset:#x}]"

    pcode_insn = pcode_insn or "STORE"
    context.pinsn(pcode_insn, f"{output}, {input}", *comments)
    fn(val, addr)


def VMOp_BinaryOp(
    context: VMContext,
    pcode_insn: str,
    store_fn: Callable[[int, int], None],
    v0_fn: Callable[[int], int],
    v1_fn: Callable[[int], int],
    op: Callable[[int, int], int],
    next_addr_off: int = 0x12,
    hash_off: int = 0x00,
    store_off: int = 0x1A,
    v0_off: int = 0x1E,
    v1_off: int = 0x22,
) -> None:
    # Performs a binary operation using the specified offset positions. the
    # operation name is defined by its pcode instruction.
    # LOAD      v0, B
    # LOAD      v1, C
    # <Insn>    v2, v0, v1
    # STORE     A, v2
    address__a = context.addr(store_off)
    v0 = VMOp_LoadAddressToRegister(context, "v0", v0_off)
    v1 = VMOp_LoadAddressToRegister(context, "v1", v1_off)

    _b = v0_fn(v0)
    _c = v1_fn(v1)
    context.pinsn(pcode_insn, "v2, v0, v1", f"*v0 = {_b:#x}, *v1 = {_c:#x}")
    VMOp_Store(context, store_fn, address__a, ("v2", op(_b, _c)))
    VMOp_VerifyJumpNext(context, next_addr_off=next_addr_off, hash_off=hash_off)


def VMOp_LAssign(
    context: VMContext,
    fn: Callable[[int, int], None],
    op: Callable[[int], int],
    a_off: int = 0x00,
    b_off: int = 0x04,
    next_addr_off: int = 0x1A,
    hash_off: int = 0x08,
) -> None:
    # Assigns the value of B to A. This instruction is equivalent to
    # *a = *b.
    # COPY    A, B
    address__a = context.addr(a_off)
    address__b = context.addr(b_off)

    _b = op(address__b)
    VMOp_Copy(context, fn, address__a, (f"#{address__b:#x}", _b))
    VMOp_VerifyJumpNext(context, next_addr_off=next_addr_off, hash_off=hash_off)


def VMOp_Compare(
    context: VMContext,
    load_fn: Callable[[int], object],
    store_fn: StoreFn = None,
    max_val: int = 0xFFFFFFFF,
    store_off: int = 0x1E,
    v0_off: int = 0x00,
    v1_off: int = 0x22,
    next_addr_off: int = 0x16,
    hash_off: int = 0x04,
) -> None:
    # compares two registers (type: unsigned long) and stores the
    # result at a destination address.
    # LOAD    v0, A
    # PUSH    v1, B
    # CMP     v2, v0, v1
    # STORE   C, v2
    # JMP     DST
    v0 = VMOp_LoadAddressToRegister(context, "v0", v0_off)
    _a = context.u64(v0)

    v1 = VMOp_LoadAddressToRegister(context, "v1", v1_off)
    _b = context.u64(v1)

    address__c = context.addr(store_off)
    context.pinsn("CMP", f"#{address__c:#x}, v0, v1", f"{_a:#x} ?= {_b:#x}")

    _r = 0 if _a == _b else 1 if _a < _b else max_val
    VMOp_Store(
        context, store_fn or context.seti32, address__c, ("v2", _r), f"*v2 = {_r:#x}"
    )
    VMOp_VerifyJumpNext(context, next_addr_off=0x16, hash_off=0x04)


def VMOp_New(context: VMContext, output: str, size: int) -> int:
    ptr = context.malloc(size)
    context.pinsn("NEW", f"{output}, [#0x38]", f"=> #{ptr:#x}")
    return ptr


def VMOp_Call(context: VMContext, target: str | int, *inputs: str | int) -> None:
    args = []
    for input in inputs:
        if isinstance(input, int):
            input = f"#{input:#x}"
        args.append(input)

    if isinstance(target, int):
        target = f"#{target:#x}"
    context.pinsn("CALL", f"{target}, {', '.join(args)}")


def VMOp_JumpNext(context: VMContext, next_addr: int, jump: bool = True) -> None:
    next_label = f"lab_{next_addr:x}"
    context.pinsn("BRANCH", next_label)

    # jump to DST address
    if jump:
        context.pc = next_addr
        context.next_label = next_label


def VMOp_VerifyJumpNext(
    context: VMContext, next_addr_off: int, hash_off: int, jump: bool = True
) -> None:
    next_instruction_addr = context.addr(next_addr_off)
    fallback_address = context.addr(next_addr_off + 4)
    if not context.verify_hash(context.pc + hash_off):
        context.pinsn(
            "",
            "",
            f"fallback to #{fallback_address:#x} - original: #{next_instruction_addr:#x}",
        )
        next_instruction_addr = fallback_address

    VMOp_JumpNext(context, next_instruction_addr, jump)


# -----------------------------------------------------------------------------
# ops
# -----------------------------------------------------------------------------


def VMOp_Malloc1(context: VMContext) -> None:
    # malloc: allocate structure and jump to next address
    # NEW       v0, 0x18
    # STORE     v1, v0
    # BRANCH    DST
    # Allocates three unsignoed long values and stores them in addresss A. Checksum
    # address is at +0x10 and checksum length at 0x12. Afterwards, jumps to address
    # DST given at offset +0x16.
    store_address = context.addr(0x1A)
    ptr = VMOp_New(context, "v0", 0x18)
    VMOp_Store(context, context.setu64, store_address, ("v0", ptr))
    VMOp_VerifyJumpNext(context, next_addr_off=0x12, hash_off=0x00)


def VMOp_Init1(context: VMContext) -> None:
    # init: allocate and fill structure and jump to next address (same as 0x58)
    # INI    A, B
    # JMP    DST
    # expands to:
    #   LOAD   v0, A
    #   LOAD   v1, B
    #   NEW    [#0x38], v2
    #   STORE  [v2+0x00], #0x16ef08
    #   STORE  [v2+0x08], #0x00
    #   STORE  [v2+0x10], #0x00
    #   STORE  [v2+0x18], #0x00
    #   STORE  [v2+0x20], #0x00
    #   STORE  [v2+0x28], #0x3f800000
    #   STORE  [v2+0x30], %EBX
    #   INC    [v0+0x08]
    #   STORE  [v0+0x10], v2
    # Allocates a new structure and links it with B and C. Finally, jumps to DST.
    v0 = VMOp_LoadAddressToRegister(context, "v0", 0x00)
    v1 = VMOp_LoadAddressToRegister(context, "v1", 0x04)

    v2 = VMOp_New(context, "v2", 0x38)
    data = context.mmap[v2]
    _values = [0x16EF08, 0, 0, 0, 0, 0x3F800000]
    for i, v in enumerate(_values):
        VMOp_Store(context, data.putu64, ("v2", i * 8), v, offset=i * 8)

    _b = context.u64(v1)
    VMOp_Store(context, data.putu64, ("v2", 0x30), ("v1", v1), offset=0x30)
    # Address A is actually a vector using the following structure:
    # struct vector_t {
    #    long length;
    #    void *start;
    #    void *end;
    # }
    _a = context.mmap[context.u64(v0)]

    val = _a.getu64(0x08) + 1
    _a.putu64(val, 0x08)
    context.pinsn("INC", "[v0+0x08]", f"=> *(v0 + 0x08) = {val}")
    VMOp_Store(
        context,
        _a.putu64,
        ("v0", 0x10),
        ("v2", v2),
        f"=>  (v0 + 0x10) = {v2:#x}",
        offset=0x10,
    )
    VMOp_VerifyJumpNext(context, next_addr_off=0x16, hash_off=0x04)


def VMOp_Setup1(context: VMContext):
    # Iterates over all functions stored in A and executes them. Thir result will
    # be stored at a destination address.
    # PUSH    A, EAX
    # PUSH    B, EBX
    # PUSH    C, ECX
    # PUSH    #0x00, AX
    # PUSH    [EAX->length], BX
    # loop:
    #     CALL   [EAX->data+AX]
    #     INC    AX
    #     CMP    AX, BX
    #     JNE    loop
    #
    # simplified:
    # loop:
    #     CALL    [A, #i]
    #     INC     i
    # SET    B, $rval
    # JMP    DST
    # call functions stored in A, whereby A is defined by the struct in opcode 0x68
    address__a = VMOp_LoadAddressToRegister(context, "EAX", 0x00)
    address__b = VMOp_LoadAddressToRegister(context, "EBX", 0x04)
    address__c = VMOp_LoadAddressToRegister(context, "ECX", 0x08)
    # The structure used in A conforms to a vector:
    # struct vector_t {
    #    long length;
    #    void *start;
    #    void *end;
    # }
    VMOp_LoadToRegister(context, "AX", "0x00")
    VMOp_LoadToRegister(context, "BX", "[EAX->length], BX")
    _a = context.mmap[context.u64(address__a)]
    # TODO

    VMOp_VerifyJumpNext(context, next_addr_off=0x1E, hash_off=0x0C)


def VMOp_CompareULong(context: VMContext) -> None:
    # compares two registers (type: unsigned long) and stores the
    # result at a destination address.
    # LOAD    v0, A
    # PUSH    v1, B
    # CMP     C, v0, v1
    # JMP     DST
    VMOp_Compare(context, context.u64)


# -- based on generated content
def VMOp_XorByte(context: VMContext) -> None:
    # XORs two values and stores the result in the destination register
    # LOAD     v0, B
    # LOAD     v1, C
    # INT_XOR  v2, v0, v1
    # STORE    A, v2
    VMOp_BinaryOp(
        context,
        "BYTE_XOR",
        context.setu8,
        context.u8,
        context.u8,
        lambda b, c: (b ^ c) & 0xFF,
        next_addr_off=0x1A,
        hash_off=0x08,
        store_off=0x22,
        v0_off=0x00,
        v1_off=0x04,
    )


def VMOp_OrByte(context: VMContext) -> None:
    # ORs two values and stores the result in the destination register
    # LOAD     v0, A
    # LOAD     v1, B
    # INT_OR   v2, v0, v1
    # STORE    C, v2
    VMOp_BinaryOp(
        context,
        "BYTE_OR",
        context.setu8,
        context.u8,
        context.u8,
        lambda b, c: (b | c) & 0xFF,
        next_addr_off=0x1A,
        hash_off=0x08,
        store_off=0x22,
        v0_off=0x00,
        v1_off=0x04,
    )


def VMOp_RAssignUInt(context: VMContext) -> None:
    # Assigns the value of A to B. This instruction is equivalent to
    # *b = *a.
    # COPY    B, A
    address__a = context.addr(0x1E)
    address__b = context.addr(0x1E)

    _a = context.u32(address__a)
    VMOp_Copy(context, context.setu32, address__b, (f"#{address__a:#x}", _a))
    VMOp_VerifyJumpNext(context, next_addr_off=0x12, hash_off=0x00)


def VMOp_LAssignUInt(context: VMContext) -> None:
    # Assigns the value of B to A. This instruction is equivalent to
    # *a = *b.
    # COPY    A, B
    VMOp_LAssign(
        context,
        context.setu32,
        context.u32,
        a_off=0x1A,
        b_off=0x1E,
        next_addr_off=0x12,
        hash_off=0x00,
    )


def VMOp_LAssignByte(context: VMContext) -> None:
    # Assigns the value of B to A. This instruction is equivalent to
    # *a = *b.
    # COPY    A, B
    VMOp_LAssign(
        context,
        context.setu8,
        context.u8,
        b_off=0x1E,
        next_addr_off=0x16,
        hash_off=0x04,
    )


def VMOp_LAssignULong(context: VMContext) -> None:
    # Assigns the value of B to A. This instruction is equivalent to
    # *a = *b.
    # COPY    A, B
    VMOp_LAssign(
        context,
        context.setu64,
        context.u64,
        b_off=0x1E,
        next_addr_off=0x16,
        hash_off=0x04,
    )


def VMOp_RShiftSInt(context: VMContext) -> None:
    # Shifts the value at address B by the number of bits defined at C.
    # LOAD      v0, B
    # LOAD      v1, C
    # INT_RIGHT v2, v0, v1
    # STORE     A, v2
    VMOp_BinaryOp(
        context,
        "SINT_RIGHT",
        context.setu32,
        context.u32,
        context.u32,
        lambda b, c: b >> (c & 0x1F),
    )


def VMOp_CompareDouble(context: VMContext) -> None:
    # compares two registers (type: unsigned long) and stores the
    # result at a destination address.
    # LOAD    v0, A
    # PUSH    v1, B
    # CMP     C, v0, v1
    # JMP     DST
    VMOp_Compare(context, context.double)


def VMOp_DivSInt(context: VMContext) -> None:
    # implements standard integer division on signed 32bit integers
    # LOAD      v0, A
    # LOAD      v1, B
    # <Insn>    v2, v0, v1
    # STORE     C, v2
    # JMP       DST
    def div_sint(_a: int, _b: int) -> int:
        _r = -0x80000000
        if _a != -0x80000000 and _b != 0:
            _r = _a // _b
        return _r

    VMOp_BinaryOp(
        context, "DIV_SINT", context.seti32, context.i32, context.i32, div_sint
    )


def VMOp_AddSInt(context: VMContext) -> None:
    # implements standard integer addition on signed 32bit integers
    # LOAD      v0, A
    # LOAD      v1, B
    # ADD_SINT  v2, v0, v1
    # STORE     C, v2
    # JMP       DST
    def add_sint(_a: int, _b: int) -> int:
        return ctypes.c_int32(_a + _b).value

    VMOp_BinaryOp(
        context, "ADD_SINT", context.seti32, context.i32, context.i32, add_sint
    )


def VMOp_Nop(context: VMContext) -> None:
    # no operation instruction
    VMOp_VerifyJumpNext(context, next_addr_off=0x12, hash_off=0x00)


def VMOp_Main(context: VMContext) -> None:
    # Interprets the main program of the VM by setting up some memory
    # first.
    # LOAD      v0, A
    # LOAD      v1, B
    # LOAD      v2, C
    # LOAD      v3, D
    # Next, it copies 0x100 bytes from v1 into a new register:
    # COPY      v4, [v1, 0x100]
    # Then, it calls the core function that interprets all bytes stored
    # at address B
    # CALL      vm_main, v2, v4, v1
    v0 = VMOp_LoadAddressToRegister(context, "v0", 0x00)
    v1 = VMOp_LoadAddressToRegister(context, "v1", 0x04)
    v2 = VMOp_LoadAddressToRegister(context, "v2", 0x08)
    v3 = VMOp_LoadAddressToRegister(context, "v3", 0x26)

    v4 = context.vm_code[v1 : v1 + 0x100]
    context.pinsn("COPY", "v4, [v1, #0x100]")
    print(hex(context.u64(v3)))
    VMOp_Call(context, "vm_main", "v2", "v4", "v1")
    VMOp_VerifyJumpNext(context, next_addr_off=0x1E, hash_off=0x0C)

    _VMOp_ExecMain(context, v2, v4, v0)


def _VMOp_ExecMain(
    context: VMContext, param_1: int, param_2: bytes, param_3: int
) -> None:
    # Setup section line in verbose output
    context.pline("")
    context.psection("vm_main")

    # Perform XOR on first 0xC bytes using the following key
    key = b"\x9b\xcf\x7fs\xe9\xe9\xef\xe9\xd2\xa7M\xd3"
    new_data = bytearray(len(key))
    for i, v in enumerate(param_2[: len(key)]):
        new_data[i] = v ^ key[i]

    print(new_data)


# -----------------------------------------------------------------------------
# Opcode table (use that in interpret)
# -----------------------------------------------------------------------------
Disassembler = {
    VMOpcode_Interpret: VMOp_Interpret,
    #
    VMOpcode_Malloc1: VMOp_Malloc1,
    VMOpcode_Malloc2: VMOp_Malloc1,
    VMOpcode_Init1: VMOp_Init1,
    VMOpcode_Setup1: VMOp_Setup1,
    VMOpcode_OR_Byte: VMOp_OrByte,
    VMOpcode_RAssign_UInt: VMOp_RAssignUInt,
    VMOpcode_RShift_SInt: VMOp_RShiftSInt,
    VMOpcode_Compare_ULong: VMOp_CompareULong,
    VMOpcode_LAssign_UInt: VMOp_LAssignUInt,
    VMOpcode_LAssign_Byte: VMOp_LAssignByte,
    VMOpcode_LAssign_ULong: VMOp_LAssignULong,
    VMOpcode_Compare_Double: VMOp_CompareDouble,
    VMOpcode_Div_SInt: VMOp_DivSInt,
    VMOpcode_XOR_Byte: VMOp_XorByte,
    # special operations
    VMOpcode_NOP1: VMOp_Nop,
    VMOpcode_Main: VMOp_Main,
}

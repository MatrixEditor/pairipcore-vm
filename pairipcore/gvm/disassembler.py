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
from pairipcore.context import VM
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
def VMOp_PreInitialize(vm: VM) -> None:
    # Setup entry point address
    if vm.context.pc < 0:
        vm.context.pc = vm.entry_point()

    vm.state["next_label"] = None


def VMOp_Interpret(vm: VM, table: dict, cb=None) -> None:
    VMOp_PreInitialize(vm)

    vm.state.psection("init")
    VMOp_JumpNext(vm, vm.context.pc)
    while not vm.state.should_exit:
        label = vm.state["next_label"] or f"lab_{vm.context.pc:x}"
        vm.state.pline("")
        vm.state.psection(label)

        opcode = vm.current_opcode()
        print(hex(opcode))
        vm.context += 2  # skip opcode bytes
        handler = table.get(opcode, None)
        if handler is None:
            if cb:
                cb(vm, opcode)
            else:
                vm.state.pline(f"Unknown opcode {opcode:#x}")
                vm.state.should_exit = True
        else:
            handler(vm)

    vm.state.pline("")


# -----------------------------------------------------------------------------
# Utility operations
# -----------------------------------------------------------------------------
def VMOp_LoadAddressToRegister(vm: VM, name: str, off: int) -> int:
    """Parses the address given at offset 'off' and returns it."""
    addr_val = vm.context.addr(off)
    VMOp_LoadToRegister(vm, name, addr_val)
    return addr_val


def VMOp_LoadToRegister(vm: VM, name: str, value: str | int) -> None:
    if isinstance(value, int):
        value = f"#{value:#x}"

    vm.state.pinsn("LOAD", f"{name}, {value}")


def VMOp_Copy(
    vm: VM,
    fn: Callable[[int, int], None],
    output: tuple[str, int] | int,
    input: tuple[str, int] | int,
    *comments: str,
    offset: int = -1,
) -> None:
    VMOp_Store(vm, fn, output, input, *comments, offset=offset, pcode_insn="COPY")


def VMOp_Store(
    vm: VM,
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

    >>> VMOp_Store(vm, 0x1234, ("v0", 0x00))

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
    vm.state.pinsn(pcode_insn, f"{output}, {input}", *comments)
    fn(val, addr)


def VMOp_BinaryOp(
    vm: VM,
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
    address__a = vm.context.addr(store_off)
    v0 = VMOp_LoadAddressToRegister(vm, "v0", v0_off)
    v1 = VMOp_LoadAddressToRegister(vm, "v1", v1_off)

    _b = v0_fn(v0)
    _c = v1_fn(v1)
    vm.state.pinsn(pcode_insn, "v2, v0, v1", f"*v0 = {_b:#x}, *v1 = {_c:#x}")
    VMOp_Store(vm, store_fn, address__a, ("v2", op(_b, _c)))
    VMOp_VerifyJumpNext(vm, next_addr_off=next_addr_off, hash_off=hash_off)


def VMOp_LAssign(
    vm: VM,
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
    address__a = vm.context.addr(a_off)
    address__b = vm.context.addr(b_off)

    _b = op(address__b)
    VMOp_Copy(vm, fn, address__a, (f"#{address__b:#x}", _b))
    VMOp_VerifyJumpNext(vm, next_addr_off=next_addr_off, hash_off=hash_off)


def VMOp_Compare(
    vm: VM,
    load_fn: Callable[[int], object],
    store_fn: StoreFn | None = None,
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
    v0 = VMOp_LoadAddressToRegister(vm, "v0", v0_off)
    _a = vm.context.u64(v0)

    v1 = VMOp_LoadAddressToRegister(vm, "v1", v1_off)
    _b = vm.context.u64(v1)

    address__c = vm.context.addr(store_off)
    vm.state.pinsn("CMP", f"#{address__c:#x}, v0, v1", f"{_a:#x} ?= {_b:#x}")

    _r = 0 if _a == _b else 1 if _a < _b else max_val
    VMOp_Store(
        vm, store_fn or vm.context.seti32, address__c, ("v2", _r), f"*v2 = {_r:#x}"
    )
    VMOp_VerifyJumpNext(vm, next_addr_off=0x16, hash_off=0x04)


def VMOp_New(vm: VM, output: str, size: int) -> int:
    ptr, _ = vm.mem.malloc(size)
    vm.state.pinsn("NEW", f"{output}, [#0x38]", f"=> #{ptr:#x}")
    return ptr


def VMOp_Call(vm: VM, target: str | int, *inputs: str | int) -> None:
    args = []
    for input in inputs:
        if isinstance(input, int):
            input = f"#{input:#x}"
        args.append(input)

    if isinstance(target, int):
        target = f"#{target:#x}"
    vm.state.pinsn("CALL", f"{target}, {', '.join(args)}")


def VMOp_JumpNext(vm: VM, next_addr: int, jump: bool = True) -> None:
    next_label = f"lab_{next_addr:x}"
    vm.state.pinsn("BRANCH", next_label)

    # jump to DST address
    if jump:
        vm.context.pc = next_addr
        vm.state["next_label"] = next_label


def VMOp_VerifyJumpNext(
    vm: VM, next_addr_off: int, hash_off: int, jump: bool = True
) -> None:
    next_instruction_addr = vm.context.addr(next_addr_off)
    fallback_address = vm.context.addr(next_addr_off + 4)
    if not vm.verify_hash(vm.context.pc + hash_off):
        vm.state.pinsn(
            "",
            "",
            f"fallback to #{fallback_address:#x} - original: #{next_instruction_addr:#x}",
        )
        next_instruction_addr = fallback_address

    VMOp_JumpNext(vm, next_instruction_addr, jump)


# -----------------------------------------------------------------------------
# ops
# -----------------------------------------------------------------------------


def VMOp_Malloc1(vm: VM) -> None:
    # malloc: allocate structure and jump to next address
    # NEW       v0, 0x18
    # STORE     v1, v0
    # BRANCH    DST
    # Allocates three unsignoed long values and stores them in addresss A. Checksum
    # address is at +0x10 and checksum length at 0x12. Afterwards, jumps to address
    # DST given at offset +0x16.
    store_address = vm.context.addr(0x1A)
    ptr = VMOp_New(vm, "v0", 0x18)
    VMOp_Store(vm, vm.context.setu64, store_address, ("v0", ptr))
    VMOp_VerifyJumpNext(vm, next_addr_off=0x12, hash_off=0x00)


def VMOp_Init1(vm: VM) -> None:
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
    v0 = VMOp_LoadAddressToRegister(vm, "v0", 0x00)
    v1 = VMOp_LoadAddressToRegister(vm, "v1", 0x04)

    v2 = VMOp_New(vm, "v2", 0x38)
    # data = vm.mem[v2]
    # _values = [0x16EF08, 0, 0, 0, 0, 0x3F800000]
    # for i, v in enumerate(_values):
    #     VMOp_Store(vm, data.putu64, ("v2", i * 8), v, offset=i * 8)

    # _b = vm.code.u64(v1)
    # VMOp_Store(vm, data.putu64, ("v2", 0x30), ("v1", v1), offset=0x30)
    # Address A is actually a vector using the following structure:
    # struct vector_t {
    #    long length;
    #    void *start;
    #    void *end;
    # }
    _a = vm.mem[vm.context.u64(v0)]

    # val = _a.getu64(0x08) + 1
    # _a.putu64(val, 0x08)
    vm.state.pinsn("INC", "[v0+0x08]", f"=> *(v0 + 0x08) = {-1}")
    # VMOp_Store(
    #     vm,
    #     _a.putu64,
    #     ("v0", 0x10),
    #     ("v2", v2),
    #     f"=>  (v0 + 0x10) = {v2:#x}",
    #     offset=0x10,
    # )
    VMOp_VerifyJumpNext(vm, next_addr_off=0x16, hash_off=0x04)


def VMOp_Setup1(vm: VM):
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
    address__a = VMOp_LoadAddressToRegister(vm, "EAX", 0x00)
    address__b = VMOp_LoadAddressToRegister(vm, "EBX", 0x04)
    address__c = VMOp_LoadAddressToRegister(vm, "ECX", 0x08)
    # The structure used in A conforms to a vector:
    # struct vector_t {
    #    long length;
    #    void *start;
    #    void *end;
    # }
    VMOp_LoadToRegister(vm, "AX", "0x00")
    VMOp_LoadToRegister(vm, "BX", "[EAX->length], BX")
    _a = vm.mem[vm.context.u64(address__a)]
    # TODO

    VMOp_VerifyJumpNext(vm, next_addr_off=0x1E, hash_off=0x0C)


def VMOp_CompareULong(vm: VM) -> None:
    # compares two registers (type: unsigned long) and stores the
    # result at a destination address.
    # LOAD    v0, A
    # PUSH    v1, B
    # CMP     C, v0, v1
    # JMP     DST
    VMOp_Compare(vm, vm.context.u64)


# -- based on generated content
def VMOp_XorByte(vm: VM) -> None:
    # XORs two values and stores the result in the destination register
    # LOAD     v0, B
    # LOAD     v1, C
    # INT_XOR  v2, v0, v1
    # STORE    A, v2
    VMOp_BinaryOp(
        vm,
        "BYTE_XOR",
        vm.context.setu8,
        vm.context.u8,
        vm.context.u8,
        lambda b, c: (b ^ c) & 0xFF,
        next_addr_off=0x1A,
        hash_off=0x08,
        store_off=0x22,
        v0_off=0x00,
        v1_off=0x04,
    )


def VMOp_OrByte(vm: VM) -> None:
    # ORs two values and stores the result in the destination register
    # LOAD     v0, A
    # LOAD     v1, B
    # INT_OR   v2, v0, v1
    # STORE    C, v2
    VMOp_BinaryOp(
        vm,
        "BYTE_OR",
        vm.context.setu8,
        vm.context.u8,
        vm.context.u8,
        lambda b, c: (b | c) & 0xFF,
        next_addr_off=0x1A,
        hash_off=0x08,
        store_off=0x22,
        v0_off=0x00,
        v1_off=0x04,
    )


def VMOp_RAssignUInt(vm: VM) -> None:
    # Assigns the value of A to B. This instruction is equivalent to
    # *b = *a.
    # COPY    B, A
    address__a = vm.context.addr(0x1E)
    address__b = vm.context.addr(0x1E)

    _a = vm.context.u32(address__a)
    VMOp_Copy(vm, vm.context.setu32, address__b, (f"#{address__a:#x}", _a))
    VMOp_VerifyJumpNext(vm, next_addr_off=0x12, hash_off=0x00)


def VMOp_LAssignUInt(vm: VM) -> None:
    # Assigns the value of B to A. This instruction is equivalent to
    # *a = *b.
    # COPY    A, B
    VMOp_LAssign(
        vm,
        vm.context.setu32,
        vm.context.u32,
        a_off=0x1A,
        b_off=0x1E,
        next_addr_off=0x12,
        hash_off=0x00,
    )


def VMOp_LAssignByte(vm: VM) -> None:
    # Assigns the value of B to A. This instruction is equivalent to
    # *a = *b.
    # COPY    A, B
    VMOp_LAssign(
        vm,
        vm.context.setu8,
        vm.context.u8,
        b_off=0x1E,
        next_addr_off=0x16,
        hash_off=0x04,
    )


def VMOp_LAssignULong(vm: VM) -> None:
    # Assigns the value of B to A. This instruction is equivalent to
    # *a = *b.
    # COPY    A, B
    VMOp_LAssign(
        vm,
        vm.context.setu64,
        vm.context.u64,
        b_off=0x1E,
        next_addr_off=0x16,
        hash_off=0x04,
    )


def VMOp_RShiftSInt(vm: VM) -> None:
    # Shifts the value at address B by the number of bits defined at C.
    # LOAD      v0, B
    # LOAD      v1, C
    # INT_RIGHT v2, v0, v1
    # STORE     A, v2
    VMOp_BinaryOp(
        vm,
        "SINT_RIGHT",
        vm.context.setu32,
        vm.context.u32,
        vm.context.u32,
        lambda b, c: b >> (c & 0x1F),
    )


def VMOp_CompareDouble(vm: VM) -> None:
    # compares two registers (type: unsigned long) and stores the
    # result at a destination address.
    # LOAD    v0, A
    # PUSH    v1, B
    # CMP     C, v0, v1
    # JMP     DST
    VMOp_Compare(vm, vm.context.double)


def VMOp_DivSInt(vm: VM) -> None:
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
        vm, "DIV_SINT", vm.context.seti32, vm.context.i32, vm.context.i32, div_sint
    )


def VMOp_AddSInt(vm: VM) -> None:
    # implements standard integer addition on signed 32bit integers
    # LOAD      v0, A
    # LOAD      v1, B
    # ADD_SINT  v2, v0, v1
    # STORE     C, v2
    # JMP       DST
    def add_sint(_a: int, _b: int) -> int:
        return ctypes.c_int32(_a + _b).value

    VMOp_BinaryOp(
        vm, "ADD_SINT", vm.context.seti32, vm.context.i32, vm.context.i32, add_sint
    )


def VMOp_Nop(vm: VM) -> None:
    # no operation instruction
    VMOp_VerifyJumpNext(vm, next_addr_off=0x12, hash_off=0x00)


def VMOp_Main(vm: VM) -> None:
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
    v0 = VMOp_LoadAddressToRegister(vm, "v0", 0x00)
    v1 = VMOp_LoadAddressToRegister(vm, "v1", 0x04)
    v2 = VMOp_LoadAddressToRegister(vm, "v2", 0x08)
    v3 = VMOp_LoadAddressToRegister(vm, "v3", 0x26)

    v4 = vm.context[v1 : v1 + 0x100]
    vm.state.pinsn("COPY", "v4, [v1, #0x100]")
    print(hex(vm.context.u64(v3)))
    VMOp_Call(vm, "vm_main", "v2", "v4", "v1")
    VMOp_VerifyJumpNext(vm, next_addr_off=0x1E, hash_off=0x0C)

    _VMOp_ExecMain(vm, v2, v4, v0)


def _VMOp_ExecMain(vm: VM, param_1: int, param_2: bytes, param_3: int) -> None:
    # Setup section line in verbose output
    vm.state.pline("")
    vm.state.psection("vm_main")

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
    VMOpcode_Or_Byte: VMOp_OrByte,
    VMOpcode_RAssign_UInt: VMOp_RAssignUInt,
    VMOpcode_RShift_SInt: VMOp_RShiftSInt,
    VMOpcode_Compare_ULong: VMOp_CompareULong,
    VMOpcode_Assign_UInt: VMOp_LAssignUInt,
    VMOpcode_LAssign_Byte: VMOp_LAssignByte,
    VMOpcode_LAssign_ULong: VMOp_LAssignULong,
    VMOpcode_Compare_Double: VMOp_CompareDouble,
    VMOpcode_Div_SInt: VMOp_DivSInt,
    VMOpcode_XOR_Byte: VMOp_XorByte,
    # special operations
    VMOpcode_NOP1: VMOp_Nop,
    VMOpcode_Main: VMOp_Main,
}

# Same implementation as in disassembler.py but printing decompiled
# C pseudocode instead.
from typing import Any
from pairipcore.context import VMContext
from pairipcore.strings import decode_xor
from pairipcore.opcode import *

from .._types import addr_t, astruct1_t


# -----------------------------------------------------------------------------
# Decompiler context
# -----------------------------------------------------------------------------
class VMDecompilerContext(VMContext):
    variables: dict[str, tuple[str, addr_t, Any]]  # name: type
    stack: list[tuple[str, addr_t]]  # (name, addr)

    def __init__(self, base: VMContext):
        super().__init__(base.vm_code, base.pc, base.verbose)
        self.should_exit = base.should_exit
        self.mmap = base.mmap
        self.mpos = base.mpos
        self.variables = {}

    # -- var ops ---
    def newvar(
        self, type: str, addr: addr_t, name: str | None = None, value=None
    ) -> str:
        if name is None:
            name = f"lVar{len(self.variables)}"

        self.variables[name] = (type, addr, value)
        return name

    def getvar(self, addr: addr_t, create: bool = True) -> str:
        # error: ignore
        item = next(filter(lambda x: x[1][1] == addr, self.variables.items()), None)
        if item is None:
            if not create:
                raise ValueError(f"Could not find variable at #{addr:#x}")
            name = self.newvar("long", addr)
        else:
            name, _ = item
        return name


# -----------------------------------------------------------------------------
# FDE loop
# -----------------------------------------------------------------------------
def VMOp_Interpret(context: VMContext, table: dict, cb=None) -> None:
    context = VMDecompilerContext(context)
    context.comment_start = "//"
    if context.pc < 0:
        context.pc = context.entry_point

    while not context.should_exit:
        context.pline(f"// +{context.pc:#08x}")
        opcode = context.current_opcode()
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


# -----------------------------------------------------------------------------
# utility ops
# -----------------------------------------------------------------------------
def VMOp_VerifyJumpNext(context: VMContext, next_addr_off: int, hash_off: int) -> None:
    next_instruction_addr = context.addr(next_addr_off)
    fallback_address = context.addr(next_addr_off + 4)
    if not context.verify_hash(context.pc + hash_off):
        next_instruction_addr = fallback_address

    context.pc = next_instruction_addr


# -----------------------------------------------------------------------------
# utility ops
# -----------------------------------------------------------------------------
def VMOp_Malloc(context: VMDecompilerContext) -> None:
    store_address: addr_t = context.addr(0x1A)
    # we simulate the vector through a Python list
    ptr = context.malloc(0x18, struct_ty=list)
    name = context.newvar("std::vector *", store_address)

    context.pline(
        f"{name} = (std::vector *)malloc(0x18)",
        f"#{ptr:#x} at #{store_address:#x}",
    )
    context.setu64(ptr, store_address)

    VMOp_VerifyJumpNext(context, next_addr_off=0x12, hash_off=0x00)


def VMOp_MallocAndVectorAppend(context: VMDecompilerContext) -> None:
    # allocates a new object first and appends it at the
    # end of the first allocated vector
    vector_a__addr = context.addr(0x00)
    vector_b__addr = context.addr(0x04)

    vector_a: list = context.deref(vector_a__addr)
    vector_a__name = context.getvar(vector_a__addr, create=False)

    #                                            0x16EF08
    ptr = context.malloc(0x38, astruct1_t, fnPtr=_VMInit, field_0x30=vector_b__addr)
    obj = context.mmap[ptr]
    context.pline(f"""{{
    astruct1_t *v0 =  (astruct_t *)malloc(0x38); // #{ptr:#x}
    v0->fnPtr      = (void *)0x0016ef08;
    v0->field_0x30 = (addr_t){vector_b__addr:#08x};
    v0->field_0x28 = 0x3f800000;
    {vector_a__name}->append(v0);
}}""")

    vector_a.append(obj)
    VMOp_VerifyJumpNext(context, next_addr_off=0x16, hash_off=0x04)


def _VMInit(context: VMDecompilerContext, obj: astruct1_t, param_3: addr_t) -> int:
    pass


def VMOp_SetupVM(context: VMDecompilerContext) -> None:
    vector_a__addr = context.addr(0x00)
    v1__addr = context.addr(0x04)
    v2__addr = context.addr(0x08)

    vector_a__name = context.getvar(vector_a__addr)
    context.pline(f"""{{
    addr_t v1 = (addr_t){v1__addr:#x};
    addr_t v2 = (addr_t){v2__addr:#x};                  // *v2 = {context.u32(v2__addr):#x}
    uint v3 = true, v4 = 0;

    for (astruct1_t *obj = {vector_a__name}->__begin_;
         obj != {vector_a__name}->__end_;
         (long *)obj += 1)
    {{
        uint v4 = obj->fnPtr(&v4, obj, &v2);
        if (*v4 != 0) {{
            v3 = false;
            break;
        }}
    }}
    *(uint *)(v2) = v3;
}}""")

    result = 1
    for item in context.deref(vector_a__addr):
        # The Python implementation returns the result code directly
        result = item.fnPtr(context, item, v1__addr)

    context.setu32(result, v2__addr)
    VMOp_VerifyJumpNext(context, next_addr_off=0x1E, hash_off=0x0C)


# -----------------------------------------------------------------------------
# special ops
# -----------------------------------------------------------------------------
def VMOp_CheckPath(context: VMDecompilerContext) -> None:
    # Decodes a string (usually a path to a native library) | and verifies it?
    address__b = context.addr(0x1E)
    address__c = context.addr(0x22)

    try:
        data = decode_xor(context, address__c, address__b)
        context.newvar(
            type="const char *", addr=len(context.variables), value=data.decode()
        )
    except ValueError:
        pass  # invalid string length

    VMOp_VerifyJumpNext(context, next_addr_off=0x16, hash_off=0x04)


def VMOp_FindClass(context: VMDecompilerContext) -> None:
    address__b = context.addr(0x1E)
    address__c = context.addr(0x22)

    try:
        data = decode_xor(context, address__c, address__b)
        context.newvar(
            type="const char *", addr=len(context.variables), value=data.decode()
        )
    except ValueError:
        pass  # invalid string length

    VMOp_VerifyJumpNext(context, next_addr_off=0x16, hash_off=0x04)


# -----------------------------------------------------------------------------
# Opcode table
# -----------------------------------------------------------------------------
Decompiler = {
    # --- Internal function mapping ---
    VMOpcode_Interpret: VMOp_Interpret,
    # ---------------------------------
    #
    # --- Vector allocations ---
    # REVISIT: The vector type is not known and might
    # be important here
    VMOpcode_Malloc1: VMOp_Malloc,
    VMOpcode_Malloc2: VMOp_Malloc,
    VMOpcode_Init1: VMOp_MallocAndVectorAppend,
    VMOpcode_Setup1: VMOp_SetupVM,
    #
    # string ops
    VMOpcode_CheckPath: VMOp_CheckPath,
}

# Same implementation as in disassembler.py but printing decompiled
# C pseudocode instead.
import operator
import typing as t

from pairipcore.context import VM, VMMemory
from pairipcore.opcode import *  # noqa
from pairipcore.insn import Insn, InsnFormat, FormatIDs

from .._types import addr_t


# -----------------------------------------------------------------------------
# Decompiler context
# -----------------------------------------------------------------------------
def VMOp_PreInit(vm: VM) -> None:
    vm.state.comment = "//"
    if vm.context.pc < 0:
        vm.context.pc = vm.entry_point()

    # setup locals and globals
    vm.state["globals"] = {}
    vm.state["locals"] = {}


def VMOp_Deref(vm: VM, addr: addr_t):
    return vm.mem[vm.context.u64(addr)]


def VMOp_NewGlobalVar(vm: VM, addr: addr_t, type: str) -> str:
    global_vars = vm.state["globals"]
    name = f"gVar{len(global_vars)}"
    global_vars[addr] = (name, type)
    return name


def VMOp_NewLocalVar(vm: VM, addr: addr_t, type: str) -> str:
    local_vars = vm.state["locals"]
    name = f"lVar{len(local_vars)}"
    local_vars[addr] = (name, type)
    return name


def VMOp_GetVar(vm: VM, addr: addr_t) -> tuple[str, str] | None:
    obj = vm.state["locals"].get(addr, vm.state["globals"].get(addr))
    if obj is None:
        return None
    return obj[0]


# -----------------------------------------------------------------------------
# FDE loop
# -----------------------------------------------------------------------------
def VMOp_Interpret(vm: VM, table: dict, cb=None) -> None:
    VMOp_PreInit(vm)

    while not vm.state.should_exit:
        vm.state.pline(f"// +{vm.context.pc:#08x}")
        opcode = vm.current_opcode()
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


# -----------------------------------------------------------------------------
# utility ops
# -----------------------------------------------------------------------------
def VMOp_VerifyJumpNext(vm: VM, insn: Insn) -> None:
    next_instruction_addr = insn.info.next
    fallback_address = insn.info.fallback
    if not vm.verify_hash(vm.context.pc + insn.insn_format.hash_xor_value_off):
        next_instruction_addr = fallback_address

    vm.context.pc = next_instruction_addr


# -----------------------------------------------------------------------------
# binary ops
# -----------------------------------------------------------------------------
def VMOp_BinaryOp(
    vm: VM,
    opcode,
    op,
    type: str,
    operand1_fn,
    store_fn,
    operand2_fn=None,
) -> None:
    insn = Insn(vm, FormatIDs[opcode])
    address__a = insn.A
    address__b = insn.B

    # if no variables exist, we assume these bytes are part of a string
    var_a = VMOp_GetVar(vm, address__a)
    var_b = VMOp_GetVar(vm, address__b)

    address__c = insn.R
    # if store_address is not already assigned to a variable, we create
    # a new local one
    var_c = VMOp_GetVar(vm, address__c)
    if var_c is None:
        # REVISIT: what about indexed string accesss?
        var_c = VMOp_NewLocalVar(vm, address__c, type)
    else:
        var_c, _ = var_c

    a = operand1_fn(address__a)
    if operand2_fn is None:
        operand2_fn = operand1_fn

    b = operand2_fn(address__b)
    store_fn(op(a, b))
    if var_a is None:
        var_a = f"{a:#02x}"
    if var_b is None:
        var_b = f"{a:#02x}"

    vm.state.pline(f"{var_c} = {var_a} ^ {var_b};")
    VMOp_VerifyJumpNext(vm, insn)


def VMOp_Or_Byte(vm: VM) -> None:
    VMOp_BinaryOp(vm, VMOpcode_Or_Byte, operator.or_, "byte", vm.context.u8, vm.context.setu8)


def VMOp_And_UInt(vm: VM) -> None:
    VMOp_BinaryOp(
        vm, VMOpcode_And_UInt, operator.and_, "uint", vm.context.u32, vm.context.setu32
    )


def VMOp_Mul_UIntxInt(vm: VM) -> None:
    VMOp_BinaryOp(
        vm,
        VMOpcode_Mul_UInt_Int,
        operator.mul,
        "uint",
        vm.context.u32,
        vm.context.setu32,
        operand2_fn=vm.context.i32,
    )


# -----------------------------------------------------------------------------
# assignments ops
# -----------------------------------------------------------------------------
def VMOp_RAssign(
    vm: VM, opcode, load_fn, store_fn, type: str
) -> None:
    insn = Insn(vm, FormatIDs[opcode])
    address__a = insn.A
    address__b = insn.B

    var_a = VMOp_GetVar(vm, address__a)
    var_b = VMOp_GetVar(vm, address__b)
    b = load_fn(address__b)
    if not var_a:
        var_a = VMOp_NewLocalVar(vm, address__a, type)
    if not var_b:
        var_b = f"{b:#08x}"

    vm.state.pline(f"{var_a} = ({type}){var_b};")
    store_fn(b, address__a)
    VMOp_VerifyJumpNext(vm, insn)


def VMOp_RAssign_UInt(vm: VM) -> None:
    VMOp_RAssign(vm, VMOpcode_RAssign_UInt, vm.context.u32, vm.context.setu32, "uint")


def VMOp_Nop(vm: VM) -> None:
    VMOp_VerifyJumpNext(vm, Insn(vm, FormatIDs[VMOpcode_NOP1]))


# -----------------------------------------------------------------------------
# Opcode table
# -----------------------------------------------------------------------------
Decompiler = {
    # --- Internal function mapping ---
    VMOpcode_Interpret: VMOp_Interpret,
    # ---------------------------------
    VMOpcode_NOP1: VMOp_Nop,
    #
    # --- binary ops ---
    VMOpcode_Or_Byte: VMOp_Or_Byte,
    VMOpcode_And_UInt: VMOp_And_UInt,
    VMOpcode_Mul_UInt_Int: VMOp_Mul_UIntxInt,
    #
    # --- assignment ops ---
    VMOpcode_RAssign_UInt: VMOp_RAssign_UInt,
}

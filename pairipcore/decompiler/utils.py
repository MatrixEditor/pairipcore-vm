from pairipcore import addr_t
from pairipcore.context import VM, VMVariable
from pairipcore.insn import Insn


# -----------------------------------------------------------------------------
# Jumping
# -----------------------------------------------------------------------------
def VMJump(vm: VM, insn: Insn, verify=True) -> None:
    """
    Set the program counter (PC) to the next instruction address based on the
    instruction's hash verification.

    Args:
        vm (VM): The virtual machine instance.
        insn (Insn): The instruction containing the jump information.
        verify (bool): Whether to perform hash verification before jumping.
    """
    next_instruction_addr = insn.info.next
    if verify:
        if not vm.verify_hash(
            insn.address + insn.insn_format.hash_xor_value_off
        ):
            next_instruction_addr = insn.info.fallback

    vm.context.pc = next_instruction_addr


# -----------------------------------------------------------------------------
# Variables
# -----------------------------------------------------------------------------
def VMDeref(vm: VM, addr: addr_t):
    """
    Dereference a memory address to retrieve the stored value.

    Args:
        vm (VM): The virtual machine instance.
        addr (addr_t): The address to dereference.

    Returns:
        Any: The value stored at the given address.
    """
    return vm.mem[vm.context.u64(addr)]


def VMNewGlobalVar(vm: VM, addr: addr_t, type: str, value=None) -> VMVariable:
    """
    Create a new global variable and add it to the VM's memory.

    Args:
        vm (VM): The virtual machine instance.
        addr (addr_t): The address for the new global variable.
        type (str): The type of the variable.
        value (Optional[Any]): The initial value of the variable, if any.

    Returns:
        VMVariable: The newly created global variable.
    """
    var = VMVariable(addr, type, value)
    vm.mem.variables[addr] = var
    var.name = f"lVar{len(vm.mem.variables)}"
    return var


def VMGetGlobalVar(vm: VM, addr: addr_t) -> VMVariable:
    """
    Retrieve an existing global variable by its address.

    Args:
        vm (VM): The virtual machine instance.
        addr (addr_t): The address of the global variable.

    Returns:
        VMVariable: The global variable at the given address.
    """
    return vm.mem.variables[addr]


def VMGetOrCreateGlobalVar(
    vm: VM, addr: addr_t, type: str, value=None
) -> VMVariable:
    """
    Get an existing global variable or create a new one if it doesn't exist.

    Args:
        vm (VM): The virtual machine instance.
        addr (addr_t): The address of the global variable.
        type (str): The type of the variable.
        value (Optional[Any]): The value to set for the variable if created.

    Returns:
        VMVariable: The global variable at the given address, either newly created or existing.
    """
    if addr not in vm.mem.variables:
        var = VMNewGlobalVar(vm, addr, type, value)
    else:
        var = vm.mem.variables[addr]
        if value is not None:
            var.value = value
    return var

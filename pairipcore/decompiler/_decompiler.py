from pairipcore.context import VM
from pairipcore.decompiler.code import Code
from pairipcore.decompiler.handler import VMOp_Handler
from pairipcore.insn import InsnFormat
from pairipcore.opcode import VMOpcode_Interpret


# -----------------------------------------------------------------------------
# main function
# -----------------------------------------------------------------------------
def decompiler_main(vm: VM, decomp: "Decompiler", callback=None) -> Code:
    """
    Main function to decompile the VM bytecode, executing the appropriate
    handlers for each opcode.

    Args:
        vm (VM): The virtual machine instance.
        decomp (Decompiler): The decompiler instance with opcode handlers.
        callback (Optional[Callable[[VM, int], None]]): An optional callback function for handling unknown opcodes.

    Returns:
        Code: The generated code as a `Code` object.
    """
    # 1. setip state and PC
    vm.state.comment = "//"  # C-style output
    if vm.context.pc < 0:
        vm.context.pc = vm.entry_point()

    vm.state["code"] = Code(vm)
    while not vm.state.should_exit:
        # Fetch
        opcode = vm.current_opcode()
        vm.context += 2

        # Decode
        Handler = decomp[opcode]

        # Execute
        if Handler is not None and opcode in decomp.format_ids:
            handler_obj = Handler(vm, opcode, decomp.format_ids)
            handler_obj.run(vm)
            handler_obj.finish(vm)
            if vm.state.verbose:
                handler_obj.debug(vm)
        else:
            if callback is not None:
                callback(vm, opcode)
            else:
                vm.state["code"] += (
                    f"// Stopped at unknown opcode {opcode:#04x}"
                )
                vm.state.should_exit = True

    return vm.state["code"]


# -----------------------------------------------------------------------------
# Decompiler class
# -----------------------------------------------------------------------------
class Decompiler:
    format_ids: dict[int, InsnFormat]
    __table_: dict
    handler_ty: type

    def __init__(self, handler_ty: type | None = None) -> None:
        self.__table_ = {}
        self.handler_ty = handler_ty or VMOp_Handler
        self.format_ids = {}

    def __getitem__(self, key):
        if key == VMOpcode_Interpret:
            return decompiler_main

        return self.__table_.get(key, self.handler_ty)

    def __setitem__(self, key, value):
        self.__table_[key] = value


def from_opcode_def(
    opcode_def: dict[int | str, str | dict[str, str]],
) -> Decompiler:
    """
    Create a `Decompiler` instance from opcode definitions.

    >>> dec = pairipcore.decompiler.from_opcode_def(...)
    >>> code = pairipcore.interpret(vm, dec)
    >>> for line in code:
    ...     print(line)

    Args:
        opcode_def (Dict[Union[int, str], Union[str, dict]]): A dictionary where
            keys are opcodes and values are format IDs or dictionaries containing
            format IDs.

    Returns:
        Decompiler: The initialized `Decompiler` instance.
    """
    decomp = Decompiler()
    for opcode, value in opcode_def.items():
        if isinstance(opcode, str):
            opcode = int(opcode)

        if isinstance(value, str):
            decomp.format_ids[opcode] = InsnFormat.parse(value)
        elif value and value["format_id"]:
            decomp.format_ids[opcode] = InsnFormat.parse(value["format_id"])
    return decomp

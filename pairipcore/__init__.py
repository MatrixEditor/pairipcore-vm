from ._types import *  # noqa
from .opcode import *  # noqa
from .context import *  # noqa


def interpret(
    vmcode: bytes,
    table: dict,
    entry_point: int = -1,
    verbose: bool = False,
    cb=None,
    **env,
) -> None:
    """
    Interprets the given GVM bytecode using the specified opcode table.

    Args:
        vmcode (bytes): The bytecode to be interpreted by the VM.
        table (dict): A dictionary mapping opcodes to their respective
                      handler functions.
        entry_point (int, optional): The starting address for interpretation.
                                     Defaults to -1, which uses the current
                                     program counter.
        verbose (bool, optional): If True, enables verbose logging. Defaults
                                  to False.
        cb (callable, optional): A callback function to be called when an
                                 unrecognized opcode is encountered. Defaults
                                 to None.

    Returns:
        None
    """
    state = VM(vmcode, entry_point, verbose=verbose, **env)
    interpret_fn = table.get(VMOpcode_Interpret, _interpret_default)
    interpret_fn(state, table, cb)


def _interpret_default(vm: VM, table: dict, cb=None) -> None:
    """Default interpreter function for handling GVM bytecode.

    Processes each opcode and invokes the corresponding handler - in other words,
    it implements a simple Fetch-Decode-Execute loop.

    Args:
        context (VMContext): The VMContext instance that holds the current
                             state of the VM.
        table (dict): A dictionary mapping opcodes to their respective handler
                      functions.
        cb (callable, optional): A callback function to be called when an unrecognized
                                 opcode is encountered. Defaults to None.

    Returns:
        None
    """
    if vm.context.pc < 0:
        vm.context.pc = vm.entry_point()

    while not vm.state.should_exit:
        opcode = vm.current_opcode()
        vm.context += 2
        handler = table.get(opcode)
        if handler is None:
            if cb:
                cb(vm, opcode)
            else:
                vm.state.should_exit = True
        else:
            handler(vm)

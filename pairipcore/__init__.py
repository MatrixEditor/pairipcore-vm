from ._types import *  # noqa
from .opcode import *  # noqa
from .context import *  # noqa
from typing import Mapping


def interpret(
    table: Mapping,
    vm: VM,
    cb=None,
):
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
    """
    try:
        interpret_fn = table[VMOpcode_Interpret]
    except KeyError:
        interpret_fn = _interpret_default
    return interpret_fn(vm, table, cb)


def _interpret_default(vm: VM, table: Mapping, cb=None):
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
        try:
            handler = table[opcode]
            handler(vm)
        except KeyError:
            if cb:
                cb(vm, opcode)
            else:
                vm.state.should_exit = True

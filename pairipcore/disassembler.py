from pairipcore.context import VM
from pairipcore.decompiler._decompiler import Decompiler
from pairipcore.decompiler.handler import VMOp_Handler


class VMOp_DisasmHandler(VMOp_Handler):
    """
    Handler class for disassembling VM operations with detailed debugging output.
    """

    def debug(self, vm: VM) -> None:
        super().debug(vm)
        text = f"INSN (N=#{self.insn.info.next:#x}) (F=#{self.insn.info.fallback:#x})"
        store_off = self.insn.insn_format.store_var_off
        attrs = []
        for name, offset in self.insn.insn_format.vars().items():
            line = f"{name}=#{getattr(self.insn, name):#08x}"
            if store_off == offset:
                line += " (R)"
            attrs.append(line)

        if len(attrs) > 0:
            vm.state["code"] += f"{text}\n  [{', '.join(attrs)}]"
        else:
            vm.state["code"] += f"{text}"


def as_disasm(dec: Decompiler) -> Decompiler:
    """
    Configure the decompiler to use disassembly handlers for debugging.

    >>> dec = pairipcore.decompiler.from_opcode_def(...)
    >>> dis = pairipcore.disassembler.as_disasm(dec)
    >>> code = pairipcore.interpret(vm, dis)
    >>> for line in code:
    ...     print(line)

    Args:
        decompiler (Decompiler): The decompiler instance to configure.

    Returns:
        Decompiler: The configured decompiler instance with disassembly handlers.
    """
    decomp = Decompiler(VMOp_DisasmHandler)
    decomp.format_ids = dec.format_ids
    return decomp

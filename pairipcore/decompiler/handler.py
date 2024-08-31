import typing as t

from pairipcore.context import VM
from pairipcore.decompiler.utils import VMJump
from pairipcore.insn import FormatIDs, Insn

# -----------------------------------------------------------------------------
# Handler class
# -----------------------------------------------------------------------------
VMType_u64 = "u64"
VMType_u32 = "u32"
VMType_u16 = "u16"
VMType_i32 = "i32"
VMType_u8 = "u8"


class VMOp_Handler:
    """
    Base class for handling VM opcodes.

    This class provides a structure for handling VM opcodes, initializing
    with the given opcode and instruction format, and defining methods
    to run, debug, and finish the operation associated with the opcode.

    Args:
        vm (VM): The virtual machine instance.
        opcode (int): The opcode associated with this handler.
        format_ids (Optional[Type[FormatIDs]]): Format IDs used to decode the instruction.
    """

    opcode: int
    insn: Insn
    store_type: str | None
    robj: t.Any
    verify: bool = True

    def __init__(self, vm: VM, opcode: int, format_ids=None) -> None:
        self.insn = Insn(vm, (format_ids or FormatIDs)[opcode])
        self.opcode = opcode
        self.robj = None
        self.init(vm)

    def init(self, vm: VM) -> None:
        """
        Initialize the handler. This method can be overridden by subclasses
        to perform additional setup.

        Args:
            vm (VM): The virtual machine instance.
        """
        pass

    def run(self, vm: VM) -> None:
        """
        Execute the opcode operation. This method should be implemented by subclasses
        to define the specific behavior for the opcode.

        Args:
            vm (VM): The virtual machine instance.
        """
        pass

    def debug(self, vm: VM) -> None:
        """
        Output debugging information about the opcode execution.

        Args:
            vm (VM): The virtual machine instance.
        """
        vm.state["code"] += (
            f"// opcode={self.opcode:#04x} at {self.insn.opcode_address:#08x} using format={str(self.insn.insn_format)!r}"
        )

    def finish(self, vm: VM) -> None:
        """
        Finalize the opcode execution. This method sets the value in the VM context
        and performs a jump based on the instruction.

        Args:
            vm (VM): The virtual machine instance.
        """
        store_type = getattr(self, "store_type", None)
        if store_type is not None:
            fn = getattr(vm.context, f"set{store_type}", None)
            if fn is None:
                raise ValueError(
                    f"Could not find store function for type: {store_type!r}"
                )

            fn(self.insn.R, self.robj)

        VMJump(vm, self.insn, verify=getattr(self, "verify", True))

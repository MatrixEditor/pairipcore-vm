from ._types import addr_t
from .context import VM


# -----------------------------------------------------------------------------
# instruction formats
# -----------------------------------------------------------------------------
class InsnFormat:
    __info_begin_: int
    """Specifies the offset where the instruction info can be found."""

    __stack_: int
    """Specifies the number of variables taken from the compiled stack."""

    __extra_: int
    """Specifies the number of additional variables loaded."""

    __store_: int
    """Specifies the variable containing the destination address."""

    # All five variables here (typing only)
    A: int
    B: int
    C: int
    D: int
    E: int

    def __init__(
        self,
        info_off: int,
        stack_vars: int = 0,
        extra_vars: int = 0,
        storage_var: str | None = None,
    ) -> None:
        self.__info_begin_ = info_off
        self.__stack_ = stack_vars
        self.__extra_ = extra_vars
        name_idx = ord("A")
        if stack_vars > 0:
            for i in range(stack_vars):
                setattr(self, chr(name_idx), i)
                name_idx += 1
        if extra_vars > 0:
            for i in range(extra_vars):
                setattr(self, chr(name_idx), info_off + 0x1A + i)
                name_idx += 1

        self.__store_ = -1
        if storage_var is not None and storage_var.upper() not in ("X", "Z"):
            if extra_vars <= 0 and stack_vars <= 0:
                raise ValueError(
                    f"Storage variable {storage_var!r} is not defined, "
                    "because no variables are loaded!"
                )
            self.__store_ = getattr(self, storage_var.upper())

    @staticmethod
    def parse(format_id: str) -> "InsnFormat":
        """Parses a format ID string to create an InsnFormat object.

        Args:
            format_id (str): A string representing the instruction format.

        Returns:
            InsnFormat: The corresponding InsnFormat object.

        Raises:
            ValueError: If the format ID is empty.
        """
        if not format_id:
            raise ValueError("Empty instruction format not allowed!")

        stack_vars = int(format_id[0])
        extra_vars = int(format_id[1])
        storage_var = None
        if len(format_id) >= 3:
            storage_var = format_id[2]

        return InsnFormat(stack_vars * 4, stack_vars, extra_vars, storage_var)

    def __len__(self) -> int:
        """Calculates the total length of the instruction format.

        Returns:
            int: The length of the instruction format.
        """
        return 0x16 + ((self.__stack_ + self.__extra_) * 4)

    @property
    def next_addr_off(self) -> int:
        """Calculates the offset for the next instruction address."""
        return self.__info_begin_ + 0x12

    @property
    def fallback_addr_off(self) -> int:
        """Calculates the offset for the fallback instruction address."""
        return self.__info_begin_ + 0x16

    @property
    def hash_off(self) -> int:
        """Calculates the offset for the hash value."""
        return self.__info_begin_ + 0x04

    @property
    def hash_xor_value_off(self) -> int:
        """Calculates the offset for the XOR value used in the hash."""
        return self.__info_begin_

    @property
    def hash_data_off(self) -> int:
        """Calculates the offset for the hash data."""
        return self.__info_begin_ + 0x0C

    @property
    def hash_data_length_off(self) -> int:
        """Calculates the offset for the length of the hash data.

        Returns:
            int: The offset for the length of the hash data.
        """
        return self.__info_begin_ + 0x10

    @property
    def store_var_off(self) -> int:
        """Returns the offset of the storage variable.

        Returns:
            int: The offset of the storage variable.
        """
        return self.__store_

    def vars(self) -> dict[str, int]:
        """Returns the offsets of each stack variable.

        Returns:
            dict[str, int]: A dictionary mapping variable names (A, B, C, etc.) to their offsets.
        """
        return {
            chr(65 + i): getattr(self, chr(65 + i))
            for i in range(self.__stack_ + self.__extra_)
        }


# -----------------------------------------------------------------------------
# instructions
# -----------------------------------------------------------------------------
class InsnInfo:
    """
    Represents the metadata and control flow information associated with a
    particular instruction in the VM.
    """

    __next_: addr_t
    """Next address on equal hash"""

    __fallback_: addr_t
    """Fallback address on hash verification failure"""

    __hash_: int
    """Expected hash value for verification"""

    __hash_data_: addr_t
    """Memory address where the data to be hashed is located"""

    __hash_data_len_: int
    """Length of the data to be hashed"""

    __hash_xor_value_: addr_t
    """Memory address of the XOR value used in the hash calculation"""

    def __init__(self, vm: VM, insn_format: InsnFormat) -> None:
        self.__hash_xor_value_ = vm.context.addr(insn_format.hash_xor_value_off)
        self.__hash_ = vm.context.u64(insn_format.hash_off)
        self.__hash_data_ = vm.context.addr(insn_format.hash_data_off)
        self.__hash_data_len_ = vm.context.u16(insn_format.hash_data_length_off)
        self.__fallback_ = vm.context.addr(insn_format.fallback_addr_off)
        self.__next_ = vm.context.addr(insn_format.next_addr_off)

    @property
    def hash(self) -> int:
        """Returns the expected hash value for verification."""
        return self.__hash_

    @property
    def hash_data_addr(self) -> addr_t:
        """Returns the memory address where the data to be hashed is located."""
        return self.__hash_data_

    @property
    def hash_data_length(self) -> int:
        """Returns the length of the data to be hashed."""
        return self.__hash_data_len_

    @property
    def xor_value_addr(self) -> addr_t:
        """Returns the memory address of the XOR value used in the hash calculation."""
        return self.__hash_xor_value_

    @property
    def fallback(self) -> addr_t:
        """Returns the address of the fallback instruction if the hash verification fails."""
        return self.__fallback_

    @property
    def next(self) -> addr_t:
        """Returns the address of the next instruction to execute if the hash verification succeeds."""
        return self.__next_


class Insn:
    """
    Represents an instruction in the virtual machine, including its format, address,
    and associated metadata.
    """

    __format_: InsnFormat
    """Defines the instruction format for this instruction."""

    __address_: addr_t
    """Address of this instruction (without opcode)."""

    __info_: InsnInfo
    """Metadata and control flow information associated with this instruction."""

    # Addresses associated with the operands of the instruction.
    A: addr_t
    B: addr_t
    C: addr_t
    D: addr_t
    E: addr_t

    #: Address where the result of the instruction is stored.
    R: addr_t

    def __init__(self, vm: VM, insn_format: InsnFormat) -> None:
        self.__format_ = insn_format
        self.__address_ = vm.context.pc
        self.__info_ = InsnInfo(vm, insn_format)

        # Set the addresses for the operands (A, B, C, D, E) based on the instruction format
        for name, offset in insn_format.vars().items():
            setattr(self, name, vm.context.addr(offset))

        # Set the address for the result (R) if applicable
        if insn_format.store_var_off != -1:
            setattr(self, "R", vm.context.addr(insn_format.store_var_off))

    @property
    def address(self) -> addr_t:
        """Returns the address of this instruction (excluding the opcode)."""
        return self.__address_

    @property
    def opcode_address(self) -> addr_t:
        """Returns the address where the opcode for this instruction is located."""
        return self.address - 2

    @property
    def insn_format(self) -> InsnFormat:
        """Returns the format of this instruction."""
        return self.__format_

    @property
    def info(self) -> InsnInfo:
        """Returns the metadata and control flow information associated with this instruction."""
        return self.__info_


# -----------------------------------------------------------------------------
# opcode mapping
# -----------------------------------------------------------------------------

# Instruction Format IDs
# This file documents all identified instruction formats based on initial analysis.
# The naming convention assigns a unique ID to each format according to their behavior.

# Format IDs typically consist of three characters: two digits followed by a letter.
# - The first digit represents the number of variables taken from the compiled stack.
# - The second digit represents the number of additional variables that must be loaded.
# - The final letter indicates which variable stores the destination address. This
#   address is where the result of the operation will be stored, if applicable.
#
# For example, the format "20a" indicates:
# - Two variables are read from the compiled stack.
# - No extra variables are loaded.
# - The operation's result is stored in variable 'a'.
#
# The total length of an instruction can be calculated by adding the size of the
# instruction info structure to the size required for the variables:
#   size := <info-size> + ( <var-count> * 4 )
#
# Note: An additional special letter 'z' is used to indicate that no additional
# data is stored in memory.

# Dictionary that maps opcodes to their corresponding instruction formats.
FormatIDs = {}

# Opcode IDs
# Similar to format IDs, opcode IDs are defined by a certain naming scheme.
# The opcode ID consists of the instruction mnemonic name, followed by optional type
# specifications (e.g., UInt, Byte), and finally the instruction format ID.

# Dictionary that maps opcodes to their corresponding mnemonic names.
OpcodeIDs = {}


def O(name: str, opcode: int, format_id: str) -> int:  #: noqa
    """
    Registers an opcode with its corresponding format and name.

    This function associates an opcode with a specific instruction format (represented
    by the format ID) and a mnemonic name. The format and name are stored in the
    :code:`FormatIDs` and :code:`OpcodeIDs` dictionaries, respectively.

    Args:
        name (str): The mnemonic name of the opcode. If the name is :code:`"_"`, it will be auto-generated based on the format ID.
        opcode (int): The numeric opcode to be registered.
        format_id (str): The format ID string that describes the structure of the instruction.

    Returns:
        int: The opcode that was registered.
    """
    FormatIDs[opcode] = InsnFormat.parse(format_id)
    OpcodeIDs[opcode] = name if name != "_" else f"_{format_id}"
    return opcode


# fmt: off
#           Name           |  Opcode     | human-oriented syntax
O("_",                      0x00, "13x") #
O("_",                      0x05, "21x") #
O("_",                      0x06, "30x") #
O("Assign_UInt_02b",        0x07, "02b") # b = a
O("_",                      0x08, "11x") #
O("_",                      0x09, "03x") #
O("_",                      0x0C, "32x") #
O("_",                      0x0d, "03x") #
O("_",                      0x0e, "30x") #
O("_",                      0x0f, "40x") #
O("Compare_ULong_12b",      0x10, "12b") # b = c - a (-1, 0 or 1)
O("_",                      0x1C, "12x") #
O("_",                      0x11, "20x") #
O("Assign_UInt_02a",        0x12, "02a") # a = b
O("Assign_Byte_11a",        0x13, "11a") # a = b
O("Assign_ULong_20a",       0x15, "20a") # a = b
O("_",                      0x18, "11x") #
O("_",                      0x19, "40x") #
O("Compate_Double_03a",     0x1B, "03a") # a = c - b (-1, 0 or 1)
O("Div_Int_03b",            0x1F, "03b") # b = a / c
O("_",                      0x1a, "20x") #
O("_",                      0x1e, "11x") #
O("_",                      0x21, "22x") #
O("Add_Int_30c",            0x25, "30c") # c = a + b
O("_",                      0x26, "11x") #
O("CastToInt_22d",          0x28, "22d") # d = convert(src=c, dst=a, val=b)
O("_",                      0x29, "20x") #
O("CastToFloat_04a",        0x2A, "04a") # a = convert(src=c, dst=d, val=b)
O("Assign_Long_20a",        0x2E, "20a") # a = b
O("Div_Double_12b",         0x2c, "12b") # b = a / c
O("_",                      0x2d, "12x") #
O("_",                      0x2f, "12x") #
O("_",                      0x30, "40x") #
O("_",                      0x33, "10x") #
O("_",                      0x34, "21x") #
O("_",                      0x35, "21x") #
O("_",                      0x37, "23x") #
O("_",                      0x38, "40x") #
O("_",                      0x3a, "11x") #
O("_",                      0x3b, "21x") #
O("_",                      0x3d, "41x") #
O("Alloc_Vector_01a",       0x41, "01a") #
O("_",                      0x42, "03x") #
O("_",                      0x43, "12x") #
O("_",                      0x44, "11x") #
O("_",                      0x46, "01x") #
O("_",                      0x47, "30x") #
O("_",                      0x48, "30x") #
O("_",                      0x49, "30x") #
O("_",                      0x4a, "02x") #
O("_",                      0x4b, "21x") #
O("_",                      0x4c, "13x") #
O("_",                      0x4d, "21x") #
O("_",                      0x4f, "30x") #
O("_",                      0x50, "30x") #
O("_",                      0x54, "03x") #
O("_",                      0x57, "20x") #
O("Alloc_Vector_01a",       0x58, "01a") #
O("_",                      0x59, "41x") #
O("_",                      0x5a, "03x") #
O("_",                      0x5b, "20x") #
O("_",                      0x5c, "12x") #
O("_",                      0x5e, "40x") #
O("_",                      0x5f, "30x") #
O("_",                      0x60, "21x") #
O("_",                      0x64, "30x") #
O("_",                      0x65, "30x") #
O("_",                      0x66, "21x") #
O("_",                      0x68, "11z") #
O("_",                      0x6b, "30x") #
O("_",                      0x6c, "10x") #
O("_",                      0x6d, "11x") #
O("_",                      0x6e, "02x") #
O("_",                      0x70, "22x") #
O("_",                      0x71, "03x") #
O("_",                      0x72, "03x") #
O("_",                      0x73, "21x") #
O("_",                      0x74, "30x") #
O("_",                      0x75, "00x") #
O("_",                      0x76, "20x") #
O("_",                      0x77, "12x") #
O("_",                      0x7a, "20x") #
O("_",                      0x7b, "30x") #
O("_",                      0x7e, "30x") #
O("_",                      0x82, "20x") #
O("_",                      0x83, "11x") #
O("_",                      0x84, "22x") #
O("_",                      0x85, "20x") #
O("_",                      0x87, "03x") #
O("_",                      0x89, "12x") #
O("_",                      0x8b, "12x") #
O("_",                      0x8c, "12x") #
O("_",                      0x8d, "11x") #
O("_",                      0x8e, "21x") #
O("_",                      0x93, "03x") #
O("_",                      0x95, "12x") #
O("_",                      0x96, "11x") #
O("_",                      0x98, "20x") #
O("_",                      0x9a, "32x") #

from typing import Any, Type

from caterpillar.shortcuts import unpack, LittleEndian as le, pack
from caterpillar.fields import uint16, uint32, uint64, double, int32, Field

from .opcode import decode_opcode
from ._types import ptr_t, addr_t


# -----------------------------------------------------------------------------
# FNV-1 Hash
# -----------------------------------------------------------------------------
FNV_prime = 0x100000001B3


def fnv(data: bytes):
    hval = 0xCBF29CE484222325
    for byte in data:
        hval = (hval * FNV_prime) % 2**64
        hval ^= byte
    return hval


# -----------------------------------------------------------------------------
# Address decoding
# -----------------------------------------------------------------------------
def decode_address(enc_address: int, code_length: int) -> addr_t:
    """
    Resolves an encoded address and returns the corresponding file offset.

    Args:
        enc_address (int): The encoded address to be resolved.
        code_length (int): The length of the bytecode file.

    Returns:
        int: The decoded address as an absolute file offset.
    """
    return ((enc_address ^ ~code_length) & 0xFFFFFFFF) % code_length


# -----------------------------------------------------------------------------
# public field types
# -----------------------------------------------------------------------------
le_u64 = le + uint64
le_u32 = le + uint32
le_s32 = le + int32
le_u16 = le + uint16


# -----------------------------------------------------------------------------
# Memory Management
# -----------------------------------------------------------------------------
class VMVariable:
    #: the human readable type of this variable
    __type_: str

    #: the value associated with this variable
    __value_: Any

    #: the position of this variable in memory (file offset)
    __address_: addr_t

class VMMemory:
    """Internal memory manager for the VM.

    This class keeps track of objects that are allocated on the heap using
    malloc(..).
    """

    #: INternal map that stores all objects that should be
    #: accessible.
    objects: dict[ptr_t, Any]

    #: Memory variables
    variables: dict[addr_t, VMVariable]

    #: Base address for this memory manager
    base_address: ptr_t

    # Current address for allocating objects
    _alloc_pos: ptr_t

    def alloc[T](self, ty: Type[T], *args, **kwargs) -> tuple[ptr_t, T]:
        """Simulates memory allocation by instantiating an object of the given type.

        This function stores a reference to the created object in the internal
        object map and resturns the target address together with the created
        object.
        """
        addr = self._alloc_pos
        obj = ty(*args, **kwargs)

        self.objects[addr] = obj
        self._alloc_pos += 8
        return (addr, obj)

    def malloc(self, size: int) -> tuple[ptr_t, bytearray]:
        """Simulates memory allocation by creating a bytearray using the given size."""
        addr = self._alloc_pos
        obj = bytearray(size)

        self.objects[addr] = obj
        self._alloc_pos += size
        return (addr, obj)

    # --- special methods ---
    def __init__(self, base_address: ptr_t) -> None:
        self.objects = {}
        self.base_address = base_address
        self._alloc_pos = base_address

    def __getitem__(self, key: ptr_t) -> Any:
        return self.objects[key]



# -----------------------------------------------------------------------------
# VMContext
# -----------------------------------------------------------------------------
class VMContext:
    """
    Contains a reference to the bytecode data and maintains the current
    instruction position
    """

    # --- special methods ---
    def __init__(self, bytecode: bytes, pc: addr_t) -> None:
        self.vm_code: bytearray = bytearray(bytecode)
        self.vm_code_length: int = len(bytecode)
        self.pc: addr_t = pc

    def __getitem__(self, key):
        return self.vm_code[key]

    def __setitem__(self, key, value):
        self.vm_code[key] = value

    def __len__(self) -> int:
        return self.vm_code_length

    def __iadd__(self, n) -> "VMContext":
        self.pc += n
        return self

    # --- unpacking ---
    def get(self, field: Field, addr: addr_t = -1):
        if addr == -1:
            addr = self.pc

        return unpack(field @ addr, self.vm_code)

    def u32(self, addr: addr_t = -1) -> int:
        """Reads an unsigned 32bit integer.

        Reads the integer from the current program counter if address
        is -1.

        Args:
            addr (int, optional): the target address. Defaults to -1.

        Returns:
            int: the parsed int
        """
        return self.get(le_u32, addr)

    def i32(self, addr: addr_t = -1) -> int:
        """Reads a signed 32bit integer.

        Reads the integer from the current program counter if address
        is -1.

        Args:
            addr (int, optional): the target address. Defaults to -1.

        Returns:
            int: the parsed int
        """
        return self.get(le_s32, addr)

    def u64(self, addr: addr_t = -1) -> int:
        """Reads an unsigned 64bit integer.

        Reads the integer from the current program counter if address
        is -1.

        Args:
            addr (int, optional): the target address. Defaults to -1.

        Returns:
            int: the parsed int
        """
        return self.get(le_u64, addr)

    def u8(self, addr: addr_t = -1) -> int:
        addr = addr if addr >= 0 else self.pc
        return self.vm_code[addr]

    def double(self, addr: addr_t = -1) -> float:
        """Reads a 64bit floating point value.

        Reads the value from the current program counter if address
        is -1.

        Args:
            addr (int, optional): the target address. Defaults to -1.

        Returns:
            float: the parsed double
        """
        return self.get(le + double, addr)

    def u16(self, addr: addr_t = -1, decode=False) -> int:
        """Reads an unsigned 16bit integer.

        Reads the integer from the current program counter if address
        is -1.

        Args:
            addr (int, optional): the target address. Defaults to -1.

        Returns:
            int: the parsed int
        """
        return self.get(le + uint16, addr)

    def addr(self, off: int, rel=True, decode=True) -> addr_t:
        """Reads an encoded address relative to the current addres (default)

        Args:
            off (int): relative offset (absolute if rel=False)
            rel (bool, optional): whether off is relative. Defaults to True.
            decode (bool, optional): decodes the address after parsing. Defaults to True.

        Returns:
            int: the parsed address
        """
        address = self.u32(off if not rel else self.pc + off)
        if decode:
            return decode_address(address, self.vm_code_length)
        return address

    # --- packing ---
    def put(self, field: Field, value: Any, addr: addr_t = -1) -> None:
        data: bytes = pack(value, field)
        if addr == -1:
            addr = self.pc
        self.vm_code[addr : addr + len(data)] = data

    def setu64(self, val: int, addr: addr_t) -> None:
        self.put(le_u64, val, addr)

    def setu32(self, val: int, addr: addr_t) -> None:
        self.put(le_u32, val, addr)

    def seti32(self, val: int, addr: addr_t) -> None:
        self.put(le_s32, val, addr)

    def setu8(self, val: int, addr: addr_t) -> None:
        self[addr] = val


class VMState:
    """Tracks the internal state of the VM and stores environment options"""

    #: whether to print decompiled or disassembled output
    verbose: bool

    #: Output writer (may be null)
    writer: Any

    #: controls whether the VM should stop execution
    should_exit: bool

    #: comment start character
    comment: str

    #: internal mapping of variables used by the Decompiler or disassembler
    _env: dict[str, Any]

    # --- special methods ---
    def __init__(
        self,
        verbose: bool = False,
        writer: Any = print,
        comment: str | None = None,
        **kwargs,
    ) -> None:
        self.verbose = verbose
        self.writer = writer
        self.should_exit = False
        self.comment = comment or ";"
        self._env = dict(kwargs)

    def __getitem__(self, key):
        return self._env[key]

    def __setitem__(self, key, value):
        self._env[key] = value

    # --- debugging support ---
    def psection(self, name: str, *comments) -> None:
        """Writes a line to the terminal.

        Args:
            name (str): the section name
        """
        line = f".{name}:"
        self.pline(line, *comments)

    def pinsn(self, insn: str, args: str, *comments: str, indent: int = 1) -> None:
        """Writes an instruction to the terminal.

        Args:
            name (str): the line to write
        """
        line = ("    " * indent) + f"{insn:<8} {args}"
        self.pline(line, *comments)

    def pline(self, line, *args) -> None:
        """Writes a line to the terminal.

        Args:
            name (str): the line to write
        """
        if len(args) > 0:
            args = [self.comment] + list(args)

        if self.verbose:
            self.writer(" ".join([f"{line:40s}"] + list(args)))


# -----------------------------------------------------------------------------
# VM
# -----------------------------------------------------------------------------
class VM:
    #: internal state and environment
    state: VMState

    #: code and code position
    context: VMContext

    #: memory
    mem: VMMemory

    def __init__(
        self,
        bytecode: bytes,
        pc: addr_t = -1,
        mem_base_addr: ptr_t = -1,
        verbose: bool = False,
        writer: Any = print,
        **env,
    ) -> None:
        self.mem = VMMemory(mem_base_addr if mem_base_addr >= 0 else 0xDEAD00000000)
        self.context = VMContext(bytecode, pc)
        self.state = VMState(verbose, writer, **env)

    def entry_point(self) -> addr_t:
        """Calculates the entry point for the current program

        Returns:
            int: the entry point address (file offset)
        """
        a = self.context.u32(addr=0x04)
        b01 = (~a & 0xFFFFFF8E) * -3 + (~a | 0xFFFFFF8E)
        b02 = (a * 2) ^ 0xFFFFFF1C
        return self.context.addr((b01 + b02) & 0xFFFFFFFF, rel=False)

    def current_opcode(self) -> int:
        """Returns the decoded opcode for the current pc.

        Returns:
            int: the decoded opcode
        """
        return decode_opcode(self.context.u16())

    def verify_hash(self, addr: addr_t = -1) -> bool:
        """
        Verifies the integrity of a section of the VM's code by checking
        its hash value. (Used to select the next instruction address)

        Args:
            addr (addr_t, optional): The address in the bytecode to verify.
                                     Defaults to the current program counter (pc) if not provided.

        Returns:
            bool: True if the hash verification is successful, False otherwise.
        """
        if addr < 0:
            addr = self.context.pc

        xor_value = (
            self.context.u32(self.context.addr(addr, rel=False)) ^ 0xFFFFFFFF00000000
        )
        hash_value = self.context.u64(addr + 4)
        hash_address = self.context.addr(addr + 12, rel=False)
        hash_length = self.context.u16(addr + 16)

        data = self.context[hash_address : hash_address + hash_length]
        hash_value2 = fnv(data) ^ (xor_value & 0xFFFFFFFFFFFFFFFF)
        return hash_value2 == hash_value

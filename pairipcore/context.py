from typing import Any
from caterpillar.shortcuts import unpack, LittleEndian as le, pack
from caterpillar.fields import uint16, uint32, uint64, double, int32

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


le_u64 = le + uint64
le_u32 = le + uint32
le_s32 = le + int32


class VMMemory(bytearray):
    addr: int

    def _usigned_int_(self, struct_, addr: int = 0):
        return unpack(struct_, self[addr:])

    def _set_int_(self, struct_, value, addr):
        data = pack(value, struct_)
        self[addr : addr + len(data)] = data

    def putu64(self, value: int, off: int) -> None:
        self._set_int_(le_u64, value, off)

    def getu64(self, off: int = 0) -> int:
        return self._usigned_int_(le_u64, off)

    def as_[T](self, ty: T) -> T:
        return unpack(ty, self)


class VMContext:
    """Describes the internal state of the VM.

    Args:
        code (bytes): The bytecode to be executed by the VM.
        pc (int, optional): The initial program counter. Defaults to 0.
        verbose (bool, optional): If True, enables verbose logging. Defaults to False.
    """

    mmap: dict[ptr_t, VMMemory | Any]
    """Internal memory map (simulation)"""

    def __init__(self, code: bytes, pc: int = 0, verbose: bool = False):
        self.vm_code = bytearray(code)
        self.vm_code_length = len(code)
        self.pc = pc
        self.should_exit = False
        self.verbose = verbose
        self.mmap = {}
        self.mbase = 0xDEAD000000000
        self.mpos = self.mbase
        self.next_label: str | None = None
        self.comment_start = ";"

    def __len__(self):
        """Returns the length of the VM's bytecode."""
        return self.vm_code_length

    def __iadd__(self, n) -> "VMContext":
        """Increments the program counter by the specified value.

        Args:
            n (int): The value to increment the program counter by.

        Returns:
            VMContext: The updated VMContext instance.
        """
        self.pc += n
        return self

    def __getitem__(self, key):
        """Retrieves a byte from the VM's code at the specified index.

        Args:
            key (int): The index of the byte to retrieve.

        Returns:
            int: The byte at the specified index.
        """
        return self.vm_code[key]

    def __int__(self):
        """Returns the current value of the program counter."""
        return self.pc

    def _unpack_at_(self, struct_, addr: addr_t = -1, decode=False):
        addr = addr if addr >= 0 else self.pc
        if decode:
            addr = decode_address(addr, self.vm_code_length)
        return unpack(struct_, self.vm_code[addr:])

    def _pack_at_(self, struct_, value, addr: addr_t):
        data = pack(value, struct_)
        self.vm_code[addr : addr + len(data)] = data

    def u32(self, addr: addr_t = -1, decode=False) -> int:
        """Reads an unsigned 32bit integer.

        Reads the integer from the current program counter if address
        is -1 and decodes the address before reading the value if decode
        is set to True.

        Args:
            addr (int, optional): the target address. Defaults to -1.
            decode (bool, optional): whether to decode the given address before parsing. Defaults to False.

        Returns:
            int: the parsed int
        """
        return self._unpack_at_(le_u32, addr, decode)

    def i32(self, addr: addr_t = -1, decode=False) -> int:
        """Reads a signed 32bit integer.

        Reads the integer from the current program counter if address
        is -1 and decodes the address before reading the value if decode
        is set to True.

        Args:
            addr (int, optional): the target address. Defaults to -1.
            decode (bool, optional): whether to decode the given address befor parsing. Defaults to False.

        Returns:
            int: the parsed int
        """
        return self._unpack_at_(le + int32, addr, decode)

    def u64(self, addr: addr_t = -1, decode=False) -> int:
        """Reads an unsigned 64bit integer.

        Reads the integer from the current program counter if address
        is -1 and decodes the address before reading the value if decode
        is set to True.

        Args:
            addr (int, optional): the target address. Defaults to -1.
            decode (bool, optional): whether to decode the given address befor parsing. Defaults to False.

        Returns:
            int: the parsed int
        """
        return self._unpack_at_(le_u64, addr, decode)

    def setu64(self, val: int, addr: addr_t) -> None:
        self._pack_at_(le_u64, val, addr)

    def setu32(self, val: int, addr: addr_t) -> None:
        self._pack_at_(le_u32, val, addr)

    def seti32(self, val: int, addr: addr_t) -> None:
        self._pack_at_(le_s32, val, addr)

    def setu8(self, val: int, addr: addr_t) -> None:
        self.vm_code[addr] = val

    def u8(self, addr: addr_t = -1) -> int:
        addr = addr if addr >= 0 else self.pc
        return self.vm_code[addr]

    def double(self, addr: addr_t = -1) -> float:
        """Reads a 64bit floating point value.

        Reads the value from the current program counter if address
        is -1 and decodes the address before reading the value if decode
        is set to True.

        Args:
            addr (int, optional): the target address. Defaults to -1.
            decode (bool, optional): whether to decode the given address befor parsing. Defaults to False.

        Returns:
            float: the parsed double
        """
        return self._unpack_at_(le + double, addr, decode=False)

    def u16(self, addr: addr_t = -1, decode=False) -> int:
        """Reads an unsigned 16bit integer.

        Reads the integer from the current program counter if address
        is -1 and decodes the address before reading the value if decode
        is set to True.

        Args:
            addr (int, optional): the target address. Defaults to -1.
            decode (bool, optional): whether to decode the given address befor parsing. Defaults to False.

        Returns:
            int: the parsed int
        """
        return self._unpack_at_(le + uint16, addr, decode)

    def addr(self, off: int, rel=True, decode=True) -> addr_t:
        """Reads an encoded address relative to the current addres (default)

        Args:
            off (int): relative offset (absolute if rel=False)
            rel (bool, optional): whether off is relative. Defaults to True.
            decode (bool, optional): decodes the address after parsing. Defaults to True.

        Returns:
            int: the parsed address
        """
        address = self.u32(off if not rel else self.pc + off, decode=False)
        if decode:
            return decode_address(address, self.vm_code_length)
        return address

    def deref(self, addr: addr_t) -> Any:
        return self.mmap[self.u64(addr)]

    @property
    def entry_point(self) -> addr_t:
        """Calculates the entry point for the current program

        Returns:
            int: the entry point address (file offset)
        """
        a = self.u32(addr=0x04)
        b01 = (~a & 0xFFFFFF8E) * -3 + (~a | 0xFFFFFF8E)
        b02 = (a * 2) ^ 0xFFFFFF1C
        return self.addr((b01 + b02) & 0xFFFFFFFF, rel=False)

    def current_opcode(self) -> int:
        """Returns the decoded opcode for the current pc.

        Returns:
            int: the decoded opcode
        """
        return decode_opcode(self.u16())

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
            args = [self.comment_start] + list(args)
        if self.verbose:
            print(f"{line:40s}", *args)

    def malloc(self, size: int = -1, struct_ty: type | None = None, **kwargs) -> ptr_t:
        if size == -1 and type is None:
            raise ValueError("Expected an allocation size or a struct type!")

        addr = self.mpos
        if type is None:
            data = VMMemory(size)
            setattr(data, "addr", addr)
        else:
            data = struct_ty(**kwargs)

        self.mmap[addr] = data
        self.mpos = addr + size
        return addr

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
            addr = self.pc

        xor_value = self.u32(self.addr(addr, rel=False)) ^ 0xFFFFFFFF00000000
        hash_value = self.u64(addr + 4)
        hash_address = self.addr(addr + 12, rel=False)
        hash_length = self.u16(addr + 16)

        data = self.vm_code[hash_address : hash_address + hash_length]
        hash_value2 = fnv(data) ^ (xor_value & 0xFFFFFFFFFFFFFFFF)
        return hash_value2 == hash_value

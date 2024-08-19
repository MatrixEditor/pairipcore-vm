# type: ignore
from dataclasses import dataclass
from typing import Callable

# -----------------------------------------------------------------------------
# Typing
# -----------------------------------------------------------------------------
# An address is basically an offset within the bytecode stream
addr_t = int
# whereas a pointer refers to an allocated object
ptr_t = int

vector_t = list


@dataclass
class astruct1_t:  # REVISIT: rename to VMInit
    fnPtr: Callable = 0
    field_0x08: int = 0
    field_0x10: int = 0
    field_0x18: int = 0
    field_0x20: int = 0
    field_0x28: int = 0
    field_0x30: addr_t = None


VMTypeCode_Byte = 0x000000001
VMTypeCode_Short = 0x000000002
VMTypeCode_Int = 0x000000004
VMTypeCode_Float = 0x000000004
VMTypeCode_Double = 0x000000008
VMTypeCode_Long = 0x000000008

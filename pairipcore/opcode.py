from ._types import opcode_t

# Magic opcode (only for internal use, not a real opcode)
VMOpcode_Interpret = 0xFFFF


def decode_opcode_v0(raw_opcode: int) -> opcode_t:
    a = (raw_opcode ^ 0xFFFFFF64) & 0xFFFF
    b = (a * 0xA6D1) >> 16

    result = (a - b) & 0xFFFE
    result = (b + (result >> 1)) & 0xFFFFFFFF

    bits = (result >> 7) & 0x1FF
    return (a - (bits * 0x9B)) & 0xFFFFFFFF


def decode_opcode_v1(raw_opcode: int) -> opcode_t:
    a = raw_opcode ^ 0xFF5F
    return a + ((a // 5) & 0xFFFFFFE0) * -5

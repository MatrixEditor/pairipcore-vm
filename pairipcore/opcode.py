# Magic opcode (only for internal use, not a real opcode)
VMOpcode_Interpret = 0xFFFF

# --- special operations --- (only guessed)
VMOpcode_Malloc1 = 0x58
VMOpcode_Malloc2 = 0x41
VMOpcode_Init1 = 0x68
VMOpcode_Setup1 = 0x49
VMOpcode_Main = 0x3D

VMOpcode_CheckPath = 0x4B
VMOpcode_FindClass = 0x4D

# --- standard operations ---
VMOpcode_OR_Byte = 0x05
VMOpcode_RAssign_UInt = 0x07  # b = a
VMOpcode_RShift_SInt = 0x0D  # a = b >> c
VMOpcode_Compare_ULong = 0x10
VMOpcode_LAssign_UInt = 0x12  # a = b
VMOpcode_LAssign_Byte = 0x13
VMOpcode_LAssign_ULong = 0x15
VMOpcode_Compare_Double = 0x1B
VMOpcode_Div_SInt = 0x1F
VMOpcode_Add_SInt = 0x25
VMOpcode_FloatToInt = 0x28  # a = (<int-type>) b
VMOpcode_IntToFloat = 0x2A  # a = (float) b
VMOpcode_LAssign_ULong2 = 0x2E
VMOpcode_CastInt = 0x30  # a = (<int-type>) b
VMOpcode_NOP = 0x33
VMOpcode_XOR_Byte = 0x34
VMOpcode_NotEqZ_SInt = 0x35  # c = a != 0 && b != 0
VMOpcode_Mul_Float = 0x42
VMOpcode_Mul_Double = 0x43
VMOpcode_Add_ULong = 0x47
VMOpcode_Add_Double = 0x48
VMOpcode_RAssign_SInt = 0x4A
VMOpcode_CastFP = 0x4C  # double <-> float
VMOpcode_Add_Float = 0x5A
VMOpcode_Compare_UInt = 0x5F
VMOpcode_RShift_SLong = 0x60
VMOpcode_Not_ULong = 0x65  # a = ~b
VMOpcode_Div_Float = 0x66
VMOpcode_LAssign_Short = 0x6E
VMOpcode_And_UInt = 0x73  # c = a & b
VMOpcode_NOP1 = 0x75
VMOpcode_Mul_UInt = 0x77
VMOpcode_CastInt1 = 0x84  # a = (<int-type>) b
VMOpcode_NotEqZ_UInt = 0x85
VMOpcode_Compare_SInt = 0x87
VMOpcode_SLongToULong = 0x89
VMOpcode_Sub_UInt = 0x8C
VMOpcode_RAssign_Short = 0x8D
VMOpcode_Sub_SLong = 0x8E
VMOpcode_XOR_ULong = 0x93
VMOpcode_Div_SLong = 0x95
VMOpcode_RAssign_UInt1 = 0x96
VMOpcode_AddrToUInt = 0x9A


def decode_opcode(raw_opcode: int) -> int:
    """Decodes the encoded opcode.

    Args:
        raw_opcode (int): the parsed opcode as integer (u32)

    Returns:
        int: the decode opcode (u32)
    """
    a = (raw_opcode ^ 0xFFFFFF64) & 0xFFFF
    b = (a * 0xA6D1) >> 16

    result = (a - b) & 0xFFFE
    result = (b + (result >> 1)) & 0xFFFFFFFF

    bits = (result >> 7) & 0x1FF
    return (a - (bits * 0x9B)) & 0xFFFFFFFF

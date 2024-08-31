from .context import VMContext
from ._types import addr_t


def s_ppdecode(context: VMContext, pp_data: addr_t, p_key: addr_t) -> bytes:
    return s_pdecode(context, context.addr(pp_data, rel=False), p_key)


def s_pdecode(context: VMContext, p_data: addr_t, p_key: addr_t) -> bytes:
    dec_length = context.u16(p_data) ^ context.u16(p_key)
    result = bytearray(dec_length + 2)
    for i, v in enumerate(context[p_data : p_data + dec_length + 2]):
        result[i] = v ^ context[p_key + (i & 0xFF)]
    return bytes(result[2:])


## --- OLD ---

# default key - you might need to verify it for your asset files
KEY = (
    b'\xab\x16+\xc0/D7\xb6\x7fQ1\x8f9@\x13\x11*\xec8\xdd7\xdaO"_T\x97\x00\x1d;\
\xa6T`\xad\xbfP\x8c\x86\xfeg\xc9\xc2\xaf\xaf_\xbaq\xc1\x9a6\x1bq.\xb6C3\n\xa5\xe5\
\xea\xf9 Y\xf1t\x11\x13%\xf2\x87\xd8\xb6\x8e\xcd\xa8#\xb3o\xd8NR\xe8\xbe\xd9\xc1\
\xa0j\xc2(Vw\xd9C\xfc\x92k\x0c#\xf8\xa9h\xb8\xf7\xd4$\xac\xad-\x88W\x92\x8a\xb3y\
\xcdYe\xd9\xab\xa8\xd1\x93\x87\x91o\xf5c\xeb\xa0\x05\xc7\xd4\xc6?\x80\xb9\xf5\xa3\
\xd0|\x7fO\n\'\xe1\xf5\xbe\x98\xb5\xd1\xd9P_lI\x18x\xa2\x16\xf8\xf7\xab\x03\xf0\xaf_\
\xe8\xf8\xf6\xce\xcc\r\xd2\xb3\xb4fO\xf2\xa9<\xd7\x0e\x04\x05\xa4\x85\xb5&\xcf\xbc\
\x16\xd3\xfe\x0b\xb8\xfa\xb1\xfb4\xf8\x16v\x92\x96\xe3\xee\x97\xf1\xc1\xad\x15\xe3\
\x0f\x18:^/\xfe\x14\x1a\xdd\x1b\xe9q\x11\xc8\xc3\xaa\xf2\xa0\xca"}\x91\xcd\xc8\x01\
_8H\xe9j\xbe\xf4\x1aB\xccm\xa2)\\\x1df\xb68'
)

KEY__LEN = 5803


def ppdecode(code: VMContext, pp_data: addr_t, p_key: addr_t = -1) -> bytes:
    return pdecode(code, code.addr(pp_data), p_key)


def pdecode(code: VMContext, p_data: addr_t, p_key: addr_t = -1) -> bytes:
    key = KEY
    len__b = KEY__LEN
    if p_key != -1:
        key = code.vm_code[p_key : p_key + 0xFF]
        len__b = code.u16(p_key)

    len__a = code.u16(p_data)
    length = len__a ^ len__b
    result = bytearray(length)
    for i, b in enumerate(code.vm_code[p_data : p_data + length + 2]):
        result[i] = b ^ key[i & 0xFF]

    return result[2:]

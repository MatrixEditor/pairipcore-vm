# Instruction Set

To fully comprehend how each opcode functions and to accurately disassemble
the bytecode found in asset files, it is crucial to understand the parsing
of opcodes. Each opcode precedes its associated instruction, so decoding
the opcodes is the first step in the process.

## Opcode Obfuscation

Google, of course, applies obfuscation to each opcode, making identification more
challenging. Despite this, the decoding algorithm for each opcode is provided below,
which will enable us to decode the opcodes used in the bytecode:

```{code-block} python
:linenos:
:caption: Python implementation of `decode_opcode`

def decode_opcode(raw_opcode: int) -> int:
    a = (raw_opcode ^ 0xFFFFFF64) & 0xFFFF
    b = (a * 0xA6D1) >> 16

    result = (a - b) & 0xFFFE
    result = (b + (result >> 1)) & 0xFFFFFFFF

    bits = (result >> 7) & 0x1FF                # bits 7-9
    return (a - (bits * 0x9B)) & 0xFFFFFFFF
```

Using this algorithm, we can successfully decode the opcodes. However, there
is an additional step that needs to be performed before the modified
Fetch-Decode-Execute (FDE) loop starts. Each asset file contains a compiled
entry point address. This address specifies the location of the first
opcode in the bytecode stream.

## Virtual Memory

Unlike other VMs, Google chose to embed part of the memory directly within the asset file,
requiring virtual memory addresses to point to an offset in that file. Unfortunately,
these addresses are encoded, so we need to decode them first to reveal the actual offset:

```{code-block} python
def decode_address(enc_address: int, code_length: int) -> int:
    return ((enc_address ^ ~code_length) & 0xFFFFFFFF) % code_length
```

To parse and decode addresses directly from the file stream, `VMContext` provides a
utility function named `addr`. Note that the offset you provide is **relative** by
default. To disable this behavior, set `rel=False`.

```{code-block} python
>>> # parses u32 and decodes address at offset context.pc + 0x1234
>>> context.addr(0x1234)
# ...
```

## Entry Point

````{margin} **Asset Files**
If you take a look at the asset files you may have noticed the file
magic `\0IAP`. Its usage remains unknown, because the VM doesn't
care about the file magic.
```{code-block} text
00000000: .IAP.......X....
00000010: ]..)..r.Il..:...
```
````

Each asset file contains an entry point address located at an offset derived
from an integer at position `+0x04`. As with previous steps, the file offset
storing the entry point address is also encoded using:

```{code-block} python
a = context.u32(addr=0x04)
b01 = (~a & 0xFFFFFF8E) * -3 + (~a | 0xFFFFFF8E)
b02 = (a * 2) ^ 0xFFFFFF1C
entry_point = context.addr((b01 + b02) & 0xFFFFFFFF, rel=False)
```

## Instruction Format

To reverse engineer the instruction formats used in the custom VM, we need to
decode both the opcodes and the memory addresses. Google's bytecode design
complicates this process by embedding hardcoded addresses for the next
instructions. Specifically, the bytecode includes two potential next instruction
addresses, and the actual address to use is determined through a hash check. The
hash function employed to decide between the `next_instruction_addr` and the
`fallback_addr` is the [FNV-1](https://en.wikipedia.org/wiki/Fowler-Noll-Vo_hash_function)
hash function.

Each instruction in the bytecode follows to a stack-based paradigm. Initially, all
variables are loaded from the stack as needed[^mn6]. For example, opcodes `0x41` and
`0x58` allocate `0x18` bytes on the heap using `malloc` and push the result onto the
stack without requiring any additional input. This means that there isn't a single,
universal instruction structure for this VM.

However, we can identify common elements to determine how many items
are taken from the stack and how many are pushed onto it.

[^mn6]: {-} _"stack-based"_ is confusing here, because there is no "real" stack

```{code-block} c
typedef struct {
    addr_t aXorValue;         // +0x0
    ulong  ulHash;            // +0x4
    addr_t aHashDataAddr;     // +0xc
    short  aHashDataLen;      // +0x10
    addr_t aNext;             // +0x12
    addr_t aFallback;         // +0x16
} insn_info_t;
```

Once we identify the position of the parsed `short` or `long` in the bytecode stream,
we can infer the names of all other fields. For example, opcode `0x05` reads the hash
value at offset `+0x0c`, indicating that there are two variables taken from the stack:

```{code-block} c
typedef struct {
  addr_t a;                 // +0x0
  addr_t b;                 // +0x4
  insn_info_t info;         // +0x8
  addr_t c;                 // +0x22
} insn_0x05_t;
```

Opcode `0x05`, referred to as `VMOp_Or_Byte` in the Python API, performs a bitwise OR
operation on two bytes located at addresses A and B. The result is stored at
address C.

Since each opcode is compiled and static, we can decompile the code directly without
needing to analyze low-level pcode instructions. The disassembled version of the first
asset file is listed below:

````{margin} **The same code can be expressed using C pseudocode:**
```{code-block} c
void *v0 = malloc(0x18);
void *v1 = malloc(0x18);
```
````

```{code-block} asm
.init:
    BRANCH   lab_1d88a

.lab_1d88a:                              ; opcode = 0x58
    NEW      v0, [#0x38]                 ; => #0xdead000000000
    STORE    #0x16f8a, v0
                                         ; fallback to #0x4877 - original: #0x2b4a
    BRANCH   lab_4877

.lab_4877:                               ; opcode = 0x41
    NEW      v0, [#0x38]                 ; => #0xdead000000018
    STORE    #0xaf3a, v0
    BRANCH   lab_2ee8d
; ...
```

When visualizing the execution of the initial opcodes, we look at their memory access and
decision paths. Each opcode's behavior can be mapped out to show how it influences the flow
of execution [^mn5]:

[^mn5]: {-} The instruction format IDs used here will be discussed in the [Design Guide](/decompiler/design)

```{figure} _static/depth_5.svg
Example visualization of a decision tree based on the first five instructions executed
upon loading the first bytecode file. [Red]{.text-danger} lines point to fallback addresses
and [Green]{.text-success} lines to the next instruction address upon successful hash
verification. [Gray]{.text-secondary} points to the memory locations accessed within the
instruction.
```

```{admonition} Next Steps
We are now ready to look at each handler function and try to implement a decompiler.
```

### Opcode Table

Below is a table of all the opcodes identified so far. The names provided here are
based on their decompiled output, which can be found in the `src/_opcode_cases/`
directory. Some files already include their instruction structure, generated using
a small script (applicable only to cases of `vm_dispatch_0`).

```{margin} **Important Info**
The opcodes in the visualization were extracted from a dump of the library
at runtime of the app. However, it is important to note that some of these opcodes do not correspond directly to the implementations found in the original library.
```

| Value  | Proposed Name             |    Function     |
| :----: | :------------------------ | :-------------: |
| `0x00` |                           | _vm_dispatch_1_ |
| `0x01` |                           | _vm_dispatch_1_ |
| `0x02` |                           | _vm_dispatch_0_ |
| `0x03` |                           | _vm_dispatch_1_ |
| `0x04` |                           | _vm_dispatch_1_ |
| `0x05` | `VMOpcode_OR_Byte`        | _vm_dispatch_0_ |
| `0x06` |                           | _vm_dispatch_2_ |
| `0x07` | `VMOpcode_RAssign_UInt`   | _vm_dispatch_0_ |
| `0x08` |                           | _vm_dispatch_2_ |
| `0x09` |                           | _vm_dispatch_1_ |
| `0x0A` |                           | _vm_dispatch_1_ |
| `0x0B` |                           | _vm_dispatch_1_ |
| `0x0C` |                           | _vm_dispatch_1_ |
| `0x0D` | `VMOpcode_RShift_SInt`    | _vm_dispatch_0_ |
| `0x0E` |                           | _vm_dispatch_2_ |
| `0x0F` |                           | _vm_dispatch_2_ |
| `0x10` | `VMOpcode_Compare_ULong`  | _vm_dispatch_0_ |
| `0x11` |                           | _vm_dispatch_2_ |
| `0x12` | `VMOpcode_Assign_UInt`    | _vm_dispatch_0_ |
| `0x13` | `VMOpcode_LAssign_Byte`   | _vm_dispatch_0_ |
| `0x14` |                           | _vm_dispatch_1_ |
| `0x15` | `VMOpcode_LAssign_ULong`  | _vm_dispatch_0_ |
| `0x17` |                           | _vm_dispatch_1_ |
| `0x18` |                           | _vm_dispatch_2_ |
| `0x19` |                           | _vm_dispatch_2_ |
| `0x1A` |                           | _vm_dispatch_2_ |
| `0x1C` |                           | _vm_dispatch_1_ |
| `0x1B` | `VMOpcode_Compare_Double` | _vm_dispatch_0_ |
| `0x1D` |                           | _vm_dispatch_2_ |
| `0x1E` |                           | _vm_dispatch_2_ |
| `0x1F` | `VMOpcode_Div_SInt`       | _vm_dispatch_0_ |
| `0x20` |                           | _vm_dispatch_1_ |
| `0x21` |                           | _vm_dispatch_2_ |
| `0x24` |                           | _vm_dispatch_1_ |
| `0x25` | `VMOpcode_Add_SInt`       | _vm_dispatch_0_ |
| `0x26` |                           | _vm_dispatch_1_ |
| `0x27` |                           | _vm_dispatch_1_ |
| `0x28` | `VMOpcode_FloatToInt`     | _vm_dispatch_0_ |
| `0x29` |                           | _vm_dispatch_1_ |
| `0x2A` | `VMOpcode_IntToFloat`     | _vm_dispatch_0_ |
| `0x2B` |                           | _vm_dispatch_1_ |
| `0x2C` |                           | _vm_dispatch_0_ |
| `0x2D` |                           | _vm_dispatch_2_ |
| `0x2E` | `VMOpcode_LAssign_ULong2` | _vm_dispatch_0_ |
| `0x2F` |                           | _vm_dispatch_2_ |
| `0x30` | `VMOpcode_CastInt`        | _vm_dispatch_0_ |
| `0x31` |                           | _vm_dispatch_1_ |
| `0x32` |                           | _vm_dispatch_1_ |
| `0x33` | `VMOpcode_NOP`            | _vm_dispatch_0_ |
| `0x34` | `VMOpcode_XOR_Byte`       | _vm_dispatch_0_ |
| `0x35` | `VMOpcode_NotEqZ_SInt`    | _vm_dispatch_0_ |
| `0x36` |                           | _vm_dispatch_1_ |
| `0x37` |                           | _vm_dispatch_2_ |
| `0x38` |                           | _vm_dispatch_2_ |
| `0x39` |                           | _vm_dispatch_1_ |
| `0x3A` |                           | _vm_dispatch_2_ |
| `0x3B` |                           | _vm_dispatch_2_ |
| `0x3C` |                           | _vm_dispatch_1_ |
| `0x3D` | `VMOpcode_Main`           | _vm_dispatch_1_ |
| `0x3E` |                           | _vm_dispatch_1_ |
| `0x40` |                           | _vm_dispatch_1_ |
| `0x41` | `VMOpcode_Malloc2`        | _vm_dispatch_1_ |
| `0x42` | `VMOpcode_Mul_Float`      | _vm_dispatch_0_ |
| `0x43` | `VMOpcode_Mul_Double`     | _vm_dispatch_0_ |
| `0x44` |                           | _vm_dispatch_2_ |
| `0x45` |                           | _vm_dispatch_0_ |
| `0x47` | `VMOpcode_Add_ULong`      | _vm_dispatch_0_ |
| `0x48` | `VMOpcode_Add_Double`     | _vm_dispatch_0_ |
| `0x49` | `VMOpcode_Setup1`         | _vm_dispatch_1_ |
| `0x4A` | `VMOpcode_RAssign_SInt`   | _vm_dispatch_0_ |
| `0x4B` |                           | _vm_dispatch_2_ |
| `0x4C` | `VMOpcode_CastFP`         | _vm_dispatch_0_ |
| `0x4D` |                           | _vm_dispatch_2_ |
| `0x4E` |                           | _vm_dispatch_1_ |
| `0x4F` |                           | _vm_dispatch_2_ |
| `0x50` |                           | _vm_dispatch_2_ |
| `0x52` |                           | _vm_dispatch_1_ |
| `0x56` |                           | _vm_dispatch_1_ |
| `0x57` |                           | _vm_dispatch_2_ |
| `0x58` | `VMOpcode_Malloc1`        | _vm_dispatch_1_ |
| `0x59` |                           | _vm_dispatch_2_ |
| `0x5A` | `VMOpcode_Add_Float`      | _vm_dispatch_0_ |
| `0x5B` |                           | _vm_dispatch_2_ |
| `0x5C` |                           | _vm_dispatch_0_ |
| `0x5D` |                           | _vm_dispatch_2_ |
| `0x5E` |                           | _vm_dispatch_2_ |
| `0x5F` | `VMOpcode_Compare_UInt`   | _vm_dispatch_0_ |
| `0x60` | `VMOpcode_RShift_SLong`   | _vm_dispatch_0_ |
| `0x63` |                           | _vm_dispatch_1_ |
| `0x64` |                           | _vm_dispatch_2_ |
| `0x65` | `VMOpcode_Not_ULong`      | _vm_dispatch_0_ |
| `0x66` | `VMOpcode_Div_Float`      | _vm_dispatch_0_ |
| `0x68` | `VMOpcode_Init1`          | _vm_dispatch_1_ |
| `0x69` |                           | _vm_dispatch_1_ |
| `0x6A` |                           | _vm_dispatch_2_ |
| `0x6B` |                           | _vm_dispatch_2_ |
| `0x6C` |                           | _vm_dispatch_2_ |
| `0x6D` |                           | _vm_dispatch_2_ |
| `0x6E` | `VMOpcode_LAssign_Short`  | _vm_dispatch_0_ |
| `0x6F` |                           | _vm_dispatch_1_ |
| `0x70` |                           | _vm_dispatch_2_ |
| `0x71` |                           | _vm_dispatch_0_ |
| `0x72` |                           | _vm_dispatch_0_ |
| `0x73` | `VMOpcode_And_UInt`       | _vm_dispatch_0_ |
| `0x74` |                           | _vm_dispatch_2_ |
| `0x75` | `VMOpcode_NOP1`           | _vm_dispatch_0_ |
| `0x76` |                           | _vm_dispatch_2_ |
| `0x77` | `VMOpcode_Mul_UInt`       | _vm_dispatch_0_ |
| `0x79` |                           | _vm_dispatch_1_ |
| `0x7A` |                           | _vm_dispatch_2_ |
| `0x7B` |                           | _vm_dispatch_2_ |
| `0x7D` |                           | _vm_dispatch_1_ |
| `0x7E` |                           | _vm_dispatch_2_ |
| `0x80` |                           | _vm_dispatch_1_ |
| `0x81` |                           | _vm_dispatch_1_ |
| `0x82` |                           | _vm_dispatch_2_ |
| `0x83` |                           | _vm_dispatch_2_ |
| `0x84` | `VMOpcode_CastInt1`       | _vm_dispatch_0_ |
| `0x85` | `VMOpcode_NotEqZ_UInt`    | _vm_dispatch_0_ |
| `0x86` |                           | _vm_dispatch_1_ |
| `0x87` | `VMOpcode_Compare_SInt`   | _vm_dispatch_0_ |
| `0x88` |                           | _vm_dispatch_1_ |
| `0x89` | `VMOpcode_SLongToULong`   | _vm_dispatch_0_ |
| `0x8A` |                           | _vm_dispatch_1_ |
| `0x8B` |                           | _vm_dispatch_0_ |
| `0x8C` | `VMOpcode_Sub_UInt`       | _vm_dispatch_0_ |
| `0x8D` | `VMOpcode_RAssign_Short`  | _vm_dispatch_0_ |
| `0x8E` | `VMOpcode_Sub_SLong`      | _vm_dispatch_0_ |
| `0x90` |                           | _vm_dispatch_1_ |
| `0x93` | `VMOpcode_XOR_ULong`      | _vm_dispatch_0_ |
| `0x94` |                           | _vm_dispatch_1_ |
| `0x95` | `VMOpcode_Div_SLong`      | _vm_dispatch_0_ |
| `0x96` | `VMOpcode_RAssign_UInt1`  | _vm_dispatch_0_ |
| `0x98` |                           | _vm_dispatch_2_ |
| `0x99` |                           | _vm_dispatch_1_ |
| `0x9A` | `VMOpcode_AddrToUInt`     | _vm_dispatch_0_ |

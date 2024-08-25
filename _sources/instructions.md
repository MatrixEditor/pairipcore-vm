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
of execution:

```{figure} _static/depth_5.svg
Example visualization of a decision tree based on the first five instructions executed
upon loading the first bytecode file. [Red]{.text-danger} lines point to fallback addresses
and [Green]{.text-success} lines to the next instruction address upon successful hash
verification. [Gray]{.text-secondary} points to the memory locations accessed within the
instruction.
```

### Opcode Table

With the structure of the instruction format identified, we can construct an opcode table
that maps each opcode value to its corresponding handler function. However, before investing
time into analyzing each handler, it's important to verify the identified opcode handler for
a newer version of the library to be the same.

Upon repeating the analysis steps described earlier, we discovered that the opcode handler for
`0x05` implements behavior different from the expected bitwise OR operation. Unfortunately,
Google has introduced a feature that randomizes the opcode handler mapping each time the
library is compiled, making analysis significantly more challenging.

To counter this measure, we can implement handlers based on so-called format IDs, which allow
us to abstract away the specific opcode values and focus on the underlying instruction formats
instead.

#### Format IDs

Format IDs are used to describe the structure of each instruction. They generally consist
of three characters: two digits followed by a letter.

- The first digit specifies the number of variables taken from the compiled stack.
- The second digit indicates the number of additional variables that need to be loaded.
- The final letter denotes which variable is used to store the result of the operation, if applicable.

For example, the format :code:`"20a"` means the instruction reads two variables from the
stack, does not load any additional variables, and stores the result in variable :code:`'a'`.
If the letter is :code:`"z"`, it indicates that no data is being stored.

```{note}
Note there is one additional special letter :code:`'x'` which indicates that the
storage variable has not yet been identified.
```

We can leverage format IDs to implement a disassembler that is based on these identifiers. In
the following sections, we will explore the possibility of automating the analysis process and
demonstrate how to implement a decompiler/disassembler effectively. This approach allows us to
systematically handle the opcode randomization challenge by focusing on the consistent patterns
found in the instruction formats, rather than the opcodes themselves.

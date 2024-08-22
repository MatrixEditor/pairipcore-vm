# pairipcore vm

Further research based on
[pairipcore](https://github.com/Solaree/pairipcore), focusing on the virtual
machine (VM) used to virtualize code in Android apps as a protection mechanism.

> [!NOTE]
> A detailed writeup is work-in-progress and will be published to GitHub Pages
> soon. Deompiler and Disassembler are WIP!

## Disclaimer

The information presented here is for educational purposes only!

## Overview

Google offers an [automatic integrity protection](https://developer.android.com/google/play/integrity)
feature for apps through Play Integrity Protect. The API for this protection includes
additional classes located in the `com/pairip/` package, which are responsible for
verifying the app's integrity.
To prevent easy circumvention of integrity checks that rely solely on Java code, a native
library (`libpairipcore.so`) is employed. This library incorporates advanced anti-tampering
techniques. You may notice that certain strings in the target APK are not initialized
correctly, and some classes invoke `VMRunner.executeVM` instead of executing regular Java
code. These elements indicate the use of an anti-reversing and anti-tampering technique known
as code virtualization.

## Google Play Integrity VM

Yes, that's right, Google has implemented a custom virtual machine (VM) with a unique
instruction set that executes code stored in the asset files. Before diving into the
specifics of each instruction and how these assets are interpreted, we first need to
identify the main dispatcher function. Fortunately, Google has chosen to register the
native counterpart of `com.pairip.VMRunner.executeVM` using `JNIEnv->RegisterNatives`,
making it relatively straightforward to retrieve the native function address.

### VM Dispatcher (FDE)

With that accomplished, we can now attempt to identify a control flow structure similar
to the one shown below:

[![basic-control-flow](https://www.synthesis.to/images/vm1.svg "Expected Control-Flow")](https://www.synthesis.to/2021/10/21/vm_based_obfuscation.html)

The native counterpart of the Java method executeVM primarily sets up the context around
the code buffer and initializes the VM's state, which we will refer to as `VMContext`
going forward. Its structure can be easily extracted it from the decompiled code:

```c
typedef struct _context {
    void **ptrTable;        // +0x00
    char *vmCode;           // +0x08
    uint vmCodeLength;      // +0x10
    uint pc;                // +0x14
} VMContext;
```

With this initial structure in place, analyzing the code becomes much easier. Examining the
control flow graph of the next function reveals the first switch statement, which acts as
the dispatcher (FDE). Although there is no direct loop structure visible, we can infer that
this switch statement is central to the VM's operation.

By examining the switch cases, we can directly identify the structure of the bytecode
instructions used. For example, case `0x04` looks like this when using `VMContext`
in Ghidra:
```c
case 0x04:
  codeLength = (vm.context)->vmCodeLength;
  pcBase = (vm.context)->pc;
  pCode = (vm.context)->vmCode;
  uVar21 = *(uint *)(pCode + pcBase);
  (vm.context)->pc = pcBase + 4;
  uVar26 = *(uint *)(pCode + (pcBase + 4));
  (vm.context)->pc = pcBase + 8;
  uVar25 = *(ulong *)(pCode + (pcBase + 8));
  (vm.context)->pc = pcBase + 0x10;
  uVar19 = *(uint *)(pCode + (pcBase + 0x10));
  (vm.context)->pc = pcBase + 0x14;
  sVar6 = *(short *)(pCode + (pcBase + 0x14));
  (vm.context)->pc = pcBase + 0x16;
  uVar24 = *(uint *)(pCode + (pcBase + 0x16));
  (vm.context)->pc = pcBase + 0x1a;
  uVar21 = uVar21 ^ codeLength ^ 0xffffffff;
  uVar27 = *(uint *)(pCode + (pcBase + 0x1a));
  (vm.context)->pc = pcBase + 0x1e;
  uVar22 = 0;
  /* ... */
```

Unfortunately, this function does **not** implement all available opcodes, so there
is still more work to be done before we can fully analyze the structure of a generic
instruction. Upon further analysis, you will discover two additional very large
functions that handle opcodes with control-flow obfuscation enabled.

What we have confirmed so far based on the initial analysis:

- The VM uses `uint16` opcodes, does not rely on a typical FDE loop, and utilizes a
  `VMContext` to track the current `pc`.
- There are three primary functions responsible for implementing the opcodes.

### Opcode Obfuscation

Since our goal is not only to understand what each opcode does but also to
disassemble the bytecode stored in the asset files, it's essential to
understand how opcodes are parsed. Google, of course, applies obfuscation
to each opcode, making identification more challenging. However, the algorithm
for decoding each opcode is provided below:

```python
def decode_opcode(raw_opcode: int) -> int:
    a = (raw_opcode ^ 0xFFFFFF64) & 0xFFFF
    b = (a * 0xA6D1) >> 16

    result = (a - b) & 0xFFFE
    result = (b + (result >> 1)) & 0xFFFFFFFF

    bits = (result >> 7) & 0x1FF                # bits 7-9
    return (a - (bits * 0x9B)) & 0xFFFFFFFF
```

With this algorithm, we can decode the opcodes. But before the modified FDE loop
begins, there's an additional step: each asset file contains a compiled entry
point address, which indicates where the first opcode will be located.

### Virtual Memory Addresses

Unlike other VMs, Google chose to embed the memory directly within the asset file,
requiring virtual memory addresses to point to an offset in that file. Unfortunately,
these addresses are encoded, so we need to decode them first to reveal the actual offset:

```python
def decode_address(enc_address: int, code_length: int) -> int:
    return ((enc_address ^ ~code_length) & 0xFFFFFFFF) % code_length
```

<details>

<title>Python API</title>

To parse and decode addresses directly from the file stream, a utility function
is defined in `VMContext`. Note that the offset you provide is **relative** by
default. To disable this behavior, set `rel=False`.

```python
>>> # parses u32 and decodes address at offset context.pc + 0x1234
>>> context.addr(0x1234)
# ...
```

</details>

### Entry Point

Each asset file contains an entry point address located at an offset derived
from an integer at position `+0x04`. As with previous steps, the file offset
storing the entry point address is also encoded using:

```python
a = context.u32(addr=0x04)
b01 = (~a & 0xFFFFFF8E) * -3 + (~a | 0xFFFFFF8E)
b02 = (a * 2) ^ 0xFFFFFF1C
entry_point = context.addr((b01 + b02) & 0xFFFFFFFF, rel=False)
```

### VM Instructions

Using the algorithms for decoding opcodes and addresses, we can begin reverse
engineering the instruction formats. Unfortunately, Google designed the bytecode
to hardcode the addresses of the next instructions. Specifically, they hardcode
two potential next instruction addresses, from which the pc will be set based
on a hash check. The hash used to choose between the `next_instruction_addr`
and the `fallback_addr` is the [FNV-1](https://en.wikipedia.org/wiki/Fowler-Noll-Vo_hash_function)
hash function. (How? Just google `0xcbf29ce484222325`).

Each instruction follows a compiled stack-based theme. Initially, all variables
on the stack are loaded (each instruction assumes a certain number of variables
are present).
For example, opcodes `0x41` and `0x58` allocate `0x18` bytes on
the heap using `malloc` and push the result onto the stack without loading
anything from it. Thus, there is no single generic instruction structure for
this VM. However, we can identify common elements to determine how many items
are taken from the stack and how many are pushed onto it.

```c
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

```c
typedef struct {
  addr_t a;                 // +0x0
  addr_t b;                 // +0x4
  insn_info_t info;         // +0x8
  addr_t c;                 // +0x22
} insn_0x05_t;
```

Opcode `0x05`, referred to as `VMOp_OR_Byte` in the Python API, performs a bitwise OR
operation on two bytes located at addresses $A$ and $B$. The result is stored at
address $C$.

Since each opcode is compiled and static, we can decompile the code directly without
needing to analyze low-level pcode instructions. The disassembled version of the first
asset file is listed below:
```asm
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

The same code can be expressed using C pseudocode:

```c
void *v0 = malloc(0x18);
void *v1 = malloc(0x18);
```

### Implementing a Disassembler & Decompiler

Given that the structure of each opcode is straightforward to identify by inspecting
the switch-case statements, implementing each instruction should be manageable. First,
we need to set up the simulated VM by creating a context:
```python
context = VMContext(bytecode)
```

Next, before we can implement the FDE (Fetch-Decode-Execute) loop, we need to set the
entry point. The `VMContext` includes a utility function that automatically extracts
the entry point address, so we can use that function:
```python
context.pc = context.entry_point
```

The FDE (Fetch-Decode-Execute) loop is quite straightforward:
```python
while not context.should_exit:
    # -- FETCH
    opcode   = context.current_opcode()
    context += 2    # skip opcode bytes
    # -- DECODE
    handler  = VMOpcode_Table.get(opcode)
    # -- EXECUTE
    handler(context)
```

Here, the handler is responsible for setting the next instuction address. To offer a
top-level interface for both decompiling and disassembling the bytecode, we use a
function called `interpret`. This function utilizes the opcode handlers from a
dictionary within the FDE loop:
```python
from pairipcore import interpret, gvm

bytecode = ...
interpret(bytecode, gvm.Decompiler or gvm.Disassembler, verbose=True)
```

#### Extending the Disassembler or Decompiler

The existing decompiler and disassembler are functional, but only include a small
subset of opcodes. You might want to add support for additional opcodes that are
not yet implemented. Since both `gvm.Decompiler` and `gvm.Disassembler` are
dictionaries, you can extend their functionality by adding your custom handler
functions to these dictionaries:
```python
from pairipcore import VMContext, gvm

def mydisassemblerhandler(context: VMContext) -> None:
    pass

def mydecompilerhandler(context, gvm.decompiler.VMDecompilerContext) -> None:
    pass

# Add your custom handlers to the dictionaries
gvm.Disassembler[0xDEAD] = mydisassemblerhandler
gvm.Decompiler[0xDEAD] = mydecompilerhandler

# call interpret as usual
```

### String encoding

Instead of embedding strings (or arrays) directly into the bytecode files, Google decided
to obfuscate them using a simple XOR mechanism. Unfortunately, only a few opcodes encode
the data and key addresses directly into their instruction data (`0x4B`, `0x4D` and `0x70`
confirmed).

To decode a string, we need two variables: the key address and the data array address.
Instructions don't store the data address directly but rather another address that points
to it (essentially a pointer to a pointer). The first two bytes at the key and data addresses
specify a portion of their length. The final length is calculated by XOR'ing these two
values - yeah, XOR again. The decoder might look something like this:
```python
pp_data = context.addr(...)
p_key   = context.addr(...)
p_data  = context.addr(pp_data)

length  = 2 + (context.u16(p_key) ^ context.u16(p_data))
result  = bytearray(length)
for i in range(length):
    result[i] = context.vm_code[p_data + i] ^ context.vm_code[p_key + (i & 0xFF)]
```

By running a quick opcode scan of `0x4B`, we can identify some static strings
encoded within the bytecode file. These strings typically refer to the native
libraries used within the application.
```c
const char *lVar0  = "lib/armeabi-v7a/libglog.so"                    ; // +0x1deb2
const char *lVar1  = "lib/x86/libgifimage.so"                        ; // +0x1df62
const char *lVar2  = "lib/x86/librrc_text.so"                        ; // +0x1f05e
const char *lVar3  = "lib/armeabi-v7a/libyoga.so"                    ; // +0x1f99a
const char *lVar4  = "lib/armeabi-v7a/libfbjni.so"                   ; // +0x20100
const char *lVar5  = "lib/x86/libfbjni.so"                           ; // +0x2034c
const char *lVar6  = "lib/x86_64/libreact_utils.so"                  ; // +0x20436
const char *lVar7  = "lib/x86_64/libreact_nativemodule_core.so"      ; // +0x2046c
const char *lVar8  = "lib/arm64-v8a/librrc_view.so"                  ; // +0x20554
// ...
```

> [!NOTE]
> The key appears to be the same for decoding all strings. However, the strings are
> not sequential; instead, they seem to be placed randomly (needs to be verified)
> throughout the file.

#### Heuristic String Scanning

Since we know the XOR key used to decode strings is always the same, we can compare
the keys across the asset files to decode the strings within them. **Surprisingly, the
decoding key remains consistent across all files!** Here it is:
```python
b'\xab\x16+\xc0/D7\xb6\x7fQ1\x8f9@\x13\x11*\xec8\xdd7\xdaO"_T\x97\x00\x1d;\xa6T`\
\xad\xbfP\x8c\x86\xfeg\xc9\xc2\xaf\xaf_\xbaq\xc1\x9a6\x1bq.\xb6C3\n\xa5\xe5\xea\
\xf9 Y\xf1t\x11\x13%\xf2\x87\xd8\xb6\x8e\xcd\xa8#\xb3o\xd8NR\xe8\xbe\xd9\xc1\xa0\
j\xc2(Vw\xd9C\xfc\x92k\x0c#\xf8\xa9h\xb8\xf7\xd4$\xac\xad-\x88W\x92\x8a\xb3y\xcd\
Ye\xd9\xab\xa8\xd1\x93\x87\x91o\xf5c\xeb\xa0\x05\xc7\xd4\xc6?\x80\xb9\xf5\xa3\xd0\
|\x7fO\n\'\xe1\xf5\xbe\x98\xb5\xd1\xd9P_lI\x18x\xa2\x16\xf8\xf7\xab\x03\xf0\xaf_\
\xe8\xf8\xf6\xce\xcc\r\xd2\xb3\xb4fO\xf2\xa9<\xd7\x0e\x04\x05\xa4\x85\xb5&\xcf\xbc\
\x16\xd3\xfe\x0b\xb8\xfa\xb1\xfb4\xf8\x16v\x92\x96\xe3\xee\x97\xf1\xc1\xad\x15\xe3\
\x0f\x18:^/\xfe\x14\x1a\xdd\x1b\xe9q\x11\xc8\xc3\xaa\xf2\xa0\xca"}\x91\xcd\xc8\x01\
_8H\xe9j\xbe\xf4\x1aB\xccm\xa2)\\\x1df\xb68'
```

While it may not look like a typical key, this allows us to decode more strings that
may be scattered throughout the files. A script is available to automate this scanning
process ([strings_scanner.py](tools/strings_scanner.py)). Currently, there are two
methods for identifying possible strings:

1. *length-based*: Each string starts with an encoded length value (`u16`), so we can
   scan the entire file for potential strings in increments of 2.
2. *address-based*: Some strings can be located by reading an address at the current
   position that points to the string's location.

Although these brute-force methods may result in some false positives, they can
effectively reveal strings:
```sh
python3 strings_scanner.py -in <bytecode> --length-based --address-based
# --- snip ---
conversationId
SWYItiQZA
HOUSE
SYSuZqEnqZo
secondary_button
ConversationTargetSelected(conversationTarget=
HtNnj
TRACK_USER_STEPS
soP
, selected=
NiqnbSk
Error in channel configureNotification ForegroundServiceStartNotAllowedException
FmgjECZFS
ExWObCGTTdQ
jjmfpr
com.google.android.gms.dynamite.IDynamiteLoaderV2
xesg
RESULT_BASELINE_PROFILE_NOT_FOUND
FRAGMENT_STARTED
lib/arm64-v8a/libreact_render_mapbuffer.so
# --- snip ---
```

### Play Integrity Protect VM (GVM) Opcode Table

Below is a table of all the opcodes identified so far. The names provided here are
based on their decompiled output, which can be found in the `src/_opcode_cases/`
directory. Some files already include their instruction structure, generated using
a small script (applicable only to cases of `vm_dispatch_0`).

| Value | Proposed Name | Disassembler | Decompiler | Function |
|:-----:|:--------------|:------------:|:----------:|:--------:|
| `0x00` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x01` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x02` |  | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x03` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x04` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x05` | `VMOpcode_OR_Byte` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x06` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x07` | `VMOpcode_RAssign_UInt` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x08` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x09` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x0A` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x0B` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x0C` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x0D` | `VMOpcode_RShift_SInt` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x0E` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x0F` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x10` | `VMOpcode_Compare_ULong` | [x] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x11` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x13` | `VMOpcode_LAssign_Byte` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x12` | `VMOpcode_LAssign_UInt` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x14` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x15` | `VMOpcode_LAssign_ULong` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x17` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x18` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x19` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x1A` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x1C` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x1B` | `VMOpcode_Compare_Double` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x1D` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x1E` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x1F` | `VMOpcode_Div_SInt` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x20` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x21` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x24` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x25` | `VMOpcode_Add_SInt` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x26` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x27` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x28` | `VMOpcode_FloatToInt` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x29` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x2A` | `VMOpcode_IntToFloat` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x2B` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x2C` |  | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x2D` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x2E` | `VMOpcode_LAssign_ULong2` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x2F` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x30` | `VMOpcode_CastInt` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x31` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x32` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x33` | `VMOpcode_NOP` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x34` | `VMOpcode_XOR_Byte` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x35` | `VMOpcode_NotEqZ_SInt` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x36` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x37` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x38` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x39` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x3A` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x3B` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x3C` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x3D` | `VMOpcode_Main` | [x] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x3E` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x40` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x41` | `VMOpcode_Malloc2` | [x] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x42` | `VMOpcode_Mul_Float` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x43` | `VMOpcode_Mul_Double` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x44` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x45` |  | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x47` | `VMOpcode_Add_ULong` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x48` | `VMOpcode_Add_Double` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x49` | `VMOpcode_Setup1` | [x] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x4A` | `VMOpcode_RAssign_SInt` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x4B` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x4C` | `VMOpcode_CastFP` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x4D` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x4E` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x4F` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x50` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x52` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x56` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x57` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x58` | `VMOpcode_Malloc1` | [x] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x59` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x5A` | `VMOpcode_Add_Float` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x5B` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x5C` |  | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x5D` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x5E` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x5F` | `VMOpcode_Compare_UInt` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x60` | `VMOpcode_RShift_SLong` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x63` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x64` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x65` | `VMOpcode_Not_ULong` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x66` | `VMOpcode_Div_Float` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x68` | `VMOpcode_Init1` | [x] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x69` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x6A` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x6B` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x6C` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x6D` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x6E` | `VMOpcode_LAssign_Short` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x6F` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x70` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x71` |  | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x72` |  | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x73` | `VMOpcode_And_UInt` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x74` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x75` | `VMOpcode_NOP1` | [x] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x76` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x77` | `VMOpcode_Mul_UInt` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x79` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x7A` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x7B` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x7D` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x7E` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x80` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x81` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x82` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x83` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x84` | `VMOpcode_CastInt1` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x85` | `VMOpcode_NotEqZ_UInt` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x86` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x87` | `VMOpcode_Compare_SInt` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x88` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x89` | `VMOpcode_SLongToULong` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x8A` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x8B` |  | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x8C` | `VMOpcode_Sub_UInt` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x8D` | `VMOpcode_RAssign_Short` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x8E` | `VMOpcode_Sub_SLong` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x90` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x93` | `VMOpcode_XOR_ULong` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x94` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x95` | `VMOpcode_Div_SLong` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x96` | `VMOpcode_RAssign_UInt1` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |
| `0x98` |  | [ ] | [ ] | [vm_dispatch_2](src/_vm_functions/vm_dispatch_2.c) |
| `0x99` |  | [ ] | [ ] | [vm_dispatch_1](src/_vm_functions/vm_dispatch_1.c) |
| `0x9A` | `VMOpcode_AddrToUInt` | [ ] | [ ] | [vm_dispatch_0](src/_vm_functions/vm_dispatch_0.c) |

### Play Integrity Protect VM (GVM) Opcode Reference

Most of the structures for `vm_dispatch_0` and `vm_dispatch_2` have been recreated based on
their decompiled source code. These structures can be found in [_vm_ops.h](include/gvm/_vm_ops.h).
The type definitions might include fields that are not used within the implementation but
are present within the instruction format. Additionally, these types are named according
to their corresponding opcodes. For example, the type `insn_0x21_t` corresponds to opcode `0x21`.

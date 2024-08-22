# Strings

Instead of embedding strings (or arrays) directly into the bytecode files, Google decided
to obfuscate them using a simple XOR mechanism. Unfortunately, only a few opcodes encode
the data and key addresses directly into their instruction data (`0x4B`, `0x4D` and `0x70`
confirmed).

To decode a string, we need two variables: the key address and the data array address.
Instructions don't store the data address directly but rather another address that points
to it (essentially a pointer to a pointer). The first two bytes at the key and data addresses
specify a portion of their length. The final length is calculated by XOR'ing these two
values - yeah, XOR again. The decoder might look something like this [^mn4]:
```{code-block} python
pp_data = context.addr(...)
p_key   = context.addr(...)
p_data  = context.addr(pp_data)

length  = 2 + (context.u16(p_key) ^ context.u16(p_data))
result  = bytearray(length)
for i in range(length):
    result[i] = context.vm_code[p_data + i] ^ context.vm_code[p_key + (i & 0xFF)]
```

[^mn4]: {-} The function responsible for decoding strings is also decoding all other kinds of
arrays. The array type seems to be endoded within the length value - encoding remains unknown.

By running a quick opcode scan of `0x4B`, we can identify some static strings
encoded within the bytecode file. These strings typically refer to the native
libraries used within the application.
```{code-block} c
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

```{note}
The key appears to be the same for decoding all strings. However, the strings are
not sequential; instead, they seem to be placed randomly (needs to be verified)
throughout the file.
```

## Heuristic String Scanning

Since we know the XOR key used to decode strings is always the same, we can compare
the keys across the asset files to decode the strings within them. **Surprisingly, the
decoding key remains consistent across all files!** Here it is:
```{code-block} python
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
process (`tools/strings_scanner.py`). Currently, there are two methods for identifying
possible strings:

1. *length-based*: Each string starts with an encoded length value (`u16`), so we can
   scan the entire file for potential strings in increments of 2.
2. *address-based*: Some strings can be located by reading an address at the current
   position that points to the string's location.

Although these brute-force methods may result in some false positives, they can
effectively reveal strings:

```{code-block} text
:caption: Output of `python3 strings_scanner.py -in <bytecode> --length-based --address-based`

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

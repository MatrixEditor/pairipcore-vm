# Overview

Google offers an [automatic integrity protection](https://developer.android.com/google/play/integrity)
feature for apps through Play Integrity Protect. The API for this protection includes
additional classes located in the `com/pairip/` package, which are responsible for
verifying the app's integrity.

```{code-block} java
:caption: Java-Side of pairipcore

/* ... */
static {
    System.loadLibrary("pairipcore");
}

public static native Object executeVM(byte[] vmCode, Object[] args);
/* ... */
```


To prevent easy circumvention of integrity checks that rely solely on Java code, a native
library is employed . This library incorporates advanced anti-tampering
techniques. You may notice that certain strings in the target APK are not initialized
correctly, and some classes invoke `VMRunner.executeVM` instead of executing regular Java
code[^mn1]. Google decided to virtualize Java code execution in certain classes to prevent
reverse engineering and tampering with the app. Additionally, important strings will be
initialized at runtime to hide their inital value.

[^mn1]: {-} That's right, Google created another VM on top of the Dalvik VM

The bytecode used by the custom VM is stored within the assets directory of each app. To
understand the execution flow of these code files, we need to address the following aspects:

1. Locate the VM's Dispatcher Function: Identify the function that serves as the entry point
   for analyzing the implemented instruction set.
2. Write a disassmbler or decompiler based on the findings of step 1
3. Generate equivalent Java code based on the disassembler to get rid of these bytecode
   files.

The following chapters will explore the structure of the custom VM, its instruction set, and
the methods to analyze them. Additionally, we will discuss a potential decompiler and provide
a partial implementation.

Before proceeding, we must first locate the native counterpart of `executeVM`. By examining the
exports of the native library, we observe that no native function starting with `Java_` is
defined. This suggests that the function is not dynamically linked but is instead linked statically
via `JNIEnv->RegisterNatives`.

If we scroll down to the very end of `JNI_OnLoad`, we can see where our native function
is registered. (Note that the function name was changed here)
```{code-block} c

/* ... */
local_80.name = (char *)((ulong)&local_e0 | 1);
if ((local_e0 & 1) != 0) {
  local_80.name = (char *)local_d0;
}
local_80.signature = (char *)((ulong)&local_f8 | 1);
if ((local_f8 & 1) != 0) {
  local_80.signature = local_e8;
}
local_80.fnPtr = Java_com_pairip_VMRunner_executeVM;
(*(*ppJVar18)->RegisterNatives)(ppJVar18,local_c0,&local_80,1);
/* ... */
```

With that accomplished, we can now attempt to reverse the inner workings of
the VM.

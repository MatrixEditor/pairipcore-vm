# Reverse Engineering Google's Play Integrity Protect VM Obfuscation

Google offers an [automatic integrity protection](https://developer.android.com/google/play/integrity)
feature for apps through Play Integrity Protect. [Previous resarch](https://github.com/Solaree/pairipcore)
has shown that there are plenty of anti-debugger and anti-emulation techniques used. While
the previous research lays the groundwork for this one, it does not
describe the VM based obfuscation technique employed by Google in
detail.

```{warning}
The information presented here is for educational purposes only!
```

This collection of documents serves as a resource for understanding the VM-based obfuscation
used by Google. It also includes API documentation for the accompanying Python package available
in the repository.

```{toctree}
:maxdepth: 2
:caption: Reversing

introduction
cfg
instructions
strings
automation
```

```{toctree}
:maxdepth: 2
:caption: Python API

pyapi/context
pyapi/insn
pyapi/strings
pyapi/decompiler
```

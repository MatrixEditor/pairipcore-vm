# Design Guide

To effectively decompile the bytecode, it is crucial to understand the architecture of
the underlying VM and its instruction format. Since the structure of each opcode can be
straightforwardly identified by analyzing the switch-case statements, implementing the
handling for each instruction should be relatively manageable.

This chapter provides a comprehensive guide on how to use the implemented decompiler and
offers ways on extending its functionality.

```{toctree}
:maxdepth: 2
:caption: Design Specifications

insn_format
```

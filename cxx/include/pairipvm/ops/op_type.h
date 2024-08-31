#pragma once

#define OP_IMPL__HEAD                                                          \
  static pairipvm::vm_error_code impl(pairipvm::basic_vm& t_vm,                \
                                      const pairipvm::basic_insn& t_insn,      \
                                      const pairipvm::insn_format& t_format)

#define OP_RUN__HEAD(...)                                                      \
  static inline pairipvm::vm_error_code run(                                   \
    pairipvm::basic_vm& t_vm,                                                  \
    const pairipvm::basic_insn& t_insn,                                        \
    const pairipvm::insn_format& t_format,                                     \
    __VA_ARGS__)

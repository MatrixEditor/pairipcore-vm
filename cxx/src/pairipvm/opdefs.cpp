#include "pairipvm/pairipvm.h"

#include "pairipvm_opcode_table.inc"

#define VM_OPCODE_CASE(x)                                                      \
  case x: {                                                                    \
    pairipvm::insn_format format(x##__FMT);                                    \
    pairipvm::basic_insn insn(t_opcode, t_vm.context(), format);               \
    result = x##__IMPL::impl(t_vm, insn, format);                              \
    break;                                                                     \
  }

pairipvm::vm_error_code
pairipvm::ops::execute_op(pairipvm::basic_vm& t_vm, const uint16_t t_opcode)
{
  vm_error_code result;
  switch (t_opcode) {
#ifdef VM_OP_ADD_INT
    VM_OPCODE_CASE(VM_OP_ADD_INT);
#endif

    default: {
      result = pairipvm::VM_RESULT_NO_HANDLER;
      break;
    }
  }

  return result;
}

#undef VM_OPCODE_CASE

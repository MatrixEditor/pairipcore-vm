#pragma once

#include <cassert>
#include <cstddef>
#include <type_traits>

#include "pairipvm/types.h"
#include "pairipvm/vm.h"
#include "pairipvm/ops/op_type.h"

namespace pairipvm::ops {

template<typename BaseTy,
         typename Ty,
         const char Op1 = pairipvm::A,
         const char Store = pairipvm::B,
         typename StoreTy = Ty>
struct unary_op
{
  using Operand1Ty = Ty;
  using StorageTy = StoreTy;
  using CompactFormatID = compact_formatid<2, Store>;

  OP_IMPL__HEAD
  {
    Operand1Ty operand1;
    StorageTy result = (StorageTy)0;
    pairipvm::addr_t operand1_addr, store_addr;

    operand1_addr = INSN_GET_VAR_OR_FAIL(operand1_addr, t_insn, Op1);
    store_addr = INSN_GET_VAR_OR_FAIL(store_addr, t_insn, Store);

    operand1 = VM_CGET(t_vm, Operand1Ty, operand1_addr);
    pairipvm::vm_error_code code =
      BaseTy::run(t_vm, t_insn, t_format, &operand1, &result);
    if (code != VM_RESULT_CONTINUE) {
      return code;
    }

    VM_SET(t_vm, store_addr, StorageTy, &result);
    return t_vm.vjump(t_insn);
  }
};

#define UNARY_OP_IMPL(name, ...)                                               \
  template<typename Ty,                                                        \
           const char Op1 = pairipvm::A,                                       \
           const char Store = pairipvm::B>                                     \
  struct name : unary_op<name<Ty, Op1, Store>, Ty, Op1, Store>                 \
  {                                                                            \
    OP_RUN__HEAD(Ty* op1, Ty* result)                                          \
    {                                                                          \
      __VA_ARGS__;                                                             \
      return VM_RESULT_CONTINUE;                                               \
    }                                                                          \
  }

} // namespace pairipvm::ops

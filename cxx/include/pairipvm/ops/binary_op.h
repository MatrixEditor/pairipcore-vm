#pragma once

#include <type_traits>

#include "pairipvm/context.h"
#include "pairipvm/insn.h"
#include "pairipvm/types.h"
#include "pairipvm/vm.h"
#include "pairipvm/ops/op_type.h"

namespace pairipvm::ops {

template<typename BaseTy,
         typename Ty,
         const char Op1 = pairipvm::A,
         const char Op2 = pairipvm::B,
         const char Store = pairipvm::C,
         typename Op2Ty = Ty,
         typename StoreTy = Ty>
struct bin_op
{
  using Operand1Ty = Ty;
  using Operand2Ty = Op2Ty;
  using StorageTy = StoreTy;
  using CompactFormatID = compact_formatid<3, Store>;

  OP_IMPL__HEAD
  {
    Operand1Ty operand1;
    Operand2Ty operand2;
    StorageTy result = (StorageTy)0;
    pairipvm::addr_t operand1_addr, operand2_addr, store_addr;

    operand1_addr = INSN_GET_VAR_OR_FAIL(operand1_addr, t_insn, Op1);
    operand2_addr = INSN_GET_VAR_OR_FAIL(operand2_addr, t_insn, Op2);
    store_addr = INSN_GET_VAR_OR_FAIL(store_addr, t_insn, Store);

    operand1 = VM_CGET(t_vm, Operand1Ty, operand1_addr);
    operand2 = VM_CGET(t_vm, Operand2Ty, operand2_addr);

    pairipvm::vm_error_code code =
      BaseTy::run(t_vm, t_insn, t_format, &operand1, &operand2, &result);
    if (code != VM_RESULT_CONTINUE) {
      return code;
    }

    VM_SET(t_vm, store_addr, StorageTy, &result);
    return t_vm.vjump(t_insn);
  }
};

#define BIN_OP__IMPL(ty1, ty2, store_ty, ...)                                  \
  OP_RUN__HEAD(ty1* op1, ty2* op2, store_ty* result)                           \
  {                                                                            \
    __VA_ARGS__;                                                               \
    return VM_RESULT_CONTINUE;                                                 \
  }

#define BIN_OP_DEF(name, ...)                                                  \
  template<typename Ty,                                                        \
           const char Op1 = pairipvm::A,                                       \
           const char Op2 = pairipvm::B,                                       \
           const char Store = pairipvm::C>                                     \
  struct name : bin_op<name<Ty, Op1, Op2, Store>, Ty, Op1, Op2, Store>         \
  {                                                                            \
    BIN_OP__IMPL(Ty, Ty, Ty, __VA_ARGS__);                                     \
  }

#define BIN_OP_DEF_STORE(name, store_ty, ...)                                  \
  template<typename Ty,                                                        \
           const char Op1 = pairipvm::A,                                       \
           const char Op2 = pairipvm::B,                                       \
           const char Store = pairipvm::C>                                     \
  struct name                                                                  \
    : bin_op<name<Ty, Op1, Op2, Store>, Ty, Op1, Op2, Store, Ty, store_ty>     \
  {                                                                            \
    BIN_OP__IMPL(Ty, Ty, store_ty, __VA_ARGS__);                               \
  }

#define BIN_OP_DEF_TY(name, ty, ...)                                           \
  template<const char Op1 = pairipvm::A,                                       \
           const char Op2 = pairipvm::B,                                       \
           const char Store = pairipvm::C>                                     \
  struct name : bin_op<name<Op1, Op2, Store>, ty, Op1, Op2, Store>             \
  {                                                                            \
    BIN_OP__IMPL(ty, ty, ty, __VA_ARGS__);                                     \
  }

}

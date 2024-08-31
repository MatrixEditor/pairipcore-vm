#pragma once

#include <cstddef>
#include <cstdint>
#include <cstring>

#include "pairipvm/context.h"
#include "pairipvm/insn.h"
#include "pairipvm/ops/op_type.h"
#include "pairipvm/ops/binary_op.h"
#include "pairipvm/types.h"

namespace pairipvm::ops {

template<const char Src = pairipvm::A,
         const char Dst = pairipvm::B,
         const char Len = pairipvm::C>
struct memmove_op
{
  using CompactFormatID = compact_formatid<3, Dst>;

  OP_IMPL__HEAD
  {
    uint16_t l_len;
    void *l_src, *l_dst;
    pairipvm::addr_t a_src, a_dst, a_len;

    a_src = INSN_GET_VAR_OR_FAIL(a_src, t_insn, Src);
    a_dst = INSN_GET_VAR_OR_FAIL(a_dst, t_insn, Dst);
    a_len = INSN_GET_VAR_OR_FAIL(a_len, t_insn, Len);

    l_len = VM_CGET(t_vm, uint16_t, a_len);
    l_src = (void*)VM_GETP(t_vm, a_src);
    l_dst = (void*)VM_GETP(t_vm, a_dst);

    std::memmove(l_dst, l_src, (size_t)l_len);
    return pairipvm::VM_RESULT_CONTINUE;
  };
};

} // namespace pairipvm::ops

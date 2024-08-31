#pragma once

#include <cstdint>
#include <cmath>

#include "pairipvm/types.h"
#include "pairipvm/ops/binary_op.h"
#include "pairipvm/ops/unary_op.h"
#include "pairipvm/ops/compound_op.h"
#include "pairipvm/ops/memory_ops.h"

namespace pairipvm::ops {

BIN_OP_DEF(or_op, { *result = *op1 | *op2; });
BIN_OP_DEF(and_op, { *result = *op1 & *op2; });
BIN_OP_DEF(xor_op, { *result = *op1 ^ *op2; });
BIN_OP_DEF(subtract_op, { *result = *op1 - *op2; });
BIN_OP_DEF(add_op, { *result = *op1 + *op2; });
BIN_OP_DEF(multiply_op, { *result = *op1 * *op2; });
BIN_OP_DEF(modulo_op, { *result = *op1 % *op2; });
BIN_OP_DEF(divide_op, { *result = *op1 / *op2; });
BIN_OP_DEF_STORE(compare_op, int32_t, {
  *result = ((*op1 < *op2) - 1) + (int32_t)(*op1 < *op2);
});
BIN_OP_DEF_TY(fmodf_op, float, { *result = std::fmodf(*op1, *op2); });

UNARY_OP_IMPL(inc_op, { *result = *op1 + 1; });
UNARY_OP_IMPL(is_zero_op, { *result = *op1 == 0; });
UNARY_OP_IMPL(assign_op, { *result = *op1; });

template<typename Ty>
using lassign_op = assign_op<Ty, pairipvm::A, pairipvm::B>;

template<typename Ty>
using rassign_op = assign_op<Ty, pairipvm::B, pairipvm::A>;

} // namespace pairipvm::ops

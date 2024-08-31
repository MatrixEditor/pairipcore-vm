#pragma once

#include "pairipvm/context.h"
#include "pairipvm/insn.h"

// ----------------------------------------------------------------------------
// FNV-1 Hash calculation
// ----------------------------------------------------------------------------
namespace pairipvm::hash {
static constexpr const uint64_t FNV_PRIME = 0x100000001B3;
static constexpr const uint64_t FNV_BASE = 0xCBF29CE484222325;

inline const uint64_t
fnv1(const char* pData, const uint16_t dataLength)
{
  uint64_t hash = FNV_BASE;
  for (uint32_t i = 0; i < dataLength; i++) {
    hash = hash * FNV_PRIME;
    hash ^= pData[i];
  }
  return hash;
}

inline const bool
verify(std::shared_ptr<basic_context> context, const basic_insn& insn)
{
  uint64_t l_hash_value = fnv1(insn.hash_data(), insn.hash_data_len());
  uint64_t l_xor_val =
    // Note the use of cget here, because the address is an absolute
    // offset.
    *context->cget<uint32_t>(insn.xor_val_addr()) ^ 0xFFFFFFFF00000000;
  return (l_hash_value ^ l_xor_val) == (uint64_t)insn.hash();
}

} // namespace hash

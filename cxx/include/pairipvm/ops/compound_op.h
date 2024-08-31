#pragma once

#include <cstddef>
#include <cstdint>

#include "pairipvm/insn.h"
#include "pairipvm/ops/op_type.h"
#include "pairipvm/types.h"
#include "pairipvm/vm.h"

namespace pairipvm::ops {

// ----------------------------------------------------------------------------
// Casting operations
// ----------------------------------------------------------------------------

#define CAST_CASE(id_, src_ty, dst_ty)                                         \
  case id_:                                                                    \
    VM_SET(t_vm, a_store, dst_ty, (dst_ty)(*(src_ty*)t_src));                  \
    break

template<typename BaseTy,
         const char Src = pairipvm::A,
         const char Store = pairipvm::B,
         const char SrcSize = pairipvm::C,
         const char StoreSize = pairipvm::D>
struct cast_op
{
  using CompactFormatID = compact_formatid<4, Store>;

  OP_IMPL__HEAD
  {
    pairipvm::addr_t a_src, a_store, a_src_size, a_dst_size;
    void* l_src = nullptr;
    uint8_t l_src_size, l_dst_size;

    a_src = INSN_GET_VAR_OR_FAIL(a_src, t_insn, Src);
    a_store = INSN_GET_VAR_OR_FAIL(a_store, t_insn, Store);
    a_src_size = INSN_GET_VAR_OR_FAIL(a_src_size, t_insn, SrcSize);
    a_dst_size = INSN_GET_VAR_OR_FAIL(a_dst_size, t_insn, StoreSize);

    l_src = (void*)VM_GETP(t_vm, a_src);
    l_src_size = VM_CGET(t_vm, uint8_t, a_src_size);
    l_dst_size = VM_CGET(t_vm, uint8_t, a_dst_size);

    vm_error_code error = BaseTy::run(t_vm,
                                      t_insn,
                                      t_format,
                                      l_src,
                                      a_store,
                                      ((uint16_t)l_src_size) << 8 | l_dst_size);
    if (error != pairipvm::VM_RESULT_CONTINUE) {
      return error;
    }
    return t_vm.jump(t_insn, true);
  }
};

template<const char Src = pairipvm::A,
         const char Store = pairipvm::B,
         const char SrcSize = pairipvm::C,
         const char StoreSize = pairipvm::D>
struct cast_int_op
  : cast_op<cast_int_op<Src, Store, SrcSize, StoreSize>,
            Src,
            Store,
            SrcSize,
            StoreSize>
{
  OP_RUN__HEAD(void* t_src, pairipvm::addr_t a_store, uint16_t typeid_)
  {
    switch (typeid_) {
      CAST_CASE(0x101, uint8_t, uint8_t);
      CAST_CASE(0x102, uint8_t, uint16_t);
      CAST_CASE(0x104, uint8_t, uint32_t);
      CAST_CASE(0x108, uint8_t, uint64_t);
      CAST_CASE(0x201, uint16_t, uint8_t);
      CAST_CASE(0x202, uint16_t, uint16_t);
      CAST_CASE(0x204, uint16_t, uint32_t);
      CAST_CASE(0x208, uint16_t, uint64_t);
      CAST_CASE(0x401, uint32_t, uint8_t);
      CAST_CASE(0x402, uint32_t, uint16_t);
      CAST_CASE(0x404, uint32_t, uint32_t);
      CAST_CASE(0x408, uint32_t, uint64_t);
      CAST_CASE(0x801, uint64_t, uint8_t);
      CAST_CASE(0x802, uint64_t, uint16_t);
      CAST_CASE(0x804, uint64_t, uint32_t);
      CAST_CASE(0x808, uint64_t, uint64_t);
      default:
        break;
    };
    return pairipvm::VM_RESULT_CONTINUE;
  }
};

template<const char Src = pairipvm::A,
         const char Store = pairipvm::B,
         const char SrcSize = pairipvm::C,
         const char StoreSize = pairipvm::D>
struct float_to_int_op
  : cast_op<float_to_int_op<Src, Store, SrcSize, StoreSize>,
            Src,
            Store,
            SrcSize,
            StoreSize>
{
  OP_RUN__HEAD(void* t_src, pairipvm::addr_t a_store, uint16_t typeid_)
  {
    switch (typeid_) {
      CAST_CASE(0x401, float, uint8_t);
      CAST_CASE(0x402, float, uint16_t);
      CAST_CASE(0x404, float, uint32_t);
      CAST_CASE(0x408, float, uint64_t);
      CAST_CASE(0x801, double, uint8_t);
      CAST_CASE(0x802, double, uint16_t);
      CAST_CASE(0x804, double, uint32_t);
      CAST_CASE(0x808, double, uint64_t);
      default:
        break;
    };
    return pairipvm::VM_RESULT_CONTINUE;
  }
};

template<const char Src = pairipvm::A,
         const char Store = pairipvm::B,
         const char SrcSize = pairipvm::C,
         const char StoreSize = pairipvm::D>
struct int_to_float_op
  : cast_op<int_to_float_op<Src, Store, SrcSize, StoreSize>,
            Src,
            Store,
            SrcSize,
            StoreSize>
{
  OP_RUN__HEAD(void* t_src, pairipvm::addr_t a_store, uint16_t typeid_)
  {
    switch (typeid_) {
      CAST_CASE(0x104, uint8_t, float);
      CAST_CASE(0x204, uint16_t, float);
      CAST_CASE(0x404, uint32_t, float);
      CAST_CASE(0x804, uint64_t, float);
      CAST_CASE(0x108, uint8_t, double);
      CAST_CASE(0x208, uint16_t, double);
      CAST_CASE(0x408, uint32_t, double);
      CAST_CASE(0x808, uint64_t, double);
      default:
        break;
    };
    return pairipvm::VM_RESULT_CONTINUE;
  }
};

#undef CAST_CASE

} // namespace pairipvm::ops

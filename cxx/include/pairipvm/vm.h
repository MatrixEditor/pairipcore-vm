#pragma once

#include <memory>
#include <stdexcept>
#include <ios>
#include <istream>

#include "pairipvm/types.h"
#include "pairipvm/context.h"
#include "pairipvm/insn.h"

namespace pairipvm {

namespace ops {
vm_error_code
execute_op(basic_vm& t_vm, const uint16_t t_opcode);
}

#define VM_CRGET(vm, ty, addr) (*((vm).context())->crget<ty>((addr)))
#define VM_CGET(vm, ty, addr) (*((vm).context())->cget<ty>((addr)))
#define VM_GETP(vm, addr) ((vm).context()->getp((addr)))
#define VM_SET(vm, addr, ty, val) (vm).context()->set<ty>((addr), (val))

// ----------------------------------------------------------------------------
// VMHandler
// ----------------------------------------------------------------------------
struct vm_op_handler
{
  const char* m_fmtid;
  vm_op m_op;
};

struct vm_options
{
  vm_opcode_decode m_opcode_decode;
  vm_hash_verify m_hash_verify;
  vm_op_callback m_callback;
  void* m_user_data;
};

// ----------------------------------------------------------------------------
// VM
// ----------------------------------------------------------------------------
class basic_vm final
{
private:
  std::shared_ptr<basic_context> m_context;
  vm_options m_options;

public:
  basic_vm(std::string&& t_bytecode, const vm_options& t_options);
  basic_vm(const std::string& t_bytecode, const vm_options& t_options);
  basic_vm(std::shared_ptr<basic_context> t_context,
           const vm_options& t_options);

  inline std::shared_ptr<basic_context> context() { return this->m_context; }
  inline const std::shared_ptr<basic_context> context() const
  {
    return this->m_context;
  }
  inline const vm_options& options() { return this->m_options; }

public:
  vm_error_code jump(const basic_insn& insn, const bool verify);
  vm_error_code execute();

  static std::unique_ptr<basic_vm> from_stream(std::istream& t_input,
                                               const vm_options& t_options);

public:
  inline const uint16_t current_opcode() const
  {
    if (!m_options.m_opcode_decode) {
      throw std::invalid_argument("Opcode decoder is NULL!");
    }
    return m_options.m_opcode_decode(*m_context->cget<uint16_t>());
  }

  inline vm_error_code vjump(const basic_insn& insn)
  {
    return jump(insn, true);
  }
};

} // namespace pairipvm

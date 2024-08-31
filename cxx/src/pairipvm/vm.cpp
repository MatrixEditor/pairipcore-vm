#include "pairipvm/vm.h"
#include "pairipvm/types.h"

// ----------------------------------------------------------------------------
// VM
// ----------------------------------------------------------------------------
pairipvm::basic_vm::basic_vm(std::string&& t_bytecode,
                             const pairipvm::vm_options& t_options)
  : m_context(std::make_shared<pairipvm::basic_context>(std::move(t_bytecode)))
  , m_options(t_options) {};

pairipvm::basic_vm::basic_vm(const std::string& t_bytecode,
                             const pairipvm::vm_options& t_options)
  : m_context(std::make_shared<pairipvm::basic_context>(t_bytecode))
  , m_options(t_options) {};

pairipvm::basic_vm::basic_vm(std::shared_ptr<pairipvm::basic_context> t_context,
                             const pairipvm::vm_options& t_options)
  : m_context{ t_context }
  , m_options(t_options) {};

std::unique_ptr<pairipvm::basic_vm>
pairipvm::basic_vm::from_stream(std::istream& t_input,
                                const pairipvm::vm_options& t_options)
{
  t_input.seekg(0, std::ios::end);
  uint32_t codeSize = t_input.tellg();
  t_input.seekg(0);

  std::string code(codeSize, '\0');
  if (!t_input.read(&code[0], codeSize)) {
    return nullptr;
  }
  return std::make_unique<pairipvm::basic_vm>(std::move(code), t_options);
}

pairipvm::vm_error_code
pairipvm::basic_vm::jump(const pairipvm::basic_insn& insn, const bool verify)
{
  if (!m_options.m_hash_verify) {
    throw std::invalid_argument("Hash verifier is NULL!");
  }

  addr_t next = insn.next();
  if (verify && !m_options.m_hash_verify(m_context, insn)) {
    next = insn.fallback();
  }
  m_context->setvip(next);
  return VM_RESULT_CONTINUE;
}

pairipvm::vm_error_code
pairipvm::basic_vm::execute()
{
  // simple fetch-decode-execute loop
  vm_error_code error = VM_RESULT_SUCCESS;
  while (true) {
    uint16_t l_opcode = current_opcode();

    if (m_options.m_callback) {
      error = m_options.m_callback(*this, l_opcode);
    } else {
      error = pairipvm::ops::execute_op(*this, l_opcode);
      // error = pairipvm::ops::execute(*this, l_opcode);
      error = VM_RESULT_NO_HANDLER;
    }
    if (error != VM_RESULT_CONTINUE) {
      break;
    }
  };
  return error;
}

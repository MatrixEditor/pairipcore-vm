#include "pairipvm/insn.h"

// ----------------------------------------------------------------------------
// Format ID
// ----------------------------------------------------------------------------
pairipvm::insn_format::insn_format(const char* t_fmtid)
{
  this->m_stack = 0;
  this->m_extra = 0;
  this->m_store = 0;
  this->m_info_begin = 0;
  if (t_fmtid) {
    if (!std::isdigit(*t_fmtid)) {
      throw std::invalid_argument("Expected number in formatID at offset 0!");
    }
    if (!std::isdigit(t_fmtid[1])) {
      throw std::invalid_argument("Expected number in formatID at offset 1!");
    }
    if (!std::isalpha(t_fmtid[2])) {
      throw std::invalid_argument("Expected a letter in formatID at offset 2!");
    }
    this->m_stack = (uint32_t)(*t_fmtid - 48);
    this->m_extra = (uint32_t)(t_fmtid[1] - 48);
    this->m_info_begin = 4 * this->m_stack;
    if (t_fmtid[2] != 'x' && t_fmtid[2] != 'z') {
      // An additional special letter 'z' is used to indicate that no
      // additional data is stored in memory.
      this->m_store = t_fmtid[2];
    }
  }
}

const int32_t
pairipvm::insn_format::operator[](const char t_var_name) const
{
  uint32_t i = ((uint32_t)t_var_name) - (std::isupper(t_var_name) ? 65 : 97);
  if (i < 0) {
    return -1;
  }

  if (i > countv()) {
    return -1;
  }
  int32_t pos = i > stackv() ? infobeg() : 0;
  pos += 4 * (i > stackv() ? i - stackv() : i);
  return pos;
}

// ----------------------------------------------------------------------------
// Instruction
// ----------------------------------------------------------------------------
pairipvm::basic_insn::basic_insn(const uint16_t t_opcode,
                                 std::shared_ptr<basic_context> context,
                                 const insn_format& format)
{
  // setup intruction info
  this->m_opcode = t_opcode;
  this->m_xor_value = context->raddr(format.infobeg());
  this->m_hash = *context->crget<int64_t>(format.infobeg() + 0x04);
  this->m_hash_data = context->cgetp(context->raddr(format.infobeg() + 0x0C));
  this->m_hash_data_len = *context->crget<uint16_t>(format.infobeg() + 0x10);
  this->m_next = context->raddr(format.infobeg() + 0x12);
  this->m_fallback = context->raddr(format.infobeg() + 0x16);
  // collect variables
  this->m_vars =
    std::vector<pairipvm::addr_t>(format.countv(), pairipvm::nulladdr);
  for (uint32_t i = 0; i < format.countv(); i++) {
    m_vars.push_back(context->raddr(format[(char)(65 + i)]));
  }
}

const pairipvm::addr_t
pairipvm::basic_insn::operator[](const char t_var_name) const

{
  uint32_t pos = ((uint32_t)t_var_name) - (std::isupper(t_var_name) ? 65 : 97);
  if (pos < 0 || pos >= m_vars.size()) {
    return pairipvm::nulladdr;
  }
  return m_vars[pos];
}

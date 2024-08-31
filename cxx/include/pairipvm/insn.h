#pragma once

#include <vector>

#include "pairipvm/types.h"
#include "pairipvm/context.h"

namespace pairipvm {

// ----------------------------------------------------------------------------
// Format ID
// ----------------------------------------------------------------------------
///  Format IDs typically consist of three characters: two digits followed
///  by a letter.
///
///  - The first digit represents the number of variables taken from the
///    compiled stack.
///  - The second digit represents the number of additional variables that
///    must be loaded.
///  - The final letter indicates which variable stores the destination
///  address.
///    This address is where the result of the operation will be stored, if
///    applicable.
///
///  For example, the format "20a" indicates:
///  - Two variables are read from the compiled stack.
///  - No extra variables are loaded.
///  - The operation's result is stored in variable 'a'.
///
///  The total length of an instruction can be calculated by adding the size
///  of the instruction info structure to the size required for the
///  variables:
///    size := <info-size> + ( <var-count> * 4 )
///
///  Note: An additional special letter 'z' is used to indicate that no
///  additional data is stored in memory.
class insn_format final
{
private:
  uint32_t m_info_begin;
  uint32_t m_stack;
  uint32_t m_extra;
  char m_store;

public:
  insn_format(std::string& t_fmtid)
    : insn_format(t_fmtid.c_str()) {};
  insn_format(const char* t_fmtid);

public:
  const inline uint32_t stackv() const { return this->m_stack; }
  const inline uint32_t extrav() const { return this->m_extra; }
  const inline char storev() const { return this->m_store; }
  const inline uint32_t infobeg() const { return this->m_info_begin; }
  const inline uint32_t countv() const { return this->m_stack + this->m_extra; }

public:
  const int32_t operator[](const char t_var_name) const;
};

// ----------------------------------------------------------------------------
// Instruction
// ----------------------------------------------------------------------------

#define INSN_GET_VAR(insn, name) (insn)[(name)]
#define INSN_GET_VAR_OR_FAIL(dst, insn, name)                                  \
  INSN_GET_VAR(insn, name);                                                    \
  if ((dst) == pairipvm::nulladdr) {                                           \
    return pairipvm::VM_RESULT_INVALID_ADDRESS;                                \
  }

class basic_insn final
{
private:
  using Variables = std::vector<addr_t>;

private:
  // Organizes variables
  uint16_t m_opcode;
  Variables m_vars;
  addr_t m_next;
  addr_t m_fallback;
  int64_t m_hash;
  const char* m_hash_data;
  uint16_t m_hash_data_len;
  addr_t m_xor_value;

public:
  basic_insn(const uint16_t t_opcode,
             std::shared_ptr<basic_context> context,
             const insn_format& format);

  const inline addr_t next() const { return this->m_next; }
  const inline addr_t fallback() const { return this->m_fallback; }
  const inline int64_t hash() const { return this->m_hash; }
  const inline char* hash_data() const { return this->m_hash_data; }
  const inline uint16_t hash_data_len() const { return this->m_hash_data_len; }
  const inline addr_t xor_val_addr() const { return this->m_xor_value; }

public:
  const addr_t operator[](const char varName) const;
};

template<const size_t N, const char Store = 'z'>
struct compact_formatid
{
  static constexpr const char value[3] = { (char)(N + 48),
                                           (char)(((int)Store) + 32),
                                           '\0' };
};

template<const size_t S, const size_t E, const char Store = 'x'>
struct qualified_formatid
{
  static constexpr const char value[4] = { (char)(S + 48),
                                           (char)(E + 48),
                                           Store,
                                           '\0' };
};

} // namespace pairipvm

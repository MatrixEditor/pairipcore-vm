#pragma once

#include <cstdint>
#include <ios>
#include <string>
#include <sys/types.h>

#include "pairipvm/types.h"

namespace pairipvm {

// ----------------------------------------------------------------------------
// VMContext
// ----------------------------------------------------------------------------
class basic_context final
{
private:
  using OffsetDir = std::ios::seekdir;

  std::string m_code;
  uint32_t m_code_size;
  uint32_t m_vip;

public:
  basic_context(std::string&& t_bytecode)
    : m_code{ t_bytecode }
    , m_code_size(t_bytecode.length())
    , m_vip(0) {};
  basic_context(const std::string& t_bytecode)
    : m_code{ t_bytecode }
    , m_code_size(t_bytecode.length())
    , m_vip(0) {};

public:
  inline const addr_t vip() const { return this->m_vip; }
  inline const uint32_t size() const { return this->m_code_size; }
  inline char* getp(const addr_t t_addr) noexcept
  {
    return t_addr >= size() || t_addr == nulladdr ? nullptr
                                                  : &this->m_code[t_addr];
  }

  inline char* rgetp(const ssize_t t_off) noexcept
  {
    return getp(m_vip + t_off);
  }

  inline const char* cgetp(const addr_t t_addr) const noexcept
  {
    return t_addr >= size() || t_addr == nulladdr ? nullptr
                                                  : &this->m_code[t_addr];
  }

  inline void setvip(const addr_t t_vip) { this->m_vip = t_vip; }

  template<typename Ty>
  inline void set(const addr_t t_addr, const Ty* t_val)
  {
    *(Ty*)(getp(t_addr)) = *t_val;
  }

  template<typename Ty>
  inline void set(const addr_t t_addr, const Ty t_val)
  {
    *(Ty*)(getp(t_addr)) = t_val;
  }

  /// return constant pointer to type Ty at current vip
  template<typename Ty>
  inline const Ty* cget() const
  {
    return (const Ty*)(this->cgetp(m_vip));
  }

  /// return constant pointer to type Ty at t_pos
  template<typename Ty>
  inline const Ty* cget(const ssize_t t_pos) const
  {
    return (const Ty*)cgetp(t_pos);
  }

  /// return constant pointer to type Ty relative to current vip
  template<typename Ty>
  inline const Ty* crget(const ssize_t t_pos) const
  {
    return (const Ty*)cgetp(m_vip + t_pos);
  }

  /// return address at t_pos
  inline const addr_t addr(const ssize_t t_pos) const
  {
    return this->decode_addr(*this->cget<uint32_t>(t_pos));
  }

  /// return address relative to current vip
  inline const addr_t raddr(const ssize_t t_pos) const
  {
    return this->decode_addr(*this->crget<uint32_t>(t_pos));
  }

public:
  const inline addr_t decode_addr(uint32_t t_enc_addr) const
  {
    return ~(t_enc_addr ^ m_code_size) % m_code_size;
  }
};

} // namespace pairipvm

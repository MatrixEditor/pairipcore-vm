#pragma once

#include <cstddef>
#include <memory>

// opaque type declarations

namespace pairipvm {

class basic_context;
class basic_vm;
class basic_insn;
class insn_format;
struct vm_op_handler;
struct vm_options;

enum vm_error_code : int
{
  VM_RESULT_INVALID_ADDRESS = -2,
  VM_RESULT_NO_HANDLER = -1,
  VM_RESULT_SUCCESS = 0,
  VM_RESULT_CONTINUE = 1,

};

using addr_t = uint32_t;
using vm_op = vm_error_code (*)(basic_vm&,
                                const basic_insn&,
                                const insn_format&);
using vm_hash_verify = const bool (*)(std::shared_ptr<basic_context>,
                                      const basic_insn&);
using vm_opcode_decode = const uint16_t (*)(const uint16_t);
using vm_op_callback = vm_error_code (*)(basic_vm&, const uint16_t);

static constexpr const addr_t nulladdr = 0;

static constexpr const char A = 'A';
static constexpr const char B = 'B';
static constexpr const char C = 'C';
static constexpr const char D = 'D';
static constexpr const char E = 'E';
static constexpr const char F = 'F';

} // namespace pairipvm

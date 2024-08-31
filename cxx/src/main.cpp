#include <cstdint>
#include <iostream>
#include <fstream>
#include <cassert>

#include "pairipvm/pairipvm.h"

const uint16_t
decode_opcode(const uint16_t t_raw_opcode)
{
  uint32_t a = t_raw_opcode ^ 0xFF64;
  uint32_t b = (a * 0xA6D1) >> 0x10;

  a += ((((a - (b & 0xffff)) >> 1) + (b & 0xffff)) >> 7) * -0x9b;
  return a & 0xFFFF;
}

int
main(int argc, char* argv[])
{
  if (argc != 2) {
    std::cout << "Usage " << argv[0] << " <bytecode file>\n";
    return 1;
  }

  std::ifstream bytecodeFile(argv[1], std::ios::binary);
  if (!bytecodeFile.is_open()) {
    std::cout << "Could not open bytecode at " << argv[1] << std::endl;
    return 1;
  }

  pairipvm::vm_options options = { .m_opcode_decode = decode_opcode,
                                   .m_hash_verify = pairipvm::hash::verify,
                                   .m_user_data = NULL };

  std::unique_ptr<pairipvm::basic_vm> vm =
    pairipvm::basic_vm::from_stream(bytecodeFile, options);
  if (!vm) {
    std::cout << "Could not read bytecode at " << argv[1] << std::endl;
  }

  // setup vm virtual instruction pointer (vip)
  pairipvm::vm_error_code error;
  // REVISIT: this address changes over different versions
  pairipvm::addr_t entry_point = vm->context()->addr(0x73);

  vm->context()->setvip(entry_point);
  if ((error = vm->execute())) {
    return error;
  }
  return 0;
}

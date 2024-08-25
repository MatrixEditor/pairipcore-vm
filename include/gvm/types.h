#ifndef GVM_TYPE__H_
#define GVM_TYPE__H_

#include <sys/types.h>

typedef struct {
  void *table;       // maybe JNIEnv *
  char *vmCode;      // Pointer to the VM bytecode
  uint vmCodeLength; // Length of the VM bytecode
  uint pc;           // Program counter (current execution position)
} VMContext;

///  An address is basically an offset within the bytecode stream
typedef uint addr_t;

///  Format IDs typically consist of three characters: two digits followed by a
///  letter.
///
///  - The first digit represents the number of variables taken from the
///    compiled stack.
///  - The second digit represents the number of additional variables that must
///    be loaded.
///  - The final letter indicates which variable stores the destination address.
///    This address is where the result of the operation will be stored, if
///    applicable.
///
///  For example, the format "20a" indicates:
///  - Two variables are read from the compiled stack.
///  - No extra variables are loaded.
///  - The operation's result is stored in variable 'a'.
///
///  The total length of an instruction can be calculated by adding the size of
///  the instruction info structure to the size required for the variables:
///    size := <info-size> + ( <var-count> * 4 )
///
///  Note: An additional special letter 'z' is used to indicate that no
///  additional data is stored in memory.
typedef char *format_id_t;

typedef struct {
  addr_t aXorValue;        // Memory address of the XOR value
  ulong ulHashValue;       // Hash value for validation
  addr_t aHashDataAddress; // Address of the hash data
  ushort usHashDataLength; // Length of the hash data
  addr_t aNextAddress;     // Address of the next instruction
  addr_t aFallbackAddress; // Fallback address on hash verification failure
} insn_info_t;

/* --- standard c++ structs ---  */

typedef struct {
  long length;
  long capacity;
  char *data;
} basic_string;

/* used in first two opcodes */
typedef struct {
  void *__begin_;
  void *__end_;
  long __end_cap_;
} vector;

#endif

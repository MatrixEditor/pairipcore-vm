#ifndef GVM_TYPE__H_
#define GVM_TYPE__H_

#include "jni-ghidra.h"
#include <sys/types.h>

typedef struct {
  void *table;
  char *vmCode;
  uint vmCodeLength;
  uint pc;
} VMContext;

typedef uint addr_t;

typedef struct {
  long length;
  long capacity;
  char *data;
} basic_string;

typedef struct {
  void *__begin_;
  void *__end_;
  long __end_cap_;
} vector;

struct VMInit;

/**
 * Defined as :
 *  void vm_init(uint *pResult, VMInitList *init, long *param_3);
 */
typedef uint (*vm_init)(uint *, VMInit *, long *);

typedef struct VMInit {
    vm_init fnPtr;
    long field_0x08;
    long field_0x10;
    long field_0x18;
    long field_0x20;
    long field_0x28;
    vector *field_0x30;
} VMInit;


#endif

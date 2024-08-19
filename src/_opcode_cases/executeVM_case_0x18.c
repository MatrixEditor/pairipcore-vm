#include "gvm/types.h"

typedef struct {
    addr_t a;                 // +0x0
    addr_t aXorValue;         // +0x4
    long ulHash;              // +0xc
    addr_t aHashDataAddr;     // +0x10
    short aHashDataLen;       // +0x14
    addr_t aNext;             // +0x16
    addr_t aFallback;         // +0x1a
    addr_t b;                 // +0x22
} insn_0x18_t;


void case_0x18()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;

  
    vm_context = *(long *)&param_1->field_0x68;
    uVar14 = *(uint *)vm_context->vmCodeLength;
    iVar42 = *(int *)(vm_context + 0x14);
    uVar43 = *(long *)vm_context->vmCode;
    *(int *)(vm_context + 0x14) = iVar42 + 4;
    *(int *)(vm_context + 0x14) = iVar42 + 0xc;
    vm_context->pc = iVar42 + 0x10U;
    sVar26 = *(short *)(uVar43 + (ulong)(iVar42 + 0x10U));
    *(int *)(vm_context + 0x14) = iVar42 + 0x12;
    *(int *)(vm_context + 0x14) = iVar42 + 0x16;
    *(int *)(vm_context + 0x14) = iVar42 + 0x1a;
    vm_context->pc = iVar42 + 0x1eU;
    uVar41 = *(uint *)(uVar43 + (ulong)(iVar42 + 0x1eU));
    *(int *)(vm_context + 0x14) = iVar42 + 0x22;
    uVar41 = uVar41 ^ uVar14 ^ 0xffffffff;
    uVar96 = 0;
    if (uVar14 != 0) {
      uVar96 = uVar41 / uVar14;
    }
    if (*(uint *)(uVar43 + (ulong)(uVar41 - uVar96 * uVar14)) < 0x35) {
      iVar42 = (int)sVar26;
      if (iVar42 == 0) {
        return;
      }
      iVar39 = 0;
      do {
        iVar39 = iVar39 + 1;
      } while (iVar42 != iVar39);
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  
}

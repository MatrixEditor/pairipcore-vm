#include "gvm/types.h"

typedef struct {
    addr_t a;                 // +0x0
    addr_t b;                 // +0x4
    addr_t aXorValue;         // +0x8
    long ulHash;              // +0x10
    addr_t aHashDataAddr;     // +0x14
    short aHashDataLen;       // +0x18
    addr_t aNext;             // +0x1a
    addr_t aFallback;         // +0x1e
} insn_0x1a_t;


void case_0x1a()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;

  
    vm_context = *(long *)&param_1->field_0x68;
    uVar14 = *(uint *)vm_context->vmCodeLength;
    uVar96 = vm_context->pc;
    uVar41 = *(uint *)(*(long *)vm_context->vmCode + (ulong)uVar96);
    vm_context->pc = uVar96 + 4;
    vm_context->pc = uVar96 + 8;
    vm_context->pc = uVar96 + 0x10;
    vm_context->pc = uVar96 + 0x14;
    sVar26 = *(short *)(*(long *)vm_context->vmCode + (ulong)(uVar96 + 0x14));
    vm_context->pc = uVar96 + 0x16;
    vm_context->pc = uVar96 + 0x1a;
    vm_context->pc = uVar96 + 0x1e;
    uVar68 = param_1->field25_0x20;
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pplVar43 = (long **)FUN_SharedStorageGet(0x173cb0);
    cVar37 = (**(code **)(**pplVar43 + 0xc0))(*pplVar43,uVar68,0);
    if (cVar37 == '\0') {
      local_170 = (jclass *)param_1->field25_0x20;
      param_1->field25_0x20 = 0;
      if (local_170 != (jclass *)0x0) {
        plVar77 = param_1->field66_0x50;
        if (plVar77 == (long *)0x0) {
          return;
        }
        (**(code **)(*plVar77 + 0x30))(plVar77,&local_170);
      }
    }
    uVar41 = uVar41 ^ uVar14 ^ 0xffffffff;
    uVar96 = 0;
    if (uVar14 != 0) {
      uVar96 = uVar41 / uVar14;
    }
    *(uint *)(*(long *)(*(long *)&param_1->field_0x68 + 8) + (ulong)(uVar41 - uVar96 * uVar14)) =
         (uint)(cVar37 == '\0');
    iVar42 = (int)sVar26;
    if (iVar42 != 0) {
      iVar39 = 0;
      do {
        iVar39 = iVar39 + 1;
      } while (iVar42 != iVar39);
    }
    break;
  
}

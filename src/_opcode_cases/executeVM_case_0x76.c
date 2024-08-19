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
} insn_0x76_t;


void case_0x76()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;

  
    vm_context = *(long *)&param_1->field_0x68;
    uVar14 = *(uint *)vm_context->vmCodeLength;
    uVar96 = vm_context->pc;
    lVar73 = *(long *)vm_context->vmCode;
    uVar41 = *(uint *)(lVar73 + (ulong)uVar96);
    vm_context->pc = uVar96 + 4;
    uVar41 = uVar41 ^ uVar14 ^ 0xffffffff;
    vm_context->pc = uVar96 + 8;
    uVar98 = 0;
    if (uVar14 != 0) {
      uVar98 = uVar41 / uVar14;
    }
    vm_context->pc = uVar96 + 0x10;
    vm_context->pc = uVar96 + 0x14;
    sVar26 = *(short *)(lVar73 + (ulong)(uVar96 + 0x14));
    vm_context->pc = uVar96 + 0x16;
    uVar41 = uVar41 - uVar98 * uVar14;
    vm_context->pc = uVar96 + 0x1a;
    vm_context->pc = uVar96 + 0x1e;
    uVar24 = *(ushort *)(lVar73 + (ulong)uVar41);
    uVar68 = param_1->field25_0x20;
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pplVar43 = (long **)FUN_SharedStorageGet(0x173cb0);
    (**(code **)(**pplVar43 + 0xc0))(*pplVar43,uVar68,0);
    plVar77 = (long *)(param_1->field91_0x70 +
                      (ulong)(ushort)(uVar24 ^ (ushort)uVar41 ^ 0xffff) * 0x10);
    FUN_0014cc28(&local_170,(jclass **)&param_1->field25_0x20);
    pp_Var47 = (jclass *)*plVar77;
    plVar88 = (long *)plVar77[1];
    plVar77[1] = (long)plStack_168;
    *plVar77 = (long)local_170;
    if ((plVar88 != (long *)0x0) &&
       (local_170 = pp_Var47, plStack_168 = plVar88,
       vm_context = FUN_00129140(0xffffffffffffffff,plVar88 + 1), vm_context == 0)) {
      (**(code **)(*plVar88 + 0x10))(plVar88);
      FUN_00119ba4(plVar88);
    }
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

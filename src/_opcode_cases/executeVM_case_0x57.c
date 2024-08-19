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
} insn_0x57_t;


void case_0x57()
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
    vm_context->pc = uVar96 + 8;
    uVar41 = uVar41 ^ uVar14 ^ 0xffffffff;
    vm_context->pc = uVar96 + 0x10;
    vm_context->pc = uVar96 + 0x14;
    sVar26 = *(short *)(lVar73 + (ulong)(uVar96 + 0x14));
    vm_context->pc = uVar96 + 0x16;
    vm_context->pc = uVar96 + 0x1a;
    uVar98 = 0;
    if (uVar14 != 0) {
      uVar98 = uVar41 / uVar14;
    }
    vm_context->pc = uVar96 + 0x1e;
    uVar99 = *(uint *)(lVar73 + (ulong)(uVar96 + 0x1e));
    vm_context->pc = uVar96 + 0x22;
    uVar99 = uVar99 ^ uVar14 ^ 0xffffffff;
    uVar96 = 0;
    if (uVar14 != 0) {
      uVar96 = uVar99 / uVar14;
    }
    uVar99 = uVar99 - uVar96 * uVar14;
    puVar46 = (undefined8 *)
              (param_1->field91_0x70 +
              (ulong)(ushort)(*(ushort *)(lVar73 + (ulong)uVar99) ^ (ushort)uVar99 ^ 0xffff) * 0x10)
    ;
    uVar90 = *puVar46;
    plVar77 = (long *)puVar46[1];
    if (plVar77 != (long *)0x0) {
      FUN_00129110(1,plVar77 + 1);
    }
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pplVar43 = (long **)FUN_SharedStorageGet(0x173cb0);
    cVar37 = (**(code **)(**pplVar43 + 0xc0))(*pplVar43,uVar90,0);
    *(uint *)(*(long *)(*(long *)&param_1->field_0x68 + 8) + (ulong)(uVar41 - uVar98 * uVar14)) =
         (uint)(cVar37 != '\0');
    iVar42 = (int)sVar26;
    if (iVar42 != 0) {
      iVar39 = 0;
      do {
        iVar39 = iVar39 + 1;
      } while (iVar42 != iVar39);
    }
    if ((plVar77 != (long *)0x0) &&
       (vm_context = FUN_00129140(0xffffffffffffffff,plVar77 + 1), vm_context == 0)) {
      (**(code **)(*plVar77 + 0x10))(plVar77);
      FUN_00119ba4(plVar77);
    }
    break;
  
}

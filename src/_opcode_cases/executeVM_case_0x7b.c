#include "gvm/types.h"

typedef struct {
    addr_t a;                 // +0x0
    addr_t b;                 // +0x4
    addr_t c;                 // +0x8
    addr_t aXorValue;         // +0xc
    long ulHash;              // +0x14
    addr_t aHashDataAddr;     // +0x18
    short aHashDataLen;       // +0x1c
    addr_t aNext;             // +0x1e
    addr_t aFallback;         // +0x22
} insn_0x7b_t;


void case_0x7b()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;

  
    vm_context = *(long *)&param_1->field_0x68;
    uVar96 = *(uint *)vm_context->vmCodeLength;
    uVar98 = vm_context->pc;
    uVar43 = *(long *)vm_context->vmCode;
    uVar41 = *(uint *)(uVar43 + (ulong)uVar98);
    vm_context->pc = uVar98 + 4;
    uVar14 = *(uint *)(uVar43 + (ulong)(uVar98 + 4));
    vm_context->pc = uVar98 + 8;
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    vm_context->pc = uVar98 + 0xc;
    uVar14 = uVar14 ^ uVar96 ^ 0xffffffff;
    uVar99 = 0;
    if (uVar96 != 0) {
      uVar99 = uVar41 / uVar96;
    }
    vm_context->pc = uVar98 + 0x14;
    vm_context->pc = uVar98 + 0x18;
    sVar26 = *(short *)(uVar43 + (ulong)(uVar98 + 0x18));
    vm_context->pc = uVar98 + 0x1a;
    uVar97 = 0;
    if (uVar96 != 0) {
      uVar97 = uVar14 / uVar96;
    }
    uVar14 = uVar14 - uVar97 * uVar96;
    vm_context->pc = uVar98 + 0x1e;
    vm_context->pc = uVar98 + 0x22;
    uVar41 = uVar41 - uVar99 * uVar96;
    vm_context = param_1->field91_0x70;
    uVar24 = *(ushort *)(uVar43 + (ulong)uVar41);
    puVar46 = (undefined8 *)
              (vm_context + ((ulong)((uint)*(ushort *)(uVar43 + (ulong)uVar14) ^ uVar14 ^ 0xffffffff) &
                        0xffff) * 0x10);
    uVar43 = puVar46[1];
    uVar90 = *puVar46;
    if (uVar43 != 0) {
      FUN_00129110(1,uVar43 + 8);
    }
    puVar46 = (undefined8 *)(vm_context + ((ulong)((uint)uVar24 ^ uVar41 ^ 0xffffffff) & 0xffff) * 0x10)
    ;
    plVar77 = (long *)puVar46[1];
    puVar46[1] = uVar43;
    *puVar46 = uVar90;
    if ((plVar77 != (long *)0x0) &&
       (uVar43 = FUN_00129140(0xffffffffffffffff,plVar77 + 1), uVar43 == 0)) {
      (**(code **)(*plVar77 + 0x10))(plVar77);
      FUN_00119ba4(plVar77);
    }
    iVar42 = (int)sVar26;
    if (iVar42 != 0) {
      iVar39 = 0;
      do {
        iVar39 = iVar39 + 1;
      } while (iVar42 != iVar39);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  
}

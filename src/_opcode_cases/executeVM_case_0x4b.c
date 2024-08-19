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
    addr_t c;                 // +0x26
} insn_0x4b_t;


void case_0x4b()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;

  
    vm_context = *(long *)&param_1->field_0x68;
    uVar14 = *(uint *)vm_context->vmCodeLength;
    uVar96 = vm_context->pc;
    pcVar45 = *(char **)vm_context->vmCode;
    uVar41 = *(uint *)(pcVar45 + uVar96);
    vm_context->pc = uVar96 + 4;
    vm_context->pc = uVar96 + 8;
    uVar41 = uVar41 ^ uVar14 ^ 0xffffffff;
    vm_context->pc = uVar96 + 0x10;
    vm_context->pc = uVar96 + 0x14;
    uVar98 = 0;
    if (uVar14 != 0) {
      uVar98 = uVar41 / uVar14;
    }
    sVar26 = *(short *)(pcVar45 + (uVar96 + 0x14));
    vm_context->pc = uVar96 + 0x16;
    vm_context->pc = uVar96 + 0x1a;
    vm_context->pc = uVar96 + 0x1e;
    uVar99 = *(uint *)(pcVar45 + (uVar96 + 0x1e));
    vm_context->pc = uVar96 + 0x22;
    uVar97 = *(uint *)(pcVar45 + (uVar96 + 0x22));
    uVar99 = uVar99 ^ uVar14 ^ 0xffffffff;
    vm_context->pc = uVar96 + 0x26;
    uVar96 = 0;
    if (uVar14 != 0) {
      uVar96 = uVar99 / uVar14;
    }
    uVar41 = uVar41 - uVar98 * uVar14;
    uVar97 = uVar97 ^ uVar14 ^ 0xffffffff;
    uVar24 = *(ushort *)(pcVar45 + uVar41);
    uVar98 = 0;
    if (uVar14 != 0) {
      uVar98 = uVar97 / uVar14;
    }
    FUN_00149a84_XOR((astruct_3 *)local_1e0,pcVar45,uVar14,uVar97 - uVar98 * uVar14,
                     uVar99 - uVar96 * uVar14);
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pplVar42 = (JNIEnv *)FUN_SharedStorageGet(0x173cb0);
    pp_Var47 = (jclass *)((ulong)local_1e0 | 1);
    if (((ulong)local_1e0 & 1) != 0) {
      pp_Var47 = local_1d0;
    }
    pp_Var47 = (jclass *)(**(code **)((long)(*pplVar42)->reserved0 + 0x538))(*pplVar42,pp_Var47);
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    local_158 = (long *)*puVar46;
    ppuVar67 = &local_160;
    local_160 = (undefined8 *)0x16f558;
    pp_Var2 = (jobject *)
              (param_1->field91_0x70 + (ulong)(ushort)(uVar24 ^ (ushort)uVar41 ^ 0xffff) * 0x10);
    local_170 = pp_Var47;
    local_140[0] = ppuVar67;
    FUN_0014cc28(local_c0,(jclass **)&local_170);
    plVar88 = plStack_b8;
    pp_Var47 = (jclass *)local_c0;
    plVar77 = (long *)pp_Var2[1];
    local_c0 = (undefined  [8])*pp_Var2;
    plStack_b8 = plVar77;
    pp_Var2[1] = (jobject)plVar88;
    *pp_Var2 = (jobject)pp_Var47;
    if ((plVar77 != (long *)0x0) &&
       (vm_context = FUN_00129140(0xffffffffffffffff,plVar77 + 1), vm_context == 0)) {
      (**(code **)(*plVar77 + 0x10))(plVar77);
      FUN_00119ba4(plVar77);
    }
    pp_Var47 = local_170;
    local_170 = (jclass *)0x0;
    if (pp_Var47 != (jclass *)0x0) {
      local_c0 = (undefined  [8])pp_Var47;
      if (local_140[0] == (undefined8 **)0x0) {
        return;
      }
      (*(code *)(*local_140[0])[6])(local_140[0],local_c0);
    }
    if (local_140[0] == ppuVar67) {
      vm_context = 4;
    }
    else {
      if (local_140[0] == (undefined8 **)0x0) goto LAB_00156958;
      vm_context = 5;
      ppuVar67 = local_140[0];
    }
    (*(code *)(*ppuVar67)[vm_context])();
LAB_00156958:
    if (sVar26 != 0) {
      iVar42 = 0;
      do {
        iVar42 = iVar42 + 1;
      } while (sVar26 != iVar42);
    }
    if ((local_1e0[0] & 1) != 0) {
      free(local_1d0);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  
}

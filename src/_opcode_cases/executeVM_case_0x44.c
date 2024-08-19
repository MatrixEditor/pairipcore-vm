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
} insn_0x44_t;


void case_0x44()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;

  
    vm_context = *(long *)&param_1->field_0x68;
    uVar96 = *(uint *)vm_context->vmCodeLength;
    iVar42 = *(int *)(vm_context + 0x14);
    lVar73 = *(long *)vm_context->vmCode;
    *(int *)(vm_context + 0x14) = iVar42 + 4;
    *(int *)(vm_context + 0x14) = iVar42 + 0xc;
    vm_context->pc = iVar42 + 0x10U;
    sVar26 = *(short *)(lVar73 + (ulong)(iVar42 + 0x10U));
    *(int *)(vm_context + 0x14) = iVar42 + 0x12;
    *(int *)(vm_context + 0x14) = iVar42 + 0x16;
    vm_context->pc = iVar42 + 0x1aU;
    uVar41 = *(uint *)(lVar73 + (ulong)(iVar42 + 0x1aU));
    vm_context->pc = iVar42 + 0x1eU;
    uVar14 = *(uint *)(lVar73 + (ulong)(iVar42 + 0x1eU));
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    *(int *)(vm_context + 0x14) = iVar42 + 0x22;
    uVar98 = 0;
    if (uVar96 != 0) {
      uVar98 = uVar41 / uVar96;
    }
    uVar14 = uVar14 ^ uVar96 ^ 0xffffffff;
    uVar99 = 0;
    if (uVar96 != 0) {
      uVar99 = uVar14 / uVar96;
    }
    uVar41 = uVar41 - uVar98 * uVar96;
    uVar24 = *(ushort *)(lVar73 + (ulong)uVar41);
    uVar92 = *(undefined4 *)(lVar73 + (ulong)(uVar14 - uVar99 * uVar96));
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    pp_Var47 = (jclass *)FUN_00149cc8(*puVar46,_DAT_00174a08,_DAT_001749a0,uVar92);
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    local_158 = (long *)*puVar46;
    ppuVar67 = &local_160;
    local_160 = (undefined8 *)0x16f558;
    pp_Var62 = (jclass *)
               (param_1->field91_0x70 + (ulong)(ushort)(uVar24 ^ (ushort)uVar41 ^ 0xffff) * 0x10);
    local_170 = pp_Var47;
    local_140[0] = ppuVar67;
    FUN_0014cc28(local_1e0,(jclass **)&local_170);
    pp_Var36 = pp_Stack_1d8;
    pp_Var21 = (jclass *)local_1e0;
    pp_Var47 = (jclass *)pp_Var62[1];
    local_1e0 = (undefined  [8])*pp_Var62;
    pp_Stack_1d8 = pp_Var47;
    pp_Var62[1] = (jclass)pp_Var36;
    *pp_Var62 = (jclass)pp_Var21;
    if ((pp_Var47 != (jclass *)0x0) &&
       (vm_context = FUN_00129140(0xffffffffffffffff,pp_Var47 + 1), vm_context == 0)) {
      (**(code **)(*pp_Var47 + 0x10))(pp_Var47);
      FUN_00119ba4(pp_Var47);
    }
    pp_Var47 = local_170;
    local_170 = (jclass *)0x0;
    if (pp_Var47 != (jclass *)0x0) {
      local_1e0 = (undefined  [8])pp_Var47;
      if (local_140[0] == (undefined8 **)0x0) {
        return;
      }
      (*(code *)(*local_140[0])[6])(local_140[0],local_1e0);
    }
    if (local_140[0] == ppuVar67) {
      vm_context = 4;
LAB_00156e4c:
      (*(code *)(*ppuVar67)[vm_context])();
    }
    else if (local_140[0] != (undefined8 **)0x0) {
      vm_context = 5;
      ppuVar67 = local_140[0];
      goto LAB_00156e4c;
    }
    iVar42 = (int)sVar26;
    if (iVar42 != 0) {
      iVar39 = 0;
      do {
        iVar39 = iVar39 + 1;
      } while (iVar42 != iVar39);
    }
    break;
  
}

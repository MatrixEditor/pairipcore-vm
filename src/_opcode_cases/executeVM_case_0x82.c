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
} insn_0x82_t;


void case_0x82()
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
    vm_context->pc = uVar96 + 0x1e;
    uVar98 = 0;
    if (uVar14 != 0) {
      uVar98 = uVar41 / uVar14;
    }
    uVar99 = *(uint *)(lVar73 + (ulong)(uVar96 + 0x1e));
    vm_context->pc = uVar96 + 0x22;
    uVar99 = uVar99 ^ uVar14 ^ 0xffffffff;
    uVar96 = 0;
    if (uVar14 != 0) {
      uVar96 = uVar99 / uVar14;
    }
    uVar41 = uVar41 - uVar98 * uVar14;
    uVar24 = *(ushort *)(lVar73 + (ulong)uVar41);
    fVar102 = *(float *)(lVar73 + (ulong)(uVar99 - uVar96 * uVar14));
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    pp_Var47 = (jclass *)FUN_00149cc8((double)fVar102,*puVar46,_DAT_001749b8,_DAT_00174a48);
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
LAB_001568b8:
      (*(code *)(*ppuVar67)[vm_context])();
    }
    else if (local_140[0] != (undefined8 **)0x0) {
      vm_context = 5;
      ppuVar67 = local_140[0];
      goto LAB_001568b8;
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

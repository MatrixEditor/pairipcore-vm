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
} insn_0x6_t;


void case_0x06()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;

  
    vm_context = *(long *)&param_1->field_0x68;
    uVar96 = *(uint *)vm_context->vmCodeLength;
    uVar98 = vm_context->pc;
    lVar73 = *(long *)vm_context->vmCode;
    uVar41 = *(uint *)(lVar73 + (ulong)uVar98);
    vm_context->pc = uVar98 + 4;
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    uVar14 = *(uint *)(lVar73 + (ulong)(uVar98 + 4));
    vm_context->pc = uVar98 + 8;
    uVar99 = 0;
    if (uVar96 != 0) {
      uVar99 = uVar41 / uVar96;
    }
    vm_context->pc = uVar98 + 0xc;
    uVar14 = uVar14 ^ uVar96 ^ 0xffffffff;
    vm_context->pc = uVar98 + 0x14;
    uVar97 = 0;
    if (uVar96 != 0) {
      uVar97 = uVar14 / uVar96;
    }
    uVar41 = uVar41 - uVar99 * uVar96;
    vm_context->pc = uVar98 + 0x18;
    sVar26 = *(short *)(lVar73 + (ulong)(uVar98 + 0x18));
    vm_context->pc = uVar98 + 0x1a;
    vm_context->pc = uVar98 + 0x1e;
    vm_context->pc = uVar98 + 0x22;
    uVar24 = *(ushort *)(lVar73 + (ulong)uVar41);
    uVar90 = *(undefined8 *)(lVar73 + (ulong)(uVar14 - uVar97 * uVar96));
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    pp_Var47 = (jclass *)FUN_00149cc8(uVar90,*puVar46,_DAT_001749e0,_DAT_00174a30);
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
LAB_00156cd8:
      (*(code *)(*ppuVar67)[vm_context])();
    }
    else if (local_140[0] != (undefined8 **)0x0) {
      vm_context = 5;
      ppuVar67 = local_140[0];
      goto LAB_00156cd8;
    }
    iVar42 = (int)sVar26;
    if (iVar42 != 0) {
      iVar39 = 0;
      do {
        iVar39 = iVar39 + 1;
      } while (iVar42 != iVar39);
    }
    break;
  default:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  
}

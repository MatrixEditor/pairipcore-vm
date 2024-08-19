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
} insn_0x50_t;


void case_0x50()
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
    uVar90 = *(undefined8 *)(lVar73 + (ulong)(uVar14 - uVar97 * uVar96));
    uVar24 = *(ushort *)(lVar73 + (ulong)uVar41);
    pp_Var47 = (jclass *)func_0x0016a1a0(uVar90);
    if ((jclass *)0xffffffffffffffef < pp_Var47) {
      return;
    }
    if (pp_Var47 < (jclass *)0x17) {
      pp_Var62 = (jclass *)((ulong)local_1e0 | 1);
      local_1e0 = (undefined  [8])CONCAT71(local_1e0._1_7_,(char)((int)pp_Var47 << 1));
      if (pp_Var47 != (jclass *)0x0) goto LAB_00155cb0;
    }
    else {
      pp_Var62 = (jclass *)malloc(((ulong)pp_Var47 | 0xf) + 1);
      local_1e0 = (undefined  [8])(((ulong)pp_Var47 | 0xf) + 2);
      pp_Stack_1d8 = pp_Var47;
      local_1d0 = pp_Var62;
LAB_00155cb0:
      func_0x0016a0c0(pp_Var62,uVar90,pp_Var47);
    }
    *(_jobject *)((long)pp_Var62 + (long)pp_Var47) = (_jobject)0x0;
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pplVar43 = (long **)FUN_SharedStorageGet(0x173cb0);
    pp_Var47 = (jclass *)((ulong)local_1e0 | 1);
    if (((ulong)local_1e0 & 1) != 0) {
      pp_Var47 = local_1d0;
    }
    pp_Var47 = (jclass *)(**(code **)(**pplVar43 + 0x538))(*pplVar43,pp_Var47);
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
LAB_0015707c:
      (*(code *)(*ppuVar67)[vm_context])();
    }
    else if (local_140[0] != (undefined8 **)0x0) {
      vm_context = 5;
      ppuVar67 = local_140[0];
      goto LAB_0015707c;
    }
    if (((ulong)local_1e0 & 1) != 0) {
      free(local_1d0);
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

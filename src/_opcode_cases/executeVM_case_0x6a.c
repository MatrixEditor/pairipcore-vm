#include "gvm/types.h"

typedef struct {
    
} insn_0x6a_t;


void case_0x6a()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;

  
    vm_context = *(jclass **)&param_1->field_0x68;
    uVar96 = *(uint *)(vm_context + 2);
    uVar98 = *(uint *)((long)vm_context + 0x14);
    p_Var78 = vm_context[1];
    uVar41 = *(uint *)(p_Var78 + uVar98);
    *(uint *)((long)vm_context + 0x14) = uVar98 + 4;
    uVar14 = *(uint *)(p_Var78 + (uVar98 + 4));
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    *(uint *)((long)vm_context + 0x14) = uVar98 + 8;
    uVar99 = 0;
    if (uVar96 != 0) {
      uVar99 = uVar41 / uVar96;
    }
    *(uint *)((long)vm_context + 0x14) = uVar98 + 0xc;
    uVar14 = uVar14 ^ uVar96 ^ 0xffffffff;
    *(uint *)((long)vm_context + 0x14) = uVar98 + 0x14;
    *(uint *)((long)vm_context + 0x14) = uVar98 + 0x18;
    sVar26 = *(short *)(p_Var78 + (uVar98 + 0x18));
    *(uint *)((long)vm_context + 0x14) = uVar98 + 0x1a;
    uVar97 = 0;
    if (uVar96 != 0) {
      uVar97 = uVar14 / uVar96;
    }
    uVar41 = uVar41 - uVar99 * uVar96;
    *(uint *)((long)vm_context + 0x14) = uVar98 + 0x1e;
    uVar99 = *(uint *)(p_Var78 + (uVar98 + 0x1e));
    *(uint *)((long)vm_context + 0x14) = uVar98 + 0x22;
    uVar24 = *(ushort *)(p_Var78 + uVar41);
    uVar14 = *(uint *)(p_Var78 + (uVar14 - uVar97 * uVar96));
    puVar46 = (undefined8 *)malloc(0xc);
    uVar14 = uVar14 ^ uVar96 ^ 0xffffffff;
    *(undefined4 *)(puVar46 + 1) = 0;
    uVar98 = 0;
    if (uVar96 != 0) {
      uVar98 = uVar14 / uVar96;
    }
    *puVar46 = 0;
    uVar97 = *(uint *)(vm_context + 2);
    uVar14 = uVar14 - uVar98 * uVar96;
    p_Var78 = vm_context[1];
    uVar98 = *(uint *)(p_Var78 + uVar14) ^ uVar97 ^ 0xffffffff;
    uVar100 = 0;
    if (uVar97 != 0) {
      uVar100 = uVar98 / uVar97;
    }
    *(uint *)puVar46 = uVar98 - uVar100 * uVar97;
    uVar97 = *(uint *)(vm_context + 2);
    uVar98 = *(uint *)(p_Var78 + (uVar14 + 4)) ^ uVar97 ^ 0xffffffff;
    uVar100 = 0;
    if (uVar97 != 0) {
      uVar100 = uVar98 / uVar97;
    }
    uVar101 = 0;
    if (uVar96 != 0) {
      uVar101 = (uVar99 ^ uVar96 ^ 0xffffffff) / uVar96;
    }
    *(uint *)((long)puVar46 + 4) = uVar98 - uVar100 * uVar97;
    uVar96 = *(uint *)(vm_context + 2);
    plStack_168 = (long *)*puVar46;
    uVar14 = *(uint *)(p_Var78 + (uVar14 + 8)) ^ uVar96 ^ 0xffffffff;
    local_160 = (undefined8 *)0x0;
    uVar98 = 0;
    if (uVar96 != 0) {
      uVar98 = uVar14 / uVar96;
    }
    local_130 = 0;
    *(uint *)(puVar46 + 1) = uVar14 - uVar98 * uVar96;
    local_170 = vm_context;
    free(puVar46,uVar101);
    p_Var78 = (jclass)func_0x00168e38(&local_170,param_1->env);
    if (p_Var78 != (jclass)0x0) {
      vm_context = (jclass *)(*(*param_1->env)->AllocObject)(param_1->env,p_Var78);
      pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
      if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
      local_1c8 = (long *)*puVar46;
      ppp_Var59 = &local_1d0;
      local_1d0 = (jclass *)0x16f558;
      pp_Var2 = (jobject *)
                (param_1->field91_0x70 + (ulong)(ushort)(uVar24 ^ (ushort)uVar41 ^ 0xffff) * 0x10);
      local_1e0 = (undefined  [8])vm_context;
      local_1b0 = ppp_Var59;
      FUN_0014cc28(local_c0,(jclass **)local_1e0);
      plVar88 = plStack_b8;
      vm_context = (jclass *)local_c0;
      plVar77 = (long *)pp_Var2[1];
      local_c0 = (undefined  [8])*pp_Var2;
      plStack_b8 = plVar77;
      pp_Var2[1] = (jobject)plVar88;
      *pp_Var2 = (jobject)vm_context;
      if ((plVar77 != (long *)0x0) &&
         (uVar43 = FUN_00129140(0xffffffffffffffff,plVar77 + 1), uVar43 == 0)) {
        (**(code **)(*plVar77 + 0x10))(plVar77);
        FUN_00119ba4(plVar77);
      }
      vm_context = (jclass *)local_1e0;
      if (sVar26 != 0) {
        iVar42 = 0;
        do {
          iVar42 = iVar42 + 1;
        } while (sVar26 != iVar42);
      }
      local_1e0 = (undefined  [8])0x0;
      if (vm_context != (jclass *)0x0) {
        local_c0 = (undefined  [8])vm_context;
        if (local_1b0 == (jclass **)0x0) {
          return;
        }
        (*(code *)(*local_1b0)[6])(local_1b0,local_c0);
      }
      if (local_1b0 == ppp_Var59) {
        uVar43 = 4;
      }
      else {
        if (local_1b0 == (jclass **)0x0) {
          return;
        }
        uVar43 = 5;
        ppp_Var59 = local_1b0;
      }
      (*(code *)(*ppp_Var59)[uVar43])();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (sVar26 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar42 = 0;
    do {
      iVar42 = iVar42 + 1;
    } while (sVar26 != iVar42);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  
}

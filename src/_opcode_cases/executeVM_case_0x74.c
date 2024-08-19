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
} insn_0x74_t;


void case_0x74()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;

  
    vm_context = *(long *)&param_1->field_0x68;
    uVar96 = *(uint *)vm_context->vmCodeLength;
    uVar98 = vm_context->pc;
    lVar73 = *(long *)vm_context->vmCode;
    uVar14 = *(uint *)(lVar73 + (ulong)uVar98);
    vm_context->pc = uVar98 + 4;
    uVar41 = *(uint *)(lVar73 + (ulong)(uVar98 + 4));
    vm_context->pc = uVar98 + 8;
    vm_context->pc = uVar98 + 0xc;
    vm_context->pc = uVar98 + 0x14;
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    vm_context->pc = uVar98 + 0x18;
    uVar14 = uVar14 ^ uVar96 ^ 0xffffffff;
    sVar26 = *(short *)(lVar73 + (ulong)(uVar98 + 0x18));
    vm_context->pc = uVar98 + 0x1a;
    uVar99 = 0;
    if (uVar96 != 0) {
      uVar99 = uVar41 / uVar96;
    }
    uVar97 = *(uint *)(lVar73 + (ulong)(uVar98 + 0x1a));
    vm_context->pc = uVar98 + 0x1e;
    vm_context->pc = uVar98 + 0x22;
    uVar100 = 0;
    if (uVar96 != 0) {
      uVar100 = uVar14 / uVar96;
    }
    uVar41 = uVar41 - uVar99 * uVar96;
    uVar99 = *(uint *)(lVar73 + (ulong)(uVar98 + 0x22));
    vm_context->pc = uVar98 + 0x26;
    uVar99 = uVar99 ^ uVar96 ^ 0xffffffff;
    uVar24 = *(ushort *)(lVar73 + (ulong)uVar41);
    uVar98 = 0;
    if (uVar96 != 0) {
      uVar98 = (uVar97 ^ uVar96 ^ 0xffffffff) / uVar96;
    }
    uVar97 = 0;
    if (uVar96 != 0) {
      uVar97 = uVar99 / uVar96;
    }
    func_0x00168ad4(&local_170,vm_context,uVar14 - uVar100 * uVar96,0,uVar98);
    func_0x00167db4(local_1e0,param_1->env,*(undefined8 *)&param_1->field_0x68,
                    &param_1->field91_0x70,uVar99 - uVar97 * uVar96,&local_170);
    if (local_1a0 == '\0') {
      if (sVar26 != 0) {
        iVar42 = 0;
        do {
          iVar42 = iVar42 + 1;
        } while (sVar26 != iVar42);
      }
      goto LAB_00157688;
    }
    pp_Var47 = (jclass *)
               (*(*param_1->env)->NewObjectA)
                         (param_1->env,*pp_Stack_1d8,(jmethodID)local_1e0,
                          (jvalue *)(pp_Stack_1d8 + 1));
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pplVar43 = (long **)FUN_SharedStorageGet(0x173cb0);
    local_a8 = *pplVar43;
    ppuVar67 = (undefined8 **)&local_b0;
    local_b0 = (undefined8 *)0x16f558;
    pp_Var2 = (jobject *)
              (param_1->field91_0x70 + (ulong)(ushort)(uVar24 ^ (ushort)uVar41 ^ 0xffff) * 0x10);
    local_c0 = (undefined  [8])pp_Var47;
    local_90 = ppuVar67;
    FUN_0014cc28(local_100,(jclass **)local_c0);
    plVar88 = plStack_f8;
    pp_Var47 = (jclass *)local_100;
    plVar77 = (long *)pp_Var2[1];
    local_100 = (undefined  [8])*pp_Var2;
    plStack_f8 = plVar77;
    pp_Var2[1] = (jobject)plVar88;
    *pp_Var2 = (jobject)pp_Var47;
    if ((plVar77 != (long *)0x0) &&
       (vm_context = FUN_00129140(0xffffffffffffffff,plVar77 + 1), vm_context == 0)) {
      (**(code **)(*plVar77 + 0x10))(plVar77);
      FUN_00119ba4(plVar77);
    }
    pp_Var47 = (jclass *)local_c0;
    if (sVar26 != 0) {
      iVar42 = 0;
      do {
        iVar42 = iVar42 + 1;
      } while (sVar26 != iVar42);
    }
    local_c0 = (undefined  [8])0x0;
    if (pp_Var47 != (jclass *)0x0) {
      local_100 = (undefined  [8])pp_Var47;
      if (local_90 == (undefined8 **)0x0) {
        return;
      }
      (*(code *)(*local_90)[6])(local_90,local_100);
    }
    if (local_90 == ppuVar67) {
      vm_context = 4;
LAB_00157658:
      (*(code *)(*ppuVar67)[vm_context])();
    }
    else if (local_90 != (undefined8 **)0x0) {
      vm_context = 5;
      ppuVar67 = local_90;
      goto LAB_00157658;
    }
    if (local_1a0 != '\0') {
      if (local_1c0 != 0) {
        lStack_1b8 = local_1c0;
        free();
      }
      if (pp_Stack_1d8 != (jclass *)0x0) {
        free();
      }
    }
LAB_00157688:
    local_1e0 = (undefined  [8])local_150;
    local_150 = (jclass *)0x0;
    if (local_1e0 != (undefined  [8])0x0) {
      if (local_120 == (undefined8 ***)0x0) {
        return;
      }
      (*(code *)(*local_120)[6])(local_120,local_1e0);
    }
    if (local_120 != local_140) {
      if (local_120 == (undefined8 ***)0x0) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  
}

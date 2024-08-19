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
    addr_t d;                 // +0x2a
} insn_0x70_t;


void case_0x70()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;

  
    vm_context = *(long *)&param_1->field_0x68;
    uVar98 = *(uint *)vm_context->vmCodeLength;
    iVar42 = *(int *)(vm_context + 0x14);
    pcVar45 = *(char **)vm_context->vmCode;
    *(int *)(vm_context + 0x14) = iVar42 + 4;
    *(int *)(vm_context + 0x14) = iVar42 + 8;
    *(int *)(vm_context + 0x14) = iVar42 + 0x10;
    *(int *)(vm_context + 0x14) = iVar42 + 0x14;
    *(int *)(vm_context + 0x14) = iVar42 + 0x16;
    *(int *)(vm_context + 0x14) = iVar42 + 0x1a;
    vm_context->pc = iVar42 + 0x1eU;
    uVar41 = *(uint *)(pcVar45 + (iVar42 + 0x1eU));
    vm_context->pc = iVar42 + 0x22U;
    uVar14 = *(uint *)(pcVar45 + (iVar42 + 0x22U));
    vm_context->pc = iVar42 + 0x26U;
    uVar96 = *(uint *)(pcVar45 + (iVar42 + 0x26U));
    uVar41 = uVar41 ^ uVar98 ^ 0xffffffff;
    *(int *)(vm_context + 0x14) = iVar42 + 0x2a;
    uVar14 = uVar14 ^ uVar98 ^ 0xffffffff;
    uVar99 = 0;
    if (uVar98 != 0) {
      uVar99 = uVar41 / uVar98;
    }
    uVar96 = uVar96 ^ uVar98 ^ 0xffffffff;
    uVar97 = 0;
    if (uVar98 != 0) {
      uVar97 = uVar96 / uVar98;
    }
    uVar100 = 0;
    if (uVar98 != 0) {
      uVar100 = uVar14 / uVar98;
    }
    uVar96 = uVar96 - uVar97 * uVar98;
    uVar24 = *(ushort *)(pcVar45 + uVar96);
    FUN_00149a84_XOR((astruct_3 *)local_1e0,pcVar45,uVar98,uVar14 - uVar100 * uVar98,
                     uVar41 - uVar99 * uVar98);
    pp_Var2 = (jobject *)
              (param_1->field91_0x70 + (ulong)(ushort)(uVar24 ^ (ushort)uVar96 ^ 0xffff) * 0x10);
    p_Var15 = *pp_Var2;
    p_Var18 = pp_Var2[1];
    if (p_Var18 != (jobject)0x0) {
      FUN_00129110(1,p_Var18 + 8);
    }
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pplVar43 = (long **)FUN_SharedStorageGet(0x173cb0);
    cVar37 = (**(code **)(**pplVar43 + 0xc0))(*pplVar43,p_Var15,0);
    if (cVar37 == '\0') {
      pp_Var47 = (jclass *)((ulong)local_1e0 | 1);
      if ((local_1e0[0] & 1) != 0) {
        pp_Var47 = local_1d0;
      }
      pp_Var47 = (jclass *)(*(*param_1->env)->FindClass)(param_1->env,(char *)pp_Var47);
      pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
      if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
      local_158 = (long *)*puVar46;
      local_160 = (undefined8 *)0x16f558;
      if (pp_Var47 == (jclass *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      local_170 = pp_Var47;
      local_140[0] = &local_160;
      (*(*param_1->env)->IsInstanceOf)(param_1->env,p_Var15,(jclass)pp_Var47);
      local_c0 = (undefined  [8])local_170;
      local_170 = (jclass *)0x0;
      if (local_c0 != (undefined  [8])0x0) {
        if (local_140[0] == (undefined8 **)0x0) {
          return;
        }
        (*(code *)(*local_140[0])[6])(local_140[0],local_c0);
      }
      if (local_140[0] == &local_160) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (local_140[0] != (undefined8 **)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  
}

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
} insn_0x1e_t;


void case_0x1e()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;

  
    vm_context = *(long *)&param_1->field_0x68;
    uVar96 = *(uint *)vm_context->vmCodeLength;
    iVar42 = *(int *)(vm_context + 0x14);
    uVar43 = *(long *)vm_context->vmCode;
    *(int *)(vm_context + 0x14) = iVar42 + 4;
    *(int *)(vm_context + 0x14) = iVar42 + 0xc;
    vm_context->pc = iVar42 + 0x10U;
    sVar26 = *(short *)(uVar43 + (ulong)(iVar42 + 0x10U));
    *(int *)(vm_context + 0x14) = iVar42 + 0x12;
    *(int *)(vm_context + 0x14) = iVar42 + 0x16;
    vm_context->pc = iVar42 + 0x1aU;
    uVar41 = *(uint *)(uVar43 + (ulong)(iVar42 + 0x1aU));
    vm_context->pc = iVar42 + 0x1eU;
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    uVar14 = *(uint *)(uVar43 + (ulong)(iVar42 + 0x1eU));
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
    pp_Var3 = (jstring *)
              (param_1->field91_0x70 +
              (ulong)(ushort)(*(ushort *)(uVar43 + (ulong)uVar41) ^ (ushort)uVar41 ^ 0xffff) * 0x10)
    ;
    p_Var16 = *pp_Var3;
    p_Var81 = pp_Var3[1];
    if (p_Var81 != (jstring)0x0) {
      FUN_00129110(1,p_Var81 + 8);
      uVar43 = *(long *)(*(long *)&param_1->field_0x68 + 8);
    }
    (*(*param_1->env)->ReleaseStringUTFChars)
              (param_1->env,p_Var16,*(char **)(uVar43 + (ulong)(uVar14 - uVar99 * uVar96)));
    jVar38 = (*(*param_1->env)->ExceptionCheck)(param_1->env);
    if (jVar38 == '\0') {
      if (sVar26 != 0) {
        iVar42 = 0;
        do {
          iVar42 = iVar42 + 1;
        } while (sVar26 != iVar42);
      }
    }
    else {
      (*(*param_1->env)->ExceptionClear)(param_1->env);
      if (sVar26 != 0) {
        iVar42 = 0;
        do {
          iVar42 = iVar42 + 1;
        } while (sVar26 != iVar42);
      }
    }
    goto LAB_00157478;
  
}

#include "gvm/types.h"

typedef struct {
    addr_t a;                 // +0x0
    addr_t aXorValue;         // +0x4
    long ulHash;              // +0xc
    addr_t aHashDataAddr;     // +0x10
    short aHashDataLen;       // +0x14
    addr_t aNext;             // +0x16
    addr_t aFallback;         // +0x1a
} insn_0x6c_t;


void case_0x6c()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;

  
    vm_context = *(long *)&param_1->field_0x68;
    uVar14 = *(uint *)vm_context->vmCodeLength;
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
    *(int *)(vm_context + 0x14) = iVar42 + 0x1e;
    uVar41 = uVar41 ^ uVar14 ^ 0xffffffff;
    uVar96 = 0;
    if (uVar14 != 0) {
      uVar96 = uVar41 / uVar14;
    }
    uVar41 = uVar41 - uVar96 * uVar14;
    pp_Var5 = (jthrowable *)
              (param_1->field91_0x70 +
              (ulong)(ushort)(*(ushort *)(lVar73 + (ulong)uVar41) ^ (ushort)uVar41 ^ 0xffff) * 0x10)
    ;
    obj = *pp_Var5;
    plVar77 = (long *)pp_Var5[1];
    if (plVar77 != (long *)0x0) {
      FUN_00129110(1,plVar77 + 1);
    }
    (*(*param_1->env)->Throw)(param_1->env,obj);
    iVar42 = (int)sVar26;
    if (iVar42 != 0) {
      iVar39 = 0;
      do {
        iVar39 = iVar39 + 1;
      } while (iVar42 != iVar39);
    }
    if (plVar77 == (long *)0x0) {
      return;
    }
    vm_context = FUN_00129140(0xffffffffffffffff,plVar77 + 1);
    if (vm_context != 0) {
      return;
    }
    (**(code **)(*plVar77 + 0x10))(plVar77);
    FUN_00119ba4(plVar77);
    return;
  
}

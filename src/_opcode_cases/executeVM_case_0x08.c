#include "gvm/types.h"

typedef struct {
  addr_t a;                 // +0x0
  addr_t b;                 // +0x4
  short c;                  // +0x8
  ushort d;                 // +0xa
} insn_0x06_t;


void case_0x08()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;


    vm_context = *(long *)&param_1->field_0x68;
    code_length = *(uint *)vm_context->vmCodeLength;
    pc_base = *(int *)(vm_context + 0x14);
    *(int *)(vm_context + 0x14) = pc_base + 4;
    *(int *)(vm_context + 0x14) = pc_base + 0xc;
    vm_context->pc = pc_base + 0x10U;
    sVar25 = *(short *)(*(long *)vm_context->vmCode + (ulong)(pc_base + 0x10U));
    *(int *)(vm_context + 0x14) = pc_base + 0x12;
    *(int *)(vm_context + 0x14) = pc_base + 0x16;
    vm_context->pc = pc_base + 0x1aU;
    uVar39 = *(uint *)(*(long *)vm_context->vmCode + (ulong)(pc_base + 0x1aU));
    *(int *)(vm_context + 0x14) = pc_base + 0x1e;
    uVar39 = uVar39 ^ code_length ^ 0xffffffff;
    *(int *)(vm_context + 0x14) = pc_base + 0x22;
    uVar96 = 0;
    if (code_length != 0) {
      uVar96 = uVar39 / uVar15;
    }
    func_0x00169010(&local_170,vm_context,uVar39 - uVar96 * uVar15,1);
    FUN_00149a84(&local_1e0,*(undefined8 *)((long)local_170 + 8),
                 *(undefined4 *)((long)local_170 + 0x10),local_10c,(ulong)plStack_168 & 0xffffffff);
    pp_Var70 = (jclass *)((ulong)&local_1e0 | 1);
    if (((byte)local_1e0 & 1) != 0) {
      pp_Var70 = local_1d0;
    }
    if ((byte)*(_jobject *)pp_Var70 - 0x42 < 0x1a) {
      pc_base = *(int *)(&DAT_0010ee48 + ((ulong)((byte)*(_jobject *)pp_Var70 - 0x42) & 0xff) * 4);
      if (pc_base < 0x49) {
        if (0x43 < iVar40) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (pc_base == 0x42) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (pc_base < 0x4c) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (pc_base == 0x5a) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
    vm_context = func_0x00168e38(&local_160,param_1->env);
    if (vm_context == 0) {
      if (sVar25 != 0) {
        pc_base = 0;
        do {
          pc_base = pc_base + 1;
        } while (sVar25 != iVar40);
      }
    }
    else {
      vm_context = func_0x00168c3c(&local_170,param_1->env);
      if (vm_context != 0) {
        _Var22 = *(_jobject *)pp_Var70;
        if ((byte)_Var22 < 0x4a) {
          if ((byte)_Var22 < 0x44) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (_Var22 == (_jobject)0x44) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (_Var22 == (_jobject)0x46) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (_Var22 == (_jobject)0x49) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else {
          if ((byte)_Var22 < 0x53) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (_Var22 == (_jobject)0x53) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (_Var22 == (_jobject)0x5a) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (_Var22 == (_jobject)0x5b) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (sVar25 != 0) {
        pc_base = 0;
        do {
          pc_base = pc_base + 1;
        } while (sVar25 != iVar40);
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();

}

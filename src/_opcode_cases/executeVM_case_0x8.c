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
} insn_0x8_t;


void case_0x08()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;

  
    vm_context = *(long *)&param_1->field_0x68;
    uVar14 = *(uint *)vm_context->vmCodeLength;
    iVar42 = *(int *)(vm_context + 0x14);
    *(int *)(vm_context + 0x14) = iVar42 + 4;
    *(int *)(vm_context + 0x14) = iVar42 + 0xc;
    vm_context->pc = iVar42 + 0x10U;
    sVar26 = *(short *)(*(long *)vm_context->vmCode + (ulong)(iVar42 + 0x10U));
    *(int *)(vm_context + 0x14) = iVar42 + 0x12;
    *(int *)(vm_context + 0x14) = iVar42 + 0x16;
    vm_context->pc = iVar42 + 0x1aU;
    uVar41 = *(uint *)(*(long *)vm_context->vmCode + (ulong)(iVar42 + 0x1aU));
    *(int *)(vm_context + 0x14) = iVar42 + 0x1e;
    uVar41 = uVar41 ^ uVar14 ^ 0xffffffff;
    *(int *)(vm_context + 0x14) = iVar42 + 0x22;
    uVar96 = 0;
    if (uVar14 != 0) {
      uVar96 = uVar41 / uVar14;
    }
    func_0x00169010(&local_170,vm_context,uVar41 - uVar96 * uVar14,1);
    FUN_00149a84_XOR((astruct_3 *)local_1e0,(char *)local_170[1],*(undefined4 *)(local_170 + 2),
                     local_10c,plStack_168._0_4_);
    pp_Var47 = (jclass *)((ulong)local_1e0 | 1);
    if ((local_1e0[0] & 1) != 0) {
      pp_Var47 = local_1d0;
    }
    if ((byte)*(_jobject *)pp_Var47 - 0x42 < 0x1a) {
      iVar42 = *(int *)(&DAT_0010ee48 + ((ulong)((byte)*(_jobject *)pp_Var47 - 0x42) & 0xff) * 4);
      if (iVar42 < 0x49) {
        if (0x43 < iVar42) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (iVar42 == 0x42) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (iVar42 < 0x4c) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (iVar42 == 0x5a) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
    vm_context = func_0x00168e38(&local_160,param_1->env);
    if (vm_context == 0) {
      if (sVar26 != 0) {
        iVar42 = 0;
        do {
          iVar42 = iVar42 + 1;
        } while (sVar26 != iVar42);
      }
    }
    else {
      vm_context = func_0x00168c3c(&local_170,param_1->env);
      if (vm_context != 0) {
        _Var23 = *(_jobject *)pp_Var47;
        if ((byte)_Var23 < 0x4a) {
          if ((byte)_Var23 < 0x44) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (_Var23 == (_jobject)0x44) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (_Var23 == (_jobject)0x46) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (_Var23 == (_jobject)0x49) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else {
          if ((byte)_Var23 < 0x53) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (_Var23 == (_jobject)0x53) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (_Var23 == (_jobject)0x5a) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (_Var23 == (_jobject)0x5b) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (sVar26 != 0) {
        iVar42 = 0;
        do {
          iVar42 = iVar42 + 1;
        } while (sVar26 != iVar42);
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  
}

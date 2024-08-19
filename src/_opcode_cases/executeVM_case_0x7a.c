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
} insn_0x7a_t;


void case_0x7a()
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
    uVar41 = uVar41 ^ uVar14 ^ 0xffffffff;
    vm_context->pc = uVar96 + 8;
    uVar98 = 0;
    if (uVar14 != 0) {
      uVar98 = uVar41 / uVar14;
    }
    vm_context->pc = uVar96 + 0x10;
    vm_context->pc = uVar96 + 0x14;
    sVar26 = *(short *)(lVar73 + (ulong)(uVar96 + 0x14));
    vm_context->pc = uVar96 + 0x16;
    vm_context->pc = uVar96 + 0x1a;
    vm_context->pc = uVar96 + 0x1e;
    uVar99 = *(uint *)(lVar73 + (ulong)(uVar96 + 0x1e));
    vm_context->pc = uVar96 + 0x22;
    func_0x00169010(&local_170,vm_context,uVar41 - uVar98 * uVar14,1);
    FUN_00149a84_XOR((astruct_3 *)local_1e0,(char *)local_170[1],*(undefined4 *)(local_170 + 2),
                     local_10c,plStack_168._0_4_);
    p_Var78 = (jclass)func_0x00168e38(&local_160,param_1->env);
    if (p_Var78 == (jclass)0x0) {
      if (sVar26 != 0) {
        iVar42 = 0;
        do {
          iVar42 = iVar42 + 1;
        } while (sVar26 != iVar42);
      }
    }
    else {
      p_Var55 = (jfieldID)func_0x00168c3c(&local_170,param_1->env);
      if (p_Var55 != (jfieldID)0x0) {
        uVar99 = uVar99 ^ uVar14 ^ 0xffffffff;
        uVar41 = 0;
        if (uVar14 != 0) {
          uVar41 = uVar99 / uVar14;
        }
        pp_Var47 = (jclass *)((ulong)local_1e0 | 1);
        if ((local_1e0[0] & 1) != 0) {
          pp_Var47 = local_1d0;
        }
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
            jVar56 = (*(*param_1->env)->GetStaticIntField)(param_1->env,p_Var78,p_Var55);
            *(int *)(*(long *)(*(long *)&param_1->field_0x68 + 8) +
                    (ulong)(uVar99 - uVar41 * uVar14)) = (int)jVar56;
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

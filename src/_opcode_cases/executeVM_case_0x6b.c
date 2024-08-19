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
} insn_0x6b_t;


void case_0x6b()
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
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    uVar99 = 0;
    if (uVar96 != 0) {
      uVar99 = uVar41 / uVar96;
    }
    vm_context->pc = uVar98 + 0xc;
    vm_context->pc = uVar98 + 0x14;
    vm_context->pc = uVar98 + 0x18;
    sVar26 = *(short *)(lVar73 + (ulong)(uVar98 + 0x18));
    vm_context->pc = uVar98 + 0x1a;
    uVar41 = uVar41 - uVar99 * uVar96;
    vm_context->pc = uVar98 + 0x1e;
    vm_context->pc = uVar98 + 0x22;
    uVar99 = *(uint *)(lVar73 + (ulong)(uVar98 + 0x22));
    vm_context->pc = uVar98 + 0x26;
    pp_Var3 = (jstring *)
              (param_1->field91_0x70 +
              (ulong)(ushort)(*(ushort *)(lVar73 + (ulong)uVar41) ^ (ushort)uVar41 ^ 0xffff) * 0x10)
    ;
    p_Var16 = *pp_Var3;
    p_Var81 = pp_Var3[1];
    if (p_Var81 != (jstring)0x0) {
      FUN_00129110(1,p_Var81 + 8);
    }
    jVar58 = (*(*param_1->env)->GetStringUTFLength)(param_1->env,p_Var16);
    pcVar45 = (*(*param_1->env)->GetStringUTFChars)(param_1->env,p_Var16,(jboolean *)0x0);
    if (pcVar45 == (char *)0x0) {
      if (sVar26 != 0) {
        iVar42 = 0;
        do {
          iVar42 = iVar42 + 1;
        } while (sVar26 != iVar42);
      }
    }
    else {
      uVar99 = uVar99 ^ uVar96 ^ 0xffffffff;
      uVar14 = uVar14 ^ uVar96 ^ 0xffffffff;
      uVar41 = 0;
      if (uVar96 != 0) {
        uVar41 = uVar99 / uVar96;
      }
      uVar98 = 0;
      if (uVar96 != 0) {
        uVar98 = uVar14 / uVar96;
      }
      *(char **)(*(long *)(*(long *)&param_1->field_0x68 + 8) + (ulong)(uVar99 - uVar41 * uVar96)) =
           pcVar45;
      *(int *)(*(long *)(*(long *)&param_1->field_0x68 + 8) + (ulong)(uVar14 - uVar98 * uVar96)) =
           (int)jVar58;
      if (sVar26 != 0) {
        iVar42 = 0;
        do {
          iVar42 = iVar42 + 1;
        } while (sVar26 != iVar42);
      }
    }
LAB_00157478:
    if (p_Var81 != (jstring)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  
}

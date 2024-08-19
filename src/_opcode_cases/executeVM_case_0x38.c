#include "gvm/types.h"

typedef struct {
    addr_t a;                 // +0x0
    addr_t b;                 // +0x4
    addr_t c;                 // +0x8
    addr_t d;                 // +0xc
    addr_t aXorValue;         // +0x10
    long ulHash;              // +0x18
    addr_t aHashDataAddr;     // +0x1c
    short aHashDataLen;       // +0x20
    addr_t aNext;             // +0x22
    addr_t aFallback;         // +0x26
} insn_0x38_t;


void case_0x38()
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
    vm_context->pc = uVar98 + 8;
    uVar14 = *(uint *)(lVar73 + (ulong)(uVar98 + 8));
    vm_context->pc = uVar98 + 0xc;
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    vm_context->pc = uVar98 + 0x10;
    uVar99 = 0;
    if (uVar96 != 0) {
      uVar99 = uVar41 / uVar96;
    }
    vm_context->pc = uVar98 + 0x18;
    uVar14 = uVar14 ^ uVar96 ^ 0xffffffff;
    uVar97 = 0;
    if (uVar96 != 0) {
      uVar97 = uVar14 / uVar96;
    }
    vm_context->pc = uVar98 + 0x1c;
    sVar26 = *(short *)(lVar73 + (ulong)(uVar98 + 0x1c));
    vm_context->pc = uVar98 + 0x1e;
    vm_context->pc = uVar98 + 0x22;
    vm_context->pc = uVar98 + 0x26;
    func_0x00168ad4(&local_170,vm_context,uVar14 - uVar97 * uVar96,1);
    func_0x00167db4(local_1e0,param_1->env,*(undefined8 *)&param_1->field_0x68,
                    &param_1->field91_0x70,uVar41 - uVar99 * uVar96,&local_170);
    if (local_1a0 == '\0') {
      iVar42 = (int)sVar26;
      if (iVar42 != 0) {
        iVar39 = 0;
        do {
          iVar39 = iVar39 + 1;
        } while (iVar42 != iVar39);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (local_1a8 < 0x4a) {
      if (local_1a8 < 0x44) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (local_1a8 == 0x44) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (local_1a8 == 0x46) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (local_1a8 == 0x49) {
        if ((*param_1->env)->CallStaticIntMethodA == (_func_367 *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (local_1a8 < 0x53) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (local_1a8 == 0x53) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (local_1a8 == 0x5a) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (local_1a8 == 0x56) {
        (*(*param_1->env)->CallStaticVoidMethodA)
                  (param_1->env,*pp_Stack_1d8,(jmethodID)local_1e0,(jvalue *)(pp_Stack_1d8 + 1));
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  
}

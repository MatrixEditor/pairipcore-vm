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
} insn_0xf_t;


void case_0x0f()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;

  
    vm_context = *(long *)&param_1->field_0x68;
    uVar98 = *(uint *)vm_context->vmCodeLength;
    uVar99 = vm_context->pc;
    uVar43 = *(long *)vm_context->vmCode;
    uVar41 = *(uint *)(uVar43 + (ulong)uVar99);
    vm_context->pc = uVar99 + 4;
    uVar14 = *(uint *)(uVar43 + (ulong)(uVar99 + 4));
    vm_context->pc = uVar99 + 8;
    uVar41 = uVar41 ^ uVar98 ^ 0xffffffff;
    uVar96 = *(uint *)(uVar43 + (ulong)(uVar99 + 8));
    vm_context->pc = uVar99 + 0xc;
    uVar97 = 0;
    if (uVar98 != 0) {
      uVar97 = uVar41 / uVar98;
    }
    uVar14 = uVar14 ^ uVar98 ^ 0xffffffff;
    uVar96 = uVar96 ^ uVar98 ^ 0xffffffff;
    uVar100 = 0;
    if (uVar98 != 0) {
      uVar100 = uVar14 / uVar98;
    }
    uVar101 = 0;
    if (uVar98 != 0) {
      uVar101 = uVar96 / uVar98;
    }
    uVar14 = uVar14 - uVar100 * uVar98;
    vm_context->pc = uVar99 + 0x10;
    vm_context->pc = uVar99 + 0x18;
    vm_context->pc = uVar99 + 0x1c;
    sVar26 = *(short *)(uVar43 + (ulong)(uVar99 + 0x1c));
    vm_context->pc = uVar99 + 0x1e;
    uVar96 = uVar96 - uVar101 * uVar98;
    vm_context->pc = uVar99 + 0x22;
    vm_context->pc = uVar99 + 0x26;
    jVar38 = (*(*param_1->env)->IsSameObject)
                       (param_1->env,
                        *(jobject *)
                         (param_1->field91_0x70 +
                         ((ulong)((uint)*(ushort *)(uVar43 + (ulong)uVar14) ^ uVar14 ^ 0xffffffff) &
                         0xffff) * 0x10),
                        *(jobject *)
                         (param_1->field91_0x70 +
                         ((ulong)((uint)*(ushort *)(uVar43 + (ulong)uVar96) ^ uVar96 ^ 0xffffffff) &
                         0xffff) * 0x10));
    *(uint *)(*(long *)vm_context->vmCode + (ulong)(uVar41 - uVar97 * uVar98)) = (uint)(jVar38 != '\0');
    iVar42 = (int)sVar26;
    if (iVar42 == 0) {
      return;
    }
    iVar39 = 0;
    do {
      iVar39 = iVar39 + 1;
    } while (iVar42 != iVar39);
    return;
  
}

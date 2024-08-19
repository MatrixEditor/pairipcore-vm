#include "gvm/types.h"

typedef struct {
  addr_t aXorValue;         // +0x0
  ulong ulHash;             // +0x4
  addr_t aHashDataAddr;     // +0xc
  short aHashDataLen;       // +0x10
  addr_t aNext;             // +0x12
  addr_t aFallback;         // +0x16
  addr_t a;                 // +0x1a
  addr_t b;                 // +0x1e
  addr_t c;                 // +0x22
} insn_0x71_t;


void case_0x71()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;
    addr_t aXorValue;
    ulong ulHash;
    addr_t aHashDataAddr;
    short aHashDataLen;
    addr_t aNext;
    addr_t aFallback;
    addr_t a;
    addr_t b;
    addr_t c;

    code_length = *(uint *)vm_context->vmCodeLength;
    uVar99  = vm_context->pc;
    vm_code = *(long *)vm_context->vmCode;
    aXorValue = *(uint *)(vm_code + (ulong)uVar99 );
    vm_context->pc = uVar99  + 4;
    ulHash = *(ulong *)(vm_code + (ulong)(uVar99  + 4));
    vm_context->pc = uVar99  + 0xc;
    aHashDataAddr = *(uint *)(vm_code + (ulong)(uVar99  + 0xc));
    vm_context->pc = uVar99  + 0x10;
    aHashDataLen = *(short *)(vm_code + (ulong)(uVar99  + 0x10));
    vm_context->pc = uVar99  + 0x12;
    aNext = *(uint *)(vm_code + (ulong)(uVar99  + 0x12));
    vm_context->pc = uVar99  + 0x16;
    aFallback = *(uint *)(vm_code + (ulong)(uVar99  + 0x16));
    vm_context->pc = uVar99  + 0x1a;
    a = *(uint *)(vm_code + (ulong)(uVar99  + 0x1a));
    vm_context->pc = uVar99  + 0x1e;
    a = a ^ code_length ^ 0xffffffff;
    uVar33 = 0;
    if (code_length != 0) {
      uVar33 = a / uVar22;
    }
    b = *(uint *)(vm_code + (ulong)(uVar99  + 0x1e)) ^ code_length ^ 0xffffffff;
    uVar11 = 0;
    if (code_length != 0) {
      uVar11 = b / uVar22;
    }
    vm_context->pc = uVar99  + 0x22;
    c = *(uint *)(vm_code + (ulong)(uVar99  + 0x22));
    vm_context->pc = uVar99  + 0x26;
    lVar31 = *(long *)(vm_code + (ulong)(a - uVar33 * uVar22));
    c = c ^ code_length ^ 0xffffffff;
    uVar23 = (ulong)uVar4;
    a = 0;
    if (code_length != 0) {
      a = c / uVar22;
    }
    param_4 = (long)uVar;
    lVar21 = *(long *)(vm_code + (ulong)(b - uVar11 * uVar22));
    lVar20 = 0;
    if (lVar31 != 0) {
      lVar20 = lVar21 / lVar31;
    }
    *(long *)(vm_code + (ulong)(c - a * uVar22)) = lVar21 - lVar20 * lVar31;
    vm_code = *(long *)vm_context->vmCode;
    uVar18 = 0xcbf29ce484222325;
    iVar15 = (int)sVar10;
    if (iVar15 != 0) {
      aHashDataAddr = aHashDataAddr ^ code_length ^ 0xffffffff;
      lVar31 = 0;
      iVar14 = 0;
      a = 0;
      if (code_length != 0) {
        a = aHashDataAddr / uVar22;
      }
      uVar18 = 0xcbf29ce484222325;
      do {
        uVar23 = (ulong)*(char *)(vm_code + (ulong)(aHashDataAddr - a * uVar22) + lVar31);
        iVar14 = iVar14 + 1;
        lVar31 = (long)iVar14;
        uVar18 = uVar18 * 0x100000001b3 ^ uVar23;
      } while (iVar15 != iVar14);
    }
    goto LAB_00149580;

}

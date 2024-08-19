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
} insn_0x1b_t;


void case_0x1b()
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
    pc_base = vm_context->pc;
    vm_code = *(long *)vm_context->vmCode;
    aXorValue  = *(uint *)(vm_code + (ulong)uVar26);
    vm_context->pc = pc_base + 4;
    ulHash = *(ulong *)(vm_code + (ulong)(pc_base + 4));
    vm_context->pc = pc_base + 0xc;
    aHashDataAddr = *(uint *)(vm_code + (ulong)(pc_base + 0xc));
    vm_context->pc = pc_base + 0x10;
    aHashDataLen = *(short *)(vm_code + (ulong)(pc_base + 0x10));
    vm_context->pc = pc_base + 0x12;
    aNext = *(uint *)(vm_code + (ulong)(pc_base + 0x12));
    vm_context->pc = pc_base + 0x16;
    aFallback = *(uint *)(vm_code + (ulong)(pc_base + 0x16));
    vm_context->pc = pc_base + 0x1a;
    c = pc_base + 0x26;
    param_5 = (long)uVar;
    a = *(uint *)(vm_code + (ulong)(pc_base + 0x1a));
    vm_context->pc = pc_base + 0x1e;
    vm_context->pc = pc_base + 0x22;
    b = *(uint *)(vm_code + (ulong)(pc_base + 0x22));
    vm_context->pc = uVar;
    b = b ^ code_length ^ 0xffffffff;
    uVar11 = 0;
    if (code_length != 0) {
      uVar11 = b / uVar22;
    }
    param_4 = (long)(pc_base + 0x2a);
    c = *(uint *)(vm_code + (ulong)uVar);
    vm_context->pc = pc_base + 0x2a;
    dVar35 = *(double *)(vm_code + (ulong)(b - uVar11 * uVar22));
    c = c ^ code_length ^ 0xffffffff;
    b = 0;
    if (code_length != 0) {
      b = c / uVar22;
    }
    dVar39 = *(double *)(vm_code + (ulong)(c - b * uVar22));
    uVar13 = 0xffffffff;
    if (dVar39 < dVar35) {
      uVar13 = 1;
    }
    uVar1 = 0;
    if (dVar35 != dVar39) {
      uVar1 = uVar13;
    }
    a = a ^ code_length ^ 0xffffffff;
    c = 0;
    if (code_length != 0) {
      c = a / uVar22;
    }
    uVar23 = (ulong)uVar;
    *(undefined4 *)(vm_code + (ulong)(a - c * uVar22)) = uVar1;
    vm_code = *(long *)vm_context->vmCode;
    uVar18 = 0xcbf29ce484222325;
    iVar15 = (int)sVar10;
    if (iVar15 != 0) {
      aHashDataAddr = aHashDataAddr ^ code_length ^ 0xffffffff;
      lVar31 = 0;
      iVar14 = 0;
      c = 0;
      if (code_length != 0) {
        c = aHashDataAddr / uVar22;
      }
      uVar18 = 0xcbf29ce484222325;
      do {
        uVar23 = (ulong)*(char *)(vm_code + (ulong)(aHashDataAddr - c * uVar22) + lVar31);
        iVar14 = iVar14 + 1;
        lVar31 = (long)iVar14;
        uVar18 = uVar18 * 0x100000001b3 ^ uVar23;
      } while (iVar15 != iVar14);
    }
    goto LAB_001498ac;

}

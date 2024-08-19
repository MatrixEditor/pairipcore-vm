#include "gvm/types.h"

typedef struct {
  addr_t a;                 // +0x0
  addr_t b;                 // +0x4
  addr_t aXorValue;         // +0x8
  ulong ulHash;             // +0xc
  addr_t aHashDataAddr;     // +0x14
  short aHashDataLen;       // +0x18
  addr_t aNext;             // +0x1a
  addr_t aFallback;         // +0x1e
  addr_t c;                 // +0x22
} insn_0x66_t;


void case_0x66()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;
    addr_t a;
    addr_t b;
    addr_t aXorValue;
    ulong ulHash;
    addr_t aHashDataAddr;
    short aHashDataLen;
    addr_t aNext;
    addr_t aFallback;
    addr_t c;

    code_length = *(uint *)vm_context->vmCodeLength;
    pc_base = vm_context->pc;
    vm_code = *(long *)vm_context->vmCode;
    a = *(uint *)(vm_code + (ulong)uVar24);
    vm_context->pc = pc_base + 4;
    b = *(uint *)(vm_code + (ulong)(pc_base + 4));
    vm_context->pc = pc_base + 8;
    aXorValue  = *(uint *)(vm_code + (ulong)(pc_base + 8));
    vm_context->pc = pc_base + 0xc;
    b = b ^ code_length ^ 0xffffffff;
    ulHash = *(ulong *)(vm_code + (ulong)(pc_base + 0xc));
    vm_context->pc = pc_base + 0x14;
    aHashDataAddr = *(uint *)(vm_code + (ulong)(pc_base + 0x14));
    vm_context->pc = pc_base + 0x18;
    aHashDataLen = *(short *)(vm_code + (ulong)(pc_base + 0x18));
    vm_context->pc = pc_base + 0x1a;
    aNext = *(uint *)(vm_code + (ulong)(pc_base + 0x1a));
    vm_context->pc = pc_base + 0x1e;
    uVar26 = 0;
    if (code_length != 0) {
      uVar26 = b / uVar22;
    }
    aFallback = *(uint *)(vm_code + (ulong)(pc_base + 0x1e));
    vm_context->pc = pc_base + 0x22;
    c = *(uint *)(vm_code + (ulong)(pc_base + 0x22));
    vm_context->pc = pc_base + 0x26;
    a = a ^ code_length ^ 0xffffffff;
    c = c ^ code_length ^ 0xffffffff;
    param_4 = (long)uVar11;
    pc_base = 0;
    if (code_length != 0) {
      pc_base = c / uVar22;
    }
    param_5 = (long)uVar24;
    uVar23 = (ulong)(b - uVar26 * uVar22);
    b = 0;
    if (code_length != 0) {
      b = a / uVar22;
    }
    uVar18 = 0xcbf29ce484222325;
    *(float *)(vm_code + (ulong)(a - b * uVar22)) =
         *(float *)(vm_code + (ulong)(c - pc_base * uVar22)) / *(float *)(vm_code + uVar23);
    vm_code = *(long *)vm_context->vmCode;
    iVar15 = (int)sVar10;
    if (iVar15 != 0) {
      aHashDataAddr = aHashDataAddr ^ code_length ^ 0xffffffff;
      lVar31 = 0;
      iVar14 = 0;
      b = 0;
      if (code_length != 0) {
        b = aHashDataAddr / uVar22;
      }
      uVar18 = 0xcbf29ce484222325;
      do {
        uVar23 = (ulong)*(char *)(vm_code + (ulong)(aHashDataAddr - b * uVar22) + lVar31);
        iVar14 = iVar14 + 1;
        lVar31 = (long)iVar14;
        uVar18 = uVar18 * 0x100000001b3 ^ uVar23;
      } while (iVar15 != iVar14);
    }
    goto LAB_001498ac;

}

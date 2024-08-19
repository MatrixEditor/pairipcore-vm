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
} insn_0x5a_t;


void case_0x5a()
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
    aXorValue = *(uint *)(vm_code + (ulong)uVar33);
    vm_context->pc = pc_base + 4;
    ulHash = *(ulong *)(vm_code + (ulong)(pc_base + 4));
    vm_context->pc = pc_base + 0xc;
    aHashDataAddr  = *(uint *)(vm_code + (ulong)(pc_base + 0xc));
    vm_context->pc = pc_base + 0x10;
    aHashDataLen = *(short *)(vm_code + (ulong)(pc_base + 0x10));
    vm_context->pc = pc_base + 0x12;
    aNext = *(uint *)(vm_code + (ulong)(pc_base + 0x12));
    vm_context->pc = pc_base + 0x16;
    aFallback = *(uint *)(vm_code + (ulong)(pc_base + 0x16));
    vm_context->pc = pc_base + 0x1a;
    a = *(uint *)(vm_code + (ulong)(pc_base + 0x1a));
    vm_context->pc = pc_base + 0x1e;
    b = *(uint *)(vm_code + (ulong)(pc_base + 0x1e));
    a = a ^ code_length ^ 0xffffffff;
    vm_context->pc = pc_base + 0x22;
    uVar26 = 0;
    if (code_length != 0) {
      uVar26 = a / uVar22;
    }
    c = *(uint *)(vm_code + (ulong)(pc_base + 0x22));
    vm_context->pc = pc_base + 0x26;
    b = b ^ code_length ^ 0xffffffff;
    c = c ^ code_length ^ 0xffffffff;
    param_5 = (long)uVar11;
    pc_base = 0;
    if (code_length != 0) {
      pc_base = b / uVar22;
    }
    param_4 = (long)uVar33;
    uVar18 = 0xcbf29ce484222325;
    uVar4 = 0;
    if (code_length != 0) {
      uVar4 = c / uVar22;
    }
    param_6 = (long)uVar4;
    uVar23 = (ulong)(b - pc_base * uVar22);
    *(float *)(vm_code + (ulong)(c - uVar4 * uVar22)) =
         *(float *)(vm_code + uVar23) + *(float *)(vm_code + (ulong)(a - uVar26 * uVar22));
    vm_code = *(long *)vm_context->vmCode;
    iVar15 = (int)sVar10;
    if (iVar15 != 0) {
      aHashDataAddr  = aHashDataAddr  ^ code_length ^ 0xffffffff;
      lVar31 = 0;
      iVar14 = 0;
      a = 0;
      if (code_length != 0) {
        a = aHashDataAddr  / uVar22;
      }
      uVar18 = 0xcbf29ce484222325;
      do {
        uVar23 = (ulong)*(char *)(vm_code + (ulong)(aHashDataAddr  - a * uVar22) + lVar31);
        iVar14 = iVar14 + 1;
        lVar31 = (long)iVar14;
        uVar18 = uVar18 * 0x100000001b3 ^ uVar23;
      } while (iVar15 != iVar14);
    }
    goto LAB_00149580;

}

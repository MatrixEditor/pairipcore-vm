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
} insn_0x73_t;


void case_0x73()
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
    a = *(uint *)(vm_code + (ulong)uVar26);
    vm_context->pc = pc_base + 4;
    b = *(uint *)(vm_code + (ulong)(pc_base + 4));
    vm_context->pc = pc_base + 8;
    aXorValue = *(uint *)(vm_code + (ulong)(pc_base + 8));
    vm_context->pc = pc_base + 0xc;
    b = b ^ code_length ^ 0xffffffff;
    ulHash = *(ulong *)(vm_code + (ulong)(pc_base + 0xc));
    vm_context->pc = pc_base + 0x14;
    aHashDataAddr  = *(uint *)(vm_code + (ulong)(pc_base + 0x14));
    vm_context->pc = pc_base + 0x18;
    aHashDataLen = *(short *)(vm_code + (ulong)(pc_base + 0x18));
    vm_context->pc = pc_base + 0x1a;
    aNext = *(uint *)(vm_code + (ulong)(pc_base + 0x1a));
    vm_context->pc = pc_base + 0x1e;
    uVar29 = 0;
    if (code_length != 0) {
      uVar29 = b / uVar22;
    }
    aFallback = *(uint *)(vm_code + (ulong)(pc_base + 0x1e));
    vm_context->pc = pc_base + 0x22;
    a = a ^ code_length ^ 0xffffffff;
    c = *(uint *)(vm_code + (ulong)(pc_base + 0x22));
    vm_context->pc = pc_base + 0x26;
    c = c ^ code_length ^ 0xffffffff;
    param_4 = (long)uVar11;
    pc_base = 0;
    if (code_length != 0) {
      pc_base = c / uVar22;
    }
    param_5 = (long)uVar26;
    uVar4 = 0;
    if (code_length != 0) {
      uVar4 = a / uVar22;
    }
    param_6 = (long)uVar4;
    uVar18 = (ulong)(a - uVar4 * uVar22);
    uVar23 = 0xcbf29ce484222325;
    *(uint *)(vm_code + uVar18) =
         *(uint *)(vm_code + (ulong)(b - uVar29 * uVar22)) &
         *(uint *)(vm_code + (ulong)(c - pc_base * uVar22));
    vm_code = *(long *)vm_context->vmCode;
    iVar15 = (int)sVar10;
    if (iVar15 != 0) {
      aHashDataAddr  = aHashDataAddr  ^ code_length ^ 0xffffffff;
      uVar18 = 0;
      iVar14 = 0;
      b = 0;
      if (code_length != 0) {
        b = aHashDataAddr  / uVar22;
      }
      do {
        pcVar16 = (char *)(vm_code + (ulong)(aHashDataAddr  - b * uVar22) + uVar18);
        iVar14 = iVar14 + 1;
        uVar18 = (ulong)iVar14;
        uVar23 = uVar23 * 0x100000001b3 ^ (long)*pcVar16;
      } while (iVar15 != iVar14);
    }
    goto LAB_00149104;

}

#include "gvm/types.h"

typedef struct {
  addr_t a;                 // +0x0
  addr_t aXorValue;         // +0x4
  ulong ulHash;             // +0x8
  addr_t aHashDataAddr;     // +0x10
  short aHashDataLen;       // +0x14
  addr_t aNext;             // +0x16
  addr_t aFallback;         // +0x1a
  addr_t b;                 // +0x1e
  addr_t c;                 // +0x22
} insn_0x10_t;


void case_0x10()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;
    addr_t a;
    addr_t aXorValue;
    ulong ulHash;
    addr_t aHashDataAddr;
    short aHashDataLen;
    addr_t aNext;
    addr_t aFallback;
    addr_t b;
    addr_t c;

    code_length = *(uint *)vm_context->vmCodeLength;
    pc_base = vm_context->pc;
    vm_code = *(long *)vm_context->vmCode;
    a = *(uint *)(vm_code + (ulong)uVar33);
    vm_context->pc = pc_base + 4;
    aXorValue  = *(uint *)(vm_code + (ulong)(pc_base + 4));
    vm_context->pc = pc_base + 8;
    a = a ^ code_length ^ 0xffffffff;
    ulHash = *(ulong *)(vm_code + (ulong)(pc_base + 8));
    vm_context->pc = pc_base + 0x10;
    aHashDataAddr = *(uint *)(vm_code + (ulong)(pc_base + 0x10));
    vm_context->pc = pc_base + 0x14;
    aHashDataLen = *(short *)(vm_code + (ulong)(pc_base + 0x14));
    vm_context->pc = pc_base + 0x16;
    aNext = *(uint *)(vm_code + (ulong)(pc_base + 0x16));
    vm_context->pc = pc_base + 0x1a;
    aFallback = *(uint *)(vm_code + (ulong)(pc_base + 0x1a));
    vm_context->pc = pc_base + 0x1e;
    uVar26 = 0;
    if (code_length != 0) {
      uVar26 = a / uVar22;
    }
    b = *(uint *)(vm_code + (ulong)(pc_base + 0x1e));
    vm_context->pc = pc_base + 0x22;
    c = *(uint *)(vm_code + (ulong)(pc_base + 0x22));
    vm_context->pc = pc_base + 0x26;
    b = b ^ code_length ^ 0xffffffff;
    param_4 = (long)uVar29;
    c = c ^ code_length ^ 0xffffffff;
    pc_base = 0;
    if (code_length != 0) {
      pc_base = c / uVar22;
    }
    param_5 = (long)uVar33;
    lVar31 = *(long *)(vm_code + (ulong)(a - uVar26 * uVar22));
    a = 0;
    if (code_length != 0) {
      a = b / uVar22;
    }
    param_6 = (long)uVar;
    lVar20 = *(long *)(vm_code + (ulong)(c - pc_base * uVar22));
    uVar13 = 0xffffffff;
    if (lVar20 < lVar31) {
      uVar13 = 1;
    }
    uVar1 = 0;
    if (lVar31 != lVar20) {
      uVar1 = uVar13;
    }
    uVar23 = (ulong)(b - a * uVar22);
    uVar18 = 0xcbf29ce484222325;
    *(undefined4 *)(vm_code + uVar23) = uVar1;
    vm_code = *(long *)vm_context->vmCode;
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
    goto LAB_00147c84;

}

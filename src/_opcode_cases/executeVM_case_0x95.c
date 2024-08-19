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
} insn_0x95_t;


void case_0x95()
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
    ulHash = *(ulong *)(vm_code + (ulong)(pc_base + 8));
    vm_context->pc = pc_base + 0x10;
    aHashDataAddr = *(uint *)(vm_code + (ulong)(pc_base + 0x10));
    vm_context->pc = pc_base + 0x14;
    aHashDataLen = *(short *)(vm_code + (ulong)(pc_base + 0x14));
    vm_context->pc = pc_base + 0x16;
    aNext = *(uint *)(vm_code + (ulong)(pc_base + 0x16));
    vm_context->pc = pc_base + 0x1a;
    a = a ^ code_length ^ 0xffffffff;
    aFallback = *(uint *)(vm_code + (ulong)(pc_base + 0x1a));
    vm_context->pc = pc_base + 0x1e;
    uVar26 = 0;
    if (code_length != 0) {
      uVar26 = a / uVar22;
    }
    param_5 = (long)uVar26;
    b = *(uint *)(vm_code + (ulong)(pc_base + 0x1e));
    vm_context->pc = pc_base + 0x22;
    c = *(uint *)(vm_code + (ulong)(pc_base + 0x22));
    vm_context->pc = pc_base + 0x26;
    lVar31 = -0x8000000000000000;
    c = c ^ code_length ^ 0xffffffff;
    pc_base = 0;
    if (code_length != 0) {
      pc_base = c / uVar22;
    }
    param_4 = (long)(a - uVar26 * uVar22);
    lVar20 = *(long *)(vm_code + (ulong)(c - pc_base * uVar22));
    lVar21 = *(long *)(vm_code + param_4);
    if (((lVar20 != -0x8000000000000000) || (lVar21 != -1)) && (lVar31 = 0, lVar21 != 0)) {
      lVar31 = lVar20 / lVar21;
    }
    b = b ^ code_length ^ 0xffffffff;
    a = 0;
    if (code_length != 0) {
      a = b / uVar22;
    }
    uVar23 = (ulong)uVar;
    *(long *)(vm_code + (ulong)(b - a * uVar22)) = lVar31;
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
LAB_00147c84:
    aXorValue  = aXorValue  ^ code_length ^ 0xffffffff;
    a = 0;
    if (code_length != 0) {
      a = aXorValue  / uVar22;
    }
    uVar27 = uVar18 ^ (long)*(int *)(vm_code + (ulong)(aXorValue  - a * uVar22));
LAB_00149118:
    if (uVar27 != uVar25) {
      aNext = uVar24;
    }
LAB_001498c8:
    auVar42._8_8_ = uVar23;
    auVar42._0_8_ = uVar18;
    param_3 = 0x100000001b3;
    aNext = aNext ^ code_length ^ 0xffffffff;
    a = 0;
    if (code_length != 0) {
      a = aNext / uVar22;
    }
    iVar15 = aNext - a * uVar22;
LAB_001498d4:
    *(int *)(vm_context + 0x14) = iVar15;
    uVar17 = caseD_3(auVar42._0_8_,auVar42._8_8_,param_3,param_4,param_5,param_6,param_7);
    return uVar17;

}

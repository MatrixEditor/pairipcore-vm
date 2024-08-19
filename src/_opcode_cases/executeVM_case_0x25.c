#include "gvm/types.h"

typedef struct {
  addr_t a;                 // +0x0
  addr_t b;                 // +0x4
  addr_t c;                 // +0x8
  addr_t aXorValue;         // +0xc
  ulong ulHash;             // +0x10
  addr_t aHashDataAddr;     // +0x18
  short aHashDataLen;       // +0x1c
  addr_t aNext;             // +0x1e
  addr_t aFallback;         // +0x22
} insn_0x25_t;


void case_0x25()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;
    addr_t a;
    addr_t b;
    addr_t c;
    addr_t aXorValue;
    ulong ulHash;
    addr_t aHashDataAddr;
    short aHashDataLen;
    addr_t aNext;
    addr_t aFallback;

    code_length = *(uint *)vm_context->vmCodeLength;
    pc_base = vm_context->pc;
    vm_code = *(long *)vm_context->vmCode;
    a = *(uint *)(vm_code + (ulong)uVar33);
    vm_context->pc = pc_base + 4;
    uVar = pc_base + 0x22;
    param_5 = (long)uVar;
    b  = *(uint *)(vm_code + (ulong)(pc_base + 4));
    a = a ^ code_length ^ 0xffffffff;
    vm_context->pc = pc_base + 8;
    uVar24 = 0;
    if (code_length != 0) {
      uVar24 = a / uVar22;
    }
    b  = b  ^ code_length ^ 0xffffffff;
    c = *(uint *)(vm_code + (ulong)(pc_base + 8)) ^ code_length ^ 0xffffffff;
    uVar11 = 0;
    if (code_length != 0) {
      uVar11 = b  / uVar22;
    }
    vm_context->pc = pc_base + 0xc;
    aXorValue = *(uint *)(vm_code + (ulong)(pc_base + 0xc));
    uVar4 = 0;
    if (code_length != 0) {
      uVar4 = c / uVar22;
    }
    vm_context->pc = pc_base + 0x10;
    ulHash = *(ulong *)(vm_code + (ulong)(pc_base + 0x10));
    vm_context->pc = pc_base + 0x18;
    aHashDataAddr = *(uint *)(vm_code + (ulong)(pc_base + 0x18));
    vm_context->pc = pc_base + 0x1c;
    aHashDataLen = *(short *)(vm_code + (ulong)(pc_base + 0x1c));
    vm_context->pc = pc_base + 0x1e;
    aNext = *(uint *)(vm_code + (ulong)(pc_base + 0x1e));
    vm_context->pc = uVar;
    param_4 = (long)(pc_base + 0x26);
    aFallback = *(uint *)(vm_code + (ulong)uVar);
    vm_context->pc = pc_base + 0x26;
    uVar = *(uint *)(vm_code + (ulong)(b  - uVar11 * uVar22));
    uVar23 = (ulong)uVar;
    *(uint *)(vm_code + (ulong)(c - uVar4 * uVar22)) =
         uVar + *(int *)(vm_code + (ulong)(a - uVar24 * uVar22));
    vm_code = *(long *)vm_context->vmCode;
    uVar18 = 0xcbf29ce484222325;
    iVar15 = (int)sVar10;
    if (iVar15 != 0) {
      aHashDataAddr = aHashDataAddr ^ code_length ^ 0xffffffff;
      lVar31 = 0;
      iVar14 = 0;
      uVar = 0;
      if (code_length != 0) {
        uVar = aHashDataAddr / uVar22;
      }
      uVar18 = 0xcbf29ce484222325;
      do {
        uVar23 = (ulong)*(char *)(vm_code + (ulong)(aHashDataAddr - uVar * uVar22) + lVar31);
        iVar14 = iVar14 + 1;
        lVar31 = (long)iVar14;
        uVar18 = uVar18 * 0x100000001b3 ^ uVar23;
      } while (iVar15 != iVar14);
    }
    goto LAB_00148b84;

}

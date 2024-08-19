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
} insn_0x85_t;


void case_0x85()
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

     code_length = *(uint *)vm_context->vmCodeLength;
    pc_base = vm_context->pc;
    vm_code = *(long *)vm_context->vmCode;
    a = *(uint *)(vm_code + (ulong)uVar2) ^ code_length ^ 0xffffffff;
    vm_context->pc = pc_base + 4;
    uVar33 = 0;
    if (code_length != 0) {
      uVar33 = a / uVar22;
    }
    b = *(uint *)(vm_code + (ulong)(pc_base + 4));
    vm_context->pc = pc_base + 8;
    aXorValue  = *(uint *)(vm_code + (ulong)(pc_base + 8));
    b = b ^ code_length ^ 0xffffffff;
    vm_context->pc = pc_base + 0xc;
    ulHash = *(ulong *)(vm_code + (ulong)(pc_base + 0xc));
    vm_context->pc = pc_base + 0x14;
    aHashDataAddr = *(uint *)(vm_code + (ulong)(pc_base + 0x14));
    vm_context->pc = pc_base + 0x18;
    uVar11 = 0;
    if (code_length != 0) {
      uVar11 = b / uVar22;
    }
    param_4 = (long)(a - uVar33 * uVar22);
    aHashDataLen = *(short *)(vm_code + (ulong)(pc_base + 0x18));
    vm_context->pc = pc_base + 0x1a;
    a = pc_base + 0x1e;
    uVar23 = (ulong)uVar;
    aNext = *(uint *)(vm_code + (ulong)(pc_base + 0x1a));
    vm_context->pc = uVar;
    aFallback = *(uint *)(vm_code + (ulong)uVar);
    vm_context->pc = pc_base + 0x22;
    *(uint *)(vm_code + (ulong)(b - uVar11 * uVar22)) = (uint)(*(int *)(vm_code + param_4) != 0);
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
    goto LAB_001498ac;

}

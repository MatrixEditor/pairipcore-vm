#include "gvm/types.h"

typedef struct {
  addr_t a;                 // +0x0
  addr_t aXorValue;         // +0x4
  ulong ulHash;             // +0x8
  addr_t aHashDataAddr;     // +0x10
  short aHashDataLen;       // +0x14
  addr_t aNext;             // +0x16
  addr_t aFallback;         // +0x1a
  int b;                    // +0x1e
} insn_0x33_t;


void case_0x33()
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
    int b;

     code_length = *(uint *)vm_context->vmCodeLength;
    pc_base = vm_context->pc;
    vm_code = *(long *)vm_context->vmCode;
    a = *(uint *)(vm_code + (ulong)uVar2) ^ code_length ^ 0xffffffff;
    uVar33 = 0;
    if (code_length != 0) {
      uVar33 = a / uVar22;
    }
    vm_context->pc = pc_base + 4;
    aXorValue  = *(uint *)(vm_code + (ulong)(pc_base + 4));
    vm_context->pc = pc_base + 8;
    ulHash = *(ulong *)(vm_code + (ulong)(pc_base + 8));
    vm_context->pc = pc_base + 0x10;
    aHashDataAddr = *(uint *)(vm_code + (ulong)(pc_base + 0x10));
    vm_context->pc = pc_base + 0x14;
    a = a - uVar33 * uVar22;
    aHashDataLen = *(short *)(vm_code + (ulong)(pc_base + 0x14));
    vm_context->pc = pc_base + 0x16;
    aNext = *(uint *)(vm_code + (ulong)(pc_base + 0x16));
    uVar23 = (ulong)(pc_base + 0x1e);
    vm_context->pc = pc_base + 0x1a;
    aFallback = *(uint *)(vm_code + (ulong)(pc_base + 0x1a));
    vm_context->pc = pc_base + 0x1e;
    b = b + 1;
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

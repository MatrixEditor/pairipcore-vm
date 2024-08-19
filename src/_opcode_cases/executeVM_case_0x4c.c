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
  addr_t d;                 // +0x26
} insn_0x4c_t;


void case_0x4c()
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
    addr_t d;

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
    uVar24 = 0;
    if (code_length != 0) {
      uVar24 = a / uVar22;
    }
    b = *(uint *)(vm_code + (ulong)(pc_base + 0x1e));
    vm_context->pc = pc_base + 0x22;
    c = *(uint *)(vm_code + (ulong)(pc_base + 0x22));
    vm_context->pc = pc_base + 0x26;
    d = *(uint *)(vm_code + (ulong)(pc_base + 0x26));
    b = b ^ code_length ^ 0xffffffff;
    vm_context->pc = pc_base + 0x2a;
    c = c ^ code_length ^ 0xffffffff;
    param_5 = (long)uVar11;
    d = d ^ code_length ^ 0xffffffff;
    param_7 = (long)uVar4;
    pc_base = 0;
    if (code_length != 0) {
      pc_base = c / uVar22;
    }
    param_6 = (long)uVar33;
    uVar30 = 0;
    if (code_length != 0) {
      uVar30 = b / uVar22;
    }
    param_4 = (long)uVar30;
    a = (uint)CONCAT11(*(undefined *)(vm_code + (ulong)(c - pc_base * uVar22)),
                          *(undefined *)(vm_code + (ulong)(a - uVar24 * uVar22)));
    uVar23 = (ulong)uVar;
    pc_base = 0;
    if (code_length != 0) {
      pc_base = d / uVar22;
    }
    uVar27 = (ulong)(b - uVar30 * uVar22);
    uVar18 = (ulong)(d - pc_base * uVar22);
    iVar15 = (int)sVar10;
    if (a == 0x804) {
      *(float *)(vm_code + uVar27) = (float)*(double *)(vm_code + uVar18);
      vm_code = *(long *)vm_context->vmCode;
    }
    else {
      if (a == 0x408) {
        *(double *)(vm_code + uVar27) = (double)*(float *)(vm_code + uVar18);
      }
      vm_code = *(long *)vm_context->vmCode;
    }
    uVar18 = 0xcbf29ce484222325;
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

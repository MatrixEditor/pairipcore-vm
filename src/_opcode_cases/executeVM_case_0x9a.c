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
  addr_t d;                 // +0x26
  addr_t e;                 // +0x2a
} insn_0x9a_t;


void case_0x9a()
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
    addr_t d;
    addr_t e;

  code_length = *(uint *)vm_context->vmCodeLength;
    pc_base = vm_context->pc;
    vm_code = *(long *)vm_context->vmCode;
    a = *(uint *)(vm_code + (ulong)uVar33);
    vm_context->pc = pc_base + 4;
    param_5 = (long)(pc_base + 0x26);
    b = *(uint *)(vm_code + (ulong)(pc_base + 4));
    vm_context->pc = pc_base + 8;
    a = a ^ code_length ^ 0xffffffff;
    c  = *(uint *)(vm_code + (ulong)(pc_base + 8));
    vm_context->pc = pc_base + 0xc;
    uVar24 = 0;
    if (code_length != 0) {
      uVar24 = a / uVar22;
    }
    b = b ^ code_length ^ 0xffffffff;
    aXorValue = *(uint *)(vm_code + (ulong)(pc_base + 0xc));
    c  = c  ^ code_length ^ 0xffffffff;
    d = 0;
    if (code_length != 0) {
      d = b / uVar22;
    }
    e = 0;
    if (code_length != 0) {
      e = c  / uVar22;
    }
    vm_context->pc = pc_base + 0x10;
    ulHash = *(ulong *)(vm_code + (ulong)(pc_base + 0x10));
    vm_context->pc = pc_base + 0x18;
    aHashDataAddr = *(uint *)(vm_code + (ulong)(pc_base + 0x18));
    vm_context->pc = pc_base + 0x1c;
    aHashDataLen = *(short *)(vm_code + (ulong)(pc_base + 0x1c));
    vm_context->pc = pc_base + 0x1e;
    aNext = *(uint *)(vm_code + (ulong)(pc_base + 0x1e));
    vm_context->pc = pc_base + 0x22;
    aFallback = *(uint *)(vm_code + (ulong)(pc_base + 0x22));
    vm_context->pc = pc_base + 0x26;
    iVar15 = *(int *)(vm_code + (ulong)(b - d * uVar22));
    b = *(uint *)(vm_code + (ulong)(c  - e * uVar22));
    uVar23 = (ulong)uVar2;
    c  = 0;
    if (b != 0) {
      c  = iVar15 / (int)uVar2;
    }
    param_4 = (long)c ;
    *(uint *)(vm_code + (ulong)(a - uVar24 * uVar22)) = iVar15 - c  * uVar2;
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
LAB_00148b84:
    aXorValue = aXorValue ^ code_length ^ 0xffffffff;
    a = 0;
    if (code_length != 0) {
      a = aXorValue / uVar22;
    }
    bVar12 = (uVar18 ^ (long)*(int *)(vm_code + (ulong)(aXorValue - a * uVar22))) == uVar25;
LAB_0014966c:
    if (!bVar12) {
      aNext = uVar30;
    }
    goto LAB_001498c8;
  }
  if (!bVar12) {
    a = uVar26;
  }
  a = a ^ pc_base ^ 0xffffffff;
  b = 0;
  if (pc_base != 0) {
    b = a / uVar33;
  }
  iVar15 = a - b * uVar33;
  goto LAB_001498d4;
vm_switch_caseD_2:
  code_length = *(uint *)vm_context->vmCodeLength;
  pc_base = vm_context->pc;
  vm_code = *(long *)vm_context->vmCode;
  a = *(uint *)(vm_code + (ulong)uVar33);
  vm_context->pc = pc_base + 4;
  c  = *(uint *)(vm_code + (ulong)(pc_base + 4));
  vm_context->pc = pc_base + 8;
  a = a ^ code_length ^ 0xffffffff;
  ulHash = *(ulong *)(vm_code + (ulong)(pc_base + 8));
  vm_context->pc = pc_base + 0x10;
  b = *(uint *)(vm_code + (ulong)(pc_base + 0x10));
  vm_context->pc = pc_base + 0x14;
  aHashDataLen = *(short *)(vm_code + (ulong)(pc_base + 0x14));
  vm_context->pc = pc_base + 0x16;
  aNext = *(uint *)(vm_code + (ulong)(pc_base + 0x16));
  vm_context->pc = pc_base + 0x1a;
  d = *(uint *)(vm_code + (ulong)(pc_base + 0x1a));
  vm_context->pc = pc_base + 0x1e;
  uVar24 = 0;
  if (code_length != 0) {
    uVar24 = a / uVar22;
  }
  aXorValue = *(uint *)(vm_code + (ulong)(pc_base + 0x1e));
  vm_context->pc = pc_base + 0x22;
  e = *(uint *)(vm_code + (ulong)(pc_base + 0x22));
  vm_context->pc = pc_base + 0x26;
  aXorValue = aXorValue ^ code_length ^ 0xffffffff;
  e = e ^ code_length ^ 0xffffffff;
  param_5 = (long)uVar11;
  pc_base = 0;
  if (code_length != 0) {
    pc_base = aXorValue / uVar22;
  }
  param_4 = (long)uVar33;
  aHashDataAddr = 0;
  if (code_length != 0) {
    aHashDataAddr = e / uVar22;
  }
  param_6 = (long)uVar4;
  pc_base = *(uint *)(vm_code + (ulong)(aXorValue - pc_base * uVar22));
  uVar23 = (ulong)uVar33;
  *(int *)(vm_code + (ulong)(e - aHashDataAddr * uVar22)) =
       *(int *)(vm_code + (ulong)(a - uVar24 * uVar22)) << (ulong)(pc_base & 0x1f);
  vm_code = *(long *)vm_context->vmCode;
  uVar18 = 0xcbf29ce484222325;
  iVar15 = (int)sVar10;
  if (iVar15 != 0) {
    b = b ^ code_length ^ 0xffffffff;
    lVar31 = 0;
    iVar14 = 0;
    a = 0;
    if (code_length != 0) {
      a = b / uVar22;
    }
    uVar18 = 0xcbf29ce484222325;
    do {
      uVar23 = (ulong)*(char *)(vm_code + (ulong)(b - a * uVar22) + lVar31);
      iVar14 = iVar14 + 1;
      lVar31 = (long)iVar14;
      uVar18 = uVar18 * 0x100000001b3 ^ uVar23;
    } while (iVar15 != iVar14);
  }
LAB_001498ac:
  c  = c  ^ code_length ^ 0xffffffff;
  a = 0;
  if (code_length != 0) {
    a = c  / uVar22;
  }
  bVar12 = (uVar18 ^ (long)*(int *)(vm_code + (ulong)(c  - a * uVar22))) == uVar25;
LAB_001498c4:
  if (!bVar12) {
    aNext = uVar29;
  }
  goto LAB_001498c8;
}


}

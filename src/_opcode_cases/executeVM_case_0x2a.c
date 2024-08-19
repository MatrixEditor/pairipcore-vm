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
  addr_t d;                 // +0x26
} insn_0x2a_t;


void case_0x2a()
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
    addr_t d;

   code_length = *(uint *)vm_context->vmCodeLength;
    pc_base = vm_context->pc;
    vm_code = *(long *)vm_context->vmCode;
    aXorValue = *(uint *)(vm_code + (ulong)uVar26);
    vm_context->pc = pc_base + 4;
    ulHash = *(ulong *)(vm_code + (ulong)(pc_base + 4));
    vm_context->pc = pc_base + 0xc;
    aHashDataAddr = *(uint *)(vm_code + (ulong)(pc_base + 0xc));
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
    vm_context->pc = pc_base + 0x22;
    a = a ^ code_length ^ 0xffffffff;
    c  = *(uint *)(vm_code + (ulong)(pc_base + 0x22));
    vm_context->pc = pc_base + 0x26;
    uVar11 = 0;
    if (code_length != 0) {
      uVar11 = a / uVar22;
    }
    d = *(uint *)(vm_code + (ulong)(pc_base + 0x26));
    b = b ^ code_length ^ 0xffffffff;
    vm_context->pc = pc_base + 0x2a;
    c  = c  ^ code_length ^ 0xffffffff;
    d = d ^ code_length ^ 0xffffffff;
    param_6 = (long)uVar4;
    pc_base = 0;
    if (code_length != 0) {
      pc_base = c  / uVar22;
    }
    uVar18 = (ulong)(a - uVar11 * uVar22);
    a = 0;
    if (code_length != 0) {
      a = d / uVar22;
    }
    param_7 = (long)uVar;
    bVar36 = *(byte *)(vm_code + (ulong)(c  - pc_base * uVar22));
    param_4 = (long)bVar36;
    c  = 0;
    if (code_length != 0) {
      c  = b / uVar22;
    }
    bVar37 = *(byte *)(vm_code + (ulong)(d - a * uVar22));
    param_5 = (long)bVar37;
    a = (uint)CONCAT11(bVar37,bVar36);
    uVar23 = (ulong)uVar;
    uVar27 = (ulong)(b - c  * uVar22);
    if (a < 0x404) {
      if (a < 0x204) {
        if (a == 0x104) {
          fVar34 = (float)(int)*(char *)(vm_code + uVar27);
LAB_00149520:
          *(float *)(vm_code + uVar18) = fVar34;
        }
        else if (a == 0x108) {
          *(double *)(vm_code + uVar18) = (double)(int)*(char *)(vm_code + uVar27);
        }
      }
      else {
        if (a == 0x204) {
          fVar34 = (float)(int)*(short *)(vm_code + uVar27);
          goto LAB_00149520;
        }
        if (a == 0x208) {
          *(double *)(vm_code + uVar18) = (double)(int)*(short *)(vm_code + uVar27);
        }
      }
    }
    else if (a < 0x804) {
      if (a == 0x404) {
        fVar34 = (float)*(int *)(vm_code + uVar27);
        goto LAB_00149520;
      }
      if (a == 0x408) {
        *(double *)(vm_code + uVar18) = (double)*(int *)(vm_code + uVar27);
      }
    }
    else {
      if (a == 0x804) {
        fVar34 = (float)*(long *)(vm_code + uVar27);
        goto LAB_00149520;
      }
      if (a == 0x808) {
        *(double *)(vm_code + uVar18) = (double)*(long *)(vm_code + uVar27);
      }
    }
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
LAB_00149580:
    aXorValue = aXorValue ^ code_length ^ 0xffffffff;
    a = 0;
    if (code_length != 0) {
      a = aXorValue / uVar22;
    }
    bVar12 = (uVar18 ^ (long)*(int *)(vm_code + (ulong)(aXorValue - a * uVar22))) == uVar25;
    goto LAB_001498c4;

}

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
  addr_t d;                 // +0x26
  undefined e;              // +0x2a
} insn_0x84_t;


void case_0x84()
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
    addr_t d;
    undefined e;

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
    aHashDataLen = *(short *)(vm_code + (ulong)(pc_base + 0x18));
    vm_context->pc = pc_base + 0x1a;
    aNext = *(uint *)(vm_code + (ulong)(pc_base + 0x1a));
    vm_context->pc = pc_base + 0x1e;
    uVar11 = 0;
    if (code_length != 0) {
      uVar11 = b / uVar22;
    }
    param_4 = (long)uVar11;
    aFallback = *(uint *)(vm_code + (ulong)(pc_base + 0x1e));
    vm_context->pc = pc_base + 0x22;
    c = *(uint *)(vm_code + (ulong)(pc_base + 0x22));
    vm_context->pc = pc_base + 0x26;
    d = *(uint *)(vm_code + (ulong)(pc_base + 0x26));
    vm_context->pc = pc_base + 0x2a;
    c = c ^ code_length ^ 0xffffffff;
    param_5 = (long)uVar4;
    d = d ^ code_length ^ 0xffffffff;
    param_6 = (long)uVar30;
    pc_base = 0;
    if (code_length != 0) {
      pc_base = d / uVar22;
    }
    param_7 = (long)uVar2;
    b = b - uVar11 * uVar22;
    uVar11 = 0;
    if (code_length != 0) {
      uVar11 = c / uVar22;
    }
    a = (uint)CONCAT11(*(undefined *)(vm_code + (ulong)(a - uVar33 * uVar22)),
                          *(undefined *)(vm_code + (ulong)(d - pc_base * uVar22)));
    uVar23 = (ulong)uVar;
    c = c - uVar11 * uVar22;
    if (a < 0x401) {
      if (a < 0x201) {
        if (a == 0x102) {
          *(short *)(vm_code + (ulong)uVar4) = (short)*(char *)(vm_code + (ulong)uVar24);
        }
        else if (a == 0x104) {
          *(int *)(vm_code + (ulong)uVar4) = (int)*(char *)(vm_code + (ulong)uVar24);
        }
        else if (a == 0x108) {
          *(long *)(vm_code + (ulong)uVar4) = (long)*(char *)(vm_code + (ulong)uVar24);
        }
      }
      else if (a == 0x201) {
        e = *(undefined *)(vm_code + (ulong)uVar24);
      }
      else if (a == 0x204) {
        *(int *)(vm_code + (ulong)uVar4) = (int)*(short *)(vm_code + (ulong)uVar24);
      }
      else if (a == 0x208) {
        *(long *)(vm_code + (ulong)uVar4) = (long)*(short *)(vm_code + (ulong)uVar24);
      }
    }
    else if (a < 0x801) {
      if (a == 0x401) {
        *(char *)(vm_code + (ulong)uVar4) = (char)*(undefined4 *)(vm_code + (ulong)uVar24);
      }
      else if (a == 0x402) {
        *(short *)(vm_code + (ulong)uVar4) = (short)*(undefined4 *)(vm_code + (ulong)uVar24);
      }
      else if (a == 0x408) {
        *(long *)(vm_code + (ulong)uVar4) = (long)*(int *)(vm_code + (ulong)uVar24);
      }
    }
    else if (a == 0x801) {
      *(char *)(vm_code + (ulong)uVar4) = (char)*(undefined8 *)(vm_code + (ulong)uVar24);
    }
    else if (a == 0x802) {
      *(short *)(vm_code + (ulong)uVar4) = (short)*(undefined8 *)(vm_code + (ulong)uVar24);
    }
    else if (a == 0x804) {
      *(int *)(vm_code + (ulong)uVar4) = (int)*(undefined8 *)(vm_code + (ulong)uVar24);
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
    goto LAB_001498ac;

}

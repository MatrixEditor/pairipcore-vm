#include "gvm/types.h"

typedef struct {
  addr_t a;                 // +0x0
  addr_t b;                 // +0x4
  addr_t c;                 // +0x8
  addr_t d;                 // +0xc
  addr_t aXorValue;         // +0x10
  ulong ulHash;             // +0x14
  addr_t aHashDataAddr;     // +0x1c
  short aHashDataLen;       // +0x20
  addr_t aNext;             // +0x22
  addr_t aFallback;         // +0x26
  undefined e;              // +0x2a
} insn_0x30_t;


void case_0x30()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;
    addr_t a;
    addr_t b;
    addr_t c;
    addr_t d;
    addr_t aXorValue;
    ulong ulHash;
    addr_t aHashDataAddr;
    short aHashDataLen;
    addr_t aNext;
    addr_t aFallback;
    undefined e;

  code_length = *(uint *)vm_context->vmCodeLength;
    pc_base = vm_context->pc;
    vm_code = *(long *)vm_context->vmCode;
    a = *(uint *)(vm_code + (ulong)uVar26);
    vm_context->pc = pc_base + 4;
    b  = *(uint *)(vm_code + (ulong)(pc_base + 4));
    vm_context->pc = pc_base + 8;
    a = a ^ code_length ^ 0xffffffff;
    c = *(uint *)(vm_code + (ulong)(pc_base + 8));
    vm_context->pc = pc_base + 0xc;
    d = *(uint *)(vm_code + (ulong)(pc_base + 0xc));
    b  = b  ^ code_length ^ 0xffffffff;
    vm_context->pc = pc_base + 0x10;
    c = c ^ code_length ^ 0xffffffff;
    uVar29 = 0;
    if (code_length != 0) {
      uVar29 = a / uVar22;
    }
    d = d ^ code_length ^ 0xffffffff;
    aXorValue = *(uint *)(vm_code + (ulong)(pc_base + 0x10));
    vm_context->pc = pc_base + 0x14;
    ulHash = *(ulong *)(vm_code + (ulong)(pc_base + 0x14));
    param_7 = (long)(pc_base + 0x2a);
    uVar11 = 0;
    if (code_length != 0) {
      uVar11 = c / uVar22;
    }
    uVar4 = 0;
    if (code_length != 0) {
      uVar4 = d / uVar22;
    }
    vm_context->pc = pc_base + 0x1c;
    uVar6 = 0;
    if (code_length != 0) {
      uVar6 = b  / uVar22;
    }
    param_5 = (long)uVar6;
    aHashDataAddr = *(uint *)(vm_code + (ulong)(pc_base + 0x1c));
    vm_context->pc = pc_base + 0x20;
    aHashDataLen = *(short *)(vm_code + (ulong)(pc_base + 0x20));
    vm_context->pc = pc_base + 0x22;
    aNext = *(uint *)(vm_code + (ulong)(pc_base + 0x22));
    vm_context->pc = pc_base + 0x26;
    aFallback = *(uint *)(vm_code + (ulong)(pc_base + 0x26));
    vm_context->pc = pc_base + 0x2a;
    bVar36 = *(byte *)(vm_code + (ulong)(d - uVar4 * uVar22));
    param_6 = (long)bVar36;
    bVar37 = *(byte *)(vm_code + (ulong)(c - uVar11 * uVar22));
    param_4 = (long)bVar37;
    a = a - uVar29 * uVar22;
    c = (uint)CONCAT11(bVar36,bVar37);
    uVar23 = (ulong)uVar33;
    b  = b  - uVar6 * uVar22;
    if (c < 0x401) {
      if (c < 0x201) {
        if (c == 0x102) {
          *(ushort *)(vm_code + (ulong)uVar) = (ushort)*(byte *)(vm_code + (ulong)b );
        }
        else if (c == 0x104) {
          *(uint *)(vm_code + (ulong)uVar) = (uint)*(byte *)(vm_code + (ulong)b );
        }
        else if (c == 0x108) {
          *(ulong *)(vm_code + (ulong)uVar) = (ulong)*(byte *)(vm_code + (ulong)b );
        }
      }
      else if (c == 0x201) {
        e = *(undefined *)(vm_code + (ulong)b );
      }
      else if (c == 0x204) {
        *(uint *)(vm_code + (ulong)uVar) = (uint)*(ushort *)(vm_code + (ulong)b );
      }
      else if (c == 0x208) {
        *(ulong *)(vm_code + (ulong)uVar) = (ulong)*(ushort *)(vm_code + (ulong)b );
      }
    }
    else if (c < 0x801) {
      if (c == 0x401) {
        *(char *)(vm_code + (ulong)uVar) = (char)*(undefined4 *)(vm_code + (ulong)b );
      }
      else if (c == 0x402) {
        *(short *)(vm_code + (ulong)uVar) = (short)*(undefined4 *)(vm_code + (ulong)b );
      }
      else if (c == 0x408) {
        *(ulong *)(vm_code + (ulong)uVar) = (ulong)*(uint *)(vm_code + (ulong)b );
      }
    }
    else if (c == 0x801) {
      *(char *)(vm_code + (ulong)uVar) = (char)*(undefined8 *)(vm_code + (ulong)b );
    }
    else if (c == 0x802) {
      *(short *)(vm_code + (ulong)uVar) = (short)*(undefined8 *)(vm_code + (ulong)b );
    }
    else if (c == 0x804) {
      *(int *)(vm_code + (ulong)uVar) = (int)*(undefined8 *)(vm_code + (ulong)b );
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
LAB_00149654:
    aXorValue = aXorValue ^ code_length ^ 0xffffffff;
    a = 0;
    if (code_length != 0) {
      a = aXorValue / uVar22;
    }
    bVar12 = (uVar18 ^ (long)*(int *)(vm_code + (ulong)(aXorValue - a * uVar22))) == uVar25;
    goto LAB_0014966c;

}

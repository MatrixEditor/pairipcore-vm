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
} insn_0x5f_t;


void case_0x5f()
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

     code_length = *(uint *)vm_context->vmCodeLength;
    uVar99  = vm_context->pc;
    vm_code = *(long *)vm_context->vmCode;
    a = *(uint *)(vm_code + (ulong)uVar99 );
    vm_context->pc = uVar99  + 4;
    b = *(uint *)(vm_code + (ulong)(uVar99  + 4));
    a = a ^ code_length ^ 0xffffffff;
    vm_context->pc = uVar99  + 8;
    uVar33 = 0;
    if (code_length != 0) {
      uVar33 = a / uVar22;
    }
    c = *(uint *)(vm_code + (ulong)(uVar99  + 8));
    vm_context->pc = uVar99  + 0xc;
    b = b ^ code_length ^ 0xffffffff;
    c = c ^ code_length ^ 0xffffffff;
    aNext = 0;
    if (code_length != 0) {
      aNext = b / uVar22;
    }
    aXorValue = *(uint *)(vm_code + (ulong)(uVar99  + 0xc));
    vm_context->pc = uVar99  + 0x10;
    ulHash = *(ulong *)(vm_code + (ulong)(uVar99  + 0x10));
    uVar11 = 0;
    if (code_length != 0) {
      uVar11 = c / uVar22;
    }
    param_5 = (long)uVar11;
    param_4 = (long)(b - aNext * uVar22);
    vm_context->pc = uVar99  + 0x18;
    b = *(uint *)(vm_code + (ulong)(uVar99  + 0x18));
    vm_context->pc = uVar99  + 0x1c;
    aHashDataAddr = *(short *)(vm_code + (ulong)(uVar99  + 0x1c));
    vm_context->pc = uVar99  + 0x1e;
    aHashDataLen = *(uint *)(vm_code + (ulong)(uVar99  + 0x1e));
    vm_context->pc = uVar99  + 0x22;
    aNext = *(uint *)(vm_code + (ulong)(uVar99  + 0x22));
    vm_context->pc = uVar99  + 0x26;
    uVar18 = *(ulong *)(vm_code + (ulong)(a - uVar33 * uVar22));
    uVar23 = (ulong)(c - uVar11 * uVar22);
    uVar13 = 0xffffffff;
    if (uVar18 < *(ulong *)(vm_code + param_4)) {
      uVar13 = 1;
    }
    uVar1 = 0;
    if (*(ulong *)(vm_code + param_4) != uVar18) {
      uVar1 = uVar13;
    }
    *(undefined4 *)(vm_code + uVar23) = uVar1;
    uVar18 = 0xcbf29ce484222325;
    iVar15 = (int)sVar10;
    if (iVar15 != 0) {
      b = b ^ code_length ^ 0xffffffff;
      vm_code = 0;
      iVar14 = 0;
      a = 0;
      if (code_length != 0) {
        a = b / uVar22;
      }
      uVar18 = 0xcbf29ce484222325;
      do {
        uVar23 = (ulong)*(char *)(*(long *)vm_context->vmCode + (ulong)(b - a * uVar22)
                                 + uVar3);
        iVar14 = iVar14 + 1;
        vm_code = (long)iVar14;
        uVar18 = uVar18 * 0x100000001b3 ^ uVar23;
      } while (iVar15 != iVar14);
    }
    aXorValue = aXorValue ^ code_length ^ 0xffffffff;
    a = 0;
    if (code_length != 0) {
      a = aXorValue / uVar22;
    }
    if ((uVar18 ^ (long)*(int *)(*(long *)vm_context->vmCode + (ulong)(aXorValue - a * uVar22))
        ) != uVar25) {
      aHashDataLen = uVar26;
    }
    goto LAB_001498c8;

}

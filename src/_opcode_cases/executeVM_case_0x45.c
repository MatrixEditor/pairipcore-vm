#include "gvm/types.h"

typedef struct {
  addr_t a;                 // +0x0
  addr_t b;                 // +0x4
  addr_t aXorValue;         // +0x8
  ulong ulHash;             // +0xc
  addr_t aHashDataAddr;     // +0x14
  short aHashDataLen;       // +0x18
  addr_t aNext;             // +0x1a
} insn_0x45_t;


void case_0x45()
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

      uVar99  = *(uint *)vm_context->vmCodeLength;
    pc_base = vm_context->pc;
    vm_code = *(long *)vm_context->vmCode;
    a = *(uint *)(vm_code + (ulong)uVar22);
    vm_context->pc = pc_base + 4;
    b = *(uint *)(vm_code + (ulong)(pc_base + 4));
    a = a ^ uVar99  ^ 0xffffffff;
    vm_context->pc = pc_base + 8;
    aNext = 0;
    if (uVar99  != 0) {
      aNext = a / uVar99 ;
    }
    aXorValue = *(uint *)(vm_code + (ulong)(pc_base + 8));
    b = b ^ uVar99  ^ 0xffffffff;
    vm_context->pc = pc_base + 0xc;
    param_3 = (long)uVar99 ;
    ulHash = *(ulong *)(vm_code + (ulong)(pc_base + 0xc));
    vm_context->pc = pc_base + 0x14;
    aHashDataAddr = *(uint *)(vm_code + (ulong)(pc_base + 0x14));
    vm_context->pc = pc_base + 0x18;
    aHashDataLen = *(short *)(vm_code + (ulong)(pc_base + 0x18));
    uVar29 = 0;
    if (uVar99  != 0) {
      uVar29 = b / uVar99 ;
    }
    param_4 = (long)(a - aNext * uVar99 );
    vm_context->pc = pc_base + 0x1a;
    a = *(uint *)(vm_code + (ulong)(pc_base + 0x1a));
    vm_context->pc = pc_base + 0x1e;
    aNext = *(uint *)(vm_code + (ulong)(pc_base + 0x1e));
    vm_context->pc = pc_base + 0x22;
    param_5 = (long)(b - uVar29 * uVar99 );
    auVar42 = FUN_00149a84(&stack0x00000140);
    uVar25 = 0xcbf29ce484222325;
    iVar15 = (int)sVar10;
    if (iVar15 != 0) {
      aHashDataAddr = aHashDataAddr ^ uVar99  ^ 0xffffffff;
      vm_code = 0;
      iVar14 = 0;
      b = 0;
      if (uVar99  != 0) {
        b = aHashDataAddr / uVar99 ;
      }
      uVar25 = 0xcbf29ce484222325;
      do {
        pcVar16 = (char *)(*(long *)vm_context->vmCode + (ulong)(aHashDataAddr - b * uVar99 ) +
                          uVar3);
        iVar14 = iVar14 + 1;
        vm_code = (long)iVar14;
        uVar25 = uVar25 * 0x100000001b3 ^ (long)*pcVar16;
      } while (iVar15 != iVar14);
    }
    aXorValue = aXorValue ^ uVar99  ^ 0xffffffff;
    b = 0;
    if (uVar99  != 0) {
      b = aXorValue / uVar99 ;
    }
    if ((uVar25 ^ (long)*(int *)(*(long *)vm_context->vmCode +
                                (ulong)(aXorValue - b * uVar99 ))) != uVar23) {
      a = uVar33;
    }
    if ((in_stack_00000140 & 1) != 0) {
      auVar42 = thunk_EXT_FUN_0016a000(in_stack_00000150);
    }
    a = a ^ uVar99  ^ 0xffffffff;
    b = 0;
    if (uVar99  != 0) {
      b = a / uVar99 ;
    }
    iVar15 = a - b * uVar99 ;
    goto LAB_001498d4;

}

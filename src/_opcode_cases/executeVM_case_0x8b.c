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
} insn_0x8b_t;


void case_0x8b()
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

    code_length = *(uint *)vm_context->vmCodeLength;
    pc_base = vm_context->pc;
    vm_code = *(long *)vm_context->vmCode;
    a = *(uint *)(vm_code + (ulong)uVar24);
    vm_context->pc = pc_base + 4;
    aXorValue = *(uint *)(vm_code + (ulong)(pc_base + 4));
    vm_context->pc = pc_base + 8;
    a = a ^ code_length ^ 0xffffffff;
    ulHash = *(ulong *)(vm_code + (ulong)(pc_base + 8));
    vm_context->pc = pc_base + 0x10;
    aHashDataAddr  = *(uint *)(vm_code + (ulong)(pc_base + 0x10));
    vm_context->pc = pc_base + 0x14;
    aHashDataLen = *(short *)(vm_code + (ulong)(pc_base + 0x14));
    vm_context->pc = pc_base + 0x16;
    aNext = *(uint *)(vm_code + (ulong)(pc_base + 0x16));
    vm_context->pc = pc_base + 0x1a;
    aFallback = *(uint *)(vm_code + (ulong)(pc_base + 0x1a));
    vm_context->pc = pc_base + 0x1e;
    uVar29 = 0;
    if (code_length != 0) {
      uVar29 = a / uVar33;
    }
    b = *(uint *)(vm_code + (ulong)(pc_base + 0x1e)) ^ code_length ^ 0xffffffff;
    vm_context->pc = pc_base + 0x22;
    c = *(uint *)(vm_code + (ulong)(pc_base + 0x22));
    vm_context->pc = pc_base + 0x26;
    c = c ^ code_length ^ 0xffffffff;
    pc_base = 0;
    if (code_length != 0) {
      pc_base = b / uVar33;
    }
    uVar28 = 0;
    if (code_length != 0) {
      uVar28 = c / uVar33;
    }
    auVar42 = func_0x0016a350(*(undefined8 *)(vm_code + (ulong)(a - uVar29 * uVar33)),
                              *(undefined8 *)(vm_code + (ulong)(b - pc_base * uVar33)));
    *(undefined8 *)(vm_code + (ulong)(c - uVar28 * uVar33)) = extraout_d0;
    uVar25 = 0xcbf29ce484222325;
    iVar15 = (int)sVar10;
    if (iVar15 != 0) {
      aHashDataAddr  = aHashDataAddr  ^ code_length ^ 0xffffffff;
      vm_code = 0;
      iVar14 = 0;
      a = 0;
      if (code_length != 0) {
        a = aHashDataAddr  / uVar33;
      }
      uVar25 = 0xcbf29ce484222325;
      do {
        pcVar16 = (char *)(*(long *)vm_context->vmCode + (ulong)(aHashDataAddr  - a * uVar33) +
                          uVar3);
        iVar14 = iVar14 + 1;
        vm_code = (long)iVar14;
        uVar25 = uVar25 * 0x100000001b3 ^ (long)*pcVar16;
      } while (iVar15 != iVar14);
    }
    aXorValue = aXorValue ^ code_length ^ 0xffffffff;
    a = 0;
    if (code_length != 0) {
      a = aXorValue / uVar33;
    }
    bVar12 = (uVar25 ^ (long)*(int *)(*(long *)vm_context->vmCode +
                                     (ulong)(aXorValue - a * uVar33))) == uVar23;
    break;

}

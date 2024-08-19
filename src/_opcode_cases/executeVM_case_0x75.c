#include "gvm/types.h"

typedef struct {
  addr_t aXorValue;         // +0x0
  ulong ulHash;             // +0x4
  addr_t aHashDataAddr;     // +0xc
  short aHashDataLen;       // +0x10
  addr_t aNext;             // +0x12
  addr_t aFallback;         // +0x16
} insn_0x75_t;


void case_0x75()
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


    code_length = *(uint *)vm_context->vmCodeLength;
    uVar99  = vm_context->pc;
    vm_code = *(long *)vm_context->vmCode;
    uVar18 = 0xcbf29ce484222325;
    aXorValue = *(uint *)(vm_code + (ulong)uVar99 );
    vm_context->pc = uVar99  + 4;
    ulHash = *(ulong *)(vm_code + (ulong)(uVar99  + 4));
    vm_context->pc = uVar99  + 0xc;
    aHashDataAddr = *(uint *)(vm_code + (ulong)(uVar99  + 0xc));
    vm_context->pc = uVar99  + 0x10;
    aHashDataLen = *(short *)(vm_code + (ulong)(uVar99  + 0x10));
    vm_context->pc = uVar99  + 0x12;
    aNext = *(uint *)(vm_code + (ulong)(uVar99  + 0x12));
    vm_context->pc = uVar99  + 0x16;
    aFallback = *(uint *)(vm_code + (ulong)(uVar99  + 0x16));
    vm_context->pc = uVar99  + 0x1a;
    iVar15 = (int)sVar10;
    if (iVar15 != 0) {
      aHashDataAddr = aHashDataAddr ^ code_length ^ 0xffffffff;
      lVar31 = 0;
      iVar14 = 0;
      uVar99  = 0;
      if (code_length != 0) {
        uVar99  = aHashDataAddr / uVar22;
      }
      uVar18 = 0xcbf29ce484222325;
      do {
        uVar23 = (ulong)*(char *)(vm_code + (ulong)(aHashDataAddr - uVar99  * uVar22) + lVar31);
        iVar14 = iVar14 + 1;
        lVar31 = (long)iVar14;
        uVar18 = uVar18 * 0x100000001b3 ^ uVar23;
      } while (iVar15 != iVar14);
    }
    goto LAB_00149654;

}

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
} insn_0x28_t;


void case_0x28()
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
    param_7 = (long)uVar30;
    pc_base = 0;
    if (code_length != 0) {
      pc_base = c / uVar22;
    }
    param_6 = (long)uVar2;
    uVar6 = 0;
    if (code_length != 0) {
      uVar6 = d / uVar22;
    }
    uVar18 = (ulong)(b - uVar11 * uVar22);
    a = (uint)CONCAT11(*(undefined *)(vm_code + (ulong)(c - pc_base * uVar22)),
                          *(undefined *)(vm_code + (ulong)(a - uVar33 * uVar22)));
    uVar23 = (ulong)uVar;
    d = d - uVar6 * uVar22;
    if (a < 0x801) {
      if (a < 0x404) {
        if (a == 0x401) {
          fVar34 = *(float *)(vm_code + uVar18);
          if (fVar34 < -128.0) {
LAB_00149490:
            *(undefined *)(vm_code + (ulong)uVar30) = 0x80;
          }
          else if (127.0 < fVar34) {
LAB_00149744:
            *(undefined *)(vm_code + (ulong)uVar30) = 0x7f;
          }
          else {
            *(char *)(vm_code + (ulong)uVar30) = (char)(int)fVar34;
          }
        }
        else if (a == 0x402) {
          fVar34 = *(float *)(vm_code + uVar18);
          if (fVar34 < -32768.0) {
LAB_0014921c:
            *(undefined2 *)(vm_code + (ulong)uVar30) = 0x8000;
          }
          else if (32767.0 < fVar34) {
LAB_00149784:
            *(undefined2 *)(vm_code + (ulong)uVar30) = 0x7fff;
          }
          else {
            *(short *)(vm_code + (ulong)uVar30) = (short)(int)fVar34;
          }
        }
      }
      else if (a == 0x404) {
        fVar34 = *(float *)(vm_code + uVar18);
        if (fVar34 < -2.147484e+09) {
LAB_001494e8:
          *(undefined4 *)(vm_code + (ulong)uVar30) = 0x80000000;
        }
        else if (2.147484e+09 < fVar34) {
LAB_00149764:
          *(undefined4 *)(vm_code + (ulong)uVar30) = 0x7fffffff;
        }
        else {
          *(int *)(vm_code + (ulong)uVar30) = (int)fVar34;
        }
      }
      else if (a == 0x408) {
        fVar34 = *(float *)(vm_code + uVar18);
        if (fVar34 < -9.223372e+18) {
LAB_001493b0:
          lVar31 = -0x8000000000000000;
        }
        else if (9.223372e+18 < fVar34) {
LAB_001497a0:
          lVar31 = 0x7fffffffffffffff;
        }
        else {
          lVar31 = (long)fVar34;
        }
LAB_0014984c:
        *(long *)(vm_code + (ulong)uVar30) = lVar31;
      }
    }
    else if (a < 0x804) {
      if (a == 0x801) {
        dVar35 = *(double *)(vm_code + uVar18);
        if (dVar35 < -128.0) goto LAB_00149490;
        if (127.0 < dVar35) goto LAB_00149744;
        *(char *)(vm_code + (ulong)uVar30) = (char)(int)dVar35;
      }
      else if (a == 0x802) {
        dVar35 = *(double *)(vm_code + uVar18);
        if (dVar35 < -32768.0) goto LAB_0014921c;
        if (32767.0 < dVar35) goto LAB_00149784;
        *(short *)(vm_code + (ulong)uVar30) = (short)(int)dVar35;
      }
    }
    else if (a == 0x804) {
      dVar35 = *(double *)(vm_code + uVar18);
      if (dVar35 < -2147483648.0) goto LAB_001494e8;
      if (2147483647.0 < dVar35) goto LAB_00149764;
      *(int *)(vm_code + (ulong)uVar30) = (int)dVar35;
    }
    else if (a == 0x808) {
      dVar35 = *(double *)(vm_code + uVar18);
      if (dVar35 < -9.223372036854776e+18) goto LAB_001493b0;
      if (9.223372036854776e+18 < dVar35) goto LAB_001497a0;
      lVar31 = (long)dVar35;
      goto LAB_0014984c;
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

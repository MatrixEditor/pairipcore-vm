#include "gvm/types.h"

typedef struct {
    addr_t a;                 // +0x0
    addr_t aXorValue;         // +0x4
    long ulHash;              // +0xc
    addr_t aHashDataAddr;     // +0x10
    short aHashDataLen;       // +0x14
    addr_t aNext;             // +0x16
    addr_t aFallback;         // +0x1a
    addr_t b;                 // +0x22
    addr_t c;                 // +0x26
} insn_0x2d_t;


void case_0x2d()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;

  
    vm_context = *(long *)&param_1->field_0x68;
    uVar96 = *(uint *)vm_context->vmCodeLength;
    iVar42 = *(int *)(vm_context + 0x14);
    uVar43 = *(long *)vm_context->vmCode;
    *(int *)(vm_context + 0x14) = iVar42 + 4;
    *(int *)(vm_context + 0x14) = iVar42 + 0xc;
    *(int *)(vm_context + 0x14) = iVar42 + 0x10;
    *(int *)(vm_context + 0x14) = iVar42 + 0x12;
    *(int *)(vm_context + 0x14) = iVar42 + 0x16;
    vm_context->pc = iVar42 + 0x1aU;
    uVar41 = *(uint *)(uVar43 + (ulong)(iVar42 + 0x1aU));
    vm_context->pc = iVar42 + 0x1eU;
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    uVar14 = *(uint *)(uVar43 + (ulong)(iVar42 + 0x1eU));
    vm_context->pc = iVar42 + 0x22U;
    uVar98 = 0;
    if (uVar96 != 0) {
      uVar98 = uVar41 / uVar96;
    }
    uVar99 = *(uint *)(uVar43 + (ulong)(iVar42 + 0x22U));
    *(int *)(vm_context + 0x14) = iVar42 + 0x26;
    uVar14 = uVar14 ^ uVar96 ^ 0xffffffff;
    uVar99 = uVar99 ^ uVar96 ^ 0xffffffff;
    uVar97 = 0;
    if (uVar96 != 0) {
      uVar97 = uVar99 / uVar96;
    }
    bVar91 = *(byte *)(uVar43 + (ulong)(uVar41 - uVar98 * uVar96));
    uVar99 = uVar99 - uVar97 * uVar96;
    uVar41 = 0;
    if (uVar96 != 0) {
      uVar41 = uVar14 / uVar96;
    }
    puVar46 = (undefined8 *)
              (param_1->field91_0x70 +
              (ulong)(ushort)(*(ushort *)(uVar43 + (ulong)uVar99) ^ (ushort)uVar99 ^ 0xffff) * 0x10)
    ;
    uVar90 = *puVar46;
    uVar43 = puVar46[1];
    if (uVar43 != 0) {
      FUN_00129110(1,uVar43 + 8);
    }
    uVar14 = uVar14 - uVar41 * uVar96;
    if (bVar91 < 0x49) {
      if (bVar91 < 0x44) {
        if (bVar91 == 0x42) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar91 == 0x43) {
          pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
          if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
          FUN_00149d5c(*puVar46,uVar90,_DAT_001749e8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (bVar91 == 0x44) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar91 == 0x46) {
          pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
          if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
          uVar92 = FUN_00149f1c(*puVar46,uVar90,_DAT_00174a40);
          *(undefined4 *)(*(long *)(*(long *)&param_1->field_0x68 + 8) + (ulong)uVar14) = uVar92;
        }
      }
    }
    else if (bVar91 < 0x53) {
      if (bVar91 == 0x49) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar91 == 0x4a) {
        pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
        if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
        uVar90 = FUN_0014a048(*puVar46,uVar90,_DAT_001749b0);
        *(undefined8 *)(*(long *)(*(long *)&param_1->field_0x68 + 8) + (ulong)uVar14) = uVar90;
      }
    }
    else {
      if (bVar91 == 0x53) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar91 == 0x5a) {
        pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
        if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
        cVar37 = FUN_0014a0e0((JNIEnv *)*puVar46);
        *(uint *)(*(long *)(*(long *)&param_1->field_0x68 + 8) + (ulong)uVar14) =
             (uint)(cVar37 != '\0');
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  
}

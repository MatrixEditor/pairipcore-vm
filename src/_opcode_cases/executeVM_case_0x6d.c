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
} insn_0x6d_t;


void case_0x6d()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;

  
    vm_context = *(long *)&param_1->field_0x68;
    uVar96 = *(uint *)vm_context->vmCodeLength;
    iVar42 = *(int *)(vm_context + 0x14);
    lVar73 = *(long *)vm_context->vmCode;
    *(int *)(vm_context + 0x14) = iVar42 + 4;
    *(int *)(vm_context + 0x14) = iVar42 + 0xc;
    vm_context->pc = iVar42 + 0x10U;
    sVar26 = *(short *)(lVar73 + (ulong)(iVar42 + 0x10U));
    *(int *)(vm_context + 0x14) = iVar42 + 0x12;
    *(int *)(vm_context + 0x14) = iVar42 + 0x16;
    vm_context->pc = iVar42 + 0x1aU;
    uVar14 = *(uint *)(lVar73 + (ulong)(iVar42 + 0x1aU));
    vm_context->pc = iVar42 + 0x1eU;
    uVar41 = *(uint *)(lVar73 + (ulong)(iVar42 + 0x1eU));
    *(int *)(vm_context + 0x14) = iVar42 + 0x22;
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    uVar98 = 0;
    if (uVar96 != 0) {
      uVar98 = uVar41 / uVar96;
    }
    uVar41 = uVar41 - uVar98 * uVar96;
    pp_Var4 = (jarray *)
              (param_1->field91_0x70 +
              (ulong)(ushort)(*(ushort *)(lVar73 + (ulong)uVar41) ^ (ushort)uVar41 ^ 0xffff) * 0x10)
    ;
    array = *pp_Var4;
    p_Var19 = pp_Var4[1];
    if (p_Var19 != (jarray)0x0) {
      FUN_00129110(1,p_Var19 + 8);
    }
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pplVar43 = (long **)FUN_SharedStorageGet(0x173cb0);
    cVar37 = (**(code **)(**pplVar43 + 0xc0))(*pplVar43,array,0);
    ppJVar79 = param_1->env;
    if (cVar37 == '\0') {
      uVar14 = uVar14 ^ uVar96 ^ 0xffffffff;
      uVar41 = 0;
      if (uVar96 != 0) {
        uVar41 = uVar14 / uVar96;
      }
      jVar58 = (*(*ppJVar79)->GetArrayLength)(ppJVar79,array);
      *(int *)(*(long *)(*(long *)&param_1->field_0x68 + 8) + (ulong)(uVar14 - uVar41 * uVar96)) =
           (int)jVar58;
      if (sVar26 != 0) {
        iVar42 = 0;
        do {
          iVar42 = iVar42 + 1;
        } while (sVar26 != iVar42);
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)malloc0(0x1f);
    *puVar46 = 0;
    puVar46[1] = 0;
    puVar46[2] = 0;
    *(undefined8 *)((long)puVar46 + 0x17) = 0;
    *(undefined *)puVar46 = 0x6a;
    *(undefined *)((long)puVar46 + 1) = 0x61;
    *(undefined *)((long)puVar46 + 2) = 0x76;
    *(undefined *)((long)puVar46 + 3) = 0x61;
    *(undefined *)((long)puVar46 + 4) = 0x2f;
    *(undefined *)((long)puVar46 + 5) = 0x6c;
    *(undefined *)((long)puVar46 + 6) = 0x61;
    *(undefined *)((long)puVar46 + 7) = 0x6e;
    *(undefined *)(puVar46 + 1) = 0x67;
    *(undefined *)((long)puVar46 + 9) = 0x2f;
    *(undefined *)((long)puVar46 + 10) = 0x4e;
    *(undefined *)((long)puVar46 + 0xb) = 0x75;
    *(undefined *)((long)puVar46 + 0xc) = 0x6c;
    *(undefined *)((long)puVar46 + 0xd) = 0x6c;
    *(undefined *)((long)puVar46 + 0xe) = 0x50;
    *(undefined *)((long)puVar46 + 0xf) = 0x6f;
    *(undefined *)(puVar46 + 2) = 0x69;
    *(undefined *)((long)puVar46 + 0x11) = 0x6e;
    *(undefined *)((long)puVar46 + 0x12) = 0x74;
    *(undefined *)((long)puVar46 + 0x13) = 0x65;
    *(undefined *)((long)puVar46 + 0x14) = 0x72;
    *(undefined *)((long)puVar46 + 0x15) = 0x45;
    *(undefined *)((long)puVar46 + 0x16) = 0x78;
    *(undefined *)((long)puVar46 + 0x17) = 99;
    *(undefined *)(puVar46 + 3) = 0x65;
    *(undefined *)((long)puVar46 + 0x19) = 0x70;
    *(undefined *)((long)puVar46 + 0x1a) = 0x74;
    *(undefined *)((long)puVar46 + 0x1b) = 0x69;
    *(undefined *)((long)puVar46 + 0x1c) = 0x6f;
    *(undefined *)((long)puVar46 + 0x1d) = 0x6e;
    *(undefined *)((long)puVar46 + 0x1e) = 0;
    pcVar45 = (char *)malloc(0x20);
    *pcVar45 = *(char *)puVar46;
    pcVar45[1] = *(char *)((long)puVar46 + 1);
    pcVar45[2] = *(char *)((long)puVar46 + 2);
    pcVar45[3] = *(char *)((long)puVar46 + 3);
    pcVar45[4] = *(char *)((long)puVar46 + 4);
    pcVar45[5] = *(char *)((long)puVar46 + 5);
    pcVar45[6] = *(char *)((long)puVar46 + 6);
    pcVar45[7] = *(char *)((long)puVar46 + 7);
    pcVar45[8] = *(char *)(puVar46 + 1);
    pcVar45[9] = *(char *)((long)puVar46 + 9);
    pcVar45[10] = *(char *)((long)puVar46 + 10);
    pcVar45[0xb] = *(char *)((long)puVar46 + 0xb);
    pcVar45[0xc] = *(char *)((long)puVar46 + 0xc);
    pcVar45[0xd] = *(char *)((long)puVar46 + 0xd);
    pcVar45[0xe] = *(char *)((long)puVar46 + 0xe);
    pcVar45[0xf] = *(char *)((long)puVar46 + 0xf);
    pcVar45[0x10] = *(char *)(puVar46 + 2);
    pcVar45[0x11] = *(char *)((long)puVar46 + 0x11);
    pcVar45[0x12] = *(char *)((long)puVar46 + 0x12);
    pcVar45[0x13] = *(char *)((long)puVar46 + 0x13);
    pcVar45[0x14] = *(char *)((long)puVar46 + 0x14);
    pcVar45[0x15] = *(char *)((long)puVar46 + 0x15);
    pcVar45[0x16] = *(char *)((long)puVar46 + 0x16);
    pcVar45[0x17] = *(char *)((long)puVar46 + 0x17);
    pcVar45[0x18] = *(char *)(puVar46 + 3);
    pcVar45[0x19] = *(char *)((long)puVar46 + 0x19);
    pcVar45[0x1a] = *(char *)((long)puVar46 + 0x1a);
    pcVar45[0x1b] = *(char *)((long)puVar46 + 0x1b);
    pcVar45[0x1c] = *(char *)((long)puVar46 + 0x1c);
    cVar37 = *(char *)((long)puVar46 + 0x1d);
    pcVar45[0x1e] = '\0';
    pcVar45[0x1d] = cVar37;
    free(puVar46);
    puVar46 = (undefined8 *)malloc0(0x25);
    puVar46[1] = 0;
    *puVar46 = 0;
    puVar46[3] = 0;
    puVar46[2] = 0;
    *(undefined8 *)((long)puVar46 + 0x1d) = 0;
    *(undefined *)puVar46 = 0x41;
    *(undefined *)((long)puVar46 + 1) = 0x74;
    *(undefined *)((long)puVar46 + 2) = 0x74;
    *(undefined *)((long)puVar46 + 3) = 0x65;
    *(undefined *)((long)puVar46 + 4) = 0x6d;
    *(undefined *)((long)puVar46 + 5) = 0x70;
    *(undefined *)((long)puVar46 + 6) = 0x74;
    *(undefined *)((long)puVar46 + 7) = 0x20;
    *(undefined *)(puVar46 + 1) = 0x74;
    *(undefined *)((long)puVar46 + 9) = 0x6f;
    *(undefined *)((long)puVar46 + 10) = 0x20;
    *(undefined *)((long)puVar46 + 0xb) = 0x67;
    *(undefined *)((long)puVar46 + 0xc) = 0x65;
    *(undefined *)((long)puVar46 + 0xd) = 0x74;
    *(undefined *)((long)puVar46 + 0xe) = 0x20;
    *(undefined *)((long)puVar46 + 0xf) = 0x6c;
    *(undefined *)(puVar46 + 2) = 0x65;
    *(undefined *)((long)puVar46 + 0x11) = 0x6e;
    *(undefined *)((long)puVar46 + 0x12) = 0x67;
    *(undefined *)((long)puVar46 + 0x13) = 0x74;
    *(undefined *)((long)puVar46 + 0x14) = 0x68;
    *(undefined *)((long)puVar46 + 0x15) = 0x20;
    *(undefined *)((long)puVar46 + 0x16) = 0x6f;
    *(undefined *)((long)puVar46 + 0x17) = 0x66;
    *(undefined *)(puVar46 + 3) = 0x20;
    *(undefined *)((long)puVar46 + 0x19) = 0x6e;
    *(undefined *)((long)puVar46 + 0x1a) = 0x75;
    *(undefined *)((long)puVar46 + 0x1b) = 0x6c;
    *(undefined *)((long)puVar46 + 0x1c) = 0x6c;
    *(undefined *)((long)puVar46 + 0x1d) = 0x20;
    *(undefined *)((long)puVar46 + 0x1e) = 0x61;
    *(undefined *)((long)puVar46 + 0x1f) = 0x72;
    *(undefined *)(puVar46 + 4) = 0x72;
    *(undefined *)((long)puVar46 + 0x21) = 0x61;
    *(undefined *)((long)puVar46 + 0x22) = 0x79;
    *(undefined *)((long)puVar46 + 0x23) = 0x2e;
    *(undefined *)((long)puVar46 + 0x24) = 0;
    pcVar52 = (char *)malloc(0x30);
    *pcVar52 = *(char *)puVar46;
    pcVar52[1] = *(char *)((long)puVar46 + 1);
    pcVar52[2] = *(char *)((long)puVar46 + 2);
    pcVar52[3] = *(char *)((long)puVar46 + 3);
    pcVar52[4] = *(char *)((long)puVar46 + 4);
    pcVar52[5] = *(char *)((long)puVar46 + 5);
    pcVar52[6] = *(char *)((long)puVar46 + 6);
    pcVar52[7] = *(char *)((long)puVar46 + 7);
    pcVar52[8] = *(char *)(puVar46 + 1);
    pcVar52[9] = *(char *)((long)puVar46 + 9);
    pcVar52[10] = *(char *)((long)puVar46 + 10);
    pcVar52[0xb] = *(char *)((long)puVar46 + 0xb);
    pcVar52[0xc] = *(char *)((long)puVar46 + 0xc);
    pcVar52[0xd] = *(char *)((long)puVar46 + 0xd);
    pcVar52[0xe] = *(char *)((long)puVar46 + 0xe);
    pcVar52[0xf] = *(char *)((long)puVar46 + 0xf);
    pcVar52[0x10] = *(char *)(puVar46 + 2);
    pcVar52[0x11] = *(char *)((long)puVar46 + 0x11);
    pcVar52[0x12] = *(char *)((long)puVar46 + 0x12);
    pcVar52[0x13] = *(char *)((long)puVar46 + 0x13);
    pcVar52[0x14] = *(char *)((long)puVar46 + 0x14);
    pcVar52[0x15] = *(char *)((long)puVar46 + 0x15);
    pcVar52[0x16] = *(char *)((long)puVar46 + 0x16);
    pcVar52[0x17] = *(char *)((long)puVar46 + 0x17);
    pcVar52[0x18] = *(char *)(puVar46 + 3);
    pcVar52[0x19] = *(char *)((long)puVar46 + 0x19);
    pcVar52[0x1a] = *(char *)((long)puVar46 + 0x1a);
    pcVar52[0x1b] = *(char *)((long)puVar46 + 0x1b);
    pcVar52[0x1c] = *(char *)((long)puVar46 + 0x1c);
    pcVar52[0x1d] = *(char *)((long)puVar46 + 0x1d);
    pcVar52[0x1e] = *(char *)((long)puVar46 + 0x1e);
    pcVar52[0x1f] = *(char *)((long)puVar46 + 0x1f);
    pcVar52[0x20] = *(char *)(puVar46 + 4);
    pcVar52[0x21] = *(char *)((long)puVar46 + 0x21);
    pcVar52[0x22] = *(char *)((long)puVar46 + 0x22);
    cVar37 = *(char *)((long)puVar46 + 0x23);
    pcVar52[0x24] = '\0';
    pcVar52[0x23] = cVar37;
    free(puVar46);
    pp_Var47 = (jclass *)(*(*ppJVar79)->FindClass)(ppJVar79,pcVar45);
    pcVar53 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar53 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    local_158 = (long *)*puVar46;
    ppuVar67 = &local_160;
    local_160 = (undefined8 *)0x16f558;
    local_170 = pp_Var47;
    local_140[0] = ppuVar67;
    (*(*ppJVar79)->ThrowNew)(ppJVar79,(jclass)pp_Var47,pcVar52);
    pp_Var47 = local_170;
    local_170 = (jclass *)0x0;
    if (pp_Var47 != (jclass *)0x0) {
      local_1e0 = (undefined  [8])pp_Var47;
      if (local_140[0] == (undefined8 **)0x0) {
        return;
      }
      (*(code *)(*local_140[0])[6])(local_140[0],local_1e0);
    }
    if (local_140[0] == ppuVar67) {
      vm_context = 4;
    }
    else {
      if (local_140[0] == (undefined8 **)0x0) goto LAB_001577fc;
      vm_context = 5;
      ppuVar67 = local_140[0];
    }
    (*(code *)(*ppuVar67)[vm_context])();
LAB_001577fc:
    free(pcVar52);
    free(pcVar45);
    if (sVar26 != 0) {
      iVar42 = 0;
      do {
        iVar42 = iVar42 + 1;
      } while (sVar26 != iVar42);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  
}

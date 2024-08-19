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
} insn_0x83_t;


void case_0x83()
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
    uVar41 = *(uint *)(lVar73 + (ulong)(iVar42 + 0x1aU));
    vm_context->pc = iVar42 + 0x1eU;
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    uVar14 = *(uint *)(lVar73 + (ulong)(iVar42 + 0x1eU));
    *(int *)(vm_context + 0x14) = iVar42 + 0x22;
    uVar98 = 0;
    if (uVar96 != 0) {
      uVar98 = uVar41 / uVar96;
    }
    uVar41 = uVar41 - uVar98 * uVar96;
    pp_Var2 = (jobject *)
              (param_1->field91_0x70 +
              (ulong)(ushort)(*(ushort *)(lVar73 + (ulong)uVar41) ^ (ushort)uVar41 ^ 0xffff) * 0x10)
    ;
    p_Var15 = *pp_Var2;
    plVar77 = (long *)pp_Var2[1];
    if (plVar77 != (long *)0x0) {
      FUN_00129110(1,plVar77 + 1);
    }
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pplVar43 = (long **)FUN_SharedStorageGet(0x173cb0);
    cVar37 = (**(code **)(**pplVar43 + 0xc0))(*pplVar43,p_Var15,0);
    if (cVar37 != '\0') {
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
      puVar44 = (undefined *)malloc(0x20);
      *puVar44 = *(undefined *)puVar46;
      puVar44[1] = *(undefined *)((long)puVar46 + 1);
      puVar44[2] = *(undefined *)((long)puVar46 + 2);
      puVar44[3] = *(undefined *)((long)puVar46 + 3);
      puVar44[4] = *(undefined *)((long)puVar46 + 4);
      puVar44[5] = *(undefined *)((long)puVar46 + 5);
      puVar44[6] = *(undefined *)((long)puVar46 + 6);
      puVar44[7] = *(undefined *)((long)puVar46 + 7);
      puVar44[8] = *(undefined *)(puVar46 + 1);
      puVar44[9] = *(undefined *)((long)puVar46 + 9);
      puVar44[10] = *(undefined *)((long)puVar46 + 10);
      puVar44[0xb] = *(undefined *)((long)puVar46 + 0xb);
      puVar44[0xc] = *(undefined *)((long)puVar46 + 0xc);
      puVar44[0xd] = *(undefined *)((long)puVar46 + 0xd);
      puVar44[0xe] = *(undefined *)((long)puVar46 + 0xe);
      puVar44[0xf] = *(undefined *)((long)puVar46 + 0xf);
      puVar44[0x10] = *(undefined *)(puVar46 + 2);
      puVar44[0x11] = *(undefined *)((long)puVar46 + 0x11);
      puVar44[0x12] = *(undefined *)((long)puVar46 + 0x12);
      puVar44[0x13] = *(undefined *)((long)puVar46 + 0x13);
      puVar44[0x14] = *(undefined *)((long)puVar46 + 0x14);
      puVar44[0x15] = *(undefined *)((long)puVar46 + 0x15);
      puVar44[0x16] = *(undefined *)((long)puVar46 + 0x16);
      puVar44[0x17] = *(undefined *)((long)puVar46 + 0x17);
      puVar44[0x18] = *(undefined *)(puVar46 + 3);
      puVar44[0x19] = *(undefined *)((long)puVar46 + 0x19);
      puVar44[0x1a] = *(undefined *)((long)puVar46 + 0x1a);
      puVar44[0x1b] = *(undefined *)((long)puVar46 + 0x1b);
      puVar44[0x1c] = *(undefined *)((long)puVar46 + 0x1c);
      uVar22 = *(undefined *)((long)puVar46 + 0x1d);
      puVar44[0x1e] = 0;
      puVar44[0x1d] = uVar22;
      free(puVar46);
      puVar46 = (undefined8 *)malloc0(0x24);
      *(undefined4 *)(puVar46 + 4) = 0;
      puVar46[1] = 0;
      *puVar46 = 0;
      puVar46[3] = 0;
      puVar46[2] = 0;
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
      *(undefined *)((long)puVar46 + 0xb) = 0x4d;
      *(undefined *)((long)puVar46 + 0xc) = 0x6f;
      *(undefined *)((long)puVar46 + 0xd) = 0x6e;
      *(undefined *)((long)puVar46 + 0xe) = 0x69;
      *(undefined *)((long)puVar46 + 0xf) = 0x74;
      *(undefined *)(puVar46 + 2) = 0x6f;
      *(undefined *)((long)puVar46 + 0x11) = 0x72;
      *(undefined *)((long)puVar46 + 0x12) = 0x45;
      *(undefined *)((long)puVar46 + 0x13) = 0x78;
      *(undefined *)((long)puVar46 + 0x14) = 0x69;
      *(undefined *)((long)puVar46 + 0x15) = 0x74;
      *(undefined *)((long)puVar46 + 0x16) = 0x20;
      *(undefined *)((long)puVar46 + 0x17) = 0x6e;
      *(undefined *)(puVar46 + 3) = 0x75;
      *(undefined *)((long)puVar46 + 0x19) = 0x6c;
      *(undefined *)((long)puVar46 + 0x1a) = 0x6c;
      *(undefined *)((long)puVar46 + 0x1b) = 0x20;
      *(undefined *)((long)puVar46 + 0x1c) = 0x6f;
      *(undefined *)((long)puVar46 + 0x1d) = 0x62;
      *(undefined *)((long)puVar46 + 0x1e) = 0x6a;
      *(undefined *)((long)puVar46 + 0x1f) = 0x65;
      *(undefined *)(puVar46 + 4) = 99;
      *(undefined *)((long)puVar46 + 0x21) = 0x74;
      *(undefined *)((long)puVar46 + 0x22) = 0x2e;
      *(undefined *)((long)puVar46 + 0x23) = 0;
      puVar44 = (undefined *)malloc(0x30);
      *puVar44 = *(undefined *)puVar46;
      puVar44[1] = *(undefined *)((long)puVar46 + 1);
      puVar44[2] = *(undefined *)((long)puVar46 + 2);
      puVar44[3] = *(undefined *)((long)puVar46 + 3);
      puVar44[4] = *(undefined *)((long)puVar46 + 4);
      puVar44[5] = *(undefined *)((long)puVar46 + 5);
      puVar44[6] = *(undefined *)((long)puVar46 + 6);
      puVar44[7] = *(undefined *)((long)puVar46 + 7);
      (*(code *)&LAB_7f55efdc00)();
      return;
    }
    uVar14 = uVar14 ^ uVar96 ^ 0xffffffff;
    uVar41 = 0;
    if (uVar96 != 0) {
      uVar41 = uVar14 / uVar96;
    }
    vm_context = *(long *)&param_1->field_0x68;
    jVar56 = (*(*param_1->env)->MonitorExit)(param_1->env,p_Var15);
    *(int *)(*(long *)vm_context->vmCode + (ulong)(uVar14 - uVar41 * uVar96)) = (int)jVar56;
    iVar42 = (int)sVar26;
    if (iVar42 != 0) {
      iVar39 = 0;
      do {
        iVar39 = iVar39 + 1;
      } while (iVar42 != iVar39);
    }
LAB_00157a20:
    if ((plVar77 != (long *)0x0) &&
       (vm_context = FUN_00129140(0xffffffffffffffff,plVar77 + 1), vm_context == 0)) {
      (**(code **)(*plVar77 + 0x10))(plVar77);
      FUN_00119ba4(plVar77);
    }
    break;
  
}

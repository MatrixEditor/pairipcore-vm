#include "gvm/types.h"

typedef struct {
    addr_t a;                 // +0x0
    addr_t b;                 // +0x4
    addr_t c;                 // +0x8
    addr_t aXorValue;         // +0xc
    long ulHash;              // +0x14
    addr_t aHashDataAddr;     // +0x18
    short aHashDataLen;       // +0x1c
    addr_t aNext;             // +0x1e
    addr_t aFallback;         // +0x22
} insn_0x64_t;


void case_0x64()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;

  
    vm_context = *(long *)&param_1->field_0x68;
    uVar96 = *(uint *)vm_context->vmCodeLength;
    uVar98 = vm_context->pc;
    lVar73 = *(long *)vm_context->vmCode;
    uVar14 = *(uint *)(lVar73 + (ulong)uVar98);
    vm_context->pc = uVar98 + 4;
    uVar41 = *(uint *)(lVar73 + (ulong)(uVar98 + 4));
    vm_context->pc = uVar98 + 8;
    vm_context->pc = uVar98 + 0xc;
    vm_context->pc = uVar98 + 0x14;
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    vm_context->pc = uVar98 + 0x18;
    sVar26 = *(short *)(lVar73 + (ulong)(uVar98 + 0x18));
    vm_context->pc = uVar98 + 0x1a;
    vm_context->pc = uVar98 + 0x1e;
    vm_context->pc = uVar98 + 0x22;
    uVar99 = 0;
    if (uVar96 != 0) {
      uVar99 = uVar41 / uVar96;
    }
    uVar97 = *(uint *)(lVar73 + (ulong)(uVar98 + 0x22));
    vm_context->pc = uVar98 + 0x26;
    uVar97 = uVar97 ^ uVar96 ^ 0xffffffff;
    uVar98 = 0;
    if (uVar96 != 0) {
      uVar98 = uVar97 / uVar96;
    }
    uVar41 = uVar41 - uVar99 * uVar96;
    uVar24 = *(ushort *)(lVar73 + (ulong)uVar41);
    func_0x00169010(&local_170,vm_context,uVar97 - uVar98 * uVar96,0);
    FUN_00149a84_XOR((astruct_3 *)local_c0,(char *)local_170[1],*(undefined4 *)(local_170 + 2),
                     local_10c,plStack_168._0_4_);
    pp_Var2 = (jobject *)
              (param_1->field91_0x70 + (ulong)(ushort)(uVar24 ^ (ushort)uVar41 ^ 0xffff) * 0x10);
    p_Var15 = *pp_Var2;
    p_Var18 = pp_Var2[1];
    if (p_Var18 != (jobject)0x0) {
      FUN_00129110(1,p_Var18 + 8);
    }
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pplVar43 = (long **)FUN_SharedStorageGet(0x173cb0);
    cVar37 = (**(code **)(**pplVar43 + 0xc0))(*pplVar43,p_Var15,0);
    ppJVar79 = param_1->env;
    if (cVar37 == '\0') {
      p_Var55 = (jfieldID)func_0x00168c3c(&local_170,ppJVar79);
      jVar38 = (*(*param_1->env)->ExceptionCheck)(param_1->env);
      if ((p_Var55 == (jfieldID)0x0) || (jVar38 != '\0')) {
        if (sVar26 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar42 = 0;
        do {
          iVar42 = iVar42 + 1;
        } while (sVar26 != iVar42);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar14 = uVar14 ^ uVar96 ^ 0xffffffff;
      uVar41 = 0;
      if (uVar96 != 0) {
        uVar41 = uVar14 / uVar96;
      }
      puVar46 = (undefined8 *)((ulong)local_c0 | 1);
      if ((local_c0[0] & 1) != 0) {
        puVar46 = local_b0;
      }
      bVar91 = *(byte *)puVar46;
      if (0x49 < bVar91) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar91 < 0x44) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar91 == 0x44) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar91 == 0x46) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar91 != 0x49) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      jVar56 = (*(*param_1->env)->GetIntField)(param_1->env,p_Var15,p_Var55);
      *(int *)(*(long *)(*(long *)&param_1->field_0x68 + 8) + (ulong)(uVar14 - uVar41 * uVar96)) =
           (int)jVar56;
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
    pp_Stack_1d8 = (jclass *)0xb4aa505f18c08d3b;
    local_1e0 = (undefined  [8])0x94de20327db4f97a;
    local_1c8 = (long *)0xf1b7461210db8b1c;
    local_1d0 = (jclass *)0xb4ba41570f94960e;
    lStack_1b8 = 0xfebc4f1211d88c14;
    local_1c0 = 0xb4bf005c12949d16;
    local_1a4 = 0xe57;
    local_1b0 = (jclass **)0xf1b845405dc09a1f;
    local_1a8 = 0x1eda9c08;
    local_1a2 = 0xde;
    puVar46 = (undefined8 *)malloc0(0x37);
    uVar68 = 0;
    puVar46[1] = 0;
    *puVar46 = 0;
    puVar46[3] = 0;
    puVar46[2] = 0;
    puVar46[5] = 0;
    puVar46[4] = 0;
    *(undefined8 *)((long)puVar46 + 0x2f) = 0;
    do {
      *(byte *)((long)puVar46 + uVar68) =
           *(byte *)((ulong)local_1e0 | uVar68 & 7) ^ *(byte *)((long)&pp_Stack_1d8 + uVar68);
      uVar68 = uVar68 + 1;
    } while (uVar68 != 0x37);
    pcVar52 = (char *)malloc(0x40);
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
    pcVar52[0x23] = *(char *)((long)puVar46 + 0x23);
    pcVar52[0x24] = *(char *)((long)puVar46 + 0x24);
    pcVar52[0x25] = *(char *)((long)puVar46 + 0x25);
    pcVar52[0x26] = *(char *)((long)puVar46 + 0x26);
    pcVar52[0x27] = *(char *)((long)puVar46 + 0x27);
    pcVar52[0x28] = *(char *)(puVar46 + 5);
    pcVar52[0x29] = *(char *)((long)puVar46 + 0x29);
    pcVar52[0x2a] = *(char *)((long)puVar46 + 0x2a);
    pcVar52[0x2b] = *(char *)((long)puVar46 + 0x2b);
    pcVar52[0x2c] = *(char *)((long)puVar46 + 0x2c);
    pcVar52[0x2d] = *(char *)((long)puVar46 + 0x2d);
    pcVar52[0x2e] = *(char *)((long)puVar46 + 0x2e);
    pcVar52[0x2f] = *(char *)((long)puVar46 + 0x2f);
    pcVar52[0x30] = *(char *)(puVar46 + 6);
    pcVar52[0x31] = *(char *)((long)puVar46 + 0x31);
    pcVar52[0x32] = *(char *)((long)puVar46 + 0x32);
    pcVar52[0x33] = *(char *)((long)puVar46 + 0x33);
    pcVar52[0x34] = *(char *)((long)puVar46 + 0x34);
    cVar37 = *(char *)((long)puVar46 + 0x35);
    pcVar52[0x36] = '\0';
    pcVar52[0x35] = cVar37;
    free(puVar46);
    pp_Var47 = (jclass *)(*(*ppJVar79)->FindClass)(ppJVar79,pcVar45);
    pbVar54 = (byte *)FUN_SharedStorageGet(0x173c90);
    if ((*pbVar54 & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    local_1c8 = (long *)*puVar46;
    ppp_Var59 = &local_1d0;
    local_1d0 = (jclass *)0x16f558;
    local_1e0 = (undefined  [8])pp_Var47;
    local_1b0 = ppp_Var59;
    (*(*ppJVar79)->ThrowNew)(ppJVar79,(jclass)pp_Var47,pcVar52);
    pp_Var47 = (jclass *)local_1e0;
    local_1e0 = (undefined  [8])0x0;
    if (pp_Var47 != (jclass *)0x0) {
      local_100 = (undefined  [8])pp_Var47;
      if (local_1b0 == (jclass **)0x0) {
        return;
      }
      (*(code *)(*local_1b0)[6])(local_1b0,local_100);
    }
    if (local_1b0 == ppp_Var59) {
      vm_context = 4;
    }
    else {
      if (local_1b0 == (jclass **)0x0) goto LAB_00157a80;
      vm_context = 5;
      ppp_Var59 = local_1b0;
    }
    (*(code *)(*ppp_Var59)[vm_context])();
LAB_00157a80:
    free(pcVar52);
    free(pcVar45);
    if (sVar26 != 0) {
      iVar42 = 0;
      do {
        iVar42 = iVar42 + 1;
      } while (sVar26 != iVar42);
    }
    if (p_Var18 != (jobject)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  
}

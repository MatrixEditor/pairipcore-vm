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
} insn_0x7e_t;


void case_0x7e()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;

  
    vm_context = *(long *)&param_1->field_0x68;
    uVar14 = *(uint *)vm_context->vmCodeLength;
    uVar96 = vm_context->pc;
    lVar73 = *(long *)vm_context->vmCode;
    uVar41 = *(uint *)(lVar73 + (ulong)uVar96);
    vm_context->pc = uVar96 + 4;
    vm_context->pc = uVar96 + 8;
    vm_context->pc = uVar96 + 0xc;
    uVar41 = uVar41 ^ uVar14 ^ 0xffffffff;
    vm_context->pc = uVar96 + 0x14;
    uVar98 = 0;
    if (uVar14 != 0) {
      uVar98 = uVar41 / uVar14;
    }
    vm_context->pc = uVar96 + 0x18;
    sVar26 = *(short *)(lVar73 + (ulong)(uVar96 + 0x18));
    vm_context->pc = uVar96 + 0x1a;
    vm_context->pc = uVar96 + 0x1e;
    vm_context->pc = uVar96 + 0x22;
    uVar99 = *(uint *)(lVar73 + (ulong)(uVar96 + 0x22)) ^ uVar14 ^ 0xffffffff;
    uVar97 = 0;
    if (uVar14 != 0) {
      uVar97 = uVar99 / uVar14;
    }
    vm_context->pc = uVar96 + 0x26;
    func_0x00168ad4(&local_170,vm_context,uVar99 - uVar97 * uVar14,0);
    func_0x00167db4(local_1e0,param_1->env,*(undefined8 *)&param_1->field_0x68,
                    &param_1->field91_0x70,uVar41 - uVar98 * uVar14,&local_170);
    if (local_1a0 == '\0') {
      if (sVar26 != 0) {
        iVar42 = 0;
        do {
          iVar42 = iVar42 + 1;
        } while (sVar26 != iVar42);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (pp_Stack_1d8 != local_1d0) {
      p_Var78 = *pp_Stack_1d8;
      pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
      if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pplVar43 = (long **)FUN_SharedStorageGet(0x173cb0);
      cVar37 = (**(code **)(**pplVar43 + 0xc0))(*pplVar43,p_Var78,0);
      if (cVar37 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    ppJVar79 = param_1->env;
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
    local_f0 = (jclass *)malloc(0x20);
    plStack_f8 = (long *)0x1e;
    local_100 = (undefined  [8])0x21;
    *(char *)local_f0 = *(char *)puVar46;
    *(char *)((long)local_f0 + 1) = *(char *)((long)puVar46 + 1);
    *(char *)((long)local_f0 + 2) = *(char *)((long)puVar46 + 2);
    *(char *)((long)local_f0 + 3) = *(char *)((long)puVar46 + 3);
    *(char *)((long)local_f0 + 4) = *(char *)((long)puVar46 + 4);
    *(char *)((long)local_f0 + 5) = *(char *)((long)puVar46 + 5);
    *(char *)((long)local_f0 + 6) = *(char *)((long)puVar46 + 6);
    *(char *)((long)local_f0 + 7) = *(char *)((long)puVar46 + 7);
    *(char *)(local_f0 + 1) = *(char *)(puVar46 + 1);
    *(char *)((long)local_f0 + 9) = *(char *)((long)puVar46 + 9);
    *(char *)((long)local_f0 + 10) = *(char *)((long)puVar46 + 10);
    *(char *)((long)local_f0 + 0xb) = *(char *)((long)puVar46 + 0xb);
    *(char *)((long)local_f0 + 0xc) = *(char *)((long)puVar46 + 0xc);
    *(char *)((long)local_f0 + 0xd) = *(char *)((long)puVar46 + 0xd);
    *(char *)((long)local_f0 + 0xe) = *(char *)((long)puVar46 + 0xe);
    *(char *)((long)local_f0 + 0xf) = *(char *)((long)puVar46 + 0xf);
    *(char *)(local_f0 + 2) = *(char *)(puVar46 + 2);
    *(char *)((long)local_f0 + 0x11) = *(char *)((long)puVar46 + 0x11);
    *(char *)((long)local_f0 + 0x12) = *(char *)((long)puVar46 + 0x12);
    *(char *)((long)local_f0 + 0x13) = *(char *)((long)puVar46 + 0x13);
    *(char *)((long)local_f0 + 0x14) = *(char *)((long)puVar46 + 0x14);
    *(char *)((long)local_f0 + 0x15) = *(char *)((long)puVar46 + 0x15);
    *(char *)((long)local_f0 + 0x16) = *(char *)((long)puVar46 + 0x16);
    *(char *)((long)local_f0 + 0x17) = *(char *)((long)puVar46 + 0x17);
    *(char *)(local_f0 + 3) = *(char *)(puVar46 + 3);
    *(char *)((long)local_f0 + 0x19) = *(char *)((long)puVar46 + 0x19);
    *(char *)((long)local_f0 + 0x1a) = *(char *)((long)puVar46 + 0x1a);
    *(char *)((long)local_f0 + 0x1b) = *(char *)((long)puVar46 + 0x1b);
    *(char *)((long)local_f0 + 0x1c) = *(char *)((long)puVar46 + 0x1c);
    cVar37 = *(char *)((long)puVar46 + 0x1d);
    *(char *)((long)local_f0 + 0x1e) = '\0';
    *(char *)((long)local_f0 + 0x1d) = cVar37;
    free(puVar46);
    pp_Var47 = local_f0;
    uVar74 = (ulong)local_100;
    plStack_b8 = (long *)0xca0572f6d2441ac;
    local_c0 = (undefined  [8])0x2cd42742085035ed;
    local_a8 = (long *)0x4da0542c61705099;
    local_b0 = (undefined8 *)0x59b7423a6d705a99;
    uStack_98 = 0x59ba072467705182;
    local_a0 = 0x44a0422f28355683;
    local_90 = (undefined8 **)0x4fb14d2067705981;
    local_88 = 0x1b99;
    local_86 = 0x50;
    puVar46 = (undefined8 *)malloc0(0x33);
    uVar68 = 0;
    puVar46[1] = 0;
    *puVar46 = 0;
    puVar46[3] = 0;
    puVar46[2] = 0;
    puVar46[5] = 0;
    puVar46[4] = 0;
    *(undefined4 *)((long)puVar46 + 0x2f) = 0;
    do {
      *(byte *)((long)puVar46 + uVar68) =
           *(byte *)((ulong)local_c0 | uVar68 & 7) ^ *(byte *)((long)&plStack_b8 + uVar68);
      uVar68 = uVar68 + 1;
    } while (uVar68 != 0x33);
    local_220.data = (char *)malloc(0x40);
    pp_Var62 = (jclass *)((ulong)local_100 | 1);
    if ((uVar74 & 1) != 0) {
      pp_Var62 = pp_Var47;
    }
    local_220.capacity = 0x32;
    local_220.length = 0x41;
    *local_220.data = *(char *)puVar46;
    local_220.data[1] = *(char *)((long)puVar46 + 1);
    local_220.data[2] = *(char *)((long)puVar46 + 2);
    local_220.data[3] = *(char *)((long)puVar46 + 3);
    local_220.data[4] = *(char *)((long)puVar46 + 4);
    local_220.data[5] = *(char *)((long)puVar46 + 5);
    local_220.data[6] = *(char *)((long)puVar46 + 6);
    local_220.data[7] = *(char *)((long)puVar46 + 7);
    local_220.data[8] = *(char *)(puVar46 + 1);
    local_220.data[9] = *(char *)((long)puVar46 + 9);
    local_220.data[10] = *(char *)((long)puVar46 + 10);
    local_220.data[0xb] = *(char *)((long)puVar46 + 0xb);
    local_220.data[0xc] = *(char *)((long)puVar46 + 0xc);
    local_220.data[0xd] = *(char *)((long)puVar46 + 0xd);
    local_220.data[0xe] = *(char *)((long)puVar46 + 0xe);
    local_220.data[0xf] = *(char *)((long)puVar46 + 0xf);
    local_220.data[0x10] = *(char *)(puVar46 + 2);
    local_220.data[0x11] = *(char *)((long)puVar46 + 0x11);
    local_220.data[0x12] = *(char *)((long)puVar46 + 0x12);
    local_220.data[0x13] = *(char *)((long)puVar46 + 0x13);
    local_220.data[0x14] = *(char *)((long)puVar46 + 0x14);
    local_220.data[0x15] = *(char *)((long)puVar46 + 0x15);
    local_220.data[0x16] = *(char *)((long)puVar46 + 0x16);
    local_220.data[0x17] = *(char *)((long)puVar46 + 0x17);
    local_220.data[0x18] = *(char *)(puVar46 + 3);
    local_220.data[0x19] = *(char *)((long)puVar46 + 0x19);
    local_220.data[0x1a] = *(char *)((long)puVar46 + 0x1a);
    local_220.data[0x1b] = *(char *)((long)puVar46 + 0x1b);
    local_220.data[0x1c] = *(char *)((long)puVar46 + 0x1c);
    local_220.data[0x1d] = *(char *)((long)puVar46 + 0x1d);
    local_220.data[0x1e] = *(char *)((long)puVar46 + 0x1e);
    local_220.data[0x1f] = *(char *)((long)puVar46 + 0x1f);
    local_220.data[0x20] = *(char *)(puVar46 + 4);
    local_220.data[0x21] = *(char *)((long)puVar46 + 0x21);
    local_220.data[0x22] = *(char *)((long)puVar46 + 0x22);
    local_220.data[0x23] = *(char *)((long)puVar46 + 0x23);
    local_220.data[0x24] = *(char *)((long)puVar46 + 0x24);
    local_220.data[0x25] = *(char *)((long)puVar46 + 0x25);
    local_220.data[0x26] = *(char *)((long)puVar46 + 0x26);
    local_220.data[0x27] = *(char *)((long)puVar46 + 0x27);
    local_220.data[0x28] = *(char *)(puVar46 + 5);
    local_220.data[0x29] = *(char *)((long)puVar46 + 0x29);
    local_220.data[0x2a] = *(char *)((long)puVar46 + 0x2a);
    local_220.data[0x2b] = *(char *)((long)puVar46 + 0x2b);
    local_220.data[0x2c] = *(char *)((long)puVar46 + 0x2c);
    local_220.data[0x2d] = *(char *)((long)puVar46 + 0x2d);
    local_220.data[0x2e] = *(char *)((long)puVar46 + 0x2e);
    local_220.data[0x2f] = *(char *)((long)puVar46 + 0x2f);
    local_220.data[0x30] = *(char *)(puVar46 + 6);
    cVar37 = *(char *)((long)puVar46 + 0x31);
    local_220.data[0x32] = '\0';
    local_220.data[0x31] = cVar37;
    free(puVar46);
    pcVar45 = (char *)((ulong)&local_220 | 1);
    if ((local_220.length & 1U) != 0) {
      pcVar45 = local_220.data;
    }
    pp_Var47 = (jclass *)(*(*ppJVar79)->FindClass)(ppJVar79,(char *)pp_Var62);
    pbVar54 = (byte *)FUN_SharedStorageGet(0x173c90);
    if ((*pbVar54 & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    local_a8 = (long *)*puVar46;
    plVar77 = &local_b0;
    local_b0 = (undefined8 *)0x16f558;
    local_c0 = (undefined  [8])pp_Var47;
    local_90 = (undefined8 **)plVar77;
    (*(*ppJVar79)->ThrowNew)(ppJVar79,(jclass)pp_Var47,pcVar45);
    pp_Var47 = (jclass *)local_c0;
    local_c0 = (undefined  [8])0x0;
    if (pp_Var47 != (jclass *)0x0) {
      local_238 = (undefined  [8])pp_Var47;
      if (local_90 == (undefined8 **)0x0) {
        return;
      }
      (**(code **)((long)*local_90 + 0x30))(local_90,local_238);
    }
    if (local_90 == (undefined8 **)plVar77) {
      vm_context = 4;
    }
    else {
      if (local_90 == (undefined8 **)0x0) goto LAB_00157fb8;
      vm_context = 5;
      plVar77 = (long *)local_90;
    }
    (**(code **)(*plVar77 + vm_context * 8))();
LAB_00157fb8:
    if ((local_220.length & 1U) != 0) {
      free(local_220.data);
    }
    if (((ulong)local_100 & 1) != 0) {
      free(local_f0);
    }
    if (sVar26 != 0) {
      iVar42 = 0;
      do {
        iVar42 = iVar42 + 1;
      } while (sVar26 != iVar42);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  
}

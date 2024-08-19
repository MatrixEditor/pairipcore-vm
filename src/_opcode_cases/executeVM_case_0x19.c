#include "gvm/types.h"

typedef struct {
    addr_t a;                 // +0x0
    addr_t b;                 // +0x4
    addr_t c;                 // +0x8
    addr_t d;                 // +0xc
    addr_t aXorValue;         // +0x10
    long ulHash;              // +0x18
    addr_t aHashDataAddr;     // +0x1c
    short aHashDataLen;       // +0x20
    addr_t aNext;             // +0x22
    addr_t aFallback;         // +0x26
} insn_0x19_t;


void case_0x19()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;

  
    vm_context = *(long *)&param_1->field_0x68;
    uVar98 = *(uint *)vm_context->vmCodeLength;
    uVar99 = vm_context->pc;
    pcVar45 = *(char **)vm_context->vmCode;
    uVar41 = *(uint *)(pcVar45 + uVar99);
    vm_context->pc = uVar99 + 4;
    uVar14 = *(uint *)(pcVar45 + (uVar99 + 4));
    vm_context->pc = uVar99 + 8;
    uVar96 = *(uint *)(pcVar45 + (uVar99 + 8));
    vm_context->pc = uVar99 + 0xc;
    uVar41 = uVar41 ^ uVar98 ^ 0xffffffff;
    uVar14 = uVar14 ^ uVar98 ^ 0xffffffff;
    vm_context->pc = uVar99 + 0x10;
    uVar96 = uVar96 ^ uVar98 ^ 0xffffffff;
    uVar97 = 0;
    if (uVar98 != 0) {
      uVar97 = uVar14 / uVar98;
    }
    vm_context->pc = uVar99 + 0x18;
    vm_context->pc = uVar99 + 0x1c;
    sVar26 = *(short *)(pcVar45 + (uVar99 + 0x1c));
    vm_context->pc = uVar99 + 0x1e;
    vm_context->pc = uVar99 + 0x22;
    uVar100 = 0;
    if (uVar98 != 0) {
      uVar100 = uVar96 / uVar98;
    }
    vm_context->pc = uVar99 + 0x26;
    FUN_00149a84_XOR((astruct_3 *)local_238,pcVar45,uVar98,uVar14 - uVar97 * uVar98,
                     uVar96 - uVar100 * uVar98);
    puVar31 = (char *)malloc0(0x31);
    puVar31[0x30] = '\0';
    *(undefined8 *)(puVar31 + 8) = 0;
    *(undefined8 *)puVar31 = 0;
    *(undefined8 *)(puVar31 + 0x18) = 0;
    *(undefined8 *)(puVar31 + 0x10) = 0;
    *(undefined8 *)(puVar31 + 0x28) = 0;
    *(undefined8 *)(puVar31 + 0x20) = 0;
    *puVar31 = 'h';
    puVar31[1] = 't';
    puVar31[2] = 't';
    puVar31[3] = 'p';
    puVar31[4] = ':';
    puVar31[5] = '/';
    puVar31[6] = '/';
    puVar31[7] = 'p';
    puVar31[8] = 'l';
    puVar31[9] = 'a';
    puVar31[10] = 'y';
    puVar31[0xb] = '.';
    puVar31[0xc] = 'g';
    puVar31[0xd] = 'o';
    puVar31[0xe] = 'o';
    puVar31[0xf] = 'g';
    puVar31[0x10] = 'l';
    puVar31[0x11] = 'e';
    puVar31[0x12] = '.';
    puVar31[0x13] = 'c';
    puVar31[0x14] = 'o';
    puVar31[0x15] = 'm';
    puVar31[0x16] = '/';
    puVar31[0x17] = 's';
    puVar31[0x18] = 't';
    puVar31[0x19] = 'o';
    puVar31[0x1a] = 'r';
    puVar31[0x1b] = 'e';
    puVar31[0x1c] = '/';
    puVar31[0x1d] = 'l';
    puVar31[0x1e] = 'i';
    puVar31[0x1f] = 'c';
    puVar31[0x20] = 'e';
    puVar31[0x21] = 'n';
    puVar31[0x22] = 's';
    puVar31[0x23] = 'e';
    puVar31[0x24] = '/';
    puVar31[0x25] = 'p';
    puVar31[0x26] = 'a';
    puVar31[0x27] = 'y';
    puVar31[0x28] = 'w';
    puVar31[0x29] = 'a';
    puVar31[0x2a] = 'l';
    puVar31[0x2b] = 'l';
    puVar31[0x2c] = '?';
    puVar31[0x2d] = 'i';
    puVar31[0x2e] = 'd';
    puVar31[0x2f] = '=';
    puVar31[0x30] = '\0';
    pcVar45 = (char *)malloc(0x40);
    *pcVar45 = *puVar31;
    pcVar45[1] = puVar31[1];
    pcVar45[2] = puVar31[2];
    pcVar45[3] = puVar31[3];
    pcVar45[4] = puVar31[4];
    pcVar45[5] = puVar31[5];
    pcVar45[6] = puVar31[6];
    pcVar45[7] = puVar31[7];
    pcVar45[8] = puVar31[8];
    pcVar45[9] = puVar31[9];
    pcVar45[10] = puVar31[10];
    pcVar45[0xb] = puVar31[0xb];
    pcVar45[0xc] = puVar31[0xc];
    pcVar45[0xd] = puVar31[0xd];
    pcVar45[0xe] = puVar31[0xe];
    pcVar45[0xf] = puVar31[0xf];
    pcVar45[0x10] = puVar31[0x10];
    pcVar45[0x11] = puVar31[0x11];
    pcVar45[0x12] = puVar31[0x12];
    pcVar45[0x13] = puVar31[0x13];
    pcVar45[0x14] = puVar31[0x14];
    pcVar45[0x15] = puVar31[0x15];
    pcVar45[0x16] = puVar31[0x16];
    pcVar45[0x17] = puVar31[0x17];
    pcVar45[0x18] = puVar31[0x18];
    pcVar45[0x19] = puVar31[0x19];
    pcVar45[0x1a] = puVar31[0x1a];
    pcVar45[0x1b] = puVar31[0x1b];
    pcVar45[0x1c] = puVar31[0x1c];
    pcVar45[0x1d] = puVar31[0x1d];
    pcVar45[0x1e] = puVar31[0x1e];
    pcVar45[0x1f] = puVar31[0x1f];
    pcVar45[0x20] = puVar31[0x20];
    pcVar45[0x21] = puVar31[0x21];
    pcVar45[0x22] = puVar31[0x22];
    pcVar45[0x23] = puVar31[0x23];
    pcVar45[0x24] = puVar31[0x24];
    pcVar45[0x25] = puVar31[0x25];
    pcVar45[0x26] = puVar31[0x26];
    pcVar45[0x27] = puVar31[0x27];
    pcVar45[0x28] = puVar31[0x28];
    pcVar45[0x29] = puVar31[0x29];
    pcVar45[0x2a] = puVar31[0x2a];
    pcVar45[0x2b] = puVar31[0x2b];
    pcVar45[0x2c] = puVar31[0x2c];
    pcVar45[0x2d] = puVar31[0x2d];
    pcVar45[0x2e] = puVar31[0x2e];
    cVar37 = puVar31[0x2f];
    pcVar45[0x30] = '\0';
    pcVar45[0x2f] = cVar37;
    free(puVar31);
    FUN_0011a558(&local_220,pcVar45,local_238);
    free(pcVar45);
    local_160 = (undefined8 *)malloc(0x20);
    local_160[1] = 0x612e746e65746e69;
    *local_160 = 0x2e64696f72646e61;
    *(undefined8 *)((long)local_160 + 0x12) = 0x574549562e6e6f69;
    *(undefined8 *)((long)local_160 + 10) = 0x7463612e746e6574;
    *(undefined *)((long)local_160 + 0x1a) = 0;
    plStack_168 = (long *)0x1a;
    local_170 = (jclass *)0x21;
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    uVar14 = 0;
    if (uVar98 != 0) {
      uVar14 = uVar41 / uVar98;
    }
    func_0x00166a78(local_1e0,*puVar46,&local_170);
    if (((ulong)local_170 & 1) != 0) {
      free(local_160);
    }
    if (local_1e0._0_4_ != 0) {
      *(undefined4 *)
       (*(long *)(*(long *)&param_1->field_0x68 + 8) + (ulong)(uVar41 - uVar14 * uVar98)) = 0;
      if (sVar26 != 0) {
        iVar42 = 0;
        do {
          iVar42 = iVar42 + 1;
        } while (sVar26 != iVar42);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (local_180 == '\0') {
      return;
    }
    puVar30 = (char *)malloc0(0x14);
    *(undefined8 *)puVar30 = 0;
    *(undefined8 *)(puVar30 + 8) = 0;
    *(undefined4 *)(puVar30 + 0x10) = 0;
    *puVar30 = 'c';
    puVar30[1] = 'o';
    puVar30[2] = 'm';
    puVar30[3] = '.';
    puVar30[4] = 'a';
    puVar30[5] = 'n';
    puVar30[6] = 'd';
    puVar30[7] = 'r';
    puVar30[8] = 'o';
    puVar30[9] = 'i';
    puVar30[10] = 'd';
    puVar30[0xb] = '.';
    puVar30[0xc] = 'v';
    puVar30[0xd] = 'e';
    puVar30[0xe] = 'n';
    puVar30[0xf] = 'd';
    puVar30[0x10] = 'i';
    puVar30[0x11] = 'n';
    puVar30[0x12] = 'g';
    puVar30[0x13] = '\0';
    local_c0 = (undefined  [8])
               CONCAT17(puVar30[6],
                        CONCAT16(puVar30[5],
                                 CONCAT15(puVar30[4],
                                          CONCAT14(puVar30[3],
                                                   CONCAT13(puVar30[2],
                                                            CONCAT12(puVar30[1],
                                                                     CONCAT11(*puVar30,0x26)))))));
    plStack_b8 = *(long **)(puVar30 + 7);
    local_b0 = (undefined8 *)
               (CONCAT44(local_b0._4_4_,*(undefined4 *)(puVar30 + 0xf)) & 0xffffff00ffffffff);
    free();
    puVar46 = (undefined8 *)((ulong)local_c0 | 1);
    if (((ulong)local_c0 & 1) != 0) {
      puVar46 = local_b0;
    }
    uVar68 = func_0x0016a1a0(puVar46);
    if (0xffffffffffffffef < uVar68) {
      return;
    }
    if (uVar68 < 0x17) {
      puVar87 = (undefined8 *)((ulong)&local_170 | 1);
      local_170 = (jclass *)CONCAT71(local_170._1_7_,(char)((int)uVar68 << 1));
      if (uVar68 != 0) goto LAB_00157cd4;
    }
    else {
      puVar87 = (undefined8 *)malloc((uVar68 | 0xf) + 1);
      local_170 = (jclass *)((uVar68 | 0xf) + 2);
      plStack_168 = (long *)uVar68;
      local_160 = puVar87;
LAB_00157cd4:
      func_0x0016a0c0(puVar87,puVar46,uVar68);
    }
    *(undefined *)((long)puVar87 + uVar68) = 0;
    func_0x00166da8(&local_1d0,&local_170);
    if (((ulong)local_170 & 1) != 0) {
      free(local_160);
    }
    if (((ulong)local_c0 & 1) != 0) {
      free(local_b0);
    }
    if (local_180 == '\0') {
      return;
    }
    pp_Var47 = (jclass *)func_0x0015e7d0(local_1d0,local_1c0,_DAT_00174ac0,0x10000000);
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    ppuVar67 = &local_160;
    local_158 = (long *)*puVar46;
    local_140[0] = ppuVar67;
    local_160 = (undefined8 *)0x16f558;
    local_170 = (jclass *)0x0;
    if ((pp_Var47 == (jclass *)0x0) ||
       (local_c0 = (undefined  [8])pp_Var47, func_0x0016754c(ppuVar67,local_c0),
       local_140[0] == ppuVar67)) {
      vm_context = 4;
LAB_00157dc8:
      (*(code *)(*ppuVar67)[vm_context])(ppuVar67);
    }
    else if (local_140[0] != (undefined8 **)0x0) {
      vm_context = 5;
      ppuVar67 = local_140[0];
      goto LAB_00157dc8;
    }
    if (local_180 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar45 = (char *)((ulong)&local_220 | 1);
    if (((byte)local_220.length & 1) != 0) {
      pcVar45 = local_220.data;
    }
    pp_Var47 = (jclass *)(**(code **)(*local_1d0 + 0x538))(local_1d0,pcVar45);
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    local_158 = (long *)*puVar46;
    local_140[0] = &local_160;
    local_160 = (undefined8 *)0x16f558;
    local_170 = pp_Var47;
    pp_Var47 = (jclass *)func_0x00162ce0(local_1d0,_DAT_00174af8,_DAT_00174ae0,pp_Var47);
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    local_a8 = (long *)*puVar46;
    local_b0 = (undefined8 *)0x16f558;
    local_c0 = (undefined  [8])pp_Var47;
    local_90 = (undefined8 **)&local_b0;
    uVar68 = func_0x0015e7d0(local_1d0,local_1c0,_DAT_00174a70,pp_Var47);
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    local_e8 = *puVar46;
    ppp_Var59 = &local_f0;
    local_f0 = (jclass *)0x16f558;
    local_d0 = ppp_Var59;
    local_100 = (undefined  [8])0x0;
    if ((uVar68 == 0) ||
       (local_250 = (jclass *)uVar68, func_0x0016754c(ppp_Var59,&local_250), local_d0 == ppp_Var59))
    {
      vm_context = 4;
    }
    else {
      if (local_d0 == (jclass **)0x0) goto LAB_00157f4c;
      vm_context = 5;
      ppp_Var59 = local_d0;
    }
    (*(code *)(*ppp_Var59)[vm_context])(ppp_Var59);
LAB_00157f4c:
    local_250 = (jclass *)local_c0;
    local_c0 = (undefined  [8])0x0;
    if (local_250 != (jclass *)0x0) {
      if (local_90 == (undefined8 **)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      (**(code **)((long)*local_90 + 0x30))(local_90,&local_250);
    }
    if (local_90 != (undefined8 **)&local_b0) {
      if (local_90 == (undefined8 **)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  
}

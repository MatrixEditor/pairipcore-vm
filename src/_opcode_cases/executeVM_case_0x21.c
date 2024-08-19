#include "gvm/types.h"

typedef struct {
    addr_t a;                 // +0x0
    addr_t b;                 // +0x4
    addr_t aXorValue;         // +0x8
    long ulHash;              // +0x10
    addr_t aHashDataAddr;     // +0x14
    short aHashDataLen;       // +0x18
    addr_t aNext;             // +0x1a
    addr_t aFallback;         // +0x1e
    addr_t c;                 // +0x26
    addr_t d;                 // +0x2a
} insn_0x21_t;


void case_0x21()
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
    vm_context->pc = uVar99 + 8;
    vm_context->pc = uVar99 + 0x10;
    vm_context->pc = uVar99 + 0x14;
    vm_context->pc = uVar99 + 0x16;
    vm_context->pc = uVar99 + 0x1a;
    vm_context->pc = uVar99 + 0x1e;
    uVar41 = uVar41 ^ uVar98 ^ 0xffffffff;
    uVar14 = *(uint *)(pcVar45 + (uVar99 + 0x1e));
    vm_context->pc = uVar99 + 0x22;
    uVar96 = *(uint *)(pcVar45 + (uVar99 + 0x22));
    vm_context->pc = uVar99 + 0x26;
    uVar14 = uVar14 ^ uVar98 ^ 0xffffffff;
    uVar97 = 0;
    if (uVar98 != 0) {
      uVar97 = uVar41 / uVar98;
    }
    uVar96 = uVar96 ^ uVar98 ^ 0xffffffff;
    vm_context->pc = uVar99 + 0x2a;
    uVar99 = 0;
    if (uVar98 != 0) {
      uVar99 = uVar14 / uVar98;
    }
    uVar100 = 0;
    if (uVar98 != 0) {
      uVar100 = uVar96 / uVar98;
    }
    FUN_00149a84_XOR((astruct_3 *)local_100,pcVar45,uVar98,uVar96 - uVar100 * uVar98,
                     uVar14 - uVar99 * uVar98);
    local_c0 = (undefined  [8])0x0;
    pp_Var47 = (jclass *)((ulong)local_100 | 1);
    if (((ulong)local_100 & 1) != 0) {
      pp_Var47 = local_f0;
    }
    local_90 = (undefined8 **)0x0;
    bVar91 = *(byte *)pp_Var47;
    if (bVar91 < 0x49) {
      if (bVar91 < 0x44) {
        if (bVar91 == 0x42) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar91 == 0x43) {
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
          return;
        }
      }
    }
    else if (bVar91 < 0x53) {
      if (bVar91 == 0x49) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar91 == 0x4a) {
        pp_Var47 = (jclass *)
                   (*(*param_1->env)->NewLongArray)
                             (param_1->env,
                              (ulong)*(uint *)(*(long *)(*(long *)&param_1->field_0x68 + 8) +
                                              (ulong)(uVar41 - uVar97 * uVar98)));
        pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
        if (*pcVar45 == '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar90 = FUN_001603d0();
        puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
        *puVar46 = uVar90;
        puVar44 = (undefined *)FUN_SharedStorageGet(0x173c90);
        *puVar44 = 1;
        local_160 = (undefined8 *)0x16f558;
        local_140[0] = &local_160;
        local_170 = (jclass *)0x0;
        if (local_c0 != (undefined  [8])0x0) {
          local_1e0 = local_c0;
          if (local_90 == (undefined8 **)0x0) {
            return;
          }
          local_158 = (long *)uVar90;
          local_c0 = (undefined  [8])pp_Var47;
          (**(code **)((long)*local_90 + 0x30))(local_90,local_1e0);
        }
        if (local_90 != (undefined8 **)&local_b0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (bVar91 == 0x53) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar91 == 0x5a) {
        return;
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  
}

#include "gvm/types.h"

typedef struct {
  addr_t a;                 // +0x0
  addr_t b;                 // +0x4
  short c;                  // +0x8
  ushort d;                 // +0xa
} insn_0x06_t;


void case_0x06()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;
    addr_t a;
    addr_t b;
    short c;
    ushort d;

      vm_context = *(long *)&param_1->field_0x68;
    code_length = *(uint *)vm_context->vmCodeLength;
    pc_base = vm_context->pc;
    vm_code = *(long *)vm_context->vmCode;
    a = *(uint *)(vm_code + (ulong)uVar98);
    vm_context->pc = pc_base + 4;
    a = a ^ code_length ^ 0xffffffff;
    b = *(uint *)(vm_code + (ulong)(pc_base + 4));
    vm_context->pc = pc_base + 8;
    uVar99 = 0;
    if (code_length != 0) {
      uVar99 = a / uVar96;
    }
    vm_context->pc = pc_base + 0xc;
    b = b ^ code_length ^ 0xffffffff;
    vm_context->pc = pc_base + 0x14;
    uVar97 = 0;
    if (code_length != 0) {
      uVar97 = b / uVar96;
    }
    a = a - uVar99 * uVar96;
    vm_context->pc = pc_base + 0x18;
    c = *(short *)(vm_code + (ulong)(pc_base + 0x18));
    vm_context->pc = pc_base + 0x1a;
    vm_context->pc = pc_base + 0x1e;
    vm_context->pc = pc_base + 0x22;
    d = *(ushort *)(vm_code + (ulong)uVar39);
    uVar90 = *(undefined8 *)(vm_code + (ulong)(b - uVar97 * uVar96));
    pcVar44 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar44 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar45 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    p_Var46 = (jclass)FUN_00149cc8(uVar90,*puVar45,_DAT_001749e0,_DAT_00174a30);
    pcVar44 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar44 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar45 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    local_158 = (long *)*puVar45;
    ppuVar67 = &local_160;
    local_160 = (undefined8 *)0x16f558;
    pp_Var70 = (jclass *)
               (param_1->field91_0x70 + (ulong)(ushort)(d ^ (ushort)a ^ 0xffff) * 0x10);
    local_170 = p_Var46;
    local_140[0] = ppuVar67;
    FUN_0014cc28(&local_1e0,&local_170);
    pp_Var34 = pp_Stack_1d8;
    p_Var46 = local_1e0;
    pp_Var62 = (jclass *)pp_Var70[1];
    local_1e0 = *pp_Var70;
    pp_Stack_1d8 = pp_Var62;
    pp_Var70[1] = (jclass)pp_Var34;
    *pp_Var70 = p_Var46;
    if ((pp_Var62 != (jclass *)0x0) &&
       (vm_context = FUN_00129140(0xffffffffffffffff,pp_Var62 + 1), vm_context == 0)) {
      (**(code **)(*pp_Var62 + 0x10))(pp_Var62);
      FUN_00119ba4(pp_Var62);
    }
    p_Var46 = local_170;
    local_170 = (jclass)0x0;
    if (p_Var46 != (jclass)0x0) {
      local_1e0 = p_Var46;
      if (local_140[0] == (undefined8 **)0x0) {
        return;
      }
      (*(code *)(*local_140[0])[6])(local_140[0],&local_1e0);
    }
    if (local_140[0] == ppuVar67) {
      vm_context = 4;
LAB_00156cd8:
      (*(code *)(*ppuVar67)[vm_context])();
    }
    else if (local_140[0] != (undefined8 **)0x0) {
      vm_context = 5;
      ppuVar67 = local_140[0];
      goto LAB_00156cd8;
    }
    iVar40 = (int)sVar25;
    if (iVar40 != 0) {
      iVar37 = 0;
      do {
        iVar37 = iVar37 + 1;
      } while (iVar40 != iVar37);
    }
    break;
  default:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();

}

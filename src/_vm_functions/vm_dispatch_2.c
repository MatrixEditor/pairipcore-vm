#include "gvm/dispatcher.h"
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long vm_dispatch_2(long *param_1,short param_2)

{
  int iVar1;
  jobject *pp_Var2;
  jstring *pp_Var3;
  jarray *pp_Var4;
  jthrowable *pp_Var5;
  jobjectArray *pp_Var6;
  char **ppcVar7;
  uint *puVar8;
  int *piVar9;
  undefined *puVar10;
  undefined *puVar11;
  char *pcVar12;
  int *piVar13;
  uint uVar14;
  jobject p_Var15;
  jstring p_Var16;
  jarray array;
  jthrowable obj;
  jobjectArray p_Var17;
  jobject p_Var18;
  jarray p_Var19;
  jobjectArray p_Var20;
  jclass *pp_Var21;
  undefined uVar22;
  _jobject _Var23;
  ushort uVar24;
  undefined2 uVar25;
  short sVar26;
  short sVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  vm_t *pvVar32;
  vm_t *pvVar33;
  undefined8 *puVar34;
  long lVar35;
  jclass *pp_Var36;
  char cVar37;
  jboolean jVar38;
  int iVar39;
  uint uVar41;
  int iVar42;
  long **pplVar43;
  undefined *puVar44;
  JNIEnv *pplVar42;
  char *pcVar45;
  undefined8 *puVar46;
  jclass *pp_Var47;
  char *puVar35;
  char *puVar32;
  int iVar40;
  char **ppcVar48;
  jclass **ppp_Var49;
  jclass p_Var50;
  jmethodID p_Var51;
  char *puVar31;
  char *pcVar52;
  char *pcVar53;
  byte *pbVar54;
  jfieldID p_Var55;
  jint jVar56;
  undefined8 *puVar57;
  char *puVar30;
  jsize jVar58;
  jclass **ppp_Var59;
  int *piVar60;
  undefined8 uVar61;
  jclass *pp_Var62;
  int *piVar63;
  ulong uVar64;
  int *piVar65;
  char *pcVar66;
  undefined8 **ppuVar67;
  long uVar43;
  ulong uVar68;
  undefined8 *puVar69;
  ulong extraout_x8;
  byte *pbVar70;
  vm_t *pvVar71;
  long lVar72;
  long lVar73;
  ulong uVar74;
  ulong uVar75;
  int iVar76;
  long *plVar77;
  jclass p_Var78;
  JNIEnv *ppJVar79;
  undefined8 *puVar80;
  jstring p_Var81;
  int *piVar82;
  vm_t *pvVar83;
  int *piVar84;
  vm_t *pvVar85;
  vm_t *pvVar86;
  undefined8 *puVar87;
  long *plVar88;
  undefined8 *puVar89;
  undefined8 uVar90;
  short unaff_w28;
  byte bVar91;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  undefined4 uVar92;
  uint uVar96;
  uint uVar97;
  uint uVar98;
  uint uVar99;
  uint uVar100;
  uint uVar101;
  float fVar102;
  jmethodID local_3a8;
  jfieldID local_3a0;
  uint *local_380;
  long local_378;
  ulong local_360;
  ulong local_350;
  ulong local_340;
  vm_t *local_338;
  byte local_2f8;
  char local_2f7;
  char local_2f6;
  char local_2f5;
  char local_2f4;
  char local_2f3;
  char local_2f2;
  undefined local_2f1;
  char *local_2e8;
  astruct_3 local_2e0;
  astruct_3 local_2c8;
  astruct_3 local_2b0;
  byte local_298;
  undefined local_297;
  undefined local_296;
  undefined local_295;
  undefined local_294;
  undefined local_293;
  undefined local_292;
  undefined local_291;
  undefined local_290;
  undefined local_28f;
  undefined local_28e;
  undefined local_28d;
  undefined local_28c;
  undefined local_28b;
  undefined local_28a;
  undefined local_289;
  undefined local_288;
  undefined uStack_287;
  undefined uStack_286;
  undefined uStack_285;
  undefined4 uStack_284;
  long *local_280;
  long *local_278;
  undefined8 local_270;
  ulong uStack_268;
  char *local_260;
  undefined8 local_250;
  ulong local_248;
  char *local_240;
  undefined local_238 [8];
  ulong local_230;
  undefined *local_228;
  basic_string local_220;
  char **local_1f0;
  undefined local_1e0 [8];
  jclass *pp_Stack_1d8;
  jclass *local_1d0;
  long *local_1c8;
  long local_1c0;
  long lStack_1b8;
  jclass **local_1b0;
  int local_1a8;
  undefined2 local_1a4;
  undefined local_1a2;
  char local_1a0;
  char local_180;
  undefined8 local_170;
  long *plStack_168;
  undefined8 *local_160;
  long *local_158;
  undefined8 local_150;
  undefined8 **local_140 [2];
  undefined8 local_130;
  undefined8 ***local_120;
  undefined4 local_10c;
  undefined local_100 [8];
  long *plStack_f8;
  jclass *local_f0;
  undefined8 local_e8;
  jclass **local_d0;
  undefined local_c0 [8];
  long *plStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 **local_90;
  undefined2 local_88;
  undefined local_86;
  long local_78;

  plVar77 = (long *)tpidr_el0;
  local_78 = plVar77[5];
  switch(param_2) {
  case 6:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar96 = *(uint *)(uVar43 + 0x10);
    uVar98 = *(uint *)(uVar43 + 0x14);
    lVar73 = *(long *)(uVar43 + 8);
    uVar41 = *(uint *)(lVar73 + (ulong)uVar98);
    *(uint *)(uVar43 + 0x14) = uVar98 + 4;
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    uVar14 = *(uint *)(lVar73 + (ulong)(uVar98 + 4));
    *(uint *)(uVar43 + 0x14) = uVar98 + 8;
    uVar99 = 0;
    if (uVar96 != 0) {
      uVar99 = uVar41 / uVar96;
    }
    *(uint *)(uVar43 + 0x14) = uVar98 + 0xc;
    uVar14 = uVar14 ^ uVar96 ^ 0xffffffff;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x14;
    uVar97 = 0;
    if (uVar96 != 0) {
      uVar97 = uVar14 / uVar96;
    }
    uVar41 = uVar41 - uVar99 * uVar96;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x18;
    sVar26 = *(short *)(lVar73 + (ulong)(uVar98 + 0x18));
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x1a;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x1e;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x22;
    uVar24 = *(ushort *)(lVar73 + (ulong)uVar41);
    uVar90 = *(undefined8 *)(lVar73 + (ulong)(uVar14 - uVar97 * uVar96));
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    pp_Var47 = (jclass *)FUN_00149cc8(uVar90,*puVar46,_DAT_001749e0,_DAT_00174a30);
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    local_158 = (long *)*puVar46;
    ppuVar67 = &local_160;
    local_160 = (undefined8 *)0x16f558;
    pp_Var62 = (jclass *)
               (param_1->field91_0x70 + (ulong)(ushort)(uVar24 ^ (ushort)uVar41 ^ 0xffff) * 0x10);
    local_170 = pp_Var47;
    local_140[0] = ppuVar67;
    FUN_0014cc28(local_1e0,(jclass **)&local_170);
    pp_Var36 = pp_Stack_1d8;
    pp_Var21 = (jclass *)local_1e0;
    pp_Var47 = (jclass *)pp_Var62[1];
    local_1e0 = (undefined  [8])*pp_Var62;
    pp_Stack_1d8 = pp_Var47;
    pp_Var62[1] = (jclass)pp_Var36;
    *pp_Var62 = (jclass)pp_Var21;
    if ((pp_Var47 != (jclass *)0x0) &&
       (uVar43 = FUN_00129140(0xffffffffffffffff,pp_Var47 + 1), uVar43 == 0)) {
      (**(code **)(*pp_Var47 + 0x10))(pp_Var47);
      FUN_00119ba4(pp_Var47);
    }
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
      uVar43 = 4;
LAB_00156cd8:
      (*(code *)(*ppuVar67)[uVar43])();
    }
    else if (local_140[0] != (undefined8 **)0x0) {
      uVar43 = 5;
      ppuVar67 = local_140[0];
      goto LAB_00156cd8;
    }
    iVar42 = (int)sVar26;
    if (iVar42 != 0) {
      iVar39 = 0;
      do {
        iVar39 = iVar39 + 1;
      } while (iVar42 != iVar39);
    }
    break;
  default:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 8:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar14 = *(uint *)(uVar43 + 0x10);
    iVar42 = *(int *)(uVar43 + 0x14);
    *(int *)(uVar43 + 0x14) = iVar42 + 4;
    *(int *)(uVar43 + 0x14) = iVar42 + 0xc;
    *(uint *)(uVar43 + 0x14) = iVar42 + 0x10U;
    sVar26 = *(short *)(*(long *)(uVar43 + 8) + (ulong)(iVar42 + 0x10U));
    *(int *)(uVar43 + 0x14) = iVar42 + 0x12;
    *(int *)(uVar43 + 0x14) = iVar42 + 0x16;
    *(uint *)(uVar43 + 0x14) = iVar42 + 0x1aU;
    uVar41 = *(uint *)(*(long *)(uVar43 + 8) + (ulong)(iVar42 + 0x1aU));
    *(int *)(uVar43 + 0x14) = iVar42 + 0x1e;
    uVar41 = uVar41 ^ uVar14 ^ 0xffffffff;
    *(int *)(uVar43 + 0x14) = iVar42 + 0x22;
    uVar96 = 0;
    if (uVar14 != 0) {
      uVar96 = uVar41 / uVar14;
    }
    func_0x00169010(&local_170,uVar43,uVar41 - uVar96 * uVar14,1);
    FUN_00149a84_XOR((astruct_3 *)local_1e0,(char *)local_170[1],*(undefined4 *)(local_170 + 2),
                     local_10c,plStack_168._0_4_);
    pp_Var47 = (jclass *)((ulong)local_1e0 | 1);
    if ((local_1e0[0] & 1) != 0) {
      pp_Var47 = local_1d0;
    }
    if ((byte)*(_jobject *)pp_Var47 - 0x42 < 0x1a) {
      iVar42 = *(int *)(&DAT_0010ee48 + ((ulong)((byte)*(_jobject *)pp_Var47 - 0x42) & 0xff) * 4);
      if (iVar42 < 0x49) {
        if (0x43 < iVar42) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (iVar42 == 0x42) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (iVar42 < 0x4c) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (iVar42 == 0x5a) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
    uVar43 = func_0x00168e38(&local_160,param_1->env);
    if (uVar43 == 0) {
      if (sVar26 != 0) {
        iVar42 = 0;
        do {
          iVar42 = iVar42 + 1;
        } while (sVar26 != iVar42);
      }
    }
    else {
      uVar43 = func_0x00168c3c(&local_170,param_1->env);
      if (uVar43 != 0) {
        _Var23 = *(_jobject *)pp_Var47;
        if ((byte)_Var23 < 0x4a) {
          if ((byte)_Var23 < 0x44) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (_Var23 == (_jobject)0x44) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (_Var23 == (_jobject)0x46) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (_Var23 == (_jobject)0x49) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else {
          if ((byte)_Var23 < 0x53) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (_Var23 == (_jobject)0x53) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (_Var23 == (_jobject)0x5a) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (_Var23 == (_jobject)0x5b) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (sVar26 != 0) {
        iVar42 = 0;
        do {
          iVar42 = iVar42 + 1;
        } while (sVar26 != iVar42);
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar96 = *(uint *)(uVar43 + 0x10);
    uVar98 = *(uint *)(uVar43 + 0x14);
    lVar73 = *(long *)(uVar43 + 8);
    uVar41 = *(uint *)(lVar73 + (ulong)uVar98);
    *(uint *)(uVar43 + 0x14) = uVar98 + 4;
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    uVar14 = *(uint *)(lVar73 + (ulong)(uVar98 + 4));
    *(uint *)(uVar43 + 0x14) = uVar98 + 8;
    uVar99 = 0;
    if (uVar96 != 0) {
      uVar99 = uVar41 / uVar96;
    }
    *(uint *)(uVar43 + 0x14) = uVar98 + 0xc;
    uVar14 = uVar14 ^ uVar96 ^ 0xffffffff;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x14;
    uVar97 = 0;
    if (uVar96 != 0) {
      uVar97 = uVar14 / uVar96;
    }
    uVar41 = uVar41 - uVar99 * uVar96;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x18;
    sVar26 = *(short *)(lVar73 + (ulong)(uVar98 + 0x18));
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x1a;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x1e;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x22;
    uVar24 = *(ushort *)(lVar73 + (ulong)uVar41);
    uVar90 = *(undefined8 *)(lVar73 + (ulong)(uVar14 - uVar97 * uVar96));
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    pp_Var47 = (jclass *)FUN_00149cc8(*puVar46,_DAT_00174a18,_DAT_001749d8,uVar90);
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    local_158 = (long *)*puVar46;
    ppuVar67 = &local_160;
    local_160 = (undefined8 *)0x16f558;
    pp_Var62 = (jclass *)
               (param_1->field91_0x70 + (ulong)(ushort)(uVar24 ^ (ushort)uVar41 ^ 0xffff) * 0x10);
    local_170 = pp_Var47;
    local_140[0] = ppuVar67;
    FUN_0014cc28(local_1e0,(jclass **)&local_170);
    pp_Var36 = pp_Stack_1d8;
    pp_Var21 = (jclass *)local_1e0;
    pp_Var47 = (jclass *)pp_Var62[1];
    local_1e0 = (undefined  [8])*pp_Var62;
    pp_Stack_1d8 = pp_Var47;
    pp_Var62[1] = (jclass)pp_Var36;
    *pp_Var62 = (jclass)pp_Var21;
    if ((pp_Var47 != (jclass *)0x0) &&
       (uVar43 = FUN_00129140(0xffffffffffffffff,pp_Var47 + 1), uVar43 == 0)) {
      (**(code **)(*pp_Var47 + 0x10))(pp_Var47);
      FUN_00119ba4(pp_Var47);
    }
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
      uVar43 = 4;
LAB_00156c5c:
      (*(code *)(*ppuVar67)[uVar43])();
    }
    else if (local_140[0] != (undefined8 **)0x0) {
      uVar43 = 5;
      ppuVar67 = local_140[0];
      goto LAB_00156c5c;
    }
    iVar42 = (int)sVar26;
    if (iVar42 != 0) {
      iVar39 = 0;
      do {
        iVar39 = iVar39 + 1;
      } while (iVar42 != iVar39);
    }
    break;
  case 0xf:
    lVar73 = *(long *)&param_1->field_0x68;
    uVar98 = *(uint *)(lVar73 + 0x10);
    uVar99 = *(uint *)(lVar73 + 0x14);
    uVar43 = *(long *)(lVar73 + 8);
    uVar41 = *(uint *)(uVar43 + (ulong)uVar99);
    *(uint *)(lVar73 + 0x14) = uVar99 + 4;
    uVar14 = *(uint *)(uVar43 + (ulong)(uVar99 + 4));
    *(uint *)(lVar73 + 0x14) = uVar99 + 8;
    uVar41 = uVar41 ^ uVar98 ^ 0xffffffff;
    uVar96 = *(uint *)(uVar43 + (ulong)(uVar99 + 8));
    *(uint *)(lVar73 + 0x14) = uVar99 + 0xc;
    uVar97 = 0;
    if (uVar98 != 0) {
      uVar97 = uVar41 / uVar98;
    }
    uVar14 = uVar14 ^ uVar98 ^ 0xffffffff;
    uVar96 = uVar96 ^ uVar98 ^ 0xffffffff;
    uVar100 = 0;
    if (uVar98 != 0) {
      uVar100 = uVar14 / uVar98;
    }
    uVar101 = 0;
    if (uVar98 != 0) {
      uVar101 = uVar96 / uVar98;
    }
    uVar14 = uVar14 - uVar100 * uVar98;
    *(uint *)(lVar73 + 0x14) = uVar99 + 0x10;
    *(uint *)(lVar73 + 0x14) = uVar99 + 0x18;
    *(uint *)(lVar73 + 0x14) = uVar99 + 0x1c;
    sVar26 = *(short *)(uVar43 + (ulong)(uVar99 + 0x1c));
    *(uint *)(lVar73 + 0x14) = uVar99 + 0x1e;
    uVar96 = uVar96 - uVar101 * uVar98;
    *(uint *)(lVar73 + 0x14) = uVar99 + 0x22;
    *(uint *)(lVar73 + 0x14) = uVar99 + 0x26;
    jVar38 = (*(*param_1->env)->IsSameObject)
                       (param_1->env,
                        *(jobject *)
                         (param_1->field91_0x70 +
                         ((ulong)((uint)*(ushort *)(uVar43 + (ulong)uVar14) ^ uVar14 ^ 0xffffffff) &
                         0xffff) * 0x10),
                        *(jobject *)
                         (param_1->field91_0x70 +
                         ((ulong)((uint)*(ushort *)(uVar43 + (ulong)uVar96) ^ uVar96 ^ 0xffffffff) &
                         0xffff) * 0x10));
    *(uint *)(*(long *)(lVar73 + 8) + (ulong)(uVar41 - uVar97 * uVar98)) = (uint)(jVar38 != '\0');
    iVar42 = (int)sVar26;
    if (iVar42 == 0) {
      return;
    }
    iVar39 = 0;
    do {
      iVar39 = iVar39 + 1;
    } while (iVar42 != iVar39);
    return;
  case 0x11:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar14 = *(uint *)(uVar43 + 0x10);
    uVar96 = *(uint *)(uVar43 + 0x14);
    lVar73 = *(long *)(uVar43 + 8);
    uVar41 = *(uint *)(lVar73 + (ulong)uVar96);
    *(uint *)(uVar43 + 0x14) = uVar96 + 4;
    *(uint *)(uVar43 + 0x14) = uVar96 + 8;
    uVar41 = uVar41 ^ uVar14 ^ 0xffffffff;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x10;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x14;
    uVar98 = 0;
    if (uVar14 != 0) {
      uVar98 = uVar41 / uVar14;
    }
    sVar26 = *(short *)(lVar73 + (ulong)(uVar96 + 0x14));
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x16;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x1a;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x1e;
    uVar99 = *(uint *)(lVar73 + (ulong)(uVar96 + 0x1e));
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x22;
    uVar99 = uVar99 ^ uVar14 ^ 0xffffffff;
    uVar41 = uVar41 - uVar98 * uVar14;
    uVar96 = 0;
    if (uVar14 != 0) {
      uVar96 = uVar99 / uVar14;
    }
    uVar24 = *(ushort *)(lVar73 + (ulong)uVar41);
    uVar25 = *(undefined2 *)(lVar73 + (ulong)(uVar99 - uVar96 * uVar14));
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    pp_Var47 = (jclass *)FUN_00149cc8(*puVar46,_DAT_00174a28,_DAT_001749d0,uVar25);
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    local_158 = (long *)*puVar46;
    ppuVar67 = &local_160;
    local_160 = (undefined8 *)0x16f558;
    pp_Var62 = (jclass *)
               (param_1->field91_0x70 + (ulong)(ushort)(uVar24 ^ (ushort)uVar41 ^ 0xffff) * 0x10);
    local_170 = pp_Var47;
    local_140[0] = ppuVar67;
    FUN_0014cc28(local_1e0,(jclass **)&local_170);
    pp_Var36 = pp_Stack_1d8;
    pp_Var21 = (jclass *)local_1e0;
    pp_Var47 = (jclass *)pp_Var62[1];
    local_1e0 = (undefined  [8])*pp_Var62;
    pp_Stack_1d8 = pp_Var47;
    pp_Var62[1] = (jclass)pp_Var36;
    *pp_Var62 = (jclass)pp_Var21;
    if ((pp_Var47 != (jclass *)0x0) &&
       (uVar43 = FUN_00129140(0xffffffffffffffff,pp_Var47 + 1), uVar43 == 0)) {
      (**(code **)(*pp_Var47 + 0x10))(pp_Var47);
      FUN_00119ba4(pp_Var47);
    }
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
      uVar43 = 4;
LAB_00156b9c:
      (*(code *)(*ppuVar67)[uVar43])();
    }
    else if (local_140[0] != (undefined8 **)0x0) {
      uVar43 = 5;
      ppuVar67 = local_140[0];
      goto LAB_00156b9c;
    }
    iVar42 = (int)sVar26;
    if (iVar42 != 0) {
      iVar39 = 0;
      do {
        iVar39 = iVar39 + 1;
      } while (iVar42 != iVar39);
    }
    break;
  case 0x18:
    lVar73 = *(long *)&param_1->field_0x68;
    uVar14 = *(uint *)(lVar73 + 0x10);
    iVar42 = *(int *)(lVar73 + 0x14);
    uVar43 = *(long *)(lVar73 + 8);
    *(int *)(lVar73 + 0x14) = iVar42 + 4;
    *(int *)(lVar73 + 0x14) = iVar42 + 0xc;
    *(uint *)(lVar73 + 0x14) = iVar42 + 0x10U;
    sVar26 = *(short *)(uVar43 + (ulong)(iVar42 + 0x10U));
    *(int *)(lVar73 + 0x14) = iVar42 + 0x12;
    *(int *)(lVar73 + 0x14) = iVar42 + 0x16;
    *(int *)(lVar73 + 0x14) = iVar42 + 0x1a;
    *(uint *)(lVar73 + 0x14) = iVar42 + 0x1eU;
    uVar41 = *(uint *)(uVar43 + (ulong)(iVar42 + 0x1eU));
    *(int *)(lVar73 + 0x14) = iVar42 + 0x22;
    uVar41 = uVar41 ^ uVar14 ^ 0xffffffff;
    uVar96 = 0;
    if (uVar14 != 0) {
      uVar96 = uVar41 / uVar14;
    }
    if (*(uint *)(uVar43 + (ulong)(uVar41 - uVar96 * uVar14)) < 0x35) {
      iVar42 = (int)sVar26;
      if (iVar42 == 0) {
        return;
      }
      iVar39 = 0;
      do {
        iVar39 = iVar39 + 1;
      } while (iVar42 != iVar39);
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x19:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar98 = *(uint *)(uVar43 + 0x10);
    uVar99 = *(uint *)(uVar43 + 0x14);
    pcVar45 = *(char **)(uVar43 + 8);
    uVar41 = *(uint *)(pcVar45 + uVar99);
    *(uint *)(uVar43 + 0x14) = uVar99 + 4;
    uVar14 = *(uint *)(pcVar45 + (uVar99 + 4));
    *(uint *)(uVar43 + 0x14) = uVar99 + 8;
    uVar96 = *(uint *)(pcVar45 + (uVar99 + 8));
    *(uint *)(uVar43 + 0x14) = uVar99 + 0xc;
    uVar41 = uVar41 ^ uVar98 ^ 0xffffffff;
    uVar14 = uVar14 ^ uVar98 ^ 0xffffffff;
    *(uint *)(uVar43 + 0x14) = uVar99 + 0x10;
    uVar96 = uVar96 ^ uVar98 ^ 0xffffffff;
    uVar97 = 0;
    if (uVar98 != 0) {
      uVar97 = uVar14 / uVar98;
    }
    *(uint *)(uVar43 + 0x14) = uVar99 + 0x18;
    *(uint *)(uVar43 + 0x14) = uVar99 + 0x1c;
    sVar26 = *(short *)(pcVar45 + (uVar99 + 0x1c));
    *(uint *)(uVar43 + 0x14) = uVar99 + 0x1e;
    *(uint *)(uVar43 + 0x14) = uVar99 + 0x22;
    uVar100 = 0;
    if (uVar98 != 0) {
      uVar100 = uVar96 / uVar98;
    }
    *(uint *)(uVar43 + 0x14) = uVar99 + 0x26;
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
      uVar43 = 4;
LAB_00157dc8:
      (*(code *)(*ppuVar67)[uVar43])(ppuVar67);
    }
    else if (local_140[0] != (undefined8 **)0x0) {
      uVar43 = 5;
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
      uVar43 = 4;
    }
    else {
      if (local_d0 == (jclass **)0x0) goto LAB_00157f4c;
      uVar43 = 5;
      ppp_Var59 = local_d0;
    }
    (*(code *)(*ppp_Var59)[uVar43])(ppp_Var59);
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
  case 0x1a:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar14 = *(uint *)(uVar43 + 0x10);
    uVar96 = *(uint *)(uVar43 + 0x14);
    uVar41 = *(uint *)(*(long *)(uVar43 + 8) + (ulong)uVar96);
    *(uint *)(uVar43 + 0x14) = uVar96 + 4;
    *(uint *)(uVar43 + 0x14) = uVar96 + 8;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x10;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x14;
    sVar26 = *(short *)(*(long *)(uVar43 + 8) + (ulong)(uVar96 + 0x14));
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x16;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x1a;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x1e;
    uVar68 = param_1->field25_0x20;
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pplVar43 = (long **)FUN_SharedStorageGet(0x173cb0);
    cVar37 = (**(code **)(**pplVar43 + 0xc0))(*pplVar43,uVar68,0);
    if (cVar37 == '\0') {
      local_170 = (jclass *)param_1->field25_0x20;
      param_1->field25_0x20 = 0;
      if (local_170 != (jclass *)0x0) {
        plVar77 = param_1->field66_0x50;
        if (plVar77 == (long *)0x0) {
          return;
        }
        (**(code **)(*plVar77 + 0x30))(plVar77,&local_170);
      }
    }
    uVar41 = uVar41 ^ uVar14 ^ 0xffffffff;
    uVar96 = 0;
    if (uVar14 != 0) {
      uVar96 = uVar41 / uVar14;
    }
    *(uint *)(*(long *)(*(long *)&param_1->field_0x68 + 8) + (ulong)(uVar41 - uVar96 * uVar14)) =
         (uint)(cVar37 == '\0');
    iVar42 = (int)sVar26;
    if (iVar42 != 0) {
      iVar39 = 0;
      do {
        iVar39 = iVar39 + 1;
      } while (iVar42 != iVar39);
    }
    break;
  case 0x1d:
    ppcVar7 = &local_220.data;
    ppp_Var59 = &local_f0;
    pplVar43 = (long **)FUN_SharedStorageGet(0x173cb0);
    pcVar45 = (char *)((ulong)&local_270 | 1);
    iVar42 = 0x1d8474b2;
LAB_0014fa2c:
    iVar39 = iVar42;
    pcVar53 = pcVar45;
    pp_Var62 = (jclass *)local_c0;
    pp_Var47 = (jclass *)local_100;
    uVar43 = local_220.length;
    pcVar52 = local_2b0.field2_0x10;
    bVar91 = (byte)local_2b0.field0_0x0;
    pcVar66 = (char *)((ulong)pcVar53 & 0xffffffff);
    pcVar45 = pcVar66;
    if (iVar39 < -0x3ed864a2) {
      if (-0x565f725d < iVar39) {
        if (iVar39 < -0x496da30e) {
          if (iVar39 != -0x565f725c) {
            if (iVar39 == -0x4f5dc7eb) {
              local_100 = (undefined  [8])0x0;
              if (pp_Var47 != (jclass *)0x0) {
                local_238 = (undefined  [8])pp_Var47;
                if (local_d0 == (jclass **)0x0) {
                  return;
                }
                (*(code *)(*local_d0)[6])(local_d0,local_238);
              }
              if (local_d0 == ppp_Var59) {
                uVar43 = 4;
              }
              else {
                if (local_d0 == (jclass **)0x0) goto LAB_00157140;
                uVar43 = 5;
                ppp_Var59 = local_d0;
              }
              (*(code *)(*ppp_Var59)[uVar43])(ppp_Var59);
LAB_00157140:
              if (((byte)local_2e0.field0_0x0 & 1) != 0) {
                free(local_2e0.field2_0x10);
              }
              if (((byte)local_2b0.field0_0x0 & 1) != 0) {
                free(local_2b0.field2_0x10);
              }
              if (local_380 != (uint *)0x0) {
                free(local_380);
              }
              if (local_378 != 0) {
                free();
              }
              if (((byte)local_2c8.field0_0x0 & 1) == 0) {
                return;
              }
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            goto LAB_0015070c;
          }
          ppJVar79 = param_1->env;
          pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
          iVar42 = _DAT_00174950;
          if (*pcVar45 == '\x01') {
            plVar77 = *pplVar43;
          }
          else {
            local_278 = (long *)0x0;
            if (PTR_JNI == (JNIEnv *)0x0) {
              plVar77 = (long *)0x0;
            }
            else if ((_DAT_00174950 == 0) || (iVar39 = func_0x0016a2d0(), iVar42 != iVar39)) {
LAB_0015109c:
              plVar77 = (long *)0x0;
            }
            else {
              p_Var78 = (*(*PTR_JNI)->FindClass)(PTR_JNI,(char *)&local_278);
              if ((int)p_Var78 == -2) {
                local_280 = (long *)0x0;
                local_238 = (undefined  [8])CONCAT44(local_238._4_4_,0x10006);
                local_230 = 0;
                local_228 = (undefined *)0x0;
                p_Var51 = (*(*PTR_JNI)->FromReflectedMethod)(PTR_JNI,(jobject)&local_280);
                plVar77 = local_280;
                if ((int)p_Var51 != 0) {
                  plVar77 = (long *)0x0;
                }
              }
              else {
                plVar77 = local_278;
                if ((int)p_Var78 != 0) goto LAB_0015109c;
              }
            }
            *pplVar43 = plVar77;
            puVar44 = (undefined *)FUN_SharedStorageGet(0x173c90);
            *puVar44 = 1;
          }
          puVar44 = (undefined *)((ulong)&local_2e0 | 1);
          if (((byte)local_2e0.field0_0x0 & 1) != 0) {
            puVar44 = local_2e0.field2_0x10;
          }
          pp_Var47 = (jclass *)(**(code **)(*plVar77 + 0x538))(plVar77,puVar44);
          pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
          iVar42 = _DAT_00174950;
          if (*pcVar45 == '\x01') {
            plVar77 = *pplVar43;
          }
          else {
            local_278 = (long *)0x0;
            if (((PTR_JNI == (JNIEnv *)0x0) || (_DAT_00174950 == 0)) ||
               (iVar39 = func_0x0016a2d0(), iVar42 != iVar39)) {
LAB_00151024:
              plVar77 = (long *)0x0;
            }
            else {
              p_Var78 = (*(*PTR_JNI)->FindClass)(PTR_JNI,(char *)&local_278);
              if ((int)p_Var78 == -2) {
                local_280 = (long *)0x0;
                local_238 = (undefined  [8])CONCAT44(local_238._4_4_,0x10006);
                local_230 = 0;
                local_228 = (undefined *)0x0;
                p_Var51 = (*(*PTR_JNI)->FromReflectedMethod)(PTR_JNI,(jobject)&local_280);
                plVar77 = local_280;
                if ((int)p_Var51 != 0) {
                  plVar77 = (long *)0x0;
                }
              }
              else {
                plVar77 = local_278;
                if ((int)p_Var78 != 0) goto LAB_00151024;
              }
            }
            *pplVar43 = plVar77;
            puVar44 = (undefined *)FUN_SharedStorageGet(0x173c90);
            *puVar44 = 1;
          }
          local_160 = (undefined8 *)0x16f558;
          local_170 = pp_Var47;
          local_158 = plVar77;
          local_140[0] = &local_160;
          pp_Var47 = (jclass *)func_0x0015e7d0(ppJVar79,pp_Var47,local_3a8);
          pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
          iVar42 = _DAT_00174950;
          if (*pcVar45 == '\x01') {
            plVar77 = *pplVar43;
          }
          else {
            local_278 = (long *)0x0;
            if (PTR_JNI == (JNIEnv *)0x0) {
              plVar77 = (long *)0x0;
            }
            else if (_DAT_00174950 == 0) {
              plVar77 = (long *)0x0;
            }
            else {
              iVar39 = func_0x0016a2d0();
              if (iVar42 == iVar39) {
                p_Var78 = (*(*PTR_JNI)->FindClass)(PTR_JNI,(char *)&local_278);
                if ((int)p_Var78 == -2) {
                  local_280 = (long *)0x0;
                  local_238 = (undefined  [8])CONCAT44(local_238._4_4_,0x10006);
                  local_230 = 0;
                  local_228 = (undefined *)0x0;
                  p_Var51 = (*(*PTR_JNI)->FromReflectedMethod)(PTR_JNI,(jobject)&local_280);
                  plVar77 = local_280;
                  if ((int)p_Var51 != 0) {
                    plVar77 = (long *)0x0;
                  }
                }
                else {
                  plVar77 = local_278;
                  if ((int)p_Var78 != 0) goto LAB_0015108c;
                }
              }
              else {
LAB_0015108c:
                plVar77 = (long *)0x0;
              }
            }
            *pplVar43 = plVar77;
            puVar44 = (undefined *)FUN_SharedStorageGet(0x173c90);
            *puVar44 = 1;
          }
          local_1d0 = (jclass *)0x16f558;
          local_1e0 = (undefined  [8])0x0;
          local_1c8 = plVar77;
          local_1b0 = &local_1d0;
          if (local_100 != (undefined  [8])0x0) {
            local_238 = local_100;
            if (local_d0 == (jclass **)0x0) {
              return;
            }
            local_100 = (undefined  [8])pp_Var47;
            (*(code *)(*local_d0)[6])(local_d0,local_238);
            pp_Var47 = (jclass *)local_100;
          }
          local_100 = (undefined  [8])pp_Var47;
          ppp_Var49 = local_d0;
          local_d0 = (jclass **)0x0;
          if (ppp_Var49 == ppp_Var59) {
            uVar43 = 4;
            ppp_Var49 = ppp_Var59;
LAB_0015059c:
            (*(code *)(*ppp_Var49)[uVar43])();
          }
          else if (ppp_Var49 != (jclass **)0x0) {
            uVar43 = 5;
            goto LAB_0015059c;
          }
          pp_Var47 = (jclass *)local_1e0;
          if (local_1b0 == (jclass **)0x0) {
            local_d0 = (jclass **)0x0;
            ppp_Var49 = (jclass **)0x0;
joined_r0x00150610:
            if (pp_Var47 != (jclass *)0x0) goto LAB_001505d0;
LAB_00150614:
            local_1e0 = (undefined  [8])0x0;
            if (ppp_Var49 == &local_1d0) goto LAB_001505f4;
LAB_0015061c:
            if (ppp_Var49 != (jclass **)0x0) {
              uVar43 = 5;
              goto LAB_00150624;
            }
          }
          else {
            if (local_1b0 == &local_1d0) {
              local_d0 = ppp_Var59;
              (*(code *)local_1d0[3])(&local_1d0,ppp_Var59);
              ppp_Var49 = local_1b0;
              pp_Var47 = (jclass *)local_1e0;
              goto joined_r0x00150610;
            }
            ppp_Var49 = (jclass **)0x0;
            local_d0 = local_1b0;
            local_1b0 = (jclass **)0x0;
            if (local_1e0 == (undefined  [8])0x0) goto LAB_00150614;
LAB_001505d0:
            local_1e0 = (undefined  [8])0x0;
            if (ppp_Var49 == (jclass **)0x0) {
              return;
            }
            local_238 = (undefined  [8])pp_Var47;
            (*(code *)(*ppp_Var49)[6])(ppp_Var49,local_238);
            ppp_Var49 = local_1b0;
            if (local_1b0 != &local_1d0) goto LAB_0015061c;
LAB_001505f4:
            uVar43 = 4;
            ppp_Var49 = &local_1d0;
LAB_00150624:
            (*(code *)(*ppp_Var49)[uVar43])();
          }
          pp_Var47 = local_170;
          local_170 = (jclass *)0x0;
          if (pp_Var47 != (jclass *)0x0) {
            local_238 = (undefined  [8])pp_Var47;
            if (local_140[0] == (undefined8 **)0x0) {
              return;
            }
            (*(code *)(*local_140[0])[6])(local_140[0],local_238);
          }
          if (local_140[0] == &local_160) {
            uVar43 = 4;
            ppuVar67 = &local_160;
LAB_0015067c:
            (*(code *)(*ppuVar67)[uVar43])();
          }
          else if (local_140[0] != (undefined8 **)0x0) {
            uVar43 = 5;
            ppuVar67 = local_140[0];
            goto LAB_0015067c;
          }
          jVar38 = (*(*param_1->env)->ExceptionCheck)(param_1->env);
          pcVar45 = (char *)((ulong)pcVar53 & 0xffffffff);
          iVar42 = -0x6541ff6e;
          if (jVar38 != '\0') {
            iVar42 = -0x496da30e;
          }
        }
        else {
          if (iVar39 == -0x496da30e) {
            if (unaff_w28 != 0) {
              iVar42 = 0;
              do {
                iVar42 = iVar42 + 1;
              } while (unaff_w28 != iVar42);
            }
LAB_001504d8:
            local_340 = 1;
            goto LAB_00150510;
          }
          if (iVar39 != -0x414c03d4) goto LAB_0015070c;
          if (unaff_w28 != 0) {
            iVar42 = 0;
            do {
              iVar42 = iVar42 + 1;
            } while (unaff_w28 != iVar42);
          }
          pcVar45 = (char *)0x1;
          iVar42 = 0x4aa2c3b0;
        }
        goto LAB_0014fa2c;
      }
      if (iVar39 < -0x6541ff6e) {
        iVar42 = -0x963ec2b;
        if (iVar39 != -0x795e6527) {
          if (iVar39 != -0x74c1fbc7) goto LAB_0015070c;
          if (unaff_w28 != 0) {
            iVar42 = 0;
            do {
              iVar42 = iVar42 + 1;
            } while (unaff_w28 != iVar42);
          }
          iVar42 = -0x963ec2b;
        }
        goto LAB_0014fa2c;
      }
      if (iVar39 == -0x6541ff6e) {
        local_340 = 0;
LAB_00150510:
        iVar42 = -0x3ed864a2;
        goto LAB_0014fa2c;
      }
      if (iVar39 == -0x5d1b3e27) {
        (*(*param_1->env)->SetStaticObjectField)
                  (param_1->env,(jclass)local_c0,local_3a0,(jobject)local_100);
        if (unaff_w28 != 0) {
          iVar42 = 0;
          do {
            iVar42 = iVar42 + 1;
          } while (unaff_w28 != iVar42);
        }
        goto LAB_0014f9f8;
      }
    }
    else {
      if (0x44ad52f < iVar39) {
        if (iVar39 < 0x6dd51d2e) {
          if (iVar39 == 0x44ad530) {
            if (unaff_w28 != 0) {
              iVar42 = 0;
              do {
                iVar42 = iVar42 + 1;
              } while (unaff_w28 != iVar42);
            }
LAB_0014f9f8:
            iVar42 = -0x795e6527;
          }
          else {
            if (iVar39 != 0x4aa2c3b0) goto LAB_0015070c;
            local_220.length = 0;
            if (uVar43 != 0) {
              local_238 = (undefined  [8])uVar43;
              if (local_1f0 == (char **)0x0) {
                return;
              }
              (**(code **)(*local_1f0 + 0x30))(local_1f0,local_238);
            }
            if (local_1f0 == ppcVar7) {
              uVar43 = 4;
              ppcVar48 = ppcVar7;
LAB_0015052c:
              (**(code **)(*ppcVar48 + uVar43 * 8))();
            }
            else if (local_1f0 != (char **)0x0) {
              uVar43 = 5;
              ppcVar48 = local_1f0;
              goto LAB_0015052c;
            }
            iVar42 = 0x72126bb7;
            if ((int)pcVar53 != 0) {
              iVar42 = -0x4f5dc7eb;
            }
          }
        }
        else if (iVar39 == 0x6dd51d2e) {
          ppJVar79 = param_1->env;
          puVar35 = (char *)malloc0(7);
          *(undefined4 *)puVar35 = 0;
          *(undefined4 *)(puVar35 + 3) = 0;
          *puVar35 = 'i';
          puVar35[1] = 'n';
          puVar35[2] = 't';
          puVar35[3] = 'e';
          puVar35[4] = 'r';
          puVar35[5] = 'n';
          puVar35[6] = '\0';
          local_2f8 = 0xc;
          local_2f7 = *puVar35;
          local_2f6 = puVar35[1];
          local_2f5 = puVar35[2];
          local_2f4 = puVar35[3];
          local_2f3 = puVar35[4];
          local_2f2 = puVar35[5];
          local_2f1 = 0;
          free();
          pcVar52 = local_2e8;
          bVar91 = local_2f8;
          puVar32 = (char *)malloc0(0x15);
          *(undefined8 *)puVar32 = 0;
          *(undefined8 *)(puVar32 + 8) = 0;
          *(undefined8 *)(puVar32 + 0xd) = 0;
          *puVar32 = '(';
          puVar32[1] = ')';
          puVar32[2] = 'L';
          puVar32[3] = 'j';
          puVar32[4] = 'a';
          puVar32[5] = 'v';
          puVar32[6] = 'a';
          puVar32[7] = '/';
          puVar32[8] = 'l';
          puVar32[9] = 'a';
          puVar32[10] = 'n';
          puVar32[0xb] = 'g';
          puVar32[0xc] = '/';
          puVar32[0xd] = 'S';
          puVar32[0xe] = 't';
          puVar32[0xf] = 'r';
          puVar32[0x10] = 'i';
          puVar32[0x11] = 'n';
          puVar32[0x12] = 'g';
          puVar32[0x13] = ';';
          puVar32[0x14] = '\0';
          local_250 = (jclass *)
                      CONCAT17(puVar32[6],
                               CONCAT16(puVar32[5],
                                        CONCAT15(puVar32[4],
                                                 CONCAT14(puVar32[3],
                                                          CONCAT13(puVar32[2],
                                                                   CONCAT12(puVar32[1],
                                                                            CONCAT11(*puVar32,0x28))
                                                                  )))));
          local_248 = *(ulong *)(puVar32 + 7);
          local_240 = (char *)(CONCAT35((int3)((ulong)local_240 >> 0x28),
                                        *(undefined5 *)(puVar32 + 0xf)) & 0xffff00ffffffffff);
          pcVar45 = (char *)((ulong)&local_2f8 | 1);
          if ((bVar91 & 1) != 0) {
            pcVar45 = pcVar52;
          }
          free();
          pcVar52 = (char *)((ulong)&local_250 | 1);
          if (((ulong)local_250 & 1) != 0) {
            pcVar52 = local_240;
          }
          local_3a8 = (*(*ppJVar79)->GetMethodID)(ppJVar79,(jclass)uVar43,pcVar45,pcVar52);
          if (((ulong)local_250 & 1) != 0) {
            free(local_240);
          }
          if ((local_2f8 & 1) != 0) {
            free(local_2e8);
          }
          iVar42 = -0x36f5556;
          if (local_3a8 != (jmethodID)0x0) {
            iVar42 = -0x565f725c;
          }
          pcVar45 = (char *)((ulong)pcVar53 & 0xffffffff);
        }
        else {
          if (iVar39 != 0x72126bb7) goto LAB_0015070c;
          pcVar52 = (char *)((ulong)&local_2c8 | 1);
          if (((byte)local_2c8.field0_0x0 & 1) != 0) {
            pcVar52 = local_2c8.field2_0x10;
          }
          pp_Var47 = (jclass *)(*(*param_1->env)->FindClass)(param_1->env,pcVar52);
          pcVar52 = (char *)FUN_SharedStorageGet(0x173c90);
          iVar42 = _DAT_00174950;
          if (*pcVar52 == '\x01') {
            plVar77 = *pplVar43;
          }
          else {
            local_278 = (long *)0x0;
            if (((PTR_JNI == (JNIEnv *)0x0) || (_DAT_00174950 == 0)) ||
               (iVar39 = func_0x0016a2d0(), iVar42 != iVar39)) {
LAB_00151000:
              plVar77 = (long *)0x0;
            }
            else {
              p_Var78 = (*(*PTR_JNI)->FindClass)(PTR_JNI,(char *)&local_278);
              if ((int)p_Var78 == -2) {
                local_280 = (long *)0x0;
                local_238 = (undefined  [8])CONCAT44(local_238._4_4_,0x10006);
                local_230 = 0;
                local_228 = (undefined *)0x0;
                p_Var51 = (*(*PTR_JNI)->FromReflectedMethod)(PTR_JNI,(jobject)&local_280);
                plVar77 = local_280;
                if ((int)p_Var51 != 0) {
                  plVar77 = (long *)0x0;
                }
              }
              else {
                plVar77 = local_278;
                if ((int)p_Var78 != 0) goto LAB_00151000;
              }
            }
            *pplVar43 = plVar77;
            puVar44 = (undefined *)FUN_SharedStorageGet(0x173c90);
            *puVar44 = 1;
          }
          iVar42 = -0x74c1fbc7;
          if (pp_Var47 != (jclass *)0x0) {
            iVar42 = -0x1baf7f1e;
          }
          local_b0 = (undefined8 *)0x16f558;
          local_c0 = (undefined  [8])pp_Var47;
          local_a8 = plVar77;
          local_90 = (undefined8 **)&local_b0;
        }
        goto LAB_0014fa2c;
      }
      if (iVar39 < -0x963ec2b) {
        pcVar45 = (char *)(local_340 & 0xffffffff);
        iVar42 = 0x4aa2c3b0;
        if (iVar39 == -0x3ed864a2) goto LAB_0014fa2c;
        if (iVar39 == -0x1baf7f1e) {
          ppJVar79 = param_1->env;
          puVar46 = (undefined8 *)malloc0(0x13);
          *puVar46 = 0;
          puVar46[1] = 0;
          *(undefined4 *)((long)puVar46 + 0xf) = 0;
          *(undefined *)puVar46 = 0x4c;
          *(undefined *)((long)puVar46 + 1) = 0x6a;
          *(undefined *)((long)puVar46 + 2) = 0x61;
          *(undefined *)((long)puVar46 + 3) = 0x76;
          *(undefined *)((long)puVar46 + 4) = 0x61;
          *(undefined *)((long)puVar46 + 5) = 0x2f;
          *(undefined *)((long)puVar46 + 6) = 0x6c;
          *(undefined *)((long)puVar46 + 7) = 0x61;
          *(undefined *)(puVar46 + 1) = 0x6e;
          *(undefined *)((long)puVar46 + 9) = 0x67;
          *(undefined *)((long)puVar46 + 10) = 0x2f;
          *(undefined *)((long)puVar46 + 0xb) = 0x53;
          *(undefined *)((long)puVar46 + 0xc) = 0x74;
          *(undefined *)((long)puVar46 + 0xd) = 0x72;
          *(undefined *)((long)puVar46 + 0xe) = 0x69;
          *(undefined *)((long)puVar46 + 0xf) = 0x6e;
          *(undefined *)(puVar46 + 2) = 0x67;
          *(undefined *)((long)puVar46 + 0x11) = 0x3b;
          *(undefined *)((long)puVar46 + 0x12) = 0;
          local_298 = 0x24;
          local_297 = *(undefined *)puVar46;
          local_296 = *(undefined *)((long)puVar46 + 1);
          local_295 = *(undefined *)((long)puVar46 + 2);
          local_294 = *(undefined *)((long)puVar46 + 3);
          local_293 = *(undefined *)((long)puVar46 + 4);
          local_292 = *(undefined *)((long)puVar46 + 5);
          local_291 = *(undefined *)((long)puVar46 + 6);
          local_290 = *(undefined *)((long)puVar46 + 7);
          local_28f = *(undefined *)(puVar46 + 1);
          local_28e = *(undefined *)((long)puVar46 + 9);
          local_28d = *(undefined *)((long)puVar46 + 10);
          local_28c = *(undefined *)((long)puVar46 + 0xb);
          local_28b = *(undefined *)((long)puVar46 + 0xc);
          local_28a = *(undefined *)((long)puVar46 + 0xd);
          local_289 = *(undefined *)((long)puVar46 + 0xe);
          local_288 = *(undefined *)((long)puVar46 + 0xf);
          uStack_287 = *(undefined *)(puVar46 + 2);
          uStack_286 = *(undefined *)((long)puVar46 + 0x11);
          uStack_285 = 0;
          pcVar45 = (char *)((ulong)&local_2b0 | 1);
          if ((bVar91 & 1) != 0) {
            pcVar45 = pcVar52;
          }
          free();
          pcVar52 = (char *)((ulong)&local_298 | 1);
          if ((local_298 & 1) != 0) {
            pcVar52 = (char *)CONCAT44(uStack_284,
                                       CONCAT13(uStack_285,
                                                CONCAT12(uStack_286,CONCAT11(uStack_287,local_288)))
                                      );
          }
          local_3a0 = (*(*ppJVar79)->GetStaticFieldID)(ppJVar79,(jclass)pp_Var62,pcVar45,pcVar52);
          if ((local_298 & 1) != 0) {
            free(CONCAT44(uStack_284,
                          CONCAT13(uStack_285,CONCAT12(uStack_286,CONCAT11(uStack_287,local_288)))))
            ;
          }
          pcVar45 = pcVar66;
          iVar42 = 0x44ad530;
          if (local_3a0 != (jfieldID)0x0) {
            iVar42 = -0x5d1b3e27;
          }
          goto LAB_0014fa2c;
        }
      }
      else {
        if (iVar39 == -0x963ec2b) {
          local_c0 = (undefined  [8])0x0;
          if (pp_Var62 != (jclass *)0x0) {
            local_238 = (undefined  [8])pp_Var62;
            if (local_90 == (undefined8 **)0x0) {
              return;
            }
            (*(code *)(*local_90)[6])(local_90,local_238);
          }
          if (local_90 == (undefined8 **)&local_b0) {
            uVar43 = 4;
            ppuVar67 = (undefined8 **)&local_b0;
          }
          else {
            iVar42 = -0x4f5dc7eb;
            if (local_90 == (undefined8 **)0x0) goto LAB_0014fa2c;
            uVar43 = 5;
            ppuVar67 = local_90;
          }
          (*(code *)(*ppuVar67)[uVar43])();
          iVar42 = -0x4f5dc7eb;
          goto LAB_0014fa2c;
        }
        if (iVar39 == -0x36f5556) {
          if (unaff_w28 != 0) {
            iVar42 = 0;
            do {
              iVar42 = iVar42 + 1;
            } while (unaff_w28 != iVar42);
          }
          goto LAB_001504d8;
        }
      }
    }
LAB_0015070c:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar96 = *(uint *)(uVar43 + 0x10);
    uVar98 = *(uint *)(uVar43 + 0x14);
    pcVar45 = *(char **)(uVar43 + 8);
    uVar99 = *(uint *)(pcVar45 + uVar98);
    *(uint *)(uVar43 + 0x14) = uVar98 + 4;
    uVar41 = *(uint *)(pcVar45 + (uVar98 + 4));
    *(uint *)(uVar43 + 0x14) = uVar98 + 8;
    uVar97 = *(uint *)(pcVar45 + (uVar98 + 8));
    *(uint *)(uVar43 + 0x14) = uVar98 + 0xc;
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    uVar14 = *(uint *)(pcVar45 + (uVar98 + 0xc));
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x10;
    uVar100 = 0;
    if (uVar96 != 0) {
      uVar100 = uVar41 / uVar96;
    }
    uVar14 = uVar14 ^ uVar96 ^ 0xffffffff;
    uVar101 = ~(uVar97 ^ uVar96);
    uVar97 = *(uint *)(pcVar45 + (uVar98 + 0x10)) ^ uVar96 ^ 0xffffffff;
    iVar42 = uVar41 - uVar100 * uVar96;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x14;
    uVar41 = 0;
    if (uVar96 != 0) {
      uVar41 = uVar14 / uVar96;
    }
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x18;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x20;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x24;
    unaff_w28 = *(short *)(pcVar45 + (uVar98 + 0x24));
    uVar100 = 0;
    if (uVar96 != 0) {
      uVar100 = uVar97 / uVar96;
    }
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x26;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x2a;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x2e;
    uVar98 = 0;
    if (uVar96 != 0) {
      uVar98 = uVar101 / uVar96;
    }
    uVar30 = uVar101 - uVar98 * uVar96;
    FUN_00149a84_XOR(&local_2c8,pcVar45,uVar96,uVar14 - uVar41 * uVar96,iVar42);
    uVar43 = *(long *)&param_1->field_0x68;
    pcVar45 = *(char **)(uVar43 + 8);
    iVar40 = *(int *)(pcVar45 + (uVar97 - uVar100 * uVar96));
    uVar41 = *(ushort *)(pcVar45 + uVar30) ^ uVar30;
    if (((uVar41 ^ 0xffffffff) & 0xffff) == 0) {
      local_378 = 0;
    }
    else {
      if ((uVar41 >> 0xf & 1) == 0) {
        return;
      }
      uVar24 = *(ushort *)(pcVar45 + uVar30) ^ (ushort)uVar30 ^ 0xffff;
      local_378 = malloc((long)(short)uVar24 << 2);
      func_0x0016a0f0(local_378,0,(long)(short)uVar24 << 2);
      uVar14 = *(uint *)(uVar43 + 0x10);
      uVar68 = (ulong)uVar24;
      if ((uVar41 >> 4 & 0xfff) < 0xfff) {
        uVar74 = 0;
        if ((uVar98 * uVar96 - uVar101) - 3 < (uint)((int)(uVar68 - 1) << 2)) goto LAB_00150880;
        if (uVar68 - 1 >> 0x1e == 0) {
          if ((ulong)(local_378 - (long)(pcVar45 + (uVar30 + 2))) < 0x10) {
            uVar74 = 0;
          }
          else {
            lVar73 = 0;
            iVar76 = 0;
            uVar74 = uVar68 & 0x7ffc;
            do {
              iVar1 = iVar76 * 4;
              iVar76 = iVar76 + 4;
              uVar61 = *(undefined8 *)((long)(pcVar45 + (uVar30 + 2 + iVar1)) + 8);
              uVar90 = *(undefined8 *)(pcVar45 + (uVar30 + 2 + iVar1));
              bVar91 = (byte)uVar14;
              bVar93 = (byte)(uVar14 >> 8);
              bVar94 = (byte)(uVar14 >> 0x10);
              bVar95 = (byte)(uVar14 >> 0x18);
              uVar98 = CONCAT13(~((byte)((ulong)uVar90 >> 0x18) ^ bVar95),
                                CONCAT12(~((byte)((ulong)uVar90 >> 0x10) ^ bVar94),
                                         CONCAT11(~((byte)((ulong)uVar90 >> 8) ^ bVar93),
                                                  ~((byte)uVar90 ^ bVar91))));
              uVar100 = CONCAT13(~((byte)((ulong)uVar61 >> 0x18) ^ bVar95),
                                 CONCAT12(~((byte)((ulong)uVar61 >> 0x10) ^ bVar94),
                                          CONCAT11(~((byte)((ulong)uVar61 >> 8) ^ bVar93),
                                                   ~((byte)uVar61 ^ bVar91))));
              uVar97 = (uint)(CONCAT17(~((byte)((ulong)uVar90 >> 0x38) ^ bVar95),
                                       CONCAT16(~((byte)((ulong)uVar90 >> 0x30) ^ bVar94),
                                                CONCAT15(~((byte)((ulong)uVar90 >> 0x28) ^ bVar93),
                                                         CONCAT14(~((byte)((ulong)uVar90 >> 0x20) ^
                                                                   bVar91),uVar98)))) >> 0x20);
              uVar101 = (uint)(CONCAT17(~((byte)((ulong)uVar61 >> 0x38) ^ bVar95),
                                        CONCAT16(~((byte)((ulong)uVar61 >> 0x30) ^ bVar94),
                                                 CONCAT15(~((byte)((ulong)uVar61 >> 0x28) ^ bVar93),
                                                          CONCAT14(~((byte)((ulong)uVar61 >> 0x20) ^
                                                                    bVar91),uVar100)))) >> 0x20);
              uVar41 = 0;
              if (uVar14 != 0) {
                uVar41 = uVar98 / uVar14;
              }
              uVar31 = 0;
              if (uVar14 != 0) {
                uVar31 = uVar97 / uVar14;
              }
              uVar28 = 0;
              if (uVar14 != 0) {
                uVar28 = uVar100 / uVar14;
              }
              uVar29 = 0;
              if (uVar14 != 0) {
                uVar29 = uVar101 / uVar14;
              }
              ((undefined8 *)(local_378 + lVar73))[1] =
                   CONCAT44(uVar101 - uVar29 * uVar14,uVar100 - uVar28 * uVar14);
              *(undefined8 *)(local_378 + lVar73) =
                   CONCAT44(uVar97 - uVar31 * uVar14,uVar98 - uVar41 * uVar14);
              lVar73 = lVar73 + 0x10;
            } while (((ulong)(uVar24 >> 2) & 0x1fff) * 0x10 - lVar73 != 0);
            if (uVar74 == uVar68) goto LAB_001508b8;
          }
        }
      }
      else {
LAB_00150880:
        uVar74 = 0;
      }
      do {
        uVar41 = *(uint *)(pcVar45 + (uVar30 + 2 + (int)uVar74 * 4)) ^ uVar14 ^ 0xffffffff;
        uVar98 = 0;
        if (uVar14 != 0) {
          uVar98 = uVar41 / uVar14;
        }
        *(uint *)(local_378 + uVar74 * 4) = uVar41 - uVar98 * uVar14;
        uVar74 = uVar74 + 1;
      } while (uVar68 != uVar74);
    }
LAB_001508b8:
    uVar41 = ~(uVar99 ^ uVar96);
    uVar14 = 0;
    if (uVar96 != 0) {
      uVar14 = uVar41 / uVar96;
    }
    uVar99 = uVar41 - uVar14 * uVar96;
    uVar98 = *(ushort *)(pcVar45 + uVar99) ^ uVar99;
    if (((uVar98 ^ 0xffffffff) & 0xffff) == 0) {
      local_380 = (uint *)0x0;
    }
    else {
      if ((uVar98 >> 0xf & 1) == 0) {
        return;
      }
      uVar24 = *(ushort *)(pcVar45 + uVar99) ^ (ushort)uVar99 ^ 0xffff;
      local_380 = (uint *)malloc((long)(short)uVar24 << 2);
      func_0x0016a0f0(local_380,0,(long)(short)uVar24 << 2);
      pcVar45 = *(char **)(uVar43 + 8);
      puVar8 = (uint *)(uVar43 + 0x10);
      uVar68 = (ulong)uVar24;
      if ((uVar98 & 0xffff) < 0xffec) {
        uVar74 = 0;
        if (((uint)((int)(uVar68 - 1) << 2) <= (uVar14 * uVar96 - uVar41) - 3) &&
           (uVar68 - 1 >> 0x1e == 0)) {
          uVar74 = 0;
          if ((local_380 + uVar68 <= puVar8 || (uint *)(uVar43 + 0x14U) <= local_380) &&
             ((uint *)((long)(pcVar45 + (uVar99 + 2)) + uVar68 * 4) <= local_380 ||
              local_380 + uVar68 <= pcVar45 + (uVar99 + 2))) {
            uVar41 = *puVar8;
            lVar73 = 0;
            iVar76 = 0;
            uVar74 = uVar68 & 0x7ffc;
            do {
              iVar1 = iVar76 * 4;
              iVar76 = iVar76 + 4;
              uVar61 = *(undefined8 *)((long)(pcVar45 + (uVar99 + 2 + iVar1)) + 8);
              uVar90 = *(undefined8 *)(pcVar45 + (uVar99 + 2 + iVar1));
              bVar91 = (byte)uVar41;
              bVar93 = (byte)(uVar41 >> 8);
              bVar94 = (byte)(uVar41 >> 0x10);
              bVar95 = (byte)(uVar41 >> 0x18);
              uVar96 = CONCAT13(~((byte)((ulong)uVar90 >> 0x18) ^ bVar95),
                                CONCAT12(~((byte)((ulong)uVar90 >> 0x10) ^ bVar94),
                                         CONCAT11(~((byte)((ulong)uVar90 >> 8) ^ bVar93),
                                                  ~((byte)uVar90 ^ bVar91))));
              uVar97 = CONCAT13(~((byte)((ulong)uVar61 >> 0x18) ^ bVar95),
                                CONCAT12(~((byte)((ulong)uVar61 >> 0x10) ^ bVar94),
                                         CONCAT11(~((byte)((ulong)uVar61 >> 8) ^ bVar93),
                                                  ~((byte)uVar61 ^ bVar91))));
              uVar98 = (uint)(CONCAT17(~((byte)((ulong)uVar90 >> 0x38) ^ bVar95),
                                       CONCAT16(~((byte)((ulong)uVar90 >> 0x30) ^ bVar94),
                                                CONCAT15(~((byte)((ulong)uVar90 >> 0x28) ^ bVar93),
                                                         CONCAT14(~((byte)((ulong)uVar90 >> 0x20) ^
                                                                   bVar91),uVar96)))) >> 0x20);
              uVar100 = (uint)(CONCAT17(~((byte)((ulong)uVar61 >> 0x38) ^ bVar95),
                                        CONCAT16(~((byte)((ulong)uVar61 >> 0x30) ^ bVar94),
                                                 CONCAT15(~((byte)((ulong)uVar61 >> 0x28) ^ bVar93),
                                                          CONCAT14(~((byte)((ulong)uVar61 >> 0x20) ^
                                                                    bVar91),uVar97)))) >> 0x20);
              uVar14 = 0;
              if (uVar41 != 0) {
                uVar14 = uVar96 / uVar41;
              }
              uVar101 = 0;
              if (uVar41 != 0) {
                uVar101 = uVar98 / uVar41;
              }
              uVar30 = 0;
              if (uVar41 != 0) {
                uVar30 = uVar97 / uVar41;
              }
              uVar31 = 0;
              if (uVar41 != 0) {
                uVar31 = uVar100 / uVar41;
              }
              ((undefined8 *)((long)local_380 + lVar73))[1] =
                   CONCAT44(uVar100 - uVar31 * uVar41,uVar97 - uVar30 * uVar41);
              *(undefined8 *)((long)local_380 + lVar73) =
                   CONCAT44(uVar98 - uVar101 * uVar41,uVar96 - uVar14 * uVar41);
              lVar73 = lVar73 + 0x10;
            } while (((ulong)(uVar24 >> 2) & 0x1fff) * 0x10 - lVar73 != 0);
            if (uVar74 == uVar68) goto LAB_00150990;
          }
        }
      }
      else {
        uVar74 = 0;
      }
      do {
        uVar14 = *puVar8;
        uVar41 = *(uint *)(pcVar45 + (uVar99 + 2 + (int)uVar74 * 4)) ^ uVar14 ^ 0xffffffff;
        uVar96 = 0;
        if (uVar14 != 0) {
          uVar96 = uVar41 / uVar14;
        }
        local_380[uVar74] = uVar41 - uVar96 * uVar14;
        uVar74 = uVar74 + 1;
      } while (uVar68 != uVar74);
    }
LAB_00150990:
    FUN_00149a84_XOR(&local_2b0,pcVar45,*(undefined4 *)(uVar43 + 0x10),
                     *(undefined4 *)(local_378 + (long)iVar40 * 4),iVar42);
    FUN_00149a84_XOR(&local_2e0,*(char **)(*(long *)&param_1->field_0x68 + 8),
                     *(undefined4 *)(*(long *)&param_1->field_0x68 + 0x10),local_380[iVar40],iVar42)
    ;
    ppJVar79 = param_1->env;
    local_100 = (undefined  [8])0x0;
    local_d0 = (jclass **)0x0;
    puVar46 = (undefined8 *)malloc0(0x11);
    *puVar46 = 0;
    puVar46[1] = 0;
    *(undefined *)(puVar46 + 2) = 0;
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
    *(undefined *)((long)puVar46 + 10) = 0x53;
    *(undefined *)((long)puVar46 + 0xb) = 0x74;
    *(undefined *)((long)puVar46 + 0xc) = 0x72;
    *(undefined *)((long)puVar46 + 0xd) = 0x69;
    *(undefined *)((long)puVar46 + 0xe) = 0x6e;
    *(undefined *)((long)puVar46 + 0xf) = 0x67;
    *(undefined *)(puVar46 + 2) = 0;
    local_270 = CONCAT17(*(undefined *)((long)puVar46 + 6),
                         CONCAT16(*(undefined *)((long)puVar46 + 5),
                                  CONCAT15(*(undefined *)((long)puVar46 + 4),
                                           CONCAT14(*(undefined *)((long)puVar46 + 3),
                                                    CONCAT13(*(undefined *)((long)puVar46 + 2),
                                                             CONCAT12(*(undefined *)
                                                                       ((long)puVar46 + 1),
                                                                      CONCAT11(*(undefined *)puVar46
                                                                               ,0x20)))))));
    uStack_268 = *(ulong *)((long)puVar46 + 7);
    local_260 = (char *)(CONCAT71((int7)((ulong)local_260 >> 8),*(undefined *)((long)puVar46 + 0xf))
                        & 0xffffffffffff00ff);
    free();
    pcVar45 = (char *)((ulong)&local_270 | 1);
    if ((local_270 & 1) != 0) {
      pcVar45 = local_260;
    }
    p_Var78 = (*(*ppJVar79)->FindClass)(ppJVar79,pcVar45);
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    iVar42 = _DAT_00174950;
    if (*pcVar45 != '\x01') {
      local_278 = (long *)0x0;
      if (((PTR_JNI == (JNIEnv *)0x0) || (_DAT_00174950 == 0)) ||
         (iVar40 = func_0x0016a2d0(), iVar42 != iVar40)) {
LAB_00151048:
        plVar77 = (long *)0x0;
      }
      else {
        p_Var50 = (*(*PTR_JNI)->FindClass)(PTR_JNI,(char *)&local_278);
        if ((int)p_Var50 == -2) {
          local_280 = (long *)0x0;
          local_238 = (undefined  [8])CONCAT44(local_238._4_4_,0x10006);
          local_230 = 0;
          local_228 = (undefined *)0x0;
          p_Var51 = (*(*PTR_JNI)->FromReflectedMethod)(PTR_JNI,(jobject)&local_280);
          plVar77 = local_280;
          if ((int)p_Var51 != 0) {
            plVar77 = (long *)0x0;
          }
        }
        else {
          plVar77 = local_278;
          if ((int)p_Var50 != 0) goto LAB_00151048;
        }
      }
      *pplVar43 = plVar77;
      puVar44 = (undefined *)FUN_SharedStorageGet(0x173c90);
      *puVar44 = 1;
    }
    local_220.data = (char *)0x16f558;
    local_220.length = (long)p_Var78;
    if ((local_270 & 1) != 0) {
      free(local_260);
    }
    if (local_220.length == 0) {
      iVar42 = -0x5ed07886;
    }
    else {
      iVar42 = 0x5050a87c;
    }
    pcVar45 = (char *)((ulong)pcVar53 & 0xffffffff);
    iVar42 = iVar39 + iVar42;
    local_1f0 = ppcVar7;
    goto LAB_0014fa2c;
  case 0x1e:
    lVar73 = *(long *)&param_1->field_0x68;
    uVar96 = *(uint *)(lVar73 + 0x10);
    iVar42 = *(int *)(lVar73 + 0x14);
    uVar43 = *(long *)(lVar73 + 8);
    *(int *)(lVar73 + 0x14) = iVar42 + 4;
    *(int *)(lVar73 + 0x14) = iVar42 + 0xc;
    *(uint *)(lVar73 + 0x14) = iVar42 + 0x10U;
    sVar26 = *(short *)(uVar43 + (ulong)(iVar42 + 0x10U));
    *(int *)(lVar73 + 0x14) = iVar42 + 0x12;
    *(int *)(lVar73 + 0x14) = iVar42 + 0x16;
    *(uint *)(lVar73 + 0x14) = iVar42 + 0x1aU;
    uVar41 = *(uint *)(uVar43 + (ulong)(iVar42 + 0x1aU));
    *(uint *)(lVar73 + 0x14) = iVar42 + 0x1eU;
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    uVar14 = *(uint *)(uVar43 + (ulong)(iVar42 + 0x1eU));
    *(int *)(lVar73 + 0x14) = iVar42 + 0x22;
    uVar98 = 0;
    if (uVar96 != 0) {
      uVar98 = uVar41 / uVar96;
    }
    uVar14 = uVar14 ^ uVar96 ^ 0xffffffff;
    uVar99 = 0;
    if (uVar96 != 0) {
      uVar99 = uVar14 / uVar96;
    }
    uVar41 = uVar41 - uVar98 * uVar96;
    pp_Var3 = (jstring *)
              (param_1->field91_0x70 +
              (ulong)(ushort)(*(ushort *)(uVar43 + (ulong)uVar41) ^ (ushort)uVar41 ^ 0xffff) * 0x10)
    ;
    p_Var16 = *pp_Var3;
    p_Var81 = pp_Var3[1];
    if (p_Var81 != (jstring)0x0) {
      FUN_00129110(1,p_Var81 + 8);
      uVar43 = *(long *)(*(long *)&param_1->field_0x68 + 8);
    }
    (*(*param_1->env)->ReleaseStringUTFChars)
              (param_1->env,p_Var16,*(char **)(uVar43 + (ulong)(uVar14 - uVar99 * uVar96)));
    jVar38 = (*(*param_1->env)->ExceptionCheck)(param_1->env);
    if (jVar38 == '\0') {
      if (sVar26 != 0) {
        iVar42 = 0;
        do {
          iVar42 = iVar42 + 1;
        } while (sVar26 != iVar42);
      }
    }
    else {
      (*(*param_1->env)->ExceptionClear)(param_1->env);
      if (sVar26 != 0) {
        iVar42 = 0;
        do {
          iVar42 = iVar42 + 1;
        } while (sVar26 != iVar42);
      }
    }
    goto LAB_00157478;
  case 0x21:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar98 = *(uint *)(uVar43 + 0x10);
    uVar99 = *(uint *)(uVar43 + 0x14);
    pcVar45 = *(char **)(uVar43 + 8);
    uVar41 = *(uint *)(pcVar45 + uVar99);
    *(uint *)(uVar43 + 0x14) = uVar99 + 4;
    *(uint *)(uVar43 + 0x14) = uVar99 + 8;
    *(uint *)(uVar43 + 0x14) = uVar99 + 0x10;
    *(uint *)(uVar43 + 0x14) = uVar99 + 0x14;
    *(uint *)(uVar43 + 0x14) = uVar99 + 0x16;
    *(uint *)(uVar43 + 0x14) = uVar99 + 0x1a;
    *(uint *)(uVar43 + 0x14) = uVar99 + 0x1e;
    uVar41 = uVar41 ^ uVar98 ^ 0xffffffff;
    uVar14 = *(uint *)(pcVar45 + (uVar99 + 0x1e));
    *(uint *)(uVar43 + 0x14) = uVar99 + 0x22;
    uVar96 = *(uint *)(pcVar45 + (uVar99 + 0x22));
    *(uint *)(uVar43 + 0x14) = uVar99 + 0x26;
    uVar14 = uVar14 ^ uVar98 ^ 0xffffffff;
    uVar97 = 0;
    if (uVar98 != 0) {
      uVar97 = uVar41 / uVar98;
    }
    uVar96 = uVar96 ^ uVar98 ^ 0xffffffff;
    *(uint *)(uVar43 + 0x14) = uVar99 + 0x2a;
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
  case 0x2d:
    lVar73 = *(long *)&param_1->field_0x68;
    uVar96 = *(uint *)(lVar73 + 0x10);
    iVar42 = *(int *)(lVar73 + 0x14);
    uVar43 = *(long *)(lVar73 + 8);
    *(int *)(lVar73 + 0x14) = iVar42 + 4;
    *(int *)(lVar73 + 0x14) = iVar42 + 0xc;
    *(int *)(lVar73 + 0x14) = iVar42 + 0x10;
    *(int *)(lVar73 + 0x14) = iVar42 + 0x12;
    *(int *)(lVar73 + 0x14) = iVar42 + 0x16;
    *(uint *)(lVar73 + 0x14) = iVar42 + 0x1aU;
    uVar41 = *(uint *)(uVar43 + (ulong)(iVar42 + 0x1aU));
    *(uint *)(lVar73 + 0x14) = iVar42 + 0x1eU;
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    uVar14 = *(uint *)(uVar43 + (ulong)(iVar42 + 0x1eU));
    *(uint *)(lVar73 + 0x14) = iVar42 + 0x22U;
    uVar98 = 0;
    if (uVar96 != 0) {
      uVar98 = uVar41 / uVar96;
    }
    uVar99 = *(uint *)(uVar43 + (ulong)(iVar42 + 0x22U));
    *(int *)(lVar73 + 0x14) = iVar42 + 0x26;
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
  case 0x2f:
    lVar73 = *(long *)&param_1->field_0x68;
    uVar98 = *(uint *)(lVar73 + 0x10);
    iVar42 = *(int *)(lVar73 + 0x14);
    uVar43 = *(long *)(lVar73 + 8);
    *(int *)(lVar73 + 0x14) = iVar42 + 4;
    *(int *)(lVar73 + 0x14) = iVar42 + 0xc;
    *(uint *)(lVar73 + 0x14) = iVar42 + 0x10U;
    sVar26 = *(short *)(uVar43 + (ulong)(iVar42 + 0x10U));
    *(int *)(lVar73 + 0x14) = iVar42 + 0x12;
    *(int *)(lVar73 + 0x14) = iVar42 + 0x16;
    *(uint *)(lVar73 + 0x14) = iVar42 + 0x1aU;
    uVar41 = *(uint *)(uVar43 + (ulong)(iVar42 + 0x1aU));
    *(uint *)(lVar73 + 0x14) = iVar42 + 0x1eU;
    uVar14 = *(uint *)(uVar43 + (ulong)(iVar42 + 0x1eU));
    *(uint *)(lVar73 + 0x14) = iVar42 + 0x22U;
    uVar41 = uVar41 ^ uVar98 ^ 0xffffffff;
    uVar96 = *(uint *)(uVar43 + (ulong)(iVar42 + 0x22U));
    uVar99 = 0;
    if (uVar98 != 0) {
      uVar99 = uVar41 / uVar98;
    }
    *(int *)(lVar73 + 0x14) = iVar42 + 0x26;
    uVar14 = uVar14 ^ uVar98 ^ 0xffffffff;
    lVar73 = param_1->field91_0x70;
    uVar96 = uVar96 ^ uVar98 ^ 0xffffffff;
    uVar97 = 0;
    if (uVar98 != 0) {
      uVar97 = uVar96 / uVar98;
    }
    uVar41 = *(uint *)(uVar43 + (ulong)(uVar41 - uVar99 * uVar98));
    uVar99 = 0;
    if (uVar98 != 0) {
      uVar99 = uVar14 / uVar98;
    }
    uVar96 = uVar96 - uVar97 * uVar98;
    pp_Var2 = (jobject *)
              (lVar73 + (ulong)(ushort)(*(ushort *)(uVar43 + (ulong)uVar96) ^
                                       (ushort)uVar96 ^ 0xffff) * 0x10);
    uVar14 = uVar14 - uVar99 * uVar98;
    p_Var15 = *pp_Var2;
    p_Var18 = pp_Var2[1];
    uVar24 = *(ushort *)(uVar43 + (ulong)uVar14);
    if (p_Var18 != (jobject)0x0) {
      FUN_00129110(1,p_Var18 + 8);
      lVar73 = param_1->field91_0x70;
    }
    pp_Var6 = (jobjectArray *)(lVar73 + (ulong)(ushort)(uVar24 ^ (ushort)uVar14 ^ 0xffff) * 0x10);
    p_Var17 = *pp_Var6;
    p_Var20 = pp_Var6[1];
    if (p_Var20 != (jobjectArray)0x0) {
      FUN_00129110(1,p_Var20 + 8);
    }
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pplVar43 = (long **)FUN_SharedStorageGet(0x173cb0);
    cVar37 = (**(code **)(**pplVar43 + 0xc0))(*pplVar43,p_Var17,0);
    ppJVar79 = param_1->env;
    if (cVar37 == '\0') {
      (*(*ppJVar79)->SetObjectArrayElement)(ppJVar79,p_Var17,(ulong)uVar41,p_Var15);
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
    puVar46 = (undefined8 *)malloc0(0x20);
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
    *(undefined *)((long)puVar46 + 0xb) = 0x77;
    *(undefined *)((long)puVar46 + 0xc) = 0x72;
    *(undefined *)((long)puVar46 + 0xd) = 0x69;
    *(undefined *)((long)puVar46 + 0xe) = 0x74;
    *(undefined *)((long)puVar46 + 0xf) = 0x65;
    *(undefined *)(puVar46 + 2) = 0x20;
    *(undefined *)((long)puVar46 + 0x11) = 0x74;
    *(undefined *)((long)puVar46 + 0x12) = 0x6f;
    *(undefined *)((long)puVar46 + 0x13) = 0x20;
    *(undefined *)((long)puVar46 + 0x14) = 0x6e;
    *(undefined *)((long)puVar46 + 0x15) = 0x75;
    *(undefined *)((long)puVar46 + 0x16) = 0x6c;
    *(undefined *)((long)puVar46 + 0x17) = 0x6c;
    *(undefined *)(puVar46 + 3) = 0x20;
    *(undefined *)((long)puVar46 + 0x19) = 0x61;
    *(undefined *)((long)puVar46 + 0x1a) = 0x72;
    *(undefined *)((long)puVar46 + 0x1b) = 0x72;
    *(undefined *)((long)puVar46 + 0x1c) = 0x61;
    *(undefined *)((long)puVar46 + 0x1d) = 0x79;
    *(undefined *)((long)puVar46 + 0x1e) = 0x2e;
    *(undefined *)((long)puVar46 + 0x1f) = 0;
    pcVar52 = (char *)malloc(0x20);
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
    cVar37 = *(char *)((long)puVar46 + 0x1e);
    pcVar52[0x1f] = '\0';
    pcVar52[0x1e] = cVar37;
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
      uVar43 = 4;
    }
    else {
      if (local_140[0] == (undefined8 **)0x0) goto LAB_00157884;
      uVar43 = 5;
      ppuVar67 = local_140[0];
    }
    (*(code *)(*ppuVar67)[uVar43])();
LAB_00157884:
    free(pcVar52);
    free(pcVar45);
    if (sVar26 != 0) {
      iVar42 = 0;
      do {
        iVar42 = iVar42 + 1;
      } while (sVar26 != iVar42);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x37:
    lVar73 = *(long *)&param_1->field_0x68;
    uVar14 = *(uint *)(lVar73 + 0x10);
    uVar96 = *(uint *)(lVar73 + 0x14);
    uVar43 = *(long *)(lVar73 + 8);
    uVar41 = *(uint *)(uVar43 + (ulong)uVar96);
    *(uint *)(lVar73 + 0x14) = uVar96 + 4;
    uVar41 = uVar41 ^ uVar14 ^ 0xffffffff;
    *(uint *)(lVar73 + 0x14) = uVar96 + 8;
    *(uint *)(lVar73 + 0x14) = uVar96 + 0x10;
    *(uint *)(lVar73 + 0x14) = uVar96 + 0x14;
    uVar98 = 0;
    if (uVar14 != 0) {
      uVar98 = uVar41 / uVar14;
    }
    sVar26 = *(short *)(uVar43 + (ulong)(uVar96 + 0x14));
    *(uint *)(lVar73 + 0x14) = uVar96 + 0x16;
    *(uint *)(lVar73 + 0x14) = uVar96 + 0x1a;
    *(uint *)(lVar73 + 0x14) = uVar96 + 0x1e;
    *(uint *)(lVar73 + 0x14) = uVar96 + 0x22;
    uVar99 = *(uint *)(uVar43 + (ulong)(uVar96 + 0x22));
    *(uint *)(lVar73 + 0x14) = uVar96 + 0x26;
    uVar99 = uVar99 ^ uVar14 ^ 0xffffffff;
    uVar97 = 0;
    if (uVar14 != 0) {
      uVar97 = uVar99 / uVar14;
    }
    uVar99 = uVar99 - uVar97 * uVar14;
    *(uint *)(lVar73 + 0x14) = uVar96 + 0x2a;
    *(uint *)(lVar73 + 0x14) = uVar96 + 0x2e;
    bVar91 = *(byte *)(uVar43 + (ulong)(uVar41 - uVar98 * uVar14));
    puVar46 = (undefined8 *)
              (param_1->field91_0x70 +
              (ulong)(ushort)(*(ushort *)(uVar43 + (ulong)uVar99) ^ (ushort)uVar99 ^ 0xffff) * 0x10)
    ;
    uVar90 = *puVar46;
    uVar43 = puVar46[1];
    if (uVar43 != 0) {
      FUN_00129110(1,uVar43 + 8);
    }
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pplVar43 = (long **)FUN_SharedStorageGet(0x173cb0);
    cVar37 = (**(code **)(**pplVar43 + 0xc0))(*pplVar43,uVar90,0);
    if (cVar37 == '\0') {
      if (bVar91 < 0x49) {
        if (0x43 < bVar91) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar91 == 0x42) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar91 != 0x43) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (0x52 < bVar91) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar91 == 0x49) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar91 != 0x4a) {
          return;
        }
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
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
    puVar46 = (undefined8 *)malloc0(0x20);
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
    *(undefined *)((long)puVar46 + 0xb) = 0x77;
    *(undefined *)((long)puVar46 + 0xc) = 0x72;
    *(undefined *)((long)puVar46 + 0xd) = 0x69;
    *(undefined *)((long)puVar46 + 0xe) = 0x74;
    *(undefined *)((long)puVar46 + 0xf) = 0x65;
    *(undefined *)(puVar46 + 2) = 0x20;
    *(undefined *)((long)puVar46 + 0x11) = 0x74;
    *(undefined *)((long)puVar46 + 0x12) = 0x6f;
    *(undefined *)((long)puVar46 + 0x13) = 0x20;
    *(undefined *)((long)puVar46 + 0x14) = 0x6e;
    *(undefined *)((long)puVar46 + 0x15) = 0x75;
    *(undefined *)((long)puVar46 + 0x16) = 0x6c;
    *(undefined *)((long)puVar46 + 0x17) = 0x6c;
    *(undefined *)(puVar46 + 3) = 0x20;
    *(undefined *)((long)puVar46 + 0x19) = 0x61;
    *(undefined *)((long)puVar46 + 0x1a) = 0x72;
    *(undefined *)((long)puVar46 + 0x1b) = 0x72;
    *(undefined *)((long)puVar46 + 0x1c) = 0x61;
    *(undefined *)((long)puVar46 + 0x1d) = 0x79;
    *(undefined *)((long)puVar46 + 0x1e) = 0x2e;
    *(undefined *)((long)puVar46 + 0x1f) = 0;
    pcVar52 = (char *)malloc(0x20);
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
    cVar37 = *(char *)((long)puVar46 + 0x1e);
    pcVar52[0x1f] = '\0';
    pcVar52[0x1e] = cVar37;
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
      uVar43 = 4;
    }
    else {
      if (local_140[0] == (undefined8 **)0x0) goto LAB_001576e4;
      uVar43 = 5;
      ppuVar67 = local_140[0];
    }
    (*(code *)(*ppuVar67)[uVar43])();
LAB_001576e4:
    free(pcVar52);
    free(pcVar45);
    iVar42 = (int)sVar26;
    if (iVar42 != 0) {
      iVar39 = 0;
      do {
        iVar39 = iVar39 + 1;
      } while (iVar42 != iVar39);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x38:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar96 = *(uint *)(uVar43 + 0x10);
    uVar98 = *(uint *)(uVar43 + 0x14);
    lVar73 = *(long *)(uVar43 + 8);
    uVar41 = *(uint *)(lVar73 + (ulong)uVar98);
    *(uint *)(uVar43 + 0x14) = uVar98 + 4;
    *(uint *)(uVar43 + 0x14) = uVar98 + 8;
    uVar14 = *(uint *)(lVar73 + (ulong)(uVar98 + 8));
    *(uint *)(uVar43 + 0x14) = uVar98 + 0xc;
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x10;
    uVar99 = 0;
    if (uVar96 != 0) {
      uVar99 = uVar41 / uVar96;
    }
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x18;
    uVar14 = uVar14 ^ uVar96 ^ 0xffffffff;
    uVar97 = 0;
    if (uVar96 != 0) {
      uVar97 = uVar14 / uVar96;
    }
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x1c;
    sVar26 = *(short *)(lVar73 + (ulong)(uVar98 + 0x1c));
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x1e;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x22;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x26;
    func_0x00168ad4(&local_170,uVar43,uVar14 - uVar97 * uVar96,1);
    func_0x00167db4(local_1e0,param_1->env,*(undefined8 *)&param_1->field_0x68,
                    &param_1->field91_0x70,uVar41 - uVar99 * uVar96,&local_170);
    if (local_1a0 == '\0') {
      iVar42 = (int)sVar26;
      if (iVar42 != 0) {
        iVar39 = 0;
        do {
          iVar39 = iVar39 + 1;
        } while (iVar42 != iVar39);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (local_1a8 < 0x4a) {
      if (local_1a8 < 0x44) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (local_1a8 == 0x44) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (local_1a8 == 0x46) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (local_1a8 == 0x49) {
        if ((*param_1->env)->CallStaticIntMethodA == (_func_367 *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (local_1a8 < 0x53) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (local_1a8 == 0x53) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (local_1a8 == 0x5a) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (local_1a8 == 0x56) {
        (*(*param_1->env)->CallStaticVoidMethodA)
                  (param_1->env,*pp_Stack_1d8,(jmethodID)local_1e0,(jvalue *)(pp_Stack_1d8 + 1));
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3a:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar96 = *(uint *)(uVar43 + 0x10);
    iVar42 = *(int *)(uVar43 + 0x14);
    lVar73 = *(long *)(uVar43 + 8);
    *(int *)(uVar43 + 0x14) = iVar42 + 4;
    *(int *)(uVar43 + 0x14) = iVar42 + 0xc;
    *(uint *)(uVar43 + 0x14) = iVar42 + 0x10U;
    sVar26 = *(short *)(lVar73 + (ulong)(iVar42 + 0x10U));
    *(int *)(uVar43 + 0x14) = iVar42 + 0x12;
    *(int *)(uVar43 + 0x14) = iVar42 + 0x16;
    *(uint *)(uVar43 + 0x14) = iVar42 + 0x1aU;
    uVar41 = *(uint *)(lVar73 + (ulong)(iVar42 + 0x1aU));
    *(uint *)(uVar43 + 0x14) = iVar42 + 0x1eU;
    uVar14 = *(uint *)(lVar73 + (ulong)(iVar42 + 0x1eU));
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    *(int *)(uVar43 + 0x14) = iVar42 + 0x22;
    uVar98 = 0;
    if (uVar96 != 0) {
      uVar98 = uVar41 / uVar96;
    }
    uVar14 = uVar14 ^ uVar96 ^ 0xffffffff;
    uVar99 = 0;
    if (uVar96 != 0) {
      uVar99 = uVar14 / uVar96;
    }
    cVar37 = *(char *)(lVar73 + (ulong)(uVar41 - uVar98 * uVar96));
    uVar14 = uVar14 - uVar99 * uVar96;
    uVar24 = *(ushort *)(lVar73 + (ulong)uVar14);
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    pp_Var47 = (jclass *)FUN_00149cc8(*puVar46,_DAT_001749f8,_DAT_00174a00,(int)cVar37);
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    local_158 = (long *)*puVar46;
    ppuVar67 = &local_160;
    local_160 = (undefined8 *)0x16f558;
    pp_Var62 = (jclass *)
               (param_1->field91_0x70 + (ulong)(ushort)(uVar24 ^ (ushort)uVar14 ^ 0xffff) * 0x10);
    local_170 = pp_Var47;
    local_140[0] = ppuVar67;
    FUN_0014cc28(local_1e0,(jclass **)&local_170);
    pp_Var36 = pp_Stack_1d8;
    pp_Var21 = (jclass *)local_1e0;
    pp_Var47 = (jclass *)pp_Var62[1];
    local_1e0 = (undefined  [8])*pp_Var62;
    pp_Stack_1d8 = pp_Var47;
    pp_Var62[1] = (jclass)pp_Var36;
    *pp_Var62 = (jclass)pp_Var21;
    if ((pp_Var47 != (jclass *)0x0) &&
       (uVar43 = FUN_00129140(0xffffffffffffffff,pp_Var47 + 1), uVar43 == 0)) {
      (**(code **)(*pp_Var47 + 0x10))(pp_Var47);
      FUN_00119ba4(pp_Var47);
    }
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
      uVar43 = 4;
LAB_00156dd0:
      (*(code *)(*ppuVar67)[uVar43])();
    }
    else if (local_140[0] != (undefined8 **)0x0) {
      uVar43 = 5;
      ppuVar67 = local_140[0];
      goto LAB_00156dd0;
    }
    iVar42 = (int)sVar26;
    if (iVar42 != 0) {
      iVar39 = 0;
      do {
        iVar39 = iVar39 + 1;
      } while (iVar42 != iVar39);
    }
    break;
  case 0x3b:
    lVar73 = *(long *)&param_1->field_0x68;
    uVar14 = *(uint *)(lVar73 + 0x10);
    uVar96 = *(uint *)(lVar73 + 0x14);
    uVar43 = *(long *)(lVar73 + 8);
    uVar41 = *(uint *)(uVar43 + (ulong)uVar96);
    *(uint *)(lVar73 + 0x14) = uVar96 + 4;
    *(uint *)(lVar73 + 0x14) = uVar96 + 8;
    uVar41 = uVar41 ^ uVar14 ^ 0xffffffff;
    *(uint *)(lVar73 + 0x14) = uVar96 + 0x10;
    *(uint *)(lVar73 + 0x14) = uVar96 + 0x14;
    uVar98 = 0;
    if (uVar14 != 0) {
      uVar98 = uVar41 / uVar14;
    }
    sVar26 = *(short *)(uVar43 + (ulong)(uVar96 + 0x14));
    *(uint *)(lVar73 + 0x14) = uVar96 + 0x16;
    *(uint *)(lVar73 + 0x14) = uVar96 + 0x1a;
    *(uint *)(lVar73 + 0x14) = uVar96 + 0x1e;
    uVar99 = *(uint *)(uVar43 + (ulong)(uVar96 + 0x1e));
    *(uint *)(lVar73 + 0x14) = uVar96 + 0x22;
    uVar97 = *(uint *)(uVar43 + (ulong)(uVar96 + 0x22));
    *(uint *)(lVar73 + 0x14) = uVar96 + 0x26;
    uVar99 = uVar99 ^ uVar14 ^ 0xffffffff;
    uVar97 = uVar97 ^ uVar14 ^ 0xffffffff;
    uVar96 = 0;
    if (uVar14 != 0) {
      uVar96 = uVar99 / uVar14;
    }
    uVar41 = uVar41 - uVar98 * uVar14;
    pp_Var6 = (jobjectArray *)
              (param_1->field91_0x70 +
              (ulong)(ushort)(*(ushort *)(uVar43 + (ulong)uVar41) ^ (ushort)uVar41 ^ 0xffff) * 0x10)
    ;
    uVar41 = 0;
    if (uVar14 != 0) {
      uVar41 = uVar97 / uVar14;
    }
    p_Var17 = *pp_Var6;
    p_Var20 = pp_Var6[1];
    uVar96 = *(uint *)(uVar43 + (ulong)(uVar99 - uVar96 * uVar14));
    uVar97 = uVar97 - uVar41 * uVar14;
    uVar24 = *(ushort *)(uVar43 + (ulong)uVar97);
    if (p_Var20 != (jobjectArray)0x0) {
      FUN_00129110(1,p_Var20 + 8);
    }
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pplVar43 = (long **)FUN_SharedStorageGet(0x173cb0);
    cVar37 = (**(code **)(**pplVar43 + 0xc0))(*pplVar43,p_Var17,0);
    if (cVar37 == '\0') {
      pp_Var47 = (jclass *)
                 (*(*param_1->env)->GetObjectArrayElement)(param_1->env,p_Var17,(ulong)uVar96);
      pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
      if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
      local_158 = (long *)*puVar46;
      pp_Var62 = (jclass *)
                 (param_1->field91_0x70 + (ulong)(ushort)(uVar24 ^ (ushort)uVar97 ^ 0xffff) * 0x10);
      local_160 = (undefined8 *)0x16f558;
      local_170 = pp_Var47;
      local_140[0] = &local_160;
      FUN_0014cc28(local_1e0,(jclass **)&local_170);
      pp_Var47 = (jclass *)*pp_Var62;
      pp_Var21 = (jclass *)pp_Var62[1];
      pp_Var62[1] = (jclass)pp_Stack_1d8;
      *pp_Var62 = (jclass)local_1e0;
      pp_Stack_1d8 = pp_Var21;
      if ((pp_Var21 != (jclass *)0x0) &&
         (local_1e0 = (undefined  [8])pp_Var47,
         uVar43 = FUN_00129140(0xffffffffffffffff,pp_Var21 + 1), uVar43 == 0)) {
        (**(code **)(*pp_Var21 + 0x10))(pp_Var21);
        FUN_00119ba4(pp_Var21);
      }
      local_1e0 = (undefined  [8])local_170;
      if (sVar26 != 0) {
        iVar42 = 0;
        do {
          iVar42 = iVar42 + 1;
        } while (sVar26 != iVar42);
      }
      local_170 = (jclass *)0x0;
      if (local_1e0 != (undefined  [8])0x0) {
        if (local_140[0] == (undefined8 **)0x0) {
          return;
        }
        (*(code *)(*local_140[0])[6])(local_140[0],local_1e0);
      }
      if (local_140[0] != &local_160) {
        if (local_140[0] == (undefined8 **)0x0) {
          return;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
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
    puVar46 = (undefined8 *)malloc0(0x21);
    *(undefined *)(puVar46 + 4) = 0;
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
    *(undefined *)((long)puVar46 + 0xb) = 0x72;
    *(undefined *)((long)puVar46 + 0xc) = 0x65;
    *(undefined *)((long)puVar46 + 0xd) = 0x61;
    *(undefined *)((long)puVar46 + 0xe) = 100;
    *(undefined *)((long)puVar46 + 0xf) = 0x20;
    *(undefined *)(puVar46 + 2) = 0x66;
    *(undefined *)((long)puVar46 + 0x11) = 0x72;
    *(undefined *)((long)puVar46 + 0x12) = 0x6f;
    *(undefined *)((long)puVar46 + 0x13) = 0x6d;
    *(undefined *)((long)puVar46 + 0x14) = 0x20;
    *(undefined *)((long)puVar46 + 0x15) = 0x6e;
    *(undefined *)((long)puVar46 + 0x16) = 0x75;
    *(undefined *)((long)puVar46 + 0x17) = 0x6c;
    *(undefined *)(puVar46 + 3) = 0x6c;
    *(undefined *)((long)puVar46 + 0x19) = 0x20;
    *(undefined *)((long)puVar46 + 0x1a) = 0x61;
    *(undefined *)((long)puVar46 + 0x1b) = 0x72;
    *(undefined *)((long)puVar46 + 0x1c) = 0x72;
    *(undefined *)((long)puVar46 + 0x1d) = 0x61;
    *(undefined *)((long)puVar46 + 0x1e) = 0x79;
    *(undefined *)((long)puVar46 + 0x1f) = 0x2e;
    *(undefined *)(puVar46 + 4) = 0;
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
    cVar37 = *(char *)((long)puVar46 + 0x1f);
    pcVar52[0x20] = '\0';
    pcVar52[0x1f] = cVar37;
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
      uVar43 = 4;
    }
    else {
      if (local_140[0] == (undefined8 **)0x0) goto LAB_00157910;
      uVar43 = 5;
      ppuVar67 = local_140[0];
    }
    (*(code *)(*ppuVar67)[uVar43])();
LAB_00157910:
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
  case 0x44:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar96 = *(uint *)(uVar43 + 0x10);
    iVar42 = *(int *)(uVar43 + 0x14);
    lVar73 = *(long *)(uVar43 + 8);
    *(int *)(uVar43 + 0x14) = iVar42 + 4;
    *(int *)(uVar43 + 0x14) = iVar42 + 0xc;
    *(uint *)(uVar43 + 0x14) = iVar42 + 0x10U;
    sVar26 = *(short *)(lVar73 + (ulong)(iVar42 + 0x10U));
    *(int *)(uVar43 + 0x14) = iVar42 + 0x12;
    *(int *)(uVar43 + 0x14) = iVar42 + 0x16;
    *(uint *)(uVar43 + 0x14) = iVar42 + 0x1aU;
    uVar41 = *(uint *)(lVar73 + (ulong)(iVar42 + 0x1aU));
    *(uint *)(uVar43 + 0x14) = iVar42 + 0x1eU;
    uVar14 = *(uint *)(lVar73 + (ulong)(iVar42 + 0x1eU));
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    *(int *)(uVar43 + 0x14) = iVar42 + 0x22;
    uVar98 = 0;
    if (uVar96 != 0) {
      uVar98 = uVar41 / uVar96;
    }
    uVar14 = uVar14 ^ uVar96 ^ 0xffffffff;
    uVar99 = 0;
    if (uVar96 != 0) {
      uVar99 = uVar14 / uVar96;
    }
    uVar41 = uVar41 - uVar98 * uVar96;
    uVar24 = *(ushort *)(lVar73 + (ulong)uVar41);
    uVar92 = *(undefined4 *)(lVar73 + (ulong)(uVar14 - uVar99 * uVar96));
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    pp_Var47 = (jclass *)FUN_00149cc8(*puVar46,_DAT_00174a08,_DAT_001749a0,uVar92);
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    local_158 = (long *)*puVar46;
    ppuVar67 = &local_160;
    local_160 = (undefined8 *)0x16f558;
    pp_Var62 = (jclass *)
               (param_1->field91_0x70 + (ulong)(ushort)(uVar24 ^ (ushort)uVar41 ^ 0xffff) * 0x10);
    local_170 = pp_Var47;
    local_140[0] = ppuVar67;
    FUN_0014cc28(local_1e0,(jclass **)&local_170);
    pp_Var36 = pp_Stack_1d8;
    pp_Var21 = (jclass *)local_1e0;
    pp_Var47 = (jclass *)pp_Var62[1];
    local_1e0 = (undefined  [8])*pp_Var62;
    pp_Stack_1d8 = pp_Var47;
    pp_Var62[1] = (jclass)pp_Var36;
    *pp_Var62 = (jclass)pp_Var21;
    if ((pp_Var47 != (jclass *)0x0) &&
       (uVar43 = FUN_00129140(0xffffffffffffffff,pp_Var47 + 1), uVar43 == 0)) {
      (**(code **)(*pp_Var47 + 0x10))(pp_Var47);
      FUN_00119ba4(pp_Var47);
    }
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
      uVar43 = 4;
LAB_00156e4c:
      (*(code *)(*ppuVar67)[uVar43])();
    }
    else if (local_140[0] != (undefined8 **)0x0) {
      uVar43 = 5;
      ppuVar67 = local_140[0];
      goto LAB_00156e4c;
    }
    iVar42 = (int)sVar26;
    if (iVar42 != 0) {
      iVar39 = 0;
      do {
        iVar39 = iVar39 + 1;
      } while (iVar42 != iVar39);
    }
    break;
  case 0x4b:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar14 = *(uint *)(uVar43 + 0x10);
    uVar96 = *(uint *)(uVar43 + 0x14);
    pcVar45 = *(char **)(uVar43 + 8);
    uVar41 = *(uint *)(pcVar45 + uVar96);
    *(uint *)(uVar43 + 0x14) = uVar96 + 4;
    *(uint *)(uVar43 + 0x14) = uVar96 + 8;
    uVar41 = uVar41 ^ uVar14 ^ 0xffffffff;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x10;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x14;
    uVar98 = 0;
    if (uVar14 != 0) {
      uVar98 = uVar41 / uVar14;
    }
    sVar26 = *(short *)(pcVar45 + (uVar96 + 0x14));
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x16;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x1a;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x1e;
    uVar99 = *(uint *)(pcVar45 + (uVar96 + 0x1e));
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x22;
    uVar97 = *(uint *)(pcVar45 + (uVar96 + 0x22));
    uVar99 = uVar99 ^ uVar14 ^ 0xffffffff;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x26;
    uVar96 = 0;
    if (uVar14 != 0) {
      uVar96 = uVar99 / uVar14;
    }
    uVar41 = uVar41 - uVar98 * uVar14;
    uVar97 = uVar97 ^ uVar14 ^ 0xffffffff;
    uVar24 = *(ushort *)(pcVar45 + uVar41);
    uVar98 = 0;
    if (uVar14 != 0) {
      uVar98 = uVar97 / uVar14;
    }
    FUN_00149a84_XOR((astruct_3 *)local_1e0,pcVar45,uVar14,uVar97 - uVar98 * uVar14,
                     uVar99 - uVar96 * uVar14);
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pplVar42 = (JNIEnv *)FUN_SharedStorageGet(0x173cb0);
    pp_Var47 = (jclass *)((ulong)local_1e0 | 1);
    if (((ulong)local_1e0 & 1) != 0) {
      pp_Var47 = local_1d0;
    }
    pp_Var47 = (jclass *)(**(code **)((long)(*pplVar42)->reserved0 + 0x538))(*pplVar42,pp_Var47);
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    local_158 = (long *)*puVar46;
    ppuVar67 = &local_160;
    local_160 = (undefined8 *)0x16f558;
    pp_Var2 = (jobject *)
              (param_1->field91_0x70 + (ulong)(ushort)(uVar24 ^ (ushort)uVar41 ^ 0xffff) * 0x10);
    local_170 = pp_Var47;
    local_140[0] = ppuVar67;
    FUN_0014cc28(local_c0,(jclass **)&local_170);
    plVar88 = plStack_b8;
    pp_Var47 = (jclass *)local_c0;
    plVar77 = (long *)pp_Var2[1];
    local_c0 = (undefined  [8])*pp_Var2;
    plStack_b8 = plVar77;
    pp_Var2[1] = (jobject)plVar88;
    *pp_Var2 = (jobject)pp_Var47;
    if ((plVar77 != (long *)0x0) &&
       (uVar43 = FUN_00129140(0xffffffffffffffff,plVar77 + 1), uVar43 == 0)) {
      (**(code **)(*plVar77 + 0x10))(plVar77);
      FUN_00119ba4(plVar77);
    }
    pp_Var47 = local_170;
    local_170 = (jclass *)0x0;
    if (pp_Var47 != (jclass *)0x0) {
      local_c0 = (undefined  [8])pp_Var47;
      if (local_140[0] == (undefined8 **)0x0) {
        return;
      }
      (*(code *)(*local_140[0])[6])(local_140[0],local_c0);
    }
    if (local_140[0] == ppuVar67) {
      uVar43 = 4;
    }
    else {
      if (local_140[0] == (undefined8 **)0x0) goto LAB_00156958;
      uVar43 = 5;
      ppuVar67 = local_140[0];
    }
    (*(code *)(*ppuVar67)[uVar43])();
LAB_00156958:
    if (sVar26 != 0) {
      iVar42 = 0;
      do {
        iVar42 = iVar42 + 1;
      } while (sVar26 != iVar42);
    }
    if ((local_1e0[0] & 1) != 0) {
      free(local_1d0);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4d:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar14 = *(uint *)(uVar43 + 0x10);
    uVar96 = *(uint *)(uVar43 + 0x14);
    pcVar45 = *(char **)(uVar43 + 8);
    uVar41 = *(uint *)(pcVar45 + uVar96);
    *(uint *)(uVar43 + 0x14) = uVar96 + 4;
    *(uint *)(uVar43 + 0x14) = uVar96 + 8;
    uVar41 = uVar41 ^ uVar14 ^ 0xffffffff;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x10;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x14;
    sVar26 = *(short *)(pcVar45 + (uVar96 + 0x14));
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x16;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x1a;
    uVar98 = 0;
    if (uVar14 != 0) {
      uVar98 = uVar41 / uVar14;
    }
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x1e;
    uVar99 = *(uint *)(pcVar45 + (uVar96 + 0x1e));
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x22;
    uVar97 = *(uint *)(pcVar45 + (uVar96 + 0x22));
    uVar99 = uVar99 ^ uVar14 ^ 0xffffffff;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x26;
    uVar97 = uVar97 ^ uVar14 ^ 0xffffffff;
    uVar96 = 0;
    if (uVar14 != 0) {
      uVar96 = uVar99 / uVar14;
    }
    uVar41 = uVar41 - uVar98 * uVar14;
    uVar24 = *(ushort *)(pcVar45 + uVar41);
    uVar98 = 0;
    if (uVar14 != 0) {
      uVar98 = uVar97 / uVar14;
    }
    FUN_00149a84_XOR((astruct_3 *)local_1e0,pcVar45,uVar14,uVar97 - uVar98 * uVar14,
                     uVar99 - uVar96 * uVar14);
    pp_Var47 = (jclass *)((ulong)local_1e0 | 1);
    if (((ulong)local_1e0 & 1) != 0) {
      pp_Var47 = local_1d0;
    }
    pp_Var47 = (jclass *)(*(*param_1->env)->FindClass)(param_1->env,(char *)pp_Var47);
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    local_158 = (long *)*puVar46;
    ppuVar67 = &local_160;
    local_160 = (undefined8 *)0x16f558;
    pp_Var2 = (jobject *)
              (param_1->field91_0x70 + (ulong)(ushort)(uVar24 ^ (ushort)uVar41 ^ 0xffff) * 0x10);
    local_170 = pp_Var47;
    local_140[0] = ppuVar67;
    FUN_0014cc28(local_c0,(jclass **)&local_170);
    plVar88 = plStack_b8;
    pp_Var47 = (jclass *)local_c0;
    plVar77 = (long *)pp_Var2[1];
    local_c0 = (undefined  [8])*pp_Var2;
    plStack_b8 = plVar77;
    pp_Var2[1] = (jobject)plVar88;
    *pp_Var2 = (jobject)pp_Var47;
    if ((plVar77 != (long *)0x0) &&
       (uVar43 = FUN_00129140(0xffffffffffffffff,plVar77 + 1), uVar43 == 0)) {
      (**(code **)(*plVar77 + 0x10))(plVar77);
      FUN_00119ba4(plVar77);
    }
    pp_Var47 = local_170;
    if (sVar26 != 0) {
      iVar42 = 0;
      do {
        iVar42 = iVar42 + 1;
      } while (sVar26 != iVar42);
    }
    local_170 = (jclass *)0x0;
    if (pp_Var47 != (jclass *)0x0) {
      local_c0 = (undefined  [8])pp_Var47;
      if (local_140[0] == (undefined8 **)0x0) {
        return;
      }
      (*(code *)(*local_140[0])[6])(local_140[0],local_c0);
    }
    if (local_140[0] == ppuVar67) {
      uVar43 = 4;
    }
    else {
      if (local_140[0] == (undefined8 **)0x0) goto LAB_00156c24;
      uVar43 = 5;
      ppuVar67 = local_140[0];
    }
    (*(code *)(*ppuVar67)[uVar43])();
LAB_00156c24:
    if ((local_1e0[0] & 1) == 0) {
      return;
    }
    free(local_1d0);
    return;
  case 0x4f:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar96 = *(uint *)(uVar43 + 0x10);
    uVar98 = *(uint *)(uVar43 + 0x14);
    lVar73 = *(long *)(uVar43 + 8);
    uVar41 = *(uint *)(lVar73 + (ulong)uVar98);
    *(uint *)(uVar43 + 0x14) = uVar98 + 4;
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    uVar14 = *(uint *)(lVar73 + (ulong)(uVar98 + 4));
    *(uint *)(uVar43 + 0x14) = uVar98 + 8;
    uVar99 = 0;
    if (uVar96 != 0) {
      uVar99 = uVar41 / uVar96;
    }
    *(uint *)(uVar43 + 0x14) = uVar98 + 0xc;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x14;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x18;
    sVar26 = *(short *)(lVar73 + (ulong)(uVar98 + 0x18));
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x1a;
    uVar41 = uVar41 - uVar99 * uVar96;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x1e;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x22;
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
    if (cVar37 == '\0') {
      uVar14 = uVar14 ^ uVar96 ^ 0xffffffff;
      uVar41 = 0;
      if (uVar96 != 0) {
        uVar41 = uVar14 / uVar96;
      }
      uVar43 = *(long *)&param_1->field_0x68;
      jVar56 = (*(*param_1->env)->MonitorEnter)(param_1->env,p_Var15);
      *(int *)(*(long *)(uVar43 + 8) + (ulong)(uVar14 - uVar41 * uVar96)) = (int)jVar56;
      if (sVar26 != 0) {
        iVar42 = 0;
        do {
          iVar42 = iVar42 + 1;
        } while (sVar26 != iVar42);
      }
    }
    else {
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
      *(undefined *)((long)puVar46 + 0xb) = 0x4d;
      *(undefined *)((long)puVar46 + 0xc) = 0x6f;
      *(undefined *)((long)puVar46 + 0xd) = 0x6e;
      *(undefined *)((long)puVar46 + 0xe) = 0x69;
      *(undefined *)((long)puVar46 + 0xf) = 0x74;
      *(undefined *)(puVar46 + 2) = 0x6f;
      *(undefined *)((long)puVar46 + 0x11) = 0x72;
      *(undefined *)((long)puVar46 + 0x12) = 0x45;
      *(undefined *)((long)puVar46 + 0x13) = 0x6e;
      *(undefined *)((long)puVar46 + 0x14) = 0x74;
      *(undefined *)((long)puVar46 + 0x15) = 0x65;
      *(undefined *)((long)puVar46 + 0x16) = 0x72;
      *(undefined *)((long)puVar46 + 0x17) = 0x20;
      *(undefined *)(puVar46 + 3) = 0x6e;
      *(undefined *)((long)puVar46 + 0x19) = 0x75;
      *(undefined *)((long)puVar46 + 0x1a) = 0x6c;
      *(undefined *)((long)puVar46 + 0x1b) = 0x6c;
      *(undefined *)((long)puVar46 + 0x1c) = 0x20;
      *(undefined *)((long)puVar46 + 0x1d) = 0x6f;
      *(undefined *)((long)puVar46 + 0x1e) = 0x62;
      *(undefined *)((long)puVar46 + 0x1f) = 0x6a;
      *(undefined *)(puVar46 + 4) = 0x65;
      *(undefined *)((long)puVar46 + 0x21) = 99;
      *(undefined *)((long)puVar46 + 0x22) = 0x74;
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
      pplVar43 = (long **)FUN_SharedStorageGet(0x173cb0);
      local_158 = *pplVar43;
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
        uVar43 = 4;
LAB_001579a0:
        (*(code *)(*ppuVar67)[uVar43])();
      }
      else if (local_140[0] != (undefined8 **)0x0) {
        uVar43 = 5;
        ppuVar67 = local_140[0];
        goto LAB_001579a0;
      }
      free(pcVar52);
      free(pcVar45);
      if (sVar26 != 0) {
        iVar42 = 0;
        do {
          iVar42 = iVar42 + 1;
        } while (sVar26 != iVar42);
      }
    }
    goto LAB_00157a20;
  case 0x50:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar96 = *(uint *)(uVar43 + 0x10);
    uVar98 = *(uint *)(uVar43 + 0x14);
    lVar73 = *(long *)(uVar43 + 8);
    uVar41 = *(uint *)(lVar73 + (ulong)uVar98);
    *(uint *)(uVar43 + 0x14) = uVar98 + 4;
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    uVar14 = *(uint *)(lVar73 + (ulong)(uVar98 + 4));
    *(uint *)(uVar43 + 0x14) = uVar98 + 8;
    uVar99 = 0;
    if (uVar96 != 0) {
      uVar99 = uVar41 / uVar96;
    }
    *(uint *)(uVar43 + 0x14) = uVar98 + 0xc;
    uVar14 = uVar14 ^ uVar96 ^ 0xffffffff;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x14;
    uVar97 = 0;
    if (uVar96 != 0) {
      uVar97 = uVar14 / uVar96;
    }
    uVar41 = uVar41 - uVar99 * uVar96;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x18;
    sVar26 = *(short *)(lVar73 + (ulong)(uVar98 + 0x18));
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x1a;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x1e;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x22;
    uVar90 = *(undefined8 *)(lVar73 + (ulong)(uVar14 - uVar97 * uVar96));
    uVar24 = *(ushort *)(lVar73 + (ulong)uVar41);
    pp_Var47 = (jclass *)func_0x0016a1a0(uVar90);
    if ((jclass *)0xffffffffffffffef < pp_Var47) {
      return;
    }
    if (pp_Var47 < (jclass *)0x17) {
      pp_Var62 = (jclass *)((ulong)local_1e0 | 1);
      local_1e0 = (undefined  [8])CONCAT71(local_1e0._1_7_,(char)((int)pp_Var47 << 1));
      if (pp_Var47 != (jclass *)0x0) goto LAB_00155cb0;
    }
    else {
      pp_Var62 = (jclass *)malloc(((ulong)pp_Var47 | 0xf) + 1);
      local_1e0 = (undefined  [8])(((ulong)pp_Var47 | 0xf) + 2);
      pp_Stack_1d8 = pp_Var47;
      local_1d0 = pp_Var62;
LAB_00155cb0:
      func_0x0016a0c0(pp_Var62,uVar90,pp_Var47);
    }
    *(_jobject *)((long)pp_Var62 + (long)pp_Var47) = (_jobject)0x0;
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pplVar43 = (long **)FUN_SharedStorageGet(0x173cb0);
    pp_Var47 = (jclass *)((ulong)local_1e0 | 1);
    if (((ulong)local_1e0 & 1) != 0) {
      pp_Var47 = local_1d0;
    }
    pp_Var47 = (jclass *)(**(code **)(**pplVar43 + 0x538))(*pplVar43,pp_Var47);
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    local_158 = (long *)*puVar46;
    ppuVar67 = &local_160;
    local_160 = (undefined8 *)0x16f558;
    pp_Var2 = (jobject *)
              (param_1->field91_0x70 + (ulong)(ushort)(uVar24 ^ (ushort)uVar41 ^ 0xffff) * 0x10);
    local_170 = pp_Var47;
    local_140[0] = ppuVar67;
    FUN_0014cc28(local_c0,(jclass **)&local_170);
    plVar88 = plStack_b8;
    pp_Var47 = (jclass *)local_c0;
    plVar77 = (long *)pp_Var2[1];
    local_c0 = (undefined  [8])*pp_Var2;
    plStack_b8 = plVar77;
    pp_Var2[1] = (jobject)plVar88;
    *pp_Var2 = (jobject)pp_Var47;
    if ((plVar77 != (long *)0x0) &&
       (uVar43 = FUN_00129140(0xffffffffffffffff,plVar77 + 1), uVar43 == 0)) {
      (**(code **)(*plVar77 + 0x10))(plVar77);
      FUN_00119ba4(plVar77);
    }
    pp_Var47 = local_170;
    local_170 = (jclass *)0x0;
    if (pp_Var47 != (jclass *)0x0) {
      local_c0 = (undefined  [8])pp_Var47;
      if (local_140[0] == (undefined8 **)0x0) {
        return;
      }
      (*(code *)(*local_140[0])[6])(local_140[0],local_c0);
    }
    if (local_140[0] == ppuVar67) {
      uVar43 = 4;
LAB_0015707c:
      (*(code *)(*ppuVar67)[uVar43])();
    }
    else if (local_140[0] != (undefined8 **)0x0) {
      uVar43 = 5;
      ppuVar67 = local_140[0];
      goto LAB_0015707c;
    }
    if (((ulong)local_1e0 & 1) != 0) {
      free(local_1d0);
    }
    iVar42 = (int)sVar26;
    if (iVar42 != 0) {
      iVar39 = 0;
      do {
        iVar39 = iVar39 + 1;
      } while (iVar42 != iVar39);
    }
    break;
  case 0x57:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar14 = *(uint *)(uVar43 + 0x10);
    uVar96 = *(uint *)(uVar43 + 0x14);
    lVar73 = *(long *)(uVar43 + 8);
    uVar41 = *(uint *)(lVar73 + (ulong)uVar96);
    *(uint *)(uVar43 + 0x14) = uVar96 + 4;
    *(uint *)(uVar43 + 0x14) = uVar96 + 8;
    uVar41 = uVar41 ^ uVar14 ^ 0xffffffff;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x10;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x14;
    sVar26 = *(short *)(lVar73 + (ulong)(uVar96 + 0x14));
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x16;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x1a;
    uVar98 = 0;
    if (uVar14 != 0) {
      uVar98 = uVar41 / uVar14;
    }
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x1e;
    uVar99 = *(uint *)(lVar73 + (ulong)(uVar96 + 0x1e));
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x22;
    uVar99 = uVar99 ^ uVar14 ^ 0xffffffff;
    uVar96 = 0;
    if (uVar14 != 0) {
      uVar96 = uVar99 / uVar14;
    }
    uVar99 = uVar99 - uVar96 * uVar14;
    puVar46 = (undefined8 *)
              (param_1->field91_0x70 +
              (ulong)(ushort)(*(ushort *)(lVar73 + (ulong)uVar99) ^ (ushort)uVar99 ^ 0xffff) * 0x10)
    ;
    uVar90 = *puVar46;
    plVar77 = (long *)puVar46[1];
    if (plVar77 != (long *)0x0) {
      FUN_00129110(1,plVar77 + 1);
    }
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pplVar43 = (long **)FUN_SharedStorageGet(0x173cb0);
    cVar37 = (**(code **)(**pplVar43 + 0xc0))(*pplVar43,uVar90,0);
    *(uint *)(*(long *)(*(long *)&param_1->field_0x68 + 8) + (ulong)(uVar41 - uVar98 * uVar14)) =
         (uint)(cVar37 != '\0');
    iVar42 = (int)sVar26;
    if (iVar42 != 0) {
      iVar39 = 0;
      do {
        iVar39 = iVar39 + 1;
      } while (iVar42 != iVar39);
    }
    if ((plVar77 != (long *)0x0) &&
       (uVar43 = FUN_00129140(0xffffffffffffffff,plVar77 + 1), uVar43 == 0)) {
      (**(code **)(*plVar77 + 0x10))(plVar77);
      FUN_00119ba4(plVar77);
    }
    break;
  case 0x59:
    lVar73 = *(long *)&param_1->field_0x68;
    uVar14 = *(uint *)(lVar73 + 0x10);
    iVar42 = *(int *)(lVar73 + 0x14);
    uVar43 = *(long *)(lVar73 + 8);
    *(uint *)(lVar73 + 0x14) = iVar42 + 4U;
    uVar41 = *(uint *)(uVar43 + (ulong)(iVar42 + 4U));
    *(int *)(lVar73 + 0x14) = iVar42 + 8;
    *(int *)(lVar73 + 0x14) = iVar42 + 0xc;
    *(int *)(lVar73 + 0x14) = iVar42 + 0x10;
    uVar41 = uVar41 ^ uVar14 ^ 0xffffffff;
    *(int *)(lVar73 + 0x14) = iVar42 + 0x18;
    *(uint *)(lVar73 + 0x14) = iVar42 + 0x1cU;
    sVar26 = *(short *)(uVar43 + (ulong)(iVar42 + 0x1cU));
    *(int *)(lVar73 + 0x14) = iVar42 + 0x1e;
    *(int *)(lVar73 + 0x14) = iVar42 + 0x22;
    uVar96 = 0;
    if (uVar14 != 0) {
      uVar96 = uVar41 / uVar14;
    }
    *(int *)(lVar73 + 0x14) = iVar42 + 0x26;
    *(uint *)(lVar73 + 0x14) = iVar42 + 0x2aU;
    uVar98 = *(uint *)(uVar43 + (ulong)(iVar42 + 0x2aU));
    *(int *)(lVar73 + 0x14) = iVar42 + 0x2e;
    uVar98 = uVar98 ^ uVar14 ^ 0xffffffff;
    uVar99 = 0;
    if (uVar14 != 0) {
      uVar99 = uVar98 / uVar14;
    }
    bVar91 = *(byte *)(uVar43 + (ulong)(uVar41 - uVar96 * uVar14));
    uVar98 = uVar98 - uVar99 * uVar14;
    puVar46 = (undefined8 *)
              (param_1->field91_0x70 +
              (ulong)(ushort)(*(ushort *)(uVar43 + (ulong)uVar98) ^ (ushort)uVar98 ^ 0xffff) * 0x10)
    ;
    uVar90 = *puVar46;
    uVar43 = puVar46[1];
    if (uVar43 != 0) {
      FUN_00129110(1,uVar43 + 8);
    }
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pplVar43 = (long **)FUN_SharedStorageGet(0x173cb0);
    cVar37 = (**(code **)(**pplVar43 + 0xc0))(*pplVar43,uVar90,0);
    if (cVar37 == '\0') {
      if (bVar91 < 0x49) {
        if (0x43 < bVar91) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar91 == 0x42) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar91 != 0x43) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (0x52 < bVar91) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar91 == 0x49) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar91 != 0x4a) {
          return;
        }
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
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
    puVar46 = (undefined8 *)malloc0(0x21);
    *(undefined *)(puVar46 + 4) = 0;
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
    *(undefined *)((long)puVar46 + 0xb) = 0x72;
    *(undefined *)((long)puVar46 + 0xc) = 0x65;
    *(undefined *)((long)puVar46 + 0xd) = 0x61;
    *(undefined *)((long)puVar46 + 0xe) = 100;
    *(undefined *)((long)puVar46 + 0xf) = 0x20;
    *(undefined *)(puVar46 + 2) = 0x66;
    *(undefined *)((long)puVar46 + 0x11) = 0x72;
    *(undefined *)((long)puVar46 + 0x12) = 0x6f;
    *(undefined *)((long)puVar46 + 0x13) = 0x6d;
    *(undefined *)((long)puVar46 + 0x14) = 0x20;
    *(undefined *)((long)puVar46 + 0x15) = 0x6e;
    *(undefined *)((long)puVar46 + 0x16) = 0x75;
    *(undefined *)((long)puVar46 + 0x17) = 0x6c;
    *(undefined *)(puVar46 + 3) = 0x6c;
    *(undefined *)((long)puVar46 + 0x19) = 0x20;
    *(undefined *)((long)puVar46 + 0x1a) = 0x61;
    *(undefined *)((long)puVar46 + 0x1b) = 0x72;
    *(undefined *)((long)puVar46 + 0x1c) = 0x72;
    *(undefined *)((long)puVar46 + 0x1d) = 0x61;
    *(undefined *)((long)puVar46 + 0x1e) = 0x79;
    *(undefined *)((long)puVar46 + 0x1f) = 0x2e;
    *(undefined *)(puVar46 + 4) = 0;
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
    cVar37 = *(char *)((long)puVar46 + 0x1f);
    pcVar52[0x20] = '\0';
    pcVar52[0x1f] = cVar37;
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
      uVar43 = 4;
    }
    else {
      if (local_140[0] == (undefined8 **)0x0) goto LAB_00157764;
      uVar43 = 5;
      ppuVar67 = local_140[0];
    }
    (*(code *)(*ppuVar67)[uVar43])();
LAB_00157764:
    free(pcVar52);
    free(pcVar45);
    iVar42 = (int)sVar26;
    if (iVar42 != 0) {
      iVar39 = 0;
      do {
        iVar39 = iVar39 + 1;
      } while (iVar42 != iVar39);
      return;
    }
    return;
  case 0x5b:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar14 = *(uint *)(uVar43 + 0x10);
    uVar96 = *(uint *)(uVar43 + 0x14);
    lVar73 = *(long *)(uVar43 + 8);
    uVar41 = *(uint *)(lVar73 + (ulong)uVar96);
    *(uint *)(uVar43 + 0x14) = uVar96 + 4;
    *(uint *)(uVar43 + 0x14) = uVar96 + 8;
    uVar41 = uVar41 ^ uVar14 ^ 0xffffffff;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x10;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x14;
    uVar98 = 0;
    if (uVar14 != 0) {
      uVar98 = uVar41 / uVar14;
    }
    sVar26 = *(short *)(lVar73 + (ulong)(uVar96 + 0x14));
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x16;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x1a;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x1e;
    uVar99 = *(uint *)(lVar73 + (ulong)(uVar96 + 0x1e));
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x22;
    uVar99 = uVar99 ^ uVar14 ^ 0xffffffff;
    uVar96 = 0;
    if (uVar14 != 0) {
      uVar96 = uVar99 / uVar14;
    }
    sVar27 = *(short *)(lVar73 + (ulong)(uVar41 - uVar98 * uVar14));
    uVar99 = uVar99 - uVar96 * uVar14;
    uVar24 = *(ushort *)(lVar73 + (ulong)uVar99);
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    pp_Var47 = (jclass *)FUN_00149cc8(*puVar46,_DAT_001749c0,_DAT_001749f0,(int)sVar27);
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    local_158 = (long *)*puVar46;
    ppuVar67 = &local_160;
    local_160 = (undefined8 *)0x16f558;
    pp_Var62 = (jclass *)
               (param_1->field91_0x70 + (ulong)(ushort)(uVar24 ^ (ushort)uVar99 ^ 0xffff) * 0x10);
    local_170 = pp_Var47;
    local_140[0] = ppuVar67;
    FUN_0014cc28(local_1e0,(jclass **)&local_170);
    pp_Var36 = pp_Stack_1d8;
    pp_Var21 = (jclass *)local_1e0;
    pp_Var47 = (jclass *)pp_Var62[1];
    local_1e0 = (undefined  [8])*pp_Var62;
    pp_Stack_1d8 = pp_Var47;
    pp_Var62[1] = (jclass)pp_Var36;
    *pp_Var62 = (jclass)pp_Var21;
    if ((pp_Var47 != (jclass *)0x0) &&
       (uVar43 = FUN_00129140(0xffffffffffffffff,pp_Var47 + 1), uVar43 == 0)) {
      (**(code **)(*pp_Var47 + 0x10))(pp_Var47);
      FUN_00119ba4(pp_Var47);
    }
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
      uVar43 = 4;
LAB_00156d54:
      (*(code *)(*ppuVar67)[uVar43])();
    }
    else if (local_140[0] != (undefined8 **)0x0) {
      uVar43 = 5;
      ppuVar67 = local_140[0];
      goto LAB_00156d54;
    }
    iVar42 = (int)sVar26;
    if (iVar42 != 0) {
      iVar39 = 0;
      do {
        iVar39 = iVar39 + 1;
      } while (iVar42 != iVar39);
    }
    break;
  case 0x5d:
    pvVar86 = *(vm_t **)&param_1->field_0x68;
    ppJVar79 = pvVar86->env;
    plVar88 = (long *)&pvVar86->field_0x14;
    iVar42 = *(int *)plVar88;
    puVar44 = &pvVar86->field_0x10;
    uVar14 = *(uint *)puVar44;
    *(int *)plVar88 = iVar42 + 4;
    *(int *)plVar88 = iVar42 + 0xc;
    *(int *)plVar88 = iVar42 + 0x10;
    *(int *)plVar88 = iVar42 + 0x12;
    *(int *)plVar88 = iVar42 + 0x16;
    *(int *)plVar88 = iVar42 + 0x1a;
    *(uint *)plVar88 = iVar42 + 0x1eU;
    uVar96 = ~(*(uint *)((long)ppJVar79 + (ulong)(iVar42 + 0x1eU)) ^ uVar14);
    *(uint *)plVar88 = iVar42 + 0x26U;
    uVar41 = *(uint *)((long)ppJVar79 + (ulong)(iVar42 + 0x26U));
    *(int *)plVar88 = iVar42 + 0x2a;
    uVar41 = uVar41 ^ uVar14 ^ 0xffffffff;
    uVar98 = 0;
    if (uVar14 != 0) {
      uVar98 = uVar96 / uVar14;
    }
    uVar99 = 0;
    if (uVar14 != 0) {
      uVar99 = uVar41 / uVar14;
    }
    uVar100 = uVar96 - uVar98 * uVar14;
    uVar97 = *(ushort *)((long)ppJVar79 + (ulong)uVar100) ^ uVar100;
    uVar43 = *(long *)((long)ppJVar79 + (ulong)(uVar41 - uVar99 * uVar14));
    if (((uVar97 ^ 0xffffffff) & 0xffff) == 0) {
      puVar44 = (undefined *)0x0;
      puVar46 = (undefined8 *)0x0;
      goto LAB_0015610c;
    }
    if ((uVar97 >> 0xf & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar24 = *(ushort *)((long)ppJVar79 + (ulong)uVar100) ^ (ushort)uVar100 ^ 0xffff;
    lVar73 = (long)(short)uVar24 * 4;
    puVar46 = (undefined8 *)malloc(lVar73);
    func_0x0016a0f0(puVar46,0,lVar73);
    ppJVar79 = pvVar86->env;
    uVar68 = (ulong)uVar24;
    if ((uVar97 & 0xffff) < 0xffec) {
      uVar74 = 0;
      if ((uVar98 * uVar14 - uVar96) - 3 < (uint)((int)(uVar68 - 1) << 2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (uVar68 - 1 >> 0x1e != 0) goto LAB_0014eb84;
      puVar10 = (undefined *)((long)ppJVar79 + (ulong)(uVar100 + 2));
      puVar11 = (undefined *)((long)puVar46 + uVar68 * 4);
      uVar74 = 0;
      if ((puVar44 < puVar11 && puVar46 < plVar88) ||
         (puVar46 < puVar10 + uVar68 * 4 && puVar10 < puVar11)) goto LAB_0014eb84;
      uVar41 = *(uint *)puVar44;
      uVar74 = uVar68 & 0x7ffc;
      iVar42 = 0;
      uVar64 = uVar74;
      puVar87 = puVar46;
      do {
        iVar39 = iVar42 * 4;
        uVar64 = uVar64 - 4;
        iVar42 = iVar42 + 4;
        puVar57 = (undefined8 *)((long)ppJVar79 + (ulong)(uVar100 + 2 + iVar39));
        uVar61 = puVar57[1];
        uVar90 = *puVar57;
        bVar91 = (byte)uVar41;
        bVar93 = (byte)(uVar41 >> 8);
        bVar94 = (byte)(uVar41 >> 0x10);
        bVar95 = (byte)(uVar41 >> 0x18);
        uVar96 = CONCAT13(~((byte)((ulong)uVar90 >> 0x18) ^ bVar95),
                          CONCAT12(~((byte)((ulong)uVar90 >> 0x10) ^ bVar94),
                                   CONCAT11(~((byte)((ulong)uVar90 >> 8) ^ bVar93),
                                            ~((byte)uVar90 ^ bVar91))));
        uVar99 = CONCAT13(~((byte)((ulong)uVar61 >> 0x18) ^ bVar95),
                          CONCAT12(~((byte)((ulong)uVar61 >> 0x10) ^ bVar94),
                                   CONCAT11(~((byte)((ulong)uVar61 >> 8) ^ bVar93),
                                            ~((byte)uVar61 ^ bVar91))));
        uVar98 = (uint)(CONCAT17(~((byte)((ulong)uVar90 >> 0x38) ^ bVar95),
                                 CONCAT16(~((byte)((ulong)uVar90 >> 0x30) ^ bVar94),
                                          CONCAT15(~((byte)((ulong)uVar90 >> 0x28) ^ bVar93),
                                                   CONCAT14(~((byte)((ulong)uVar90 >> 0x20) ^ bVar91
                                                             ),uVar96)))) >> 0x20);
        uVar97 = (uint)(CONCAT17(~((byte)((ulong)uVar61 >> 0x38) ^ bVar95),
                                 CONCAT16(~((byte)((ulong)uVar61 >> 0x30) ^ bVar94),
                                          CONCAT15(~((byte)((ulong)uVar61 >> 0x28) ^ bVar93),
                                                   CONCAT14(~((byte)((ulong)uVar61 >> 0x20) ^ bVar91
                                                             ),uVar99)))) >> 0x20);
        uVar14 = 0;
        if (uVar41 != 0) {
          uVar14 = uVar96 / uVar41;
        }
        uVar101 = 0;
        if (uVar41 != 0) {
          uVar101 = uVar98 / uVar41;
        }
        uVar30 = 0;
        if (uVar41 != 0) {
          uVar30 = uVar99 / uVar41;
        }
        uVar31 = 0;
        if (uVar41 != 0) {
          uVar31 = uVar97 / uVar41;
        }
        puVar87[1] = CONCAT44(uVar97 - uVar31 * uVar41,uVar99 - uVar30 * uVar41);
        *puVar87 = CONCAT44(uVar98 - uVar101 * uVar41,uVar96 - uVar14 * uVar41);
        puVar87 = puVar87 + 2;
      } while (uVar64 != 0);
      if (uVar74 != uVar68) goto LAB_0014eb84;
    }
    else {
      uVar74 = 0;
LAB_0014eb84:
      lVar72 = uVar68 - uVar74;
      piVar60 = (int *)((long)puVar46 + uVar74 * 4);
      do {
        iVar42 = (int)uVar74;
        uVar14 = *(uint *)puVar44;
        lVar72 = lVar72 + -1;
        uVar74 = uVar74 + 1;
        uVar41 = *(uint *)((long)ppJVar79 + (ulong)(uVar100 + 2 + iVar42 * 4)) ^ uVar14 ^ 0xffffffff
        ;
        uVar96 = 0;
        if (uVar14 != 0) {
          uVar96 = uVar41 / uVar14;
        }
        *piVar60 = uVar41 - uVar96 * uVar14;
        piVar60 = piVar60 + 1;
      } while (lVar72 != 0);
    }
    puVar44 = (undefined *)((long)puVar46 + lVar73);
LAB_0015610c:
    uVar68 = (long)puVar44 - (long)puVar46;
    if (uVar68 * 0x40000000 == 0) {
      puVar87 = (undefined8 *)0x0;
      puVar57 = (undefined8 *)0x0;
    }
    else {
      uVar74 = (long)(uVar68 * 0x40000000) >> 0x20;
      if (uVar74 >> 0x3d != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar57 = (undefined8 *)malloc((long)(uVar68 * 0x40000000) >> 0x1d);
      puVar87 = puVar57 + uVar74;
    }
    if (0 < (int)(uVar68 >> 2)) {
      uVar74 = 0;
      pvVar86 = (vm_t *)0x1fffffffffffffff;
      puVar80 = puVar57;
      do {
        uVar41 = *(uint *)((long)puVar46 + uVar74 * 4);
        uVar90 = *(undefined8 *)
                  (param_1->field91_0x70 +
                  ((ulong)((uint)*(ushort *)
                                  (*(long *)(*(long *)&param_1->field_0x68 + 8) + (ulong)uVar41) ^
                          uVar41 ^ 0xffffffff) & 0xffff) * 0x10);
        if (puVar80 < puVar87) {
          *puVar80 = uVar90;
          puVar80 = puVar80 + 1;
        }
        else {
          lVar73 = (long)puVar80 - (long)puVar57 >> 3;
          uVar64 = lVar73 + 1;
          if (uVar64 >> 0x3d != 0) {
            return;
          }
          uVar75 = (long)puVar87 - (long)puVar57 >> 2;
          if (uVar75 <= uVar64) {
            uVar75 = uVar64;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)puVar87 - (long)puVar57)) {
            uVar75 = 0x1fffffffffffffff;
          }
          if (uVar75 == 0) {
            lVar72 = 0;
            puVar69 = (undefined8 *)(lVar73 * 8);
            puVar89 = puVar69 + 1;
            *puVar69 = uVar90;
            if (puVar80 != puVar57) goto LAB_00156ab4;
LAB_00156af0:
            puVar87 = (undefined8 *)(lVar72 + uVar75 * 8);
            puVar34 = puVar80;
          }
          else {
            if (uVar75 >> 0x3d != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            lVar72 = malloc(uVar75 << 3);
            puVar69 = (undefined8 *)(lVar72 + lVar73 * 8);
            puVar89 = puVar69 + 1;
            *puVar69 = uVar90;
            plVar88 = plVar77;
            if (puVar80 == puVar57) goto LAB_00156af0;
LAB_00156ab4:
            do {
              puVar80 = puVar80 + -1;
              puVar69 = puVar69 + -1;
              *puVar69 = *puVar80;
            } while (puVar80 != puVar57);
            puVar87 = (undefined8 *)(lVar72 + uVar75 * 8);
            puVar34 = puVar57;
          }
          puVar57 = puVar69;
          puVar80 = puVar89;
          if (puVar34 != (undefined8 *)0x0) {
            free(puVar34);
          }
        }
        uVar74 = uVar74 + 1;
      } while (uVar74 != (uVar68 >> 2 & 0xffffffff));
    }
    if (uVar43 < 0x1959d14344448db0) {
      if (uVar43 == -0x488ee33edd9712dd) {
        pcVar45 = (char *)((ulong)&local_250 | 1);
        pp_Var47 = (jclass *)((ulong)local_100 | 1);
        pcVar52 = (char *)((ulong)&local_270 | 1);
        pplVar43 = (long **)FUN_SharedStorageGet(0x173cb0);
        piVar60 = (int *)FUN_SharedStorageGet(0x173cd0);
        iVar42 = 0x1d8474b2;
        local_350 = extraout_x8;
LAB_00158260:
        do {
          iVar39 = iVar42;
          pp_Var21 = (jclass *)local_c0;
          pp_Var62 = (jclass *)local_1e0;
          if (iVar39 < -0x414c03d4) {
            if (iVar39 == -0x565f725c) {
              pbVar70 = &param_1->field_0x0 + local_360 * 0x18;
              pbVar54 = *(byte **)(pbVar70 + 0x10);
              if ((*pbVar70 & 1) == 0) {
                pbVar54 = pbVar70 + 1;
              }
              uVar90 = (**(code **)(*plVar88 + 0x538))(plVar88,pbVar54);
              (**(code **)(*plVar88 + 0x570))(plVar88,pp_Var21,local_350 & 0xffffffff,uVar90);
              local_350 = (ulong)((int)local_350 + 1);
              iVar42 = 0x6dd51d2e;
            }
            else {
              iVar42 = -0x6541ff6e;
              if (iVar39 != -0x496da30e) {
                if (iVar39 == -0x6541ff6e) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
LAB_001582f0:
                uVar90 = *puVar57;
                pcVar53 = (char *)FUN_SharedStorageGet(0x173c90);
                if (*pcVar53 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                plVar77 = *pplVar43;
                uVar41 = (**(code **)(*plVar77 + 0x540))(plVar77,uVar90);
                uVar61 = (**(code **)(*plVar77 + 0x548))(plVar77,uVar90,0);
                if (0xffffffef < uVar41) {
                  return;
                }
                plVar88 = (long *)(long)(int)uVar41;
                if (uVar41 < 0x17) {
                  local_100 = (undefined  [8])CONCAT71(local_100._1_7_,(char)(uVar41 << 1));
                  pp_Var62 = pp_Var47;
                  if (uVar41 != 0) goto LAB_0015862c;
                }
                else {
                  pp_Var62 = (jclass *)malloc(((ulong)plVar88 | 0xf) + 1);
                  local_100 = (undefined  [8])(((ulong)plVar88 | 0xf) + 2);
                  plStack_f8 = plVar88;
                  local_f0 = pp_Var62;
LAB_0015862c:
                  func_0x0016a0c0(pp_Var62,uVar61,plVar88);
                }
                *(_jobject *)((long)pp_Var62 + (long)plVar88) = (_jobject)0x0;
                (**(code **)(*plVar77 + 0x550))(plVar77,uVar90,uVar61);
                uVar90 = puVar57[1];
                pcVar53 = (char *)FUN_SharedStorageGet(0x173c90);
                if (*pcVar53 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                plVar77 = *pplVar43;
                uVar41 = (**(code **)(*plVar77 + 0x540))(plVar77,uVar90);
                uVar61 = (**(code **)(*plVar77 + 0x548))(plVar77,uVar90,0);
                if (0xffffffef < uVar41) {
                  return;
                }
                uVar68 = (ulong)(int)uVar41;
                if (uVar41 < 0x17) {
                  local_250 = (jclass *)CONCAT71(local_250._1_7_,(char)(uVar41 << 1));
                  pcVar53 = pcVar45;
                  if (uVar41 != 0) goto LAB_001586f8;
                }
                else {
                  pcVar53 = (char *)malloc((uVar68 | 0xf) + 1);
                  local_250 = (jclass *)((uVar68 | 0xf) + 2);
                  local_248 = uVar68;
                  local_240 = pcVar53;
LAB_001586f8:
                  func_0x0016a0c0(pcVar53,uVar61,uVar68);
                }
                pcVar53[uVar68] = '\0';
                (**(code **)(*plVar77 + 0x550))(plVar77,uVar90,uVar61);
                pcVar53 = local_240;
                uVar68 = (ulong)local_250;
                piVar63 = (int *)func_0x0016a250(1,0x418);
                if (piVar63 == (int *)0x0) {
                  piVar63 = (int *)func_0x0016a0b0();
                  *piVar60 = *piVar63;
                }
                else {
                  piVar9 = piVar63 + 1;
                  *(int **)(piVar63 + 0x102) = piVar9;
                  pcVar66 = pcVar45;
                  if ((uVar68 & 1) != 0) {
                    pcVar66 = pcVar53;
                  }
                  *(int **)(piVar63 + 0x104) = piVar9;
                  uVar68 = syscall(0x38,0xffffffffffffff9c,pcVar66,0,0);
                  iVar42 = (int)uVar68;
                  if (uVar68 < 0xfffffffffffff001) {
                    *piVar63 = iVar42;
                    if (iVar42 != -1) {
                      param_1 = (vm_t *)0x0;
                      local_338 = (vm_t *)0x0;
                      local_220.capacity = 0;
                      local_220.length = 0;
                      local_220.data = (char *)0x0;
                      pvVar86 = (vm_t *)0x0;
LAB_00158880:
                      piVar84 = *(int **)(piVar63 + 0x102);
                      uVar74 = 0;
                      uVar68 = 0;
                      uVar43 = 0;
                      do {
                        piVar82 = *(int **)(piVar63 + 0x104);
                        if (piVar84 == piVar82) {
                          uVar64 = syscall(0x3f,(long)*piVar63,piVar9,0x400);
                          if (0xfffffffffffff000 < uVar64) {
                            *piVar60 = -(int)uVar64;
                            break;
                          }
                          if ((int)uVar64 < 1) break;
                          piVar82 = (int *)((long)piVar9 + (uVar64 & 0xffffffff));
                          *(int **)(piVar63 + 0x102) = piVar9;
                          *(int **)(piVar63 + 0x104) = piVar82;
                          piVar84 = piVar9;
                        }
                        lVar73 = (long)piVar82 - (long)piVar84;
                        piVar65 = (int *)func_0x0016a020(piVar84,10,lVar73);
                        piVar13 = piVar82;
                        if (piVar65 != (int *)0x0) {
                          piVar13 = piVar65;
                        }
                        if (piVar13 != piVar82 && piVar13 != (int *)0x0) {
                          lVar73 = (long)piVar13 + (1 - (long)piVar84);
                        }
                        uVar64 = lVar73 + uVar68;
                        if ((uVar64 ^ 0x7fffffffffffffff) <= uVar64 >> 1) {
                          iVar42 = 0x4b;
LAB_001589b0:
                          *piVar60 = iVar42;
                          goto LAB_00158a2c;
                        }
                        lVar72 = uVar64 + (uVar64 >> 1);
                        uVar75 = 0x80;
                        if (0x80 < lVar72 + 1U) {
                          uVar75 = lVar72 + 1;
                        }
                        lVar72 = uVar43;
                        if (uVar74 < uVar75) {
                          uVar74 = uVar75 - 1;
                          if ((uVar75 & uVar74) != 0) {
                            uVar74 = uVar74 | uVar74 >> 1;
                            uVar74 = uVar74 | uVar74 >> 2;
                            uVar74 = uVar74 | uVar74 >> 4;
                            uVar74 = uVar74 | uVar74 >> 8;
                            uVar74 = uVar74 | uVar74 >> 0x10;
                            uVar75 = (uVar74 | uVar74 >> 0x20) + 1;
                          }
                          lVar72 = func_0x0016a050(uVar43,uVar75);
                          if (lVar72 == 0) {
                            iVar42 = 0xc;
                            goto LAB_001589b0;
                          }
                          piVar84 = *(int **)(piVar63 + 0x102);
                          uVar74 = uVar75;
                        }
                        if (lVar73 != 0) {
                          func_0x0016a0c0(lVar72 + uVar68,piVar84,lVar73);
                          piVar84 = *(int **)(piVar63 + 0x102);
                        }
                        piVar84 = (int *)((long)piVar84 + lVar73);
                        *(int **)(piVar63 + 0x102) = piVar84;
                        uVar68 = uVar64;
                        uVar43 = lVar72;
                      } while (piVar13 == piVar82 || piVar13 == (int *)0x0);
                      if (uVar68 == 0) {
LAB_00158a2c:
                        uVar68 = 0xffffffffffffffff;
LAB_00158a30:
                        local_270 = local_270 & 0xffffffffffffff00;
                        *pcVar52 = '\0';
                      }
                      else {
                        *(undefined *)(uVar43 + uVar68) = 0;
                        if ((long)uVar68 < 1) goto LAB_00158a30;
                        uVar68 = uVar68 - (((undefined *)(uVar43 + uVar68))[-1] == '\n');
                        if (uVar68 < 0x17) {
                          uVar74 = local_270 >> 8;
                          local_270 = CONCAT71((int7)uVar74,(char)((int)uVar68 << 1));
                          pcVar53 = pcVar52;
                          if (uVar68 != 0) goto LAB_00158b2c;
                          uVar68 = 0;
                          *pcVar52 = '\0';
                        }
                        else {
                          pcVar53 = (char *)malloc((uVar68 | 0xf) + 1);
                          local_270 = (uVar68 | 0xf) + 2;
                          uStack_268 = uVar68;
                          local_260 = pcVar53;
LAB_00158b2c:
                          func_0x0016a0c0(pcVar53,uVar43,uVar68);
                          pcVar53[uVar68] = '\0';
                        }
                      }
                      if ((local_220.length & 1U) != 0) {
                        free(local_220.data);
                      }
                      local_220.capacity = uStack_268;
                      local_220.length = local_270;
                      local_220.data = local_260;
                      func_0x0016a000(uVar43);
                      if (-1 < (long)uVar68) {
                        pcVar53 = (char *)((ulong)&local_220 | 1);
                        if ((local_220.length & 1U) != 0) {
                          pcVar53 = local_220.data;
                        }
                        pp_Var62 = pp_Var47;
                        plVar77 = (long *)((ulong)local_100 >> 1 & 0x7f);
                        if (((ulong)local_100 & 1) != 0) {
                          pp_Var62 = local_f0;
                          plVar77 = plStack_f8;
                        }
                        if (plVar77 == (long *)0x0) {
LAB_00158b64:
                          if (pvVar86 < local_338) {
                            *(char **)&pvVar86->field_0x10 = local_220.data;
                            pvVar86->env = (JNIEnv *)local_220.capacity;
                            *(long *)pvVar86 = local_220.length;
                            local_220.data = (char *)0x0;
                            local_220.capacity = 0;
                            local_220.length = 0;
                            pvVar86 = (vm_t *)&pvVar86->field_0x18;
                          }
                          else {
                            uVar43 = (long)pvVar86 - (long)param_1 >> 3;
                            uVar68 = uVar43 * -0x5555555555555555 + 1;
                            if (0xaaaaaaaaaaaaaaa < uVar68) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                              halt_baddata();
                            }
                            lVar73 = (long)local_338 - (long)param_1 >> 3;
                            uVar74 = lVar73 * 0x5555555555555556;
                            if (uVar74 < uVar68 || uVar74 - uVar68 == 0) {
                              uVar74 = uVar68;
                            }
                            if (0x555555555555554 < (ulong)(lVar73 * -0x5555555555555555)) {
                              uVar74 = 0xaaaaaaaaaaaaaaa;
                            }
                            if (uVar74 == 0) {
                              lVar73 = 0;
                            }
                            else {
                              if (0xaaaaaaaaaaaaaaa < uVar74) {
                                return;
                              }
                              lVar73 = malloc(uVar74 * 0x18);
                            }
                            pcVar53 = local_220.data;
                            lVar35 = local_220.capacity;
                            lVar72 = local_220.length;
                            pvVar83 = (vm_t *)(lVar73 + uVar43 * 8);
                            local_220.data = (char *)0x0;
                            local_220.length = 0;
                            local_220.capacity = 0;
                            pvVar83->env = (JNIEnv *)lVar35;
                            *(long *)pvVar83 = lVar72;
                            *(char **)&pvVar83->field_0x10 = pcVar53;
                            pvVar71 = pvVar86;
                            pvVar85 = pvVar83;
                            if (pvVar86 != param_1) {
                              do {
                                uVar61 = *(undefined8 *)&pvVar71[-1].field_0x68;
                                uVar90 = *(undefined8 *)&pvVar71[-1].field_0x60;
                                pvVar85[-1].field91_0x70 = pvVar71[-1].field91_0x70;
                                pvVar32 = pvVar71 + -1;
                                *(undefined8 *)&pvVar85[-1].field_0x68 = uVar61;
                                *(undefined8 *)&pvVar85[-1].field_0x60 = uVar90;
                                pvVar33 = pvVar85 + -1;
                                *(undefined8 *)&pvVar71[-1].field_0x68 = 0;
                                pvVar71[-1].field91_0x70 = 0;
                                *(undefined8 *)&pvVar71[-1].field_0x60 = 0;
                                pvVar71 = (vm_t *)&pvVar32->field_0x60;
                                pvVar85 = (vm_t *)&pvVar33->field_0x60;
                              } while ((vm_t *)&pvVar32->field_0x60 != param_1);
                              do {
                                puVar44 = &pvVar86[-1].field_0x60;
                                if ((*puVar44 & 1) != 0) {
                                  free(pvVar86[-1].field91_0x70);
                                }
                                pvVar86 = (vm_t *)puVar44;
                                pvVar71 = param_1;
                              } while ((vm_t *)puVar44 != param_1);
                            }
                            param_1 = pvVar85;
                            local_338 = (vm_t *)(lVar73 + uVar74 * 0x18);
                            pvVar86 = (vm_t *)&pvVar83->field_0x18;
                            if (pvVar71 != (vm_t *)0x0) {
                              free();
                              pvVar86 = (vm_t *)&pvVar83->field_0x18;
                            }
                          }
                        }
                        else {
                          uVar68 = (ulong)local_220.length >> 1 & 0x7f;
                          if ((local_220.length & 1U) != 0) {
                            uVar68 = local_220.capacity;
                          }
                          if ((long)plVar77 <= (long)uVar68) {
                            bVar91 = *(byte *)pp_Var62;
                            pcVar12 = pcVar53 + uVar68;
                            pcVar66 = pcVar53;
                            do {
                              if ((0xfffffffffffffffe < uVar68 - (long)plVar77) ||
                                 (pcVar66 = (char *)func_0x0016a020(pcVar66,bVar91,
                                                                    (uVar68 - (long)plVar77) + 1),
                                 pcVar66 == (char *)0x0)) break;
                              iVar42 = func_0x0016a2e0(pcVar66,pp_Var62,plVar77);
                              if (iVar42 == 0) {
                                if ((pcVar66 != pcVar12) && ((long)pcVar66 - (long)pcVar53 != -1))
                                goto LAB_00158b64;
                                break;
                              }
                              pcVar66 = pcVar66 + 1;
                              uVar68 = (long)pcVar12 - (long)pcVar66;
                            } while ((long)plVar77 <= (long)uVar68);
                          }
                        }
                        goto LAB_00158880;
                      }
                      uVar68 = syscall(0x39,(long)*piVar63);
                      if (0xfffffffffffff000 < uVar68) {
                        *piVar60 = -(int)uVar68;
                      }
                      func_0x0016a000(piVar63);
                      if ((local_220.length & 1U) != 0) {
                        free(local_220.data);
                      }
                      pcVar53 = (char *)FUN_SharedStorageGet(0x173c90);
                      if (*pcVar53 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
                        halt_baddata();
                      }
                      plVar88 = *pplVar43;
                      local_c0 = (undefined  [8])0x0;
                      local_90 = (undefined8 **)0x0;
                      iVar42 = iVar39 + -0x5ed07886;
                      goto LAB_00158260;
                    }
                  }
                  else {
                    *piVar60 = -iVar42;
                  }
                  func_0x0016a000(piVar63);
                }
                pcVar53 = (char *)FUN_SharedStorageGet(0x173c90);
                if (*pcVar53 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                plVar88 = *pplVar43;
                local_c0 = (undefined  [8])0x0;
                param_1 = (vm_t *)((ulong)param_1 & 0xffffffffffffff00);
                local_90 = (undefined8 **)0x0;
                iVar42 = iVar39 + -0x66f217c0;
              }
            }
            goto LAB_00158260;
          }
          if (iVar39 == -0x414c03d4) {
            puVar46 = (undefined8 *)malloc0(0x11);
            *puVar46 = 0;
            puVar46[1] = 0;
            *(undefined *)(puVar46 + 2) = 0;
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
            *(undefined *)((long)puVar46 + 10) = 0x53;
            *(undefined *)((long)puVar46 + 0xb) = 0x74;
            *(undefined *)((long)puVar46 + 0xc) = 0x72;
            *(undefined *)((long)puVar46 + 0xd) = 0x69;
            *(undefined *)((long)puVar46 + 0xe) = 0x6e;
            *(undefined *)((long)puVar46 + 0xf) = 0x67;
            *(undefined *)(puVar46 + 2) = 0;
            local_238 = (undefined  [8])
                        CONCAT17(*(undefined *)((long)puVar46 + 6),
                                 CONCAT16(*(undefined *)((long)puVar46 + 5),
                                          CONCAT15(*(undefined *)((long)puVar46 + 4),
                                                   CONCAT14(*(undefined *)((long)puVar46 + 3),
                                                            CONCAT13(*(undefined *)
                                                                      ((long)puVar46 + 2),
                                                                     CONCAT12(*(undefined *)
                                                                               ((long)puVar46 + 1),
                                                                              CONCAT11(*(undefined *
                                                                                        )puVar46,
                                                                                       0x20)))))));
            local_230 = *(ulong *)((long)puVar46 + 7);
            local_228 = (undefined *)
                        (CONCAT71((int7)((ulong)local_228 >> 8),*(undefined *)((long)puVar46 + 0xf))
                        & 0xffffffffffff00ff);
            free();
            puVar44 = (undefined *)((ulong)local_238 | 1);
            if (((ulong)local_238 & 1) != 0) {
              puVar44 = local_228;
            }
            pp_Var62 = (jclass *)(**(code **)(*plVar88 + 0x30))(plVar88,puVar44);
            pcVar53 = (char *)FUN_SharedStorageGet(0x173c90);
            if (*pcVar53 == '\x01') {
              plVar77 = *pplVar43;
            }
            else {
              plVar77 = (long *)FUN_001603d0();
              *pplVar43 = plVar77;
              puVar44 = (undefined *)FUN_SharedStorageGet(0x173c90);
              *puVar44 = 1;
            }
            local_1d0 = (jclass *)0x16f558;
            local_1e0 = (undefined  [8])pp_Var62;
            local_1c8 = plVar77;
            local_1b0 = &local_1d0;
            if (((ulong)local_238 & 1) != 0) {
              free(local_228);
            }
            pp_Var62 = (jclass *)
                       (**(code **)(*plVar88 + 0x560))
                                 (plVar88,(int)((ulong)((long)pvVar86 - (long)param_1) >> 3) *
                                          -0x55555555,local_1e0,0);
            pcVar53 = (char *)FUN_SharedStorageGet(0x173c90);
            if (*pcVar53 == '\x01') {
              plVar77 = *pplVar43;
            }
            else {
              plVar77 = (long *)FUN_001603d0();
              *pplVar43 = plVar77;
              puVar44 = (undefined *)FUN_SharedStorageGet(0x173c90);
              *puVar44 = 1;
            }
            pp_Var21 = (jclass *)local_c0;
            local_158 = plVar77;
            local_140[0] = &local_160;
            local_160 = (undefined8 *)0x16f558;
            local_170 = (jclass *)0x0;
            local_c0 = (undefined  [8])pp_Var62;
            if (pp_Var21 != (jclass *)0x0) {
              local_220.length = (long)pp_Var21;
              if (local_90 == (undefined8 **)0x0) {
                return;
              }
              (*(code *)(*local_90)[6])(local_90,&local_220);
            }
            ppuVar67 = local_90;
            local_90 = (undefined8 **)0x0;
            if (ppuVar67 == (undefined8 **)&local_b0) {
              uVar43 = 4;
              ppuVar67 = (undefined8 **)&local_b0;
LAB_00158798:
              (*(code *)(*ppuVar67)[uVar43])();
            }
            else if (ppuVar67 != (undefined8 **)0x0) {
              uVar43 = 5;
              goto LAB_00158798;
            }
            pp_Var62 = local_170;
            if (local_140[0] == (undefined8 **)0x0) {
              local_90 = (undefined8 **)0x0;
              local_170 = (jclass *)0x0;
joined_r0x001587e4:
              ppuVar67 = (undefined8 **)0x0;
              uVar43 = local_220.length;
              local_220.length = (long)pp_Var62;
            }
            else {
              if (local_140[0] != &local_160) {
                local_90 = local_140[0];
                local_140[0] = (undefined8 **)0x0;
                local_170 = (jclass *)0x0;
                goto joined_r0x001587e4;
              }
              local_90 = (undefined8 **)&local_b0;
              (*(code *)local_160[3])(&local_160);
              pp_Var62 = local_170;
              local_170 = (jclass *)0x0;
              uVar43 = local_220.length;
              local_220.length = (long)pp_Var62;
              ppuVar67 = local_140[0];
            }
            local_170 = (jclass *)0x0;
            if ((jclass *)local_220.length != (jclass *)0x0) {
              local_170 = (jclass *)0x0;
              if (ppuVar67 == (undefined8 **)0x0) {
                return;
              }
              (*(code *)(*ppuVar67)[6])(ppuVar67,&local_220);
              ppuVar67 = local_140[0];
              uVar43 = local_220.length;
            }
            local_220.length = uVar43;
            if (ppuVar67 == &local_160) {
              uVar43 = 4;
              ppuVar67 = &local_160;
            }
            else {
              local_350 = 0;
              iVar42 = 0x6dd51d2e;
              if (ppuVar67 == (undefined8 **)0x0) goto LAB_00158260;
              uVar43 = 5;
            }
            (*(code *)(*ppuVar67)[uVar43])();
            local_350 = 0;
            iVar42 = 0x6dd51d2e;
            goto LAB_00158260;
          }
          if (iVar39 == -0x36f5556) {
            local_1e0 = (undefined  [8])0x0;
            if (pp_Var62 != (jclass *)0x0) {
              local_220.length = (long)pp_Var62;
              if (local_1b0 == (jclass **)0x0) {
                return;
              }
              (*(code *)(*local_1b0)[6])(local_1b0,&local_220);
            }
            if (local_1b0 == &local_1d0) {
              uVar43 = 4;
              ppp_Var59 = &local_1d0;
            }
            else {
              iVar42 = -0x496da30e;
              if (local_1b0 == (jclass **)0x0) goto LAB_00158260;
              uVar43 = 5;
              ppp_Var59 = local_1b0;
            }
            (*(code *)(*ppp_Var59)[uVar43])();
            iVar42 = -0x496da30e;
            goto LAB_00158260;
          }
          if (iVar39 != 0x6dd51d2e) goto LAB_001582f0;
          uVar68 = ((long)pvVar86 - (long)param_1 >> 3) * -0x5555555555555555;
          local_360 = (ulong)(int)local_350;
          iVar42 = -0x565f725c;
          if (uVar68 < local_360 || uVar68 - local_360 == 0) {
            iVar42 = -0x36f5556;
          }
        } while( true );
      }
      if (uVar43 != 0x21ed6531e3070f4) {
        return;
      }
      uVar90 = *puVar57;
      pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
      if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pplVar43 = (long **)FUN_SharedStorageGet(0x173cb0);
      plVar77 = *pplVar43;
      uVar41 = (**(code **)(*plVar77 + 0x540))(plVar77,uVar90);
      (**(code **)(*plVar77 + 0x548))(plVar77,uVar90,0);
      if (uVar41 < 0xfffffff0) {
        if (0x16 < uVar41) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar41 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (uVar43 == 0x1959d14344448db0) {
        pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
        if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        pplVar43 = (long **)FUN_SharedStorageGet(0x173cb0);
        (**(code **)(**pplVar43 + 200))(*pplVar43,*puVar57);
        pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
        if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        FUN_SharedStorageGet(0x173cb0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (uVar43 != 0x19a0e6edc2dcae2e) {
        if (uVar43 != 0x7127e31c30e829cd) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        local_150 = (jclass *)CONCAT44(local_150._4_4_,0x3f800000);
        plStack_168 = (long *)0x0;
        local_170 = (jclass *)0x0;
        local_158 = (long *)0x0;
        local_160 = (undefined8 *)0x0;
        func_0x00169f30(0x16102c,&local_170);
        if (local_158 != (long *)0x0) {
          if (((ulong)plStack_168 & (long)plStack_168 - 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar90 = *puVar57;
      pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
      if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pplVar43 = (long **)FUN_SharedStorageGet(0x173cb0);
      plVar77 = *pplVar43;
      uVar41 = (**(code **)(*plVar77 + 0x540))(plVar77,uVar90);
      (**(code **)(*plVar77 + 0x548))(plVar77,uVar90,0);
      if (uVar41 < 0xfffffff0) {
        if (0x16 < uVar41) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar41 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5e:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar96 = *(uint *)(uVar43 + 0x10);
    uVar98 = *(uint *)(uVar43 + 0x14);
    lVar73 = *(long *)(uVar43 + 8);
    uVar41 = *(uint *)(lVar73 + (ulong)uVar98);
    *(uint *)(uVar43 + 0x14) = uVar98 + 4;
    *(uint *)(uVar43 + 0x14) = uVar98 + 8;
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    uVar14 = *(uint *)(lVar73 + (ulong)(uVar98 + 8));
    uVar99 = 0;
    if (uVar96 != 0) {
      uVar99 = uVar41 / uVar96;
    }
    *(uint *)(uVar43 + 0x14) = uVar98 + 0xc;
    uVar14 = uVar14 ^ uVar96 ^ 0xffffffff;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x10;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x18;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x1c;
    uVar97 = 0;
    if (uVar96 != 0) {
      uVar97 = uVar14 / uVar96;
    }
    uVar41 = uVar41 - uVar99 * uVar96;
    sVar26 = *(short *)(lVar73 + (ulong)(uVar98 + 0x1c));
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x1e;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x22;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x26;
    uVar24 = *(ushort *)(lVar73 + (ulong)uVar41);
    func_0x00169010(&local_170,uVar43,uVar14 - uVar97 * uVar96,0);
    FUN_00149a84_XOR((astruct_3 *)local_c0,(char *)local_170[1],*(undefined4 *)(local_170 + 2),
                     local_10c,plStack_168._0_4_);
    puVar46 = (undefined8 *)((ulong)local_c0 | 1);
    if ((local_c0[0] & 1) != 0) {
      puVar46 = local_b0;
    }
    if (*(byte *)puVar46 - 0x42 < 0x1a) {
      iVar42 = *(int *)(&DAT_0010ee48 + ((ulong)(*(byte *)puVar46 - 0x42) & 0xff) * 4);
      if (iVar42 < 0x49) {
        if (0x43 < iVar42) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (iVar42 == 0x42) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (iVar42 != 0x43) {
          return;
        }
      }
      else {
        if (iVar42 < 0x4c) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (iVar42 == 0x5a) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if ((iVar42 != 0x53) && (iVar42 != 0x4c)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
    puVar87 = (undefined8 *)
              (param_1->field91_0x70 + (ulong)(ushort)(uVar24 ^ (ushort)uVar41 ^ 0xffff) * 0x10);
    uVar90 = *puVar87;
    uVar43 = puVar87[1];
    if (uVar43 != 0) {
      FUN_00129110(1,uVar43 + 8);
    }
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pplVar43 = (long **)FUN_SharedStorageGet(0x173cb0);
    cVar37 = (**(code **)(**pplVar43 + 0xc0))(*pplVar43,uVar90,0);
    ppJVar79 = param_1->env;
    if (cVar37 == '\0') {
      uVar43 = func_0x00168c3c(&local_170,ppJVar79);
      jVar38 = (*(*param_1->env)->ExceptionCheck)(param_1->env);
      if ((uVar43 == 0) || (jVar38 != '\0')) {
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
    pp_Stack_1d8 = (jclass *)0x46b0821bd970fde1;
    local_1e0 = (undefined  [8])0x66c4f276bc0489a0;
    local_1c8 = (long *)0xaa19b109c6bfd80;
    local_1d0 = (jclass *)0x3b09b04cb24e6d4;
    lStack_1b8 = 0x3ae90199c68e5d5;
    local_1c0 = 0x8e49356d26ba9c4;
    local_1b0 = (jclass **)0x14a19413ce24fdc3;
    local_1a8 = 0xd967e7c5;
    local_1a4 = 0xf258;
    puVar46 = (undefined8 *)malloc0(0x36);
    uVar68 = 0;
    puVar46[1] = 0;
    *puVar46 = 0;
    puVar46[3] = 0;
    puVar46[2] = 0;
    puVar46[5] = 0;
    puVar46[4] = 0;
    *(undefined8 *)((long)puVar46 + 0x2e) = 0;
    do {
      *(byte *)((long)puVar46 + uVar68) =
           *(byte *)((ulong)local_1e0 | uVar68 & 7) ^ *(byte *)((long)&pp_Stack_1d8 + uVar68);
      uVar68 = uVar68 + 1;
    } while (uVar68 != 0x36);
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
    cVar37 = *(char *)((long)puVar46 + 0x34);
    pcVar52[0x35] = '\0';
    pcVar52[0x34] = cVar37;
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
      lVar73 = 4;
    }
    else {
      if (local_1b0 == (jclass **)0x0) goto LAB_001575c4;
      lVar73 = 5;
      ppp_Var59 = local_1b0;
    }
    (*(code *)(*ppp_Var59)[lVar73])();
LAB_001575c4:
    free(pcVar52);
    free(pcVar45);
    if (sVar26 != 0) {
      iVar42 = 0;
      do {
        iVar42 = iVar42 + 1;
      } while (sVar26 != iVar42);
    }
    if (uVar43 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 100:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar96 = *(uint *)(uVar43 + 0x10);
    uVar98 = *(uint *)(uVar43 + 0x14);
    lVar73 = *(long *)(uVar43 + 8);
    uVar14 = *(uint *)(lVar73 + (ulong)uVar98);
    *(uint *)(uVar43 + 0x14) = uVar98 + 4;
    uVar41 = *(uint *)(lVar73 + (ulong)(uVar98 + 4));
    *(uint *)(uVar43 + 0x14) = uVar98 + 8;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0xc;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x14;
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x18;
    sVar26 = *(short *)(lVar73 + (ulong)(uVar98 + 0x18));
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x1a;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x1e;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x22;
    uVar99 = 0;
    if (uVar96 != 0) {
      uVar99 = uVar41 / uVar96;
    }
    uVar97 = *(uint *)(lVar73 + (ulong)(uVar98 + 0x22));
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x26;
    uVar97 = uVar97 ^ uVar96 ^ 0xffffffff;
    uVar98 = 0;
    if (uVar96 != 0) {
      uVar98 = uVar97 / uVar96;
    }
    uVar41 = uVar41 - uVar99 * uVar96;
    uVar24 = *(ushort *)(lVar73 + (ulong)uVar41);
    func_0x00169010(&local_170,uVar43,uVar97 - uVar98 * uVar96,0);
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
      uVar43 = 4;
    }
    else {
      if (local_1b0 == (jclass **)0x0) goto LAB_00157a80;
      uVar43 = 5;
      ppp_Var59 = local_1b0;
    }
    (*(code *)(*ppp_Var59)[uVar43])();
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
  case 0x6a:
    pp_Var47 = *(jclass **)&param_1->field_0x68;
    uVar96 = *(uint *)(pp_Var47 + 2);
    uVar98 = *(uint *)((long)pp_Var47 + 0x14);
    p_Var78 = pp_Var47[1];
    uVar41 = *(uint *)(p_Var78 + uVar98);
    *(uint *)((long)pp_Var47 + 0x14) = uVar98 + 4;
    uVar14 = *(uint *)(p_Var78 + (uVar98 + 4));
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    *(uint *)((long)pp_Var47 + 0x14) = uVar98 + 8;
    uVar99 = 0;
    if (uVar96 != 0) {
      uVar99 = uVar41 / uVar96;
    }
    *(uint *)((long)pp_Var47 + 0x14) = uVar98 + 0xc;
    uVar14 = uVar14 ^ uVar96 ^ 0xffffffff;
    *(uint *)((long)pp_Var47 + 0x14) = uVar98 + 0x14;
    *(uint *)((long)pp_Var47 + 0x14) = uVar98 + 0x18;
    sVar26 = *(short *)(p_Var78 + (uVar98 + 0x18));
    *(uint *)((long)pp_Var47 + 0x14) = uVar98 + 0x1a;
    uVar97 = 0;
    if (uVar96 != 0) {
      uVar97 = uVar14 / uVar96;
    }
    uVar41 = uVar41 - uVar99 * uVar96;
    *(uint *)((long)pp_Var47 + 0x14) = uVar98 + 0x1e;
    uVar99 = *(uint *)(p_Var78 + (uVar98 + 0x1e));
    *(uint *)((long)pp_Var47 + 0x14) = uVar98 + 0x22;
    uVar24 = *(ushort *)(p_Var78 + uVar41);
    uVar14 = *(uint *)(p_Var78 + (uVar14 - uVar97 * uVar96));
    puVar46 = (undefined8 *)malloc(0xc);
    uVar14 = uVar14 ^ uVar96 ^ 0xffffffff;
    *(undefined4 *)(puVar46 + 1) = 0;
    uVar98 = 0;
    if (uVar96 != 0) {
      uVar98 = uVar14 / uVar96;
    }
    *puVar46 = 0;
    uVar97 = *(uint *)(pp_Var47 + 2);
    uVar14 = uVar14 - uVar98 * uVar96;
    p_Var78 = pp_Var47[1];
    uVar98 = *(uint *)(p_Var78 + uVar14) ^ uVar97 ^ 0xffffffff;
    uVar100 = 0;
    if (uVar97 != 0) {
      uVar100 = uVar98 / uVar97;
    }
    *(uint *)puVar46 = uVar98 - uVar100 * uVar97;
    uVar97 = *(uint *)(pp_Var47 + 2);
    uVar98 = *(uint *)(p_Var78 + (uVar14 + 4)) ^ uVar97 ^ 0xffffffff;
    uVar100 = 0;
    if (uVar97 != 0) {
      uVar100 = uVar98 / uVar97;
    }
    uVar101 = 0;
    if (uVar96 != 0) {
      uVar101 = (uVar99 ^ uVar96 ^ 0xffffffff) / uVar96;
    }
    *(uint *)((long)puVar46 + 4) = uVar98 - uVar100 * uVar97;
    uVar96 = *(uint *)(pp_Var47 + 2);
    plStack_168 = (long *)*puVar46;
    uVar14 = *(uint *)(p_Var78 + (uVar14 + 8)) ^ uVar96 ^ 0xffffffff;
    local_160 = (undefined8 *)0x0;
    uVar98 = 0;
    if (uVar96 != 0) {
      uVar98 = uVar14 / uVar96;
    }
    local_130 = 0;
    *(uint *)(puVar46 + 1) = uVar14 - uVar98 * uVar96;
    local_170 = pp_Var47;
    free(puVar46,uVar101);
    p_Var78 = (jclass)func_0x00168e38(&local_170,param_1->env);
    if (p_Var78 != (jclass)0x0) {
      pp_Var47 = (jclass *)(*(*param_1->env)->AllocObject)(param_1->env,p_Var78);
      pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
      if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
      local_1c8 = (long *)*puVar46;
      ppp_Var59 = &local_1d0;
      local_1d0 = (jclass *)0x16f558;
      pp_Var2 = (jobject *)
                (param_1->field91_0x70 + (ulong)(ushort)(uVar24 ^ (ushort)uVar41 ^ 0xffff) * 0x10);
      local_1e0 = (undefined  [8])pp_Var47;
      local_1b0 = ppp_Var59;
      FUN_0014cc28(local_c0,(jclass **)local_1e0);
      plVar88 = plStack_b8;
      pp_Var47 = (jclass *)local_c0;
      plVar77 = (long *)pp_Var2[1];
      local_c0 = (undefined  [8])*pp_Var2;
      plStack_b8 = plVar77;
      pp_Var2[1] = (jobject)plVar88;
      *pp_Var2 = (jobject)pp_Var47;
      if ((plVar77 != (long *)0x0) &&
         (uVar43 = FUN_00129140(0xffffffffffffffff,plVar77 + 1), uVar43 == 0)) {
        (**(code **)(*plVar77 + 0x10))(plVar77);
        FUN_00119ba4(plVar77);
      }
      pp_Var47 = (jclass *)local_1e0;
      if (sVar26 != 0) {
        iVar42 = 0;
        do {
          iVar42 = iVar42 + 1;
        } while (sVar26 != iVar42);
      }
      local_1e0 = (undefined  [8])0x0;
      if (pp_Var47 != (jclass *)0x0) {
        local_c0 = (undefined  [8])pp_Var47;
        if (local_1b0 == (jclass **)0x0) {
          return;
        }
        (*(code *)(*local_1b0)[6])(local_1b0,local_c0);
      }
      if (local_1b0 == ppp_Var59) {
        uVar43 = 4;
      }
      else {
        if (local_1b0 == (jclass **)0x0) {
          return;
        }
        uVar43 = 5;
        ppp_Var59 = local_1b0;
      }
      (*(code *)(*ppp_Var59)[uVar43])();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
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
  case 0x6b:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar96 = *(uint *)(uVar43 + 0x10);
    uVar98 = *(uint *)(uVar43 + 0x14);
    lVar73 = *(long *)(uVar43 + 8);
    uVar14 = *(uint *)(lVar73 + (ulong)uVar98);
    *(uint *)(uVar43 + 0x14) = uVar98 + 4;
    uVar41 = *(uint *)(lVar73 + (ulong)(uVar98 + 4));
    *(uint *)(uVar43 + 0x14) = uVar98 + 8;
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    uVar99 = 0;
    if (uVar96 != 0) {
      uVar99 = uVar41 / uVar96;
    }
    *(uint *)(uVar43 + 0x14) = uVar98 + 0xc;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x14;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x18;
    sVar26 = *(short *)(lVar73 + (ulong)(uVar98 + 0x18));
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x1a;
    uVar41 = uVar41 - uVar99 * uVar96;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x1e;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x22;
    uVar99 = *(uint *)(lVar73 + (ulong)(uVar98 + 0x22));
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x26;
    pp_Var3 = (jstring *)
              (param_1->field91_0x70 +
              (ulong)(ushort)(*(ushort *)(lVar73 + (ulong)uVar41) ^ (ushort)uVar41 ^ 0xffff) * 0x10)
    ;
    p_Var16 = *pp_Var3;
    p_Var81 = pp_Var3[1];
    if (p_Var81 != (jstring)0x0) {
      FUN_00129110(1,p_Var81 + 8);
    }
    jVar58 = (*(*param_1->env)->GetStringUTFLength)(param_1->env,p_Var16);
    pcVar45 = (*(*param_1->env)->GetStringUTFChars)(param_1->env,p_Var16,(jboolean *)0x0);
    if (pcVar45 == (char *)0x0) {
      if (sVar26 != 0) {
        iVar42 = 0;
        do {
          iVar42 = iVar42 + 1;
        } while (sVar26 != iVar42);
      }
    }
    else {
      uVar99 = uVar99 ^ uVar96 ^ 0xffffffff;
      uVar14 = uVar14 ^ uVar96 ^ 0xffffffff;
      uVar41 = 0;
      if (uVar96 != 0) {
        uVar41 = uVar99 / uVar96;
      }
      uVar98 = 0;
      if (uVar96 != 0) {
        uVar98 = uVar14 / uVar96;
      }
      *(char **)(*(long *)(*(long *)&param_1->field_0x68 + 8) + (ulong)(uVar99 - uVar41 * uVar96)) =
           pcVar45;
      *(int *)(*(long *)(*(long *)&param_1->field_0x68 + 8) + (ulong)(uVar14 - uVar98 * uVar96)) =
           (int)jVar58;
      if (sVar26 != 0) {
        iVar42 = 0;
        do {
          iVar42 = iVar42 + 1;
        } while (sVar26 != iVar42);
      }
    }
LAB_00157478:
    if (p_Var81 != (jstring)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6c:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar14 = *(uint *)(uVar43 + 0x10);
    iVar42 = *(int *)(uVar43 + 0x14);
    lVar73 = *(long *)(uVar43 + 8);
    *(int *)(uVar43 + 0x14) = iVar42 + 4;
    *(int *)(uVar43 + 0x14) = iVar42 + 0xc;
    *(uint *)(uVar43 + 0x14) = iVar42 + 0x10U;
    sVar26 = *(short *)(lVar73 + (ulong)(iVar42 + 0x10U));
    *(int *)(uVar43 + 0x14) = iVar42 + 0x12;
    *(int *)(uVar43 + 0x14) = iVar42 + 0x16;
    *(uint *)(uVar43 + 0x14) = iVar42 + 0x1aU;
    uVar41 = *(uint *)(lVar73 + (ulong)(iVar42 + 0x1aU));
    *(int *)(uVar43 + 0x14) = iVar42 + 0x1e;
    uVar41 = uVar41 ^ uVar14 ^ 0xffffffff;
    uVar96 = 0;
    if (uVar14 != 0) {
      uVar96 = uVar41 / uVar14;
    }
    uVar41 = uVar41 - uVar96 * uVar14;
    pp_Var5 = (jthrowable *)
              (param_1->field91_0x70 +
              (ulong)(ushort)(*(ushort *)(lVar73 + (ulong)uVar41) ^ (ushort)uVar41 ^ 0xffff) * 0x10)
    ;
    obj = *pp_Var5;
    plVar77 = (long *)pp_Var5[1];
    if (plVar77 != (long *)0x0) {
      FUN_00129110(1,plVar77 + 1);
    }
    (*(*param_1->env)->Throw)(param_1->env,obj);
    iVar42 = (int)sVar26;
    if (iVar42 != 0) {
      iVar39 = 0;
      do {
        iVar39 = iVar39 + 1;
      } while (iVar42 != iVar39);
    }
    if (plVar77 == (long *)0x0) {
      return;
    }
    uVar43 = FUN_00129140(0xffffffffffffffff,plVar77 + 1);
    if (uVar43 != 0) {
      return;
    }
    (**(code **)(*plVar77 + 0x10))(plVar77);
    FUN_00119ba4(plVar77);
    return;
  case 0x6d:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar96 = *(uint *)(uVar43 + 0x10);
    iVar42 = *(int *)(uVar43 + 0x14);
    lVar73 = *(long *)(uVar43 + 8);
    *(int *)(uVar43 + 0x14) = iVar42 + 4;
    *(int *)(uVar43 + 0x14) = iVar42 + 0xc;
    *(uint *)(uVar43 + 0x14) = iVar42 + 0x10U;
    sVar26 = *(short *)(lVar73 + (ulong)(iVar42 + 0x10U));
    *(int *)(uVar43 + 0x14) = iVar42 + 0x12;
    *(int *)(uVar43 + 0x14) = iVar42 + 0x16;
    *(uint *)(uVar43 + 0x14) = iVar42 + 0x1aU;
    uVar14 = *(uint *)(lVar73 + (ulong)(iVar42 + 0x1aU));
    *(uint *)(uVar43 + 0x14) = iVar42 + 0x1eU;
    uVar41 = *(uint *)(lVar73 + (ulong)(iVar42 + 0x1eU));
    *(int *)(uVar43 + 0x14) = iVar42 + 0x22;
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
      uVar43 = 4;
    }
    else {
      if (local_140[0] == (undefined8 **)0x0) goto LAB_001577fc;
      uVar43 = 5;
      ppuVar67 = local_140[0];
    }
    (*(code *)(*ppuVar67)[uVar43])();
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
  case 0x70:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar98 = *(uint *)(uVar43 + 0x10);
    iVar42 = *(int *)(uVar43 + 0x14);
    pcVar45 = *(char **)(uVar43 + 8);
    *(int *)(uVar43 + 0x14) = iVar42 + 4;
    *(int *)(uVar43 + 0x14) = iVar42 + 8;
    *(int *)(uVar43 + 0x14) = iVar42 + 0x10;
    *(int *)(uVar43 + 0x14) = iVar42 + 0x14;
    *(int *)(uVar43 + 0x14) = iVar42 + 0x16;
    *(int *)(uVar43 + 0x14) = iVar42 + 0x1a;
    *(uint *)(uVar43 + 0x14) = iVar42 + 0x1eU;
    uVar41 = *(uint *)(pcVar45 + (iVar42 + 0x1eU));
    *(uint *)(uVar43 + 0x14) = iVar42 + 0x22U;
    uVar14 = *(uint *)(pcVar45 + (iVar42 + 0x22U));
    *(uint *)(uVar43 + 0x14) = iVar42 + 0x26U;
    uVar96 = *(uint *)(pcVar45 + (iVar42 + 0x26U));
    uVar41 = uVar41 ^ uVar98 ^ 0xffffffff;
    *(int *)(uVar43 + 0x14) = iVar42 + 0x2a;
    uVar14 = uVar14 ^ uVar98 ^ 0xffffffff;
    uVar99 = 0;
    if (uVar98 != 0) {
      uVar99 = uVar41 / uVar98;
    }
    uVar96 = uVar96 ^ uVar98 ^ 0xffffffff;
    uVar97 = 0;
    if (uVar98 != 0) {
      uVar97 = uVar96 / uVar98;
    }
    uVar100 = 0;
    if (uVar98 != 0) {
      uVar100 = uVar14 / uVar98;
    }
    uVar96 = uVar96 - uVar97 * uVar98;
    uVar24 = *(ushort *)(pcVar45 + uVar96);
    FUN_00149a84_XOR((astruct_3 *)local_1e0,pcVar45,uVar98,uVar14 - uVar100 * uVar98,
                     uVar41 - uVar99 * uVar98);
    pp_Var2 = (jobject *)
              (param_1->field91_0x70 + (ulong)(ushort)(uVar24 ^ (ushort)uVar96 ^ 0xffff) * 0x10);
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
    if (cVar37 == '\0') {
      pp_Var47 = (jclass *)((ulong)local_1e0 | 1);
      if ((local_1e0[0] & 1) != 0) {
        pp_Var47 = local_1d0;
      }
      pp_Var47 = (jclass *)(*(*param_1->env)->FindClass)(param_1->env,(char *)pp_Var47);
      pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
      if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
      local_158 = (long *)*puVar46;
      local_160 = (undefined8 *)0x16f558;
      if (pp_Var47 == (jclass *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      local_170 = pp_Var47;
      local_140[0] = &local_160;
      (*(*param_1->env)->IsInstanceOf)(param_1->env,p_Var15,(jclass)pp_Var47);
      local_c0 = (undefined  [8])local_170;
      local_170 = (jclass *)0x0;
      if (local_c0 != (undefined  [8])0x0) {
        if (local_140[0] == (undefined8 **)0x0) {
          return;
        }
        (*(code *)(*local_140[0])[6])(local_140[0],local_c0);
      }
      if (local_140[0] == &local_160) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (local_140[0] != (undefined8 **)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x74:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar96 = *(uint *)(uVar43 + 0x10);
    uVar98 = *(uint *)(uVar43 + 0x14);
    lVar73 = *(long *)(uVar43 + 8);
    uVar14 = *(uint *)(lVar73 + (ulong)uVar98);
    *(uint *)(uVar43 + 0x14) = uVar98 + 4;
    uVar41 = *(uint *)(lVar73 + (ulong)(uVar98 + 4));
    *(uint *)(uVar43 + 0x14) = uVar98 + 8;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0xc;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x14;
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x18;
    uVar14 = uVar14 ^ uVar96 ^ 0xffffffff;
    sVar26 = *(short *)(lVar73 + (ulong)(uVar98 + 0x18));
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x1a;
    uVar99 = 0;
    if (uVar96 != 0) {
      uVar99 = uVar41 / uVar96;
    }
    uVar97 = *(uint *)(lVar73 + (ulong)(uVar98 + 0x1a));
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x1e;
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x22;
    uVar100 = 0;
    if (uVar96 != 0) {
      uVar100 = uVar14 / uVar96;
    }
    uVar41 = uVar41 - uVar99 * uVar96;
    uVar99 = *(uint *)(lVar73 + (ulong)(uVar98 + 0x22));
    *(uint *)(uVar43 + 0x14) = uVar98 + 0x26;
    uVar99 = uVar99 ^ uVar96 ^ 0xffffffff;
    uVar24 = *(ushort *)(lVar73 + (ulong)uVar41);
    uVar98 = 0;
    if (uVar96 != 0) {
      uVar98 = (uVar97 ^ uVar96 ^ 0xffffffff) / uVar96;
    }
    uVar97 = 0;
    if (uVar96 != 0) {
      uVar97 = uVar99 / uVar96;
    }
    func_0x00168ad4(&local_170,uVar43,uVar14 - uVar100 * uVar96,0,uVar98);
    func_0x00167db4(local_1e0,param_1->env,*(undefined8 *)&param_1->field_0x68,
                    &param_1->field91_0x70,uVar99 - uVar97 * uVar96,&local_170);
    if (local_1a0 == '\0') {
      if (sVar26 != 0) {
        iVar42 = 0;
        do {
          iVar42 = iVar42 + 1;
        } while (sVar26 != iVar42);
      }
      goto LAB_00157688;
    }
    pp_Var47 = (jclass *)
               (*(*param_1->env)->NewObjectA)
                         (param_1->env,*pp_Stack_1d8,(jmethodID)local_1e0,
                          (jvalue *)(pp_Stack_1d8 + 1));
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pplVar43 = (long **)FUN_SharedStorageGet(0x173cb0);
    local_a8 = *pplVar43;
    ppuVar67 = (undefined8 **)&local_b0;
    local_b0 = (undefined8 *)0x16f558;
    pp_Var2 = (jobject *)
              (param_1->field91_0x70 + (ulong)(ushort)(uVar24 ^ (ushort)uVar41 ^ 0xffff) * 0x10);
    local_c0 = (undefined  [8])pp_Var47;
    local_90 = ppuVar67;
    FUN_0014cc28(local_100,(jclass **)local_c0);
    plVar88 = plStack_f8;
    pp_Var47 = (jclass *)local_100;
    plVar77 = (long *)pp_Var2[1];
    local_100 = (undefined  [8])*pp_Var2;
    plStack_f8 = plVar77;
    pp_Var2[1] = (jobject)plVar88;
    *pp_Var2 = (jobject)pp_Var47;
    if ((plVar77 != (long *)0x0) &&
       (uVar43 = FUN_00129140(0xffffffffffffffff,plVar77 + 1), uVar43 == 0)) {
      (**(code **)(*plVar77 + 0x10))(plVar77);
      FUN_00119ba4(plVar77);
    }
    pp_Var47 = (jclass *)local_c0;
    if (sVar26 != 0) {
      iVar42 = 0;
      do {
        iVar42 = iVar42 + 1;
      } while (sVar26 != iVar42);
    }
    local_c0 = (undefined  [8])0x0;
    if (pp_Var47 != (jclass *)0x0) {
      local_100 = (undefined  [8])pp_Var47;
      if (local_90 == (undefined8 **)0x0) {
        return;
      }
      (*(code *)(*local_90)[6])(local_90,local_100);
    }
    if (local_90 == ppuVar67) {
      uVar43 = 4;
LAB_00157658:
      (*(code *)(*ppuVar67)[uVar43])();
    }
    else if (local_90 != (undefined8 **)0x0) {
      uVar43 = 5;
      ppuVar67 = local_90;
      goto LAB_00157658;
    }
    if (local_1a0 != '\0') {
      if (local_1c0 != 0) {
        lStack_1b8 = local_1c0;
        free();
      }
      if (pp_Stack_1d8 != (jclass *)0x0) {
        free();
      }
    }
LAB_00157688:
    local_1e0 = (undefined  [8])local_150;
    local_150 = (jclass *)0x0;
    if (local_1e0 != (undefined  [8])0x0) {
      if (local_120 == (undefined8 ***)0x0) {
        return;
      }
      (*(code *)(*local_120)[6])(local_120,local_1e0);
    }
    if (local_120 != local_140) {
      if (local_120 == (undefined8 ***)0x0) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x76:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar14 = *(uint *)(uVar43 + 0x10);
    uVar96 = *(uint *)(uVar43 + 0x14);
    lVar73 = *(long *)(uVar43 + 8);
    uVar41 = *(uint *)(lVar73 + (ulong)uVar96);
    *(uint *)(uVar43 + 0x14) = uVar96 + 4;
    uVar41 = uVar41 ^ uVar14 ^ 0xffffffff;
    *(uint *)(uVar43 + 0x14) = uVar96 + 8;
    uVar98 = 0;
    if (uVar14 != 0) {
      uVar98 = uVar41 / uVar14;
    }
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x10;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x14;
    sVar26 = *(short *)(lVar73 + (ulong)(uVar96 + 0x14));
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x16;
    uVar41 = uVar41 - uVar98 * uVar14;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x1a;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x1e;
    uVar24 = *(ushort *)(lVar73 + (ulong)uVar41);
    uVar68 = param_1->field25_0x20;
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pplVar43 = (long **)FUN_SharedStorageGet(0x173cb0);
    (**(code **)(**pplVar43 + 0xc0))(*pplVar43,uVar68,0);
    plVar77 = (long *)(param_1->field91_0x70 +
                      (ulong)(ushort)(uVar24 ^ (ushort)uVar41 ^ 0xffff) * 0x10);
    FUN_0014cc28(&local_170,(jclass **)&param_1->field25_0x20);
    pp_Var47 = (jclass *)*plVar77;
    plVar88 = (long *)plVar77[1];
    plVar77[1] = (long)plStack_168;
    *plVar77 = (long)local_170;
    if ((plVar88 != (long *)0x0) &&
       (local_170 = pp_Var47, plStack_168 = plVar88,
       uVar43 = FUN_00129140(0xffffffffffffffff,plVar88 + 1), uVar43 == 0)) {
      (**(code **)(*plVar88 + 0x10))(plVar88);
      FUN_00119ba4(plVar88);
    }
    iVar42 = (int)sVar26;
    if (iVar42 == 0) {
      return;
    }
    iVar39 = 0;
    do {
      iVar39 = iVar39 + 1;
    } while (iVar42 != iVar39);
    return;
  case 0x7a:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar14 = *(uint *)(uVar43 + 0x10);
    uVar96 = *(uint *)(uVar43 + 0x14);
    lVar73 = *(long *)(uVar43 + 8);
    uVar41 = *(uint *)(lVar73 + (ulong)uVar96);
    *(uint *)(uVar43 + 0x14) = uVar96 + 4;
    uVar41 = uVar41 ^ uVar14 ^ 0xffffffff;
    *(uint *)(uVar43 + 0x14) = uVar96 + 8;
    uVar98 = 0;
    if (uVar14 != 0) {
      uVar98 = uVar41 / uVar14;
    }
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x10;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x14;
    sVar26 = *(short *)(lVar73 + (ulong)(uVar96 + 0x14));
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x16;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x1a;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x1e;
    uVar99 = *(uint *)(lVar73 + (ulong)(uVar96 + 0x1e));
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x22;
    func_0x00169010(&local_170,uVar43,uVar41 - uVar98 * uVar14,1);
    FUN_00149a84_XOR((astruct_3 *)local_1e0,(char *)local_170[1],*(undefined4 *)(local_170 + 2),
                     local_10c,plStack_168._0_4_);
    p_Var78 = (jclass)func_0x00168e38(&local_160,param_1->env);
    if (p_Var78 == (jclass)0x0) {
      if (sVar26 != 0) {
        iVar42 = 0;
        do {
          iVar42 = iVar42 + 1;
        } while (sVar26 != iVar42);
      }
    }
    else {
      p_Var55 = (jfieldID)func_0x00168c3c(&local_170,param_1->env);
      if (p_Var55 != (jfieldID)0x0) {
        uVar99 = uVar99 ^ uVar14 ^ 0xffffffff;
        uVar41 = 0;
        if (uVar14 != 0) {
          uVar41 = uVar99 / uVar14;
        }
        pp_Var47 = (jclass *)((ulong)local_1e0 | 1);
        if ((local_1e0[0] & 1) != 0) {
          pp_Var47 = local_1d0;
        }
        _Var23 = *(_jobject *)pp_Var47;
        if ((byte)_Var23 < 0x4a) {
          if ((byte)_Var23 < 0x44) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (_Var23 == (_jobject)0x44) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (_Var23 == (_jobject)0x46) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (_Var23 == (_jobject)0x49) {
            jVar56 = (*(*param_1->env)->GetStaticIntField)(param_1->env,p_Var78,p_Var55);
            *(int *)(*(long *)(*(long *)&param_1->field_0x68 + 8) +
                    (ulong)(uVar99 - uVar41 * uVar14)) = (int)jVar56;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else {
          if ((byte)_Var23 < 0x53) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (_Var23 == (_jobject)0x53) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (_Var23 == (_jobject)0x5a) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (_Var23 == (_jobject)0x5b) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (sVar26 != 0) {
        iVar42 = 0;
        do {
          iVar42 = iVar42 + 1;
        } while (sVar26 != iVar42);
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7b:
    lVar73 = *(long *)&param_1->field_0x68;
    uVar96 = *(uint *)(lVar73 + 0x10);
    uVar98 = *(uint *)(lVar73 + 0x14);
    uVar43 = *(long *)(lVar73 + 8);
    uVar41 = *(uint *)(uVar43 + (ulong)uVar98);
    *(uint *)(lVar73 + 0x14) = uVar98 + 4;
    uVar14 = *(uint *)(uVar43 + (ulong)(uVar98 + 4));
    *(uint *)(lVar73 + 0x14) = uVar98 + 8;
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    *(uint *)(lVar73 + 0x14) = uVar98 + 0xc;
    uVar14 = uVar14 ^ uVar96 ^ 0xffffffff;
    uVar99 = 0;
    if (uVar96 != 0) {
      uVar99 = uVar41 / uVar96;
    }
    *(uint *)(lVar73 + 0x14) = uVar98 + 0x14;
    *(uint *)(lVar73 + 0x14) = uVar98 + 0x18;
    sVar26 = *(short *)(uVar43 + (ulong)(uVar98 + 0x18));
    *(uint *)(lVar73 + 0x14) = uVar98 + 0x1a;
    uVar97 = 0;
    if (uVar96 != 0) {
      uVar97 = uVar14 / uVar96;
    }
    uVar14 = uVar14 - uVar97 * uVar96;
    *(uint *)(lVar73 + 0x14) = uVar98 + 0x1e;
    *(uint *)(lVar73 + 0x14) = uVar98 + 0x22;
    uVar41 = uVar41 - uVar99 * uVar96;
    lVar73 = param_1->field91_0x70;
    uVar24 = *(ushort *)(uVar43 + (ulong)uVar41);
    puVar46 = (undefined8 *)
              (lVar73 + ((ulong)((uint)*(ushort *)(uVar43 + (ulong)uVar14) ^ uVar14 ^ 0xffffffff) &
                        0xffff) * 0x10);
    uVar43 = puVar46[1];
    uVar90 = *puVar46;
    if (uVar43 != 0) {
      FUN_00129110(1,uVar43 + 8);
    }
    puVar46 = (undefined8 *)(lVar73 + ((ulong)((uint)uVar24 ^ uVar41 ^ 0xffffffff) & 0xffff) * 0x10)
    ;
    plVar77 = (long *)puVar46[1];
    puVar46[1] = uVar43;
    *puVar46 = uVar90;
    if ((plVar77 != (long *)0x0) &&
       (uVar43 = FUN_00129140(0xffffffffffffffff,plVar77 + 1), uVar43 == 0)) {
      (**(code **)(*plVar77 + 0x10))(plVar77);
      FUN_00119ba4(plVar77);
    }
    iVar42 = (int)sVar26;
    if (iVar42 != 0) {
      iVar39 = 0;
      do {
        iVar39 = iVar39 + 1;
      } while (iVar42 != iVar39);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7e:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar14 = *(uint *)(uVar43 + 0x10);
    uVar96 = *(uint *)(uVar43 + 0x14);
    lVar73 = *(long *)(uVar43 + 8);
    uVar41 = *(uint *)(lVar73 + (ulong)uVar96);
    *(uint *)(uVar43 + 0x14) = uVar96 + 4;
    *(uint *)(uVar43 + 0x14) = uVar96 + 8;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0xc;
    uVar41 = uVar41 ^ uVar14 ^ 0xffffffff;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x14;
    uVar98 = 0;
    if (uVar14 != 0) {
      uVar98 = uVar41 / uVar14;
    }
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x18;
    sVar26 = *(short *)(lVar73 + (ulong)(uVar96 + 0x18));
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x1a;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x1e;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x22;
    uVar99 = *(uint *)(lVar73 + (ulong)(uVar96 + 0x22)) ^ uVar14 ^ 0xffffffff;
    uVar97 = 0;
    if (uVar14 != 0) {
      uVar97 = uVar99 / uVar14;
    }
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x26;
    func_0x00168ad4(&local_170,uVar43,uVar99 - uVar97 * uVar14,0);
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
      uVar43 = 4;
    }
    else {
      if (local_90 == (undefined8 **)0x0) goto LAB_00157fb8;
      uVar43 = 5;
      plVar77 = (long *)local_90;
    }
    (**(code **)(*plVar77 + uVar43 * 8))();
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
  case 0x82:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar14 = *(uint *)(uVar43 + 0x10);
    uVar96 = *(uint *)(uVar43 + 0x14);
    lVar73 = *(long *)(uVar43 + 8);
    uVar41 = *(uint *)(lVar73 + (ulong)uVar96);
    *(uint *)(uVar43 + 0x14) = uVar96 + 4;
    *(uint *)(uVar43 + 0x14) = uVar96 + 8;
    uVar41 = uVar41 ^ uVar14 ^ 0xffffffff;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x10;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x14;
    sVar26 = *(short *)(lVar73 + (ulong)(uVar96 + 0x14));
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x16;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x1a;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x1e;
    uVar98 = 0;
    if (uVar14 != 0) {
      uVar98 = uVar41 / uVar14;
    }
    uVar99 = *(uint *)(lVar73 + (ulong)(uVar96 + 0x1e));
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x22;
    uVar99 = uVar99 ^ uVar14 ^ 0xffffffff;
    uVar96 = 0;
    if (uVar14 != 0) {
      uVar96 = uVar99 / uVar14;
    }
    uVar41 = uVar41 - uVar98 * uVar14;
    uVar24 = *(ushort *)(lVar73 + (ulong)uVar41);
    fVar102 = *(float *)(lVar73 + (ulong)(uVar99 - uVar96 * uVar14));
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    pp_Var47 = (jclass *)FUN_00149cc8((double)fVar102,*puVar46,_DAT_001749b8,_DAT_00174a48);
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    local_158 = (long *)*puVar46;
    ppuVar67 = &local_160;
    local_160 = (undefined8 *)0x16f558;
    pp_Var62 = (jclass *)
               (param_1->field91_0x70 + (ulong)(ushort)(uVar24 ^ (ushort)uVar41 ^ 0xffff) * 0x10);
    local_170 = pp_Var47;
    local_140[0] = ppuVar67;
    FUN_0014cc28(local_1e0,(jclass **)&local_170);
    pp_Var36 = pp_Stack_1d8;
    pp_Var21 = (jclass *)local_1e0;
    pp_Var47 = (jclass *)pp_Var62[1];
    local_1e0 = (undefined  [8])*pp_Var62;
    pp_Stack_1d8 = pp_Var47;
    pp_Var62[1] = (jclass)pp_Var36;
    *pp_Var62 = (jclass)pp_Var21;
    if ((pp_Var47 != (jclass *)0x0) &&
       (uVar43 = FUN_00129140(0xffffffffffffffff,pp_Var47 + 1), uVar43 == 0)) {
      (**(code **)(*pp_Var47 + 0x10))(pp_Var47);
      FUN_00119ba4(pp_Var47);
    }
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
      uVar43 = 4;
LAB_001568b8:
      (*(code *)(*ppuVar67)[uVar43])();
    }
    else if (local_140[0] != (undefined8 **)0x0) {
      uVar43 = 5;
      ppuVar67 = local_140[0];
      goto LAB_001568b8;
    }
    iVar42 = (int)sVar26;
    if (iVar42 != 0) {
      iVar39 = 0;
      do {
        iVar39 = iVar39 + 1;
      } while (iVar42 != iVar39);
    }
    break;
  case 0x83:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar96 = *(uint *)(uVar43 + 0x10);
    iVar42 = *(int *)(uVar43 + 0x14);
    lVar73 = *(long *)(uVar43 + 8);
    *(int *)(uVar43 + 0x14) = iVar42 + 4;
    *(int *)(uVar43 + 0x14) = iVar42 + 0xc;
    *(uint *)(uVar43 + 0x14) = iVar42 + 0x10U;
    sVar26 = *(short *)(lVar73 + (ulong)(iVar42 + 0x10U));
    *(int *)(uVar43 + 0x14) = iVar42 + 0x12;
    *(int *)(uVar43 + 0x14) = iVar42 + 0x16;
    *(uint *)(uVar43 + 0x14) = iVar42 + 0x1aU;
    uVar41 = *(uint *)(lVar73 + (ulong)(iVar42 + 0x1aU));
    *(uint *)(uVar43 + 0x14) = iVar42 + 0x1eU;
    uVar41 = uVar41 ^ uVar96 ^ 0xffffffff;
    uVar14 = *(uint *)(lVar73 + (ulong)(iVar42 + 0x1eU));
    *(int *)(uVar43 + 0x14) = iVar42 + 0x22;
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
    uVar43 = *(long *)&param_1->field_0x68;
    jVar56 = (*(*param_1->env)->MonitorExit)(param_1->env,p_Var15);
    *(int *)(*(long *)(uVar43 + 8) + (ulong)(uVar14 - uVar41 * uVar96)) = (int)jVar56;
    iVar42 = (int)sVar26;
    if (iVar42 != 0) {
      iVar39 = 0;
      do {
        iVar39 = iVar39 + 1;
      } while (iVar42 != iVar39);
    }
LAB_00157a20:
    if ((plVar77 != (long *)0x0) &&
       (uVar43 = FUN_00129140(0xffffffffffffffff,plVar77 + 1), uVar43 == 0)) {
      (**(code **)(*plVar77 + 0x10))(plVar77);
      FUN_00119ba4(plVar77);
    }
    break;
  case 0x98:
    uVar43 = *(long *)&param_1->field_0x68;
    uVar14 = *(uint *)(uVar43 + 0x10);
    uVar96 = *(uint *)(uVar43 + 0x14);
    lVar73 = *(long *)(uVar43 + 8);
    uVar41 = *(uint *)(lVar73 + (ulong)uVar96);
    *(uint *)(uVar43 + 0x14) = uVar96 + 4;
    *(uint *)(uVar43 + 0x14) = uVar96 + 8;
    uVar41 = uVar41 ^ uVar14 ^ 0xffffffff;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x10;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x14;
    uVar98 = 0;
    if (uVar14 != 0) {
      uVar98 = uVar41 / uVar14;
    }
    sVar26 = *(short *)(lVar73 + (ulong)(uVar96 + 0x14));
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x16;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x1a;
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x1e;
    uVar99 = *(uint *)(lVar73 + (ulong)(uVar96 + 0x1e));
    *(uint *)(uVar43 + 0x14) = uVar96 + 0x22;
    uVar99 = uVar99 ^ uVar14 ^ 0xffffffff;
    uVar96 = 0;
    if (uVar14 != 0) {
      uVar96 = uVar99 / uVar14;
    }
    iVar42 = *(int *)(lVar73 + (ulong)(uVar41 - uVar98 * uVar14));
    uVar99 = uVar99 - uVar96 * uVar14;
    uVar24 = *(ushort *)(lVar73 + (ulong)uVar99);
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    pp_Var47 = (jclass *)FUN_00149cc8(*puVar46,_DAT_00174a50,_DAT_00174a38,iVar42 != 0);
    pcVar45 = (char *)FUN_SharedStorageGet(0x173c90);
    if (*pcVar45 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar46 = (undefined8 *)FUN_SharedStorageGet(0x173cb0);
    local_158 = (long *)*puVar46;
    ppuVar67 = &local_160;
    local_160 = (undefined8 *)0x16f558;
    pp_Var62 = (jclass *)
               (param_1->field91_0x70 + (ulong)(ushort)(uVar24 ^ (ushort)uVar99 ^ 0xffff) * 0x10);
    local_170 = pp_Var47;
    local_140[0] = ppuVar67;
    FUN_0014cc28(local_1e0,(jclass **)&local_170);
    pp_Var36 = pp_Stack_1d8;
    pp_Var21 = (jclass *)local_1e0;
    pp_Var47 = (jclass *)pp_Var62[1];
    local_1e0 = (undefined  [8])*pp_Var62;
    pp_Stack_1d8 = pp_Var47;
    pp_Var62[1] = (jclass)pp_Var36;
    *pp_Var62 = (jclass)pp_Var21;
    if ((pp_Var47 != (jclass *)0x0) &&
       (uVar43 = FUN_00129140(0xffffffffffffffff,pp_Var47 + 1), uVar43 == 0)) {
      (**(code **)(*pp_Var47 + 0x10))(pp_Var47);
      FUN_00119ba4(pp_Var47);
    }
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
      uVar43 = 4;
LAB_00156b20:
      (*(code *)(*ppuVar67)[uVar43])();
    }
    else if (local_140[0] != (undefined8 **)0x0) {
      uVar43 = 5;
      ppuVar67 = local_140[0];
      goto LAB_00156b20;
    }
    iVar42 = (int)sVar26;
    if (iVar42 != 0) {
      iVar39 = 0;
      do {
        iVar39 = iVar39 + 1;
      } while (iVar42 != iVar39);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

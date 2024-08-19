#include "gvm/types.h"

typedef struct {
    
} insn_0x1d_t;


void case_0x1d()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;

  
    vm_context = &local_220.data;
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
            if (local_1f0 == vm_context) {
              uVar43 = 4;
              ppcVar48 = vm_context;
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
    local_1f0 = vm_context;
    goto LAB_0014fa2c;
  
}

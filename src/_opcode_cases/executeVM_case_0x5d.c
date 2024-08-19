#include "gvm/types.h"

typedef struct {
    
} insn_0x5d_t;


void case_0x5d()
{
    vm_context_t *vm_context;
    char *vm_code;
    uint pc_base, code_length;

  
    vm_context = *(vm_t **)&param_1->field_0x68;
    ppJVar79 = vm_context->env;
    plVar88 = (long *)&vm_context->field_0x14;
    iVar42 = *(int *)plVar88;
    puVar44 = &vm_context->field_0x10;
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
    ppJVar79 = vm_context->env;
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
      vm_context = (vm_t *)0x1fffffffffffffff;
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
                      vm_context = (vm_t *)0x0;
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
                          if (vm_context < local_338) {
                            *(char **)&vm_context->field_0x10 = local_220.data;
                            vm_context->env = (JNIEnv *)local_220.capacity;
                            *(long *)vm_context = local_220.length;
                            local_220.data = (char *)0x0;
                            local_220.capacity = 0;
                            local_220.length = 0;
                            vm_context = (vm_t *)&vm_context->field_0x18;
                          }
                          else {
                            uVar43 = (long)vm_context - (long)param_1 >> 3;
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
                            pvVar71 = vm_context;
                            pvVar85 = pvVar83;
                            if (vm_context != param_1) {
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
                                puVar44 = &vm_context[-1].field_0x60;
                                if ((*puVar44 & 1) != 0) {
                                  free(vm_context[-1].field91_0x70);
                                }
                                vm_context = (vm_t *)puVar44;
                                pvVar71 = param_1;
                              } while ((vm_t *)puVar44 != param_1);
                            }
                            param_1 = pvVar85;
                            local_338 = (vm_t *)(lVar73 + uVar74 * 0x18);
                            vm_context = (vm_t *)&pvVar83->field_0x18;
                            if (pvVar71 != (vm_t *)0x0) {
                              free();
                              vm_context = (vm_t *)&pvVar83->field_0x18;
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
                                 (plVar88,(int)((ulong)((long)vm_context - (long)param_1) >> 3) *
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
          uVar68 = ((long)vm_context - (long)param_1 >> 3) * -0x5555555555555555;
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
  
}

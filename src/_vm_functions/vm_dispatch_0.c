#include "gvm/dispatcher.h"
/* WARNING: Possible PIC construction at 0x001459a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x001459a4) */
/* WARNING: Removing unreachable block (ram,0x00149e4c) */
/* WARNING: Removing unreachable block (ram,0x00149e58) */
/* WARNING: Removing unreachable block (ram,0x00149678) */
/* WARNING: Removing unreachable block (ram,0x0014967c) */
/* WARNING: Removing unreachable block (ram,0x00149e44) */
/* WARNING: Removing unreachable block (ram,0x00149e38) */

jobject vm_dispatch_0(VMContext *pVMState,jobject args)

{
  void *pvVar1;
  jobject *pp_Var2;
  undefined4 uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  jobject p_Var8;
  bool bVar9;
  __pid_t _Var10;
  int iVar11;
  JNIEnv **pJNIEnvEntry;
  jobject p_Var12;
  undefined ***pppuVar13;
  long *puVar16;
  long paVar16;
  long paVar17;
  long lVar14;
  jclass p_Var15;
  char *puVar17;
  jmethodID p_Var16;
  undefined *puVar18;
  uint uVar19;
  char *pvmCode;
  long lVar20;
  uint uVar21;
  uint uVar22;
  long *plVar23;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  undefined4 uVar31;
  size_t __n;
  JNIEnv *ppJVar32;
  long lVar33;
  uint uVar34;
  pairip_vm_state_t *ppVar35;
  ulong uVar36;
  long *plVar37;
  float fVar38;
  double dVar39;
  jobject local_200;
  uint opcode;
  pairip_vm_t vm;
  char **local_1b0;
  pairip_vm_state_t *local_1a8;
  pairip_vm_t *local_1a0;
  jobject local_190;
  JNIEnv apJStack_180 [4];
  JNIEnv *local_160;
  astruct *local_150;
  pairip_vm_state_t *local_148;
  astruct local_140;
  undefined **ppuStack_110;
  pairip_vm_state_t *ppStack_108;
  undefined ***pppuStack_f0;
  astruct_2 aaStack_e0 [2];
  astruct_2 *paStack_c0;
  undefined local_b0 [8];
  long local_a8;
  astruct_2 local_a0 [2];
  astruct_2 *local_80;
  long _tpidr_el0_sp;
  pairip_vm_state_t *paVar11;
  long _tpidr_el0;
  uint codeLength;
  uint uVar20;
  uint uVar24;

  _tpidr_el0 = tpidr_el0;
  _tpidr_el0_sp = *(long *)(_tpidr_el0 + 0x28);
  pJNIEnvEntry = (JNIEnv **)FUN_SharedStorageGet(&ENTRY_JNIENV);
  plVar37 = &local_140.field4_0x20;
  uVar21 = 0x6521a767;
switchD_00145a3c_caseD_5:
  do {
    while( true ) {
      uVar19 = uVar21;
      plVar23 = plVar37;
      lVar33 = local_140.field0_0x0;
      paVar11 = vm.context;
      plVar37 = (long *)((ulong)plVar23 & 0xffffffff);
      uVar20 = (uint)plVar23;
      uVar21 = 0x4f04d9fd;
      if (0x56507049 < (int)uVar19) break;
      if ((int)uVar19 < -0x132e183e) {
        if (uVar19 == 0xae6dd400) {
          plVar37 = (long *)0x1;
          uVar21 = 0xecd1e7c2;
        }
        else {
          if (uVar19 != 0xdc53db48) goto SUB_00145ba4;
          uVar25 = FUN_0012d7e8((pairip_vm_head_t *)&vm.field1_0x8,opcode);
          if ((uVar25 & 1) == 0) {
            uVar21 = 0x7c659428;
          }
        }
      }
      else {
        if (uVar19 == 0xecd1e7c2) {
          uVar19 = 0x5650704a;
          uVar21 = 0x63363c4f;
          local_200 = (jobject)0x0;
          goto LAB_00145b88;
        }
        plVar37 = (long *)0x0;
        uVar21 = 0xecd1e7c2;
        if (uVar19 != 0x4f04d9fd) {
SUB_00145ba4:
          pvmCode = pVMState->vmCode;
          codeLength = pVMState->vmCodeLength;
          uVar24 = *(uint *)(pvmCode + 4);
          uVar21 = (uVar24 | 0x5c) + (uVar24 & 0x5c);
          uVar5 = *(ushort *)(pvmCode + uVar21);
          uVar20 = *(uint *)(pvmCode + (uVar24 + 0x5e)) ^ codeLength ^ 0xffffffff;
          uVar22 = 0;
          if (codeLength != 0) {
            uVar22 = uVar20 / codeLength;
          }
          uVar20 = uVar20 - uVar22 * codeLength;
          uVar6 = *(ushort *)(pvmCode + uVar20);
          uVar24 = *(uint *)(pvmCode + ((uVar24 << 1 | 0xc5) + (uVar24 ^ 0xffffff9d)));
          vm.field0_0x0 = (void *)0x0;
          vm.field1_0x8 = &PTR_FUN_0016f018;
          local_1b0 = &PTR_FUN_0016f4b8;
          vm.context = pVMState;
          pvmCode = (char *)FUN_SharedStorageGet(&ENTRY_JNISET);
          iVar30 = INT_PID;
          if (*pvmCode == '\x01') {
            ppVar35 = (pairip_vm_state_t *)*pJNIEnvEntry;
          }
          else {
            local_140.field4_0x20 = 0;
            if (((PTR_JNI == (JNIEnv *)0x0) || (INT_PID == 0)) ||
               (_Var10 = getpid(), iVar30 != _Var10)) {
LAB_00149d0c:
              ppVar35 = (pairip_vm_state_t *)0x0;
            }
            else {
              p_Var15 = (*(*PTR_JNI)->FindClass)(PTR_JNI,(char *)&local_140.field4_0x20);
              if ((int)p_Var15 == -2) {
                aaStack_e0[0].field0_0x0 = (undefined **)0x0;
                local_b0 = (undefined  [8])CONCAT44(local_b0._4_4_,0x10006);
                local_a8 = 0;
                local_a0[0].field0_0x0 = (undefined **)0x0;
                p_Var16 = (*(*PTR_JNI)->FromReflectedMethod)(PTR_JNI,(jobject)aaStack_e0);
                ppVar35 = (pairip_vm_state_t *)aaStack_e0[0].field0_0x0;
                if ((int)p_Var16 != 0) {
                  ppVar35 = (pairip_vm_state_t *)0x0;
                }
              }
              else {
                ppVar35 = (pairip_vm_state_t *)local_140.field4_0x20;
                if ((int)p_Var15 != 0) goto LAB_00149d0c;
              }
            }
            *pJNIEnvEntry = (JNIEnv *)ppVar35;
            puVar18 = (undefined *)FUN_SharedStorageGet(&ENTRY_JNISET);
            *puVar18 = 1;
          }
          uVar24 = uVar24 ^ codeLength ^ 0xffffffff;
          local_190 = (jobject)0x0;
          uVar22 = 0;
          if (codeLength != 0) {
            uVar22 = uVar24 / codeLength;
          }
          local_160 = (JNIEnv *)0x0;
          uVar24 = uVar24 - uVar22 * codeLength;
          local_1a0 = &vm;
          uVar21 = (uVar5 ^ uVar21) & 0xffff;
          uVar25 = (ulong)(uVar21 ^ 0xffff);
          local_150 = (astruct *)
                      (((ulong)((uint)uVar6 ^ uVar20 ^ 0xffffffff) & 0xffff) << 0x10 |
                       (ulong)uVar24 << 0x20 | uVar25);
          local_140.field1_0x8 = 0;
          local_140.field2_0x10 = 0;
          local_140.field0_0x0 = 0;
          local_1a8 = ppVar35;
          local_148 = pVMState;
          if (uVar21 != 0xffff) {
            __n = uVar25 * 0x10;
            local_140.field0_0x0 = (long)malloc0(__n);
            pvVar1 = (void *)(local_140.field0_0x0 + __n);
            local_140.field2_0x10 = (long)pvVar1;
            memset((void *)local_140.field0_0x0,0,__n);
            local_140.field1_0x8 = (long)pvVar1;
          }
          if ((args != (jobject)0x0) &&
             (uVar25 = (*((JNIEnv)ppVar35->ptrTable)->GetArrayLength)((JNIEnv *)ppVar35,args),
             0 < (int)uVar25)) {
            lVar33 = 0;
            uVar36 = 0;
            do {
              p_Var12 = (*((JNIEnv)local_1a8->ptrTable)->GetObjectArrayElement)
                                  ((JNIEnv *)local_1a8,args,uVar36 & 0xffffffff);
              pvmCode = (char *)FUN_SharedStorageGet(&ENTRY_JNISET);
              iVar30 = INT_PID;
              if (*pvmCode == '\x01') {
                ppVar35 = (pairip_vm_state_t *)*pJNIEnvEntry;
              }
              else {
                aaStack_e0[0].field0_0x0 = (undefined **)0x0;
                if (((PTR_JNI == (JNIEnv *)0x0) || (INT_PID == 0)) ||
                   (_Var10 = getpid(), iVar30 != _Var10)) {
LAB_00145fbc:
                  ppVar35 = (pairip_vm_state_t *)0x0;
                }
                else {
                  p_Var15 = (*(*PTR_JNI)->FindClass)(PTR_JNI,(char *)aaStack_e0);
                  if ((int)p_Var15 == -2) {
                    vm.field3_0x18 = 0;
                    local_b0 = (undefined  [8])CONCAT44(local_b0._4_4_,0x10006);
                    local_a8 = 0;
                    local_a0[0].field0_0x0 = (undefined **)0x0;
                    p_Var16 = (*(*PTR_JNI)->FromReflectedMethod)(PTR_JNI,(jobject)&vm.field3_0x18);
                    ppVar35 = (pairip_vm_state_t *)vm.field3_0x18;
                    if ((int)p_Var16 != 0) {
                      ppVar35 = (pairip_vm_state_t *)0x0;
                    }
                  }
                  else {
                    ppVar35 = (pairip_vm_state_t *)aaStack_e0[0].field0_0x0;
                    if ((int)p_Var15 != 0) goto LAB_00145fbc;
                  }
                }
                *pJNIEnvEntry = (JNIEnv *)ppVar35;
                puVar17 = (char *)FUN_SharedStorageGet(&ENTRY_JNISET);
                *puVar17 = '\x01';
              }
              lVar14 = local_140.field0_0x0;
              ppuStack_110 = &PTR_LAB_0016f558;
              ppStack_108 = ppVar35;
              pppuStack_f0 = &ppuStack_110;
              if (p_Var12 == (jobject)0x0) {
                puVar16 = (long *)0x0;
              }
              else {
                local_140.field4_0x20 = (long)p_Var12;
                puVar16 = (long *)malloc0(0x60);
                paStack_c0 = aaStack_e0;
                FUN_00167aa0((long)&ppuStack_110,aaStack_e0);
                puVar16[1] = 0;
                puVar16[2] = 0;
                *puVar16 = (long)&PTR_FUN_0016f240;
                local_b0 = (undefined  [8])p_Var12;
                if (paStack_c0 == (astruct_2 *)0x0) {
                  puVar16[4] = (long)p_Var12;
LAB_00145de8:
                  puVar16[10] = 0;
                }
                else {
                  if (paStack_c0 == aaStack_e0) {
                    local_80 = local_a0;
                    (*(code *)((pairip_vm_state_t *)((long)aaStack_e0[0].field0_0x0 + 0x18))->
                              ptrTable)(aaStack_e0);
                    puVar16[4] = (long)local_b0;
                    if (local_80 == (astruct_2 *)0x0) goto LAB_00145de8;
                  }
                  else {
                    local_80 = paStack_c0;
                    paStack_c0 = (astruct_2 *)0x0;
                    puVar16[4] = (long)p_Var12;
                  }
                  if (local_80 == local_a0) {
                    puVar16[10] = (long)(puVar16 + 6);
                    (*(code *)local_a0[0].field0_0x0[3])(local_a0);
                    if (local_80 == local_a0) {
                      lVar20 = 4;
                      paVar16 = (long)local_a0;
                    }
                    else {
                      if (local_80 == (astruct_2 *)0x0) goto LAB_00145ea4;
                      lVar20 = 5;
                      paVar16 = (long)local_80;
                    }
                    (**(code **)(*(long *)paVar16 + lVar20 * 8))();
                  }
                  else {
                    puVar16[10] = (long)local_80;
                  }
                }
LAB_00145ea4:
                if (paStack_c0 == aaStack_e0) {
                  paVar17 = (long)aaStack_e0;
                  lVar20 = 4;
                }
                else {
                  if (paStack_c0 == (astruct_2 *)0x0) goto LAB_00145ed4;
                  lVar20 = 5;
                  paVar17 = (long)paStack_c0;
                }
                (**(code **)(*(long *)paVar17 + lVar20 * 8))();
              }
LAB_00145ed4:
              local_140.field4_0x20 = 0;
              pp_Var2 = (jobject *)(lVar14 + lVar33);
              ppJVar32 = (JNIEnv *)pp_Var2[1];
              *pp_Var2 = p_Var12;
              pp_Var2[1] = (jobject)puVar16;
              p_Var8 = (jobject)local_140.field4_0x20;
              p_Var12 = (jobject)local_b0;
              if ((ppJVar32 != (JNIEnv *)0x0) &&
                 (lVar14 = FUN_00129130(0xffffffffffffffff,ppJVar32 + 1),
                 p_Var8 = (jobject)local_140.field4_0x20, p_Var12 = (jobject)local_b0, lVar14 == 0))
              {
                (*(code *)(*ppJVar32)->reserved2)(ppJVar32);
                JNIEnv_GetVersion(ppJVar32);
                p_Var8 = (jobject)local_140.field4_0x20;
                p_Var12 = (jobject)local_b0;
              }
              local_b0 = (undefined  [8])p_Var8;
              local_140.field4_0x20 = 0;
              if (local_b0 != (undefined  [8])0x0) {
                local_140.field4_0x20 = 0;
                if (pppuStack_f0 == (undefined ***)0x0) goto LAB_00149f80;
                (*(code *)(*pppuStack_f0)[6])(pppuStack_f0,local_b0);
                p_Var12 = (jobject)local_b0;
              }
              local_b0 = (undefined  [8])p_Var12;
              if (pppuStack_f0 == &ppuStack_110) {
                lVar14 = 4;
                pppuVar13 = &ppuStack_110;
LAB_00145d00:
                (*(code *)(*pppuVar13)[lVar14])();
              }
              else if (pppuStack_f0 != (undefined ***)0x0) {
                lVar14 = 5;
                pppuVar13 = pppuStack_f0;
                goto LAB_00145d00;
              }
              uVar36 = uVar36 + 1;
              lVar33 = lVar33 + 0x10;
            } while ((uVar25 & 0xffffffff) != uVar36);
          }
          pVMState->pc = uVar24;
          plVar37 = (long *)((ulong)plVar23 & 0xffffffff);
          uVar21 = (uVar19 ^ 0xfe1494e8) + ~(uVar19 & 0xfe1494e8) + (uVar19 & 0xfe1494e8) * 3 + 1;
        }
      }
    }
    if ((int)uVar19 < 0x6f6dab66) {
      if (uVar19 == 0x63363c4f) {
        uVar20 = pVMState->pc;
        uVar21 = 0x69a86af7;
        uVar19 = 0x6f6dab66;
LAB_00145b88:
        if (uVar20 != 0) {
          uVar21 = uVar19;
        }
      }
      else {
        if (uVar19 != 0x69a86af7) {
          if (uVar19 != 0x5650704a) goto SUB_00145ba4;
          local_1b0 = &PTR_FUN_0016f4b8;
          lVar14 = local_140.field1_0x8;
          if (local_140.field0_0x0 != 0) {
            for (; lVar14 != lVar33; lVar14 = lVar14 + -0x10) {
              ppJVar32 = *(JNIEnv **)(lVar14 + -8);
              if ((ppJVar32 != (JNIEnv *)0x0) &&
                 (lVar20 = FUN_00129130(0xffffffffffffffff,ppJVar32 + 1), lVar20 == 0)) {
                (*(code *)(*ppJVar32)->reserved2)(ppJVar32);
                JNIEnv_GetVersion(ppJVar32);
              }
            }
            local_140.field1_0x8 = lVar33;
            free((void *)local_140.field0_0x0);
          }
          p_Var12 = local_190;
          local_190 = (jobject)0x0;
          if (p_Var12 == (jobject)0x0) {
            if (local_160 != apJStack_180) goto LAB_00149f18;
LAB_00149f38:
            lVar33 = 4;
          }
          else {
            local_b0 = (undefined  [8])p_Var12;
            if (local_160 == (JNIEnv *)0x0) {
LAB_00149f80:
                    /* WARNING: Subroutine does not return */
              bad_function_call();
            }
            (*(*local_160)->FindClass)(local_160,local_b0);
            if (local_160 == apJStack_180) goto LAB_00149f38;
LAB_00149f18:
            if (local_160 == (JNIEnv *)0x0) goto LAB_00149f48;
            lVar33 = 5;
          }
          (*(code *)(&(*local_160)->reserved0)[lVar33])();
LAB_00149f48:
          if (*(long *)(_tpidr_el0 + 0x28) == _tpidr_el0_sp) {
            return local_200;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar25 = (ulong)local_150 >> 0x10 & 0xffff;
        if (uVar25 < (ulong)(local_140.field1_0x8 - local_140.field0_0x0 >> 4)) {
          if (local_190 == (jobject)0x0) {
            p_Var12 = (*((JNIEnv)local_1a8->ptrTable)->NewLocalRef)
                                ((JNIEnv *)local_1a8,
                                 *(jobject *)(local_140.field0_0x0 + uVar25 * 0x10));
          }
          else {
            p_Var12 = (jobject)0x0;
          }
          local_1a0->field0_0x0 = p_Var12;
        }
        if (local_190 != (jthrowable)0x0) {
          (*((JNIEnv)local_1a8->ptrTable)->Throw)((JNIEnv *)local_1a8,local_190);
          p_Var12 = local_190;
          local_190 = (jobject)0x0;
          if (p_Var12 != (jobject)0x0) {
            local_b0 = (undefined  [8])p_Var12;
            if (local_160 == (JNIEnv *)0x0) goto LAB_00149f80;
            (*(*local_160)->FindClass)(local_160,local_b0);
          }
        }
        local_200 = (jobject)vm.field0_0x0;
        uVar21 = 0x5650704a;
      }
      goto switchD_00145a3c_caseD_5;
    }
    if (uVar19 == 0x6f6dab66) {
      uVar20 = pVMState->pc;
      uVar21 = *(ushort *)(pVMState->vmCode + uVar20) ^ 0xffffff64;
      uVar19 = (uVar21 & 0xffff) * 0xa6d1 >> 0x10;
      opcode = uVar21 + (uVar19 + ((uVar21 - uVar19 & 0xfffe) >> 1) >> 7 & 0x1ff) * -0x9b;
      pVMState->pc = (uVar20 ^ 2) + uVar20 * 2 + (~uVar20 << 1 | 4) + 2;
      uVar21 = 0xdc53db48;
      switch(opcode & 0xffff) {
      case 4:
        uVar20 = (vm.context)->vmCodeLength;
        codeLength = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + codeLength);
        (vm.context)->pc = codeLength + 4;
        uVar26 = *(uint *)(pvmCode + (codeLength + 4));
        (vm.context)->pc = codeLength + 8;
        uVar25 = *(ulong *)(pvmCode + (codeLength + 8));
        (vm.context)->pc = codeLength + 0x10;
        uVar19 = *(uint *)(pvmCode + (codeLength + 0x10));
        (vm.context)->pc = codeLength + 0x14;
        sVar7 = *(short *)(pvmCode + (codeLength + 0x14));
        (vm.context)->pc = codeLength + 0x16;
        uVar24 = *(uint *)(pvmCode + (codeLength + 0x16));
        (vm.context)->pc = codeLength + 0x1a;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        uVar27 = *(uint *)(pvmCode + (codeLength + 0x1a));
        (vm.context)->pc = codeLength + 0x1e;
        uVar22 = 0;
        if (uVar20 != 0) {
          uVar22 = uVar21 / uVar20;
        }
        uVar28 = *(uint *)(pvmCode + (codeLength + 0x1e));
        (vm.context)->pc = codeLength + 0x22;
        uVar34 = *(uint *)(pvmCode + (codeLength + 0x22));
        (vm.context)->pc = codeLength + 0x26;
        uVar28 = uVar28 ^ uVar20 ^ 0xffffffff;
        uVar34 = uVar34 ^ uVar20 ^ 0xffffffff;
        codeLength = 0;
        if (uVar20 != 0) {
          codeLength = uVar28 / uVar20;
        }
        uVar36 = 0xcbf29ce484222325;
        uVar4 = 0;
        if (uVar20 != 0) {
          uVar4 = uVar34 / uVar20;
        }
        *(double *)(pvmCode + (uVar21 - uVar22 * uVar20)) =
             *(double *)(pvmCode + (uVar34 - uVar4 * uVar20)) +
             *(double *)(pvmCode + (uVar28 - codeLength * uVar20));
        pvmCode = (vm.context)->vmCode;
        if (sVar7 != 0) {
          uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar19 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar19 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        break;
      default:
        goto switchD_00145a3c_caseD_5;
      case 6:
        uVar20 = (vm.context)->vmCodeLength;
        uVar26 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar28 = *(uint *)(pvmCode + uVar26);
        (vm.context)->pc = uVar26 + 4;
        uVar36 = *(ulong *)(pvmCode + (uVar26 + 4));
        (vm.context)->pc = uVar26 + 0xc;
        uVar22 = *(uint *)(pvmCode + (uVar26 + 0xc));
        (vm.context)->pc = uVar26 + 0x10;
        sVar7 = *(short *)(pvmCode + (uVar26 + 0x10));
        (vm.context)->pc = uVar26 + 0x12;
        uVar24 = *(uint *)(pvmCode + (uVar26 + 0x12));
        (vm.context)->pc = uVar26 + 0x16;
        uVar27 = *(uint *)(pvmCode + (uVar26 + 0x16));
        (vm.context)->pc = uVar26 + 0x1a;
        uVar21 = *(uint *)(pvmCode + (uVar26 + 0x1a));
        (vm.context)->pc = uVar26 + 0x1e;
        uVar19 = *(uint *)(pvmCode + (uVar26 + 0x1e));
        (vm.context)->pc = uVar26 + 0x22;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        codeLength = *(uint *)(pvmCode + (uVar26 + 0x22));
        uVar34 = 0;
        if (uVar20 != 0) {
          uVar34 = uVar21 / uVar20;
        }
        (vm.context)->pc = uVar26 + 0x26;
        uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
        codeLength = codeLength ^ uVar20 ^ 0xffffffff;
        uVar26 = 0;
        if (uVar20 != 0) {
          uVar26 = codeLength / uVar20;
        }
        uVar4 = 0;
        if (uVar20 != 0) {
          uVar4 = uVar19 / uVar20;
        }
        uVar25 = 0xcbf29ce484222325;
        *(long *)(pvmCode + (uVar19 - uVar4 * uVar20)) =
             *(long *)(pvmCode + (codeLength - uVar26 * uVar20)) -
             *(long *)(pvmCode + (uVar21 - uVar34 * uVar20));
        pvmCode = (vm.context)->vmCode;
        if (sVar7 != 0) {
          uVar22 = uVar22 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar22 / uVar20;
          }
          uVar25 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar22 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar25 = uVar25 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        goto LAB_00149514;
      case 10:
        uVar20 = (vm.context)->vmCodeLength;
        uVar22 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + uVar22);
        (vm.context)->pc = uVar22 + 4;
        uVar19 = *(uint *)(pvmCode + (uVar22 + 4));
        (vm.context)->pc = uVar22 + 8;
        uVar26 = *(uint *)(pvmCode + (uVar22 + 8));
        (vm.context)->pc = uVar22 + 0xc;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        uVar25 = *(ulong *)(pvmCode + (uVar22 + 0xc));
        (vm.context)->pc = uVar22 + 0x14;
        codeLength = *(uint *)(pvmCode + (uVar22 + 0x14));
        (vm.context)->pc = uVar22 + 0x18;
        sVar7 = *(short *)(pvmCode + (uVar22 + 0x18));
        (vm.context)->pc = uVar22 + 0x1a;
        uVar24 = *(uint *)(pvmCode + (uVar22 + 0x1a));
        (vm.context)->pc = uVar22 + 0x1e;
        uVar28 = 0;
        if (uVar20 != 0) {
          uVar28 = uVar21 / uVar20;
        }
        uVar29 = *(uint *)(pvmCode + (uVar22 + 0x1e));
        (vm.context)->pc = uVar22 + 0x22;
        uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
        uVar34 = *(uint *)(pvmCode + (uVar22 + 0x22));
        (vm.context)->pc = uVar22 + 0x26;
        uVar34 = uVar34 ^ uVar20 ^ 0xffffffff;
        uVar22 = 0;
        if (uVar20 != 0) {
          uVar22 = uVar34 / uVar20;
        }
        uVar4 = 0;
        if (uVar20 != 0) {
          uVar4 = uVar19 / uVar20;
        }
        uVar36 = 0xcbf29ce484222325;
        *(int *)(pvmCode + (uVar19 - uVar4 * uVar20)) =
             *(int *)(pvmCode + (uVar21 - uVar28 * uVar20)) +
             *(int *)(pvmCode + (uVar34 - uVar22 * uVar20));
        pvmCode = (vm.context)->vmCode;
        if (sVar7 != 0) {
          codeLength = codeLength ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = codeLength / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(codeLength - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        goto LAB_00149db4;
      case 0xc:
        uVar20 = (vm.context)->vmCodeLength;
        codeLength = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + codeLength);
        (vm.context)->pc = codeLength + 4;
        uVar26 = *(uint *)(pvmCode + (codeLength + 4));
        (vm.context)->pc = codeLength + 8;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        uVar25 = *(ulong *)(pvmCode + (codeLength + 8));
        (vm.context)->pc = codeLength + 0x10;
        uVar19 = *(uint *)(pvmCode + (codeLength + 0x10));
        (vm.context)->pc = codeLength + 0x14;
        sVar7 = *(short *)(pvmCode + (codeLength + 0x14));
        (vm.context)->pc = codeLength + 0x16;
        uVar24 = *(uint *)(pvmCode + (codeLength + 0x16));
        (vm.context)->pc = codeLength + 0x1a;
        uVar22 = 0;
        if (uVar20 != 0) {
          uVar22 = uVar21 / uVar20;
        }
        uVar27 = *(uint *)(pvmCode + (codeLength + 0x1a));
        (vm.context)->pc = codeLength + 0x1e;
        uVar28 = *(uint *)(pvmCode + (codeLength + 0x1e));
        (vm.context)->pc = codeLength + 0x22;
        uVar28 = uVar28 ^ uVar20 ^ 0xffffffff;
        codeLength = 0;
        if (uVar20 != 0) {
          codeLength = uVar28 / uVar20;
        }
        uVar36 = 0xcbf29ce484222325;
        *(undefined2 *)(pvmCode + (uVar28 - codeLength * uVar20)) =
             *(undefined2 *)(pvmCode + (uVar21 - uVar22 * uVar20));
        pvmCode = (vm.context)->vmCode;
        if (sVar7 != 0) {
          uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar19 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar19 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        break;
      case 0xd:
        uVar20 = (vm.context)->vmCodeLength;
        uVar22 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + uVar22);
        (vm.context)->pc = uVar22 + 4;
        uVar19 = *(uint *)(pvmCode + (uVar22 + 4));
        (vm.context)->pc = uVar22 + 8;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        codeLength = *(uint *)(pvmCode + (uVar22 + 8));
        uVar28 = 0;
        if (uVar20 != 0) {
          uVar28 = uVar21 / uVar20;
        }
        uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
        (vm.context)->pc = uVar22 + 0xc;
        codeLength = codeLength ^ uVar20 ^ 0xffffffff;
        uVar26 = *(uint *)(pvmCode + (uVar22 + 0xc));
        uVar34 = 0;
        if (uVar20 != 0) {
          uVar34 = uVar19 / uVar20;
        }
        uVar4 = 0;
        if (uVar20 != 0) {
          uVar4 = codeLength / uVar20;
        }
        (vm.context)->pc = uVar22 + 0x10;
        uVar25 = *(ulong *)(pvmCode + (uVar22 + 0x10));
        (vm.context)->pc = uVar22 + 0x18;
        uVar27 = *(uint *)(pvmCode + (uVar22 + 0x18));
        (vm.context)->pc = uVar22 + 0x1c;
        sVar7 = *(short *)(pvmCode + (uVar22 + 0x1c));
        (vm.context)->pc = uVar22 + 0x1e;
        uVar24 = *(uint *)(pvmCode + (uVar22 + 0x1e));
        (vm.context)->pc = uVar22 + 0x22;
        uVar29 = *(uint *)(pvmCode + (uVar22 + 0x22));
        (vm.context)->pc = uVar22 + 0x26;
        *(int *)(pvmCode + (uVar21 - uVar28 * uVar20)) =
             *(int *)(pvmCode + (codeLength - uVar4 * uVar20)) <<
             (ulong)(*(uint *)(pvmCode + (uVar19 - uVar34 * uVar20)) & 0x1f);
        pvmCode = (vm.context)->vmCode;
        uVar36 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          uVar27 = uVar27 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar27 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar27 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        goto LAB_00149db4;
      case 0x11:
        uVar20 = (vm.context)->vmCodeLength;
        uVar22 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar28 = *(uint *)(pvmCode + uVar22);
        (vm.context)->pc = uVar22 + 4;
        uVar36 = *(ulong *)(pvmCode + (uVar22 + 4));
        (vm.context)->pc = uVar22 + 0xc;
        codeLength = *(uint *)(pvmCode + (uVar22 + 0xc));
        (vm.context)->pc = uVar22 + 0x10;
        sVar7 = *(short *)(pvmCode + (uVar22 + 0x10));
        (vm.context)->pc = uVar22 + 0x12;
        uVar24 = *(uint *)(pvmCode + (uVar22 + 0x12));
        (vm.context)->pc = uVar22 + 0x16;
        uVar27 = *(uint *)(pvmCode + (uVar22 + 0x16));
        (vm.context)->pc = uVar22 + 0x1a;
        uVar21 = *(uint *)(pvmCode + (uVar22 + 0x1a));
        (vm.context)->pc = uVar22 + 0x1e;
        uVar19 = *(uint *)(pvmCode + (uVar22 + 0x1e));
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        (vm.context)->pc = uVar22 + 0x22;
        uVar26 = 0;
        if (uVar20 != 0) {
          uVar26 = uVar21 / uVar20;
        }
        uVar34 = *(uint *)(pvmCode + (uVar22 + 0x22));
        (vm.context)->pc = uVar22 + 0x26;
        uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
        uVar34 = uVar34 ^ uVar20 ^ 0xffffffff;
        uVar22 = 0;
        if (uVar20 != 0) {
          uVar22 = uVar19 / uVar20;
        }
        uVar4 = 0;
        if (uVar20 != 0) {
          uVar4 = uVar34 / uVar20;
        }
        *(uint *)(pvmCode + (uVar34 - uVar4 * uVar20)) =
             *(uint *)(pvmCode + (uVar19 - uVar22 * uVar20)) |
             *(uint *)(pvmCode + (uVar21 - uVar26 * uVar20));
        pvmCode = (vm.context)->vmCode;
        uVar25 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          codeLength = codeLength ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = codeLength / uVar20;
          }
          uVar25 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(codeLength - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar25 = uVar25 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        goto LAB_00149514;
      case 0x12:
        uVar20 = (vm.context)->vmCodeLength;
        uVar22 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        codeLength = *(uint *)(pvmCode + uVar22);
        (vm.context)->pc = uVar22 + 4;
        uVar21 = *(uint *)(pvmCode + (uVar22 + 4));
        (vm.context)->pc = uVar22 + 8;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        uVar19 = *(uint *)(pvmCode + (uVar22 + 8)) ^ uVar20 ^ 0xffffffff;
        uVar28 = 0;
        if (uVar20 != 0) {
          uVar28 = uVar21 / uVar20;
        }
        (vm.context)->pc = uVar22 + 0xc;
        uVar34 = *(uint *)(pvmCode + (uVar22 + 0xc));
        (vm.context)->pc = uVar22 + 0x10;
        uVar25 = *(ulong *)(pvmCode + (uVar22 + 0x10));
        (vm.context)->pc = uVar22 + 0x18;
        uVar26 = *(uint *)(pvmCode + (uVar22 + 0x18));
        (vm.context)->pc = uVar22 + 0x1c;
        uVar4 = 0;
        if (uVar20 != 0) {
          uVar4 = uVar19 / uVar20;
        }
        iVar11 = -0x80000000;
        sVar7 = *(short *)(pvmCode + (uVar22 + 0x1c));
        (vm.context)->pc = uVar22 + 0x1e;
        uVar24 = *(uint *)(pvmCode + (uVar22 + 0x1e));
        (vm.context)->pc = uVar22 + 0x22;
        uVar27 = *(uint *)(pvmCode + (uVar22 + 0x22));
        (vm.context)->pc = uVar22 + 0x26;
        iVar30 = *(int *)(pvmCode + (uVar21 - uVar28 * uVar20));
        if (((*(int *)(pvmCode + (uVar19 - uVar4 * uVar20)) != -0x80000000) || (iVar30 != -1)) &&
           (iVar11 = 0, iVar30 != 0)) {
          iVar11 = *(int *)(pvmCode + (uVar19 - uVar4 * uVar20)) / iVar30;
        }
        codeLength = codeLength ^ uVar20 ^ 0xffffffff;
        uVar21 = 0;
        if (uVar20 != 0) {
          uVar21 = codeLength / uVar20;
        }
        *(int *)(pvmCode + (codeLength - uVar21 * uVar20)) = iVar11;
        uVar36 = 0xcbf29ce484222325;
        pvmCode = (vm.context)->vmCode;
        if (sVar7 != 0) {
          uVar26 = uVar26 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar26 / uVar20;
          }
          do {
            lVar14 = lVar33 + (ulong)(uVar26 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        goto LAB_00148f7c;
      case 0x1b:
        uVar20 = (vm.context)->vmCodeLength;
        codeLength = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + codeLength);
        (vm.context)->pc = codeLength + 4;
        uVar26 = *(uint *)(pvmCode + (codeLength + 4));
        (vm.context)->pc = codeLength + 8;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        uVar25 = *(ulong *)(pvmCode + (codeLength + 8));
        (vm.context)->pc = codeLength + 0x10;
        uVar19 = *(uint *)(pvmCode + (codeLength + 0x10));
        (vm.context)->pc = codeLength + 0x14;
        sVar7 = *(short *)(pvmCode + (codeLength + 0x14));
        (vm.context)->pc = codeLength + 0x16;
        uVar24 = *(uint *)(pvmCode + (codeLength + 0x16));
        (vm.context)->pc = codeLength + 0x1a;
        uVar22 = 0;
        if (uVar20 != 0) {
          uVar22 = uVar21 / uVar20;
        }
        uVar27 = *(uint *)(pvmCode + (codeLength + 0x1a));
        (vm.context)->pc = codeLength + 0x1e;
        uVar28 = *(uint *)(pvmCode + (codeLength + 0x1e));
        (vm.context)->pc = codeLength + 0x22;
        uVar28 = uVar28 ^ uVar20 ^ 0xffffffff;
        codeLength = 0;
        if (uVar20 != 0) {
          codeLength = uVar28 / uVar20;
        }
        uVar36 = 0xcbf29ce484222325;
        *(undefined4 *)(pvmCode + (uVar28 - codeLength * uVar20)) =
             *(undefined4 *)(pvmCode + (uVar21 - uVar22 * uVar20));
        pvmCode = (vm.context)->vmCode;
        if (sVar7 != 0) {
          uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar19 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar19 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        break;
      case 0x1d:
        uVar20 = (vm.context)->vmCodeLength;
        uVar22 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + uVar22);
        (vm.context)->pc = uVar22 + 4;
        codeLength = *(uint *)(pvmCode + (uVar22 + 4));
        (vm.context)->pc = uVar22 + 8;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        uVar25 = *(ulong *)(pvmCode + (uVar22 + 8));
        (vm.context)->pc = uVar22 + 0x10;
        uVar19 = *(uint *)(pvmCode + (uVar22 + 0x10));
        (vm.context)->pc = uVar22 + 0x14;
        sVar7 = *(short *)(pvmCode + (uVar22 + 0x14));
        (vm.context)->pc = uVar22 + 0x16;
        uVar24 = *(uint *)(pvmCode + (uVar22 + 0x16));
        (vm.context)->pc = uVar22 + 0x1a;
        uVar28 = *(uint *)(pvmCode + (uVar22 + 0x1a));
        (vm.context)->pc = uVar22 + 0x1e;
        uVar26 = 0;
        if (uVar20 != 0) {
          uVar26 = uVar21 / uVar20;
        }
        uVar34 = *(uint *)(pvmCode + (uVar22 + 0x1e));
        (vm.context)->pc = uVar22 + 0x22;
        uVar4 = *(uint *)(pvmCode + (uVar22 + 0x22));
        (vm.context)->pc = uVar22 + 0x26;
        uVar34 = uVar34 ^ uVar20 ^ 0xffffffff;
        uVar4 = uVar4 ^ uVar20 ^ 0xffffffff;
        uVar22 = 0;
        if (uVar20 != 0) {
          uVar22 = uVar4 / uVar20;
        }
        uVar27 = 0;
        if (uVar20 != 0) {
          uVar27 = uVar34 / uVar20;
        }
        uVar36 = 0xcbf29ce484222325;
        pvmCode[uVar34 - uVar27 * uVar20] =
             pvmCode[uVar4 - uVar22 * uVar20] | pvmCode[uVar21 - uVar26 * uVar20];
        pvmCode = (vm.context)->vmCode;
        if (sVar7 != 0) {
          uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar19 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar19 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        goto LAB_001493e4;
      case 0x1e:
        uVar20 = (vm.context)->vmCodeLength;
        uVar22 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + uVar22);
        (vm.context)->pc = uVar22 + 4;
        codeLength = *(uint *)(pvmCode + (uVar22 + 4));
        (vm.context)->pc = uVar22 + 8;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        uVar25 = *(ulong *)(pvmCode + (uVar22 + 8));
        (vm.context)->pc = uVar22 + 0x10;
        uVar19 = *(uint *)(pvmCode + (uVar22 + 0x10));
        (vm.context)->pc = uVar22 + 0x14;
        sVar7 = *(short *)(pvmCode + (uVar22 + 0x14));
        (vm.context)->pc = uVar22 + 0x16;
        uVar24 = *(uint *)(pvmCode + (uVar22 + 0x16));
        (vm.context)->pc = uVar22 + 0x1a;
        uVar28 = *(uint *)(pvmCode + (uVar22 + 0x1a));
        (vm.context)->pc = uVar22 + 0x1e;
        uVar26 = 0;
        if (uVar20 != 0) {
          uVar26 = uVar21 / uVar20;
        }
        uVar4 = *(uint *)(pvmCode + (uVar22 + 0x1e));
        (vm.context)->pc = uVar22 + 0x22;
        uVar34 = *(uint *)(pvmCode + (uVar22 + 0x22));
        (vm.context)->pc = uVar22 + 0x26;
        uVar34 = uVar34 ^ uVar20 ^ 0xffffffff;
        uVar22 = 0;
        if (uVar20 != 0) {
          uVar22 = uVar34 / uVar20;
        }
        uVar4 = uVar4 ^ uVar20 ^ 0xffffffff;
        lVar33 = *(long *)(pvmCode + (uVar21 - uVar26 * uVar20));
        uVar21 = 0;
        if (uVar20 != 0) {
          uVar21 = uVar4 / uVar20;
        }
        lVar14 = 0;
        if (lVar33 != 0) {
          lVar14 = *(long *)(pvmCode + (uVar34 - uVar22 * uVar20)) / lVar33;
        }
        *(long *)(pvmCode + (uVar4 - uVar21 * uVar20)) =
             *(long *)(pvmCode + (uVar34 - uVar22 * uVar20)) - lVar14 * lVar33;
        pvmCode = (vm.context)->vmCode;
        uVar36 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar19 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar19 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        goto LAB_001493e4;
      case 0x1f:
        uVar20 = (vm.context)->vmCodeLength;
        uVar19 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + uVar19) ^ uVar20 ^ 0xffffffff;
        codeLength = 0;
        if (uVar20 != 0) {
          codeLength = uVar21 / uVar20;
        }
        (vm.context)->pc = uVar19 + 4;
        uVar26 = *(uint *)(pvmCode + (uVar19 + 4));
        (vm.context)->pc = uVar19 + 8;
        uVar25 = *(ulong *)(pvmCode + (uVar19 + 8));
        (vm.context)->pc = uVar19 + 0x10;
        uVar22 = *(uint *)(pvmCode + (uVar19 + 0x10));
        (vm.context)->pc = uVar19 + 0x14;
        uVar21 = uVar21 - codeLength * uVar20;
        sVar7 = *(short *)(pvmCode + (uVar19 + 0x14));
        (vm.context)->pc = uVar19 + 0x16;
        uVar24 = *(uint *)(pvmCode + (uVar19 + 0x16));
        (vm.context)->pc = uVar19 + 0x1a;
        uVar27 = *(uint *)(pvmCode + (uVar19 + 0x1a));
        (vm.context)->pc = uVar19 + 0x1e;
        *(int *)(pvmCode + uVar21) = *(int *)(pvmCode + uVar21) + 1;
        pvmCode = (vm.context)->vmCode;
        uVar36 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          uVar22 = uVar22 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar22 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar22 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        break;
      case 0x24:
        uVar20 = (vm.context)->vmCodeLength;
        uVar22 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + uVar22);
        (vm.context)->pc = uVar22 + 4;
        codeLength = *(uint *)(pvmCode + (uVar22 + 4));
        (vm.context)->pc = uVar22 + 8;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        uVar25 = *(ulong *)(pvmCode + (uVar22 + 8));
        (vm.context)->pc = uVar22 + 0x10;
        uVar19 = *(uint *)(pvmCode + (uVar22 + 0x10));
        (vm.context)->pc = uVar22 + 0x14;
        sVar7 = *(short *)(pvmCode + (uVar22 + 0x14));
        (vm.context)->pc = uVar22 + 0x16;
        uVar24 = *(uint *)(pvmCode + (uVar22 + 0x16));
        (vm.context)->pc = uVar22 + 0x1a;
        uVar28 = *(uint *)(pvmCode + (uVar22 + 0x1a));
        (vm.context)->pc = uVar22 + 0x1e;
        uVar26 = 0;
        if (uVar20 != 0) {
          uVar26 = uVar21 / uVar20;
        }
        uVar34 = *(uint *)(pvmCode + (uVar22 + 0x1e));
        (vm.context)->pc = uVar22 + 0x22;
        uVar4 = *(uint *)(pvmCode + (uVar22 + 0x22));
        (vm.context)->pc = uVar22 + 0x26;
        uVar34 = uVar34 ^ uVar20 ^ 0xffffffff;
        uVar4 = uVar4 ^ uVar20 ^ 0xffffffff;
        uVar22 = 0;
        if (uVar20 != 0) {
          uVar22 = uVar4 / uVar20;
        }
        uVar27 = 0;
        if (uVar20 != 0) {
          uVar27 = uVar34 / uVar20;
        }
        uVar31 = 0xffffffff;
        if (*(long *)(pvmCode + (uVar4 - uVar22 * uVar20)) <
            *(long *)(pvmCode + (uVar21 - uVar26 * uVar20))) {
          uVar31 = 1;
        }
        uVar3 = 0;
        if (*(long *)(pvmCode + (uVar21 - uVar26 * uVar20)) !=
            *(long *)(pvmCode + (uVar4 - uVar22 * uVar20))) {
          uVar3 = uVar31;
        }
        uVar36 = 0xcbf29ce484222325;
        *(undefined4 *)(pvmCode + (uVar34 - uVar27 * uVar20)) = uVar3;
        pvmCode = (vm.context)->vmCode;
        if (sVar7 != 0) {
          uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar19 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar19 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        goto LAB_001493e4;
      case 0x25:
        uVar20 = (vm.context)->vmCodeLength;
        uVar26 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar19 = *(uint *)(pvmCode + uVar26);
        (vm.context)->pc = uVar26 + 4;
        uVar21 = *(uint *)(pvmCode + (uVar26 + 4));
        (vm.context)->pc = uVar26 + 8;
        uVar22 = *(uint *)(pvmCode + (uVar26 + 8));
        (vm.context)->pc = uVar26 + 0xc;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        uVar25 = *(ulong *)(pvmCode + (uVar26 + 0xc));
        (vm.context)->pc = uVar26 + 0x14;
        codeLength = *(uint *)(pvmCode + (uVar26 + 0x14));
        (vm.context)->pc = uVar26 + 0x18;
        sVar7 = *(short *)(pvmCode + (uVar26 + 0x18));
        (vm.context)->pc = uVar26 + 0x1a;
        uVar24 = *(uint *)(pvmCode + (uVar26 + 0x1a));
        (vm.context)->pc = uVar26 + 0x1e;
        uVar34 = 0;
        if (uVar20 != 0) {
          uVar34 = uVar21 / uVar20;
        }
        uVar28 = *(uint *)(pvmCode + (uVar26 + 0x1e));
        (vm.context)->pc = uVar26 + 0x22;
        uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
        uVar4 = *(uint *)(pvmCode + (uVar26 + 0x22));
        (vm.context)->pc = uVar26 + 0x26;
        uVar4 = uVar4 ^ uVar20 ^ 0xffffffff;
        uVar26 = 0;
        if (uVar20 != 0) {
          uVar26 = uVar4 / uVar20;
        }
        uVar27 = 0;
        if (uVar20 != 0) {
          uVar27 = uVar19 / uVar20;
        }
        uVar36 = 0xcbf29ce484222325;
        *(long *)(pvmCode + (uVar19 - uVar27 * uVar20)) =
             *(long *)(pvmCode + (uVar21 - uVar34 * uVar20)) +
             *(long *)(pvmCode + (uVar4 - uVar26 * uVar20));
        pvmCode = (vm.context)->vmCode;
        if (sVar7 != 0) {
          codeLength = codeLength ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = codeLength / uVar20;
          }
          do {
            lVar14 = lVar33 + (ulong)(codeLength - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        goto LAB_00148e50;
      case 0x28:
        uVar20 = (vm.context)->vmCodeLength;
        uVar22 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + uVar22);
        (vm.context)->pc = uVar22 + 4;
        uVar26 = *(uint *)(pvmCode + (uVar22 + 4));
        (vm.context)->pc = uVar22 + 8;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        uVar25 = *(ulong *)(pvmCode + (uVar22 + 8));
        (vm.context)->pc = uVar22 + 0x10;
        codeLength = *(uint *)(pvmCode + (uVar22 + 0x10));
        (vm.context)->pc = uVar22 + 0x14;
        sVar7 = *(short *)(pvmCode + (uVar22 + 0x14));
        (vm.context)->pc = uVar22 + 0x16;
        uVar24 = *(uint *)(pvmCode + (uVar22 + 0x16));
        (vm.context)->pc = uVar22 + 0x1a;
        uVar27 = *(uint *)(pvmCode + (uVar22 + 0x1a));
        (vm.context)->pc = uVar22 + 0x1e;
        uVar19 = *(uint *)(pvmCode + (uVar22 + 0x1e));
        (vm.context)->pc = uVar22 + 0x22;
        uVar28 = 0;
        if (uVar20 != 0) {
          uVar28 = uVar21 / uVar20;
        }
        uVar34 = *(uint *)(pvmCode + (uVar22 + 0x22));
        (vm.context)->pc = uVar22 + 0x26;
        uVar4 = *(uint *)(pvmCode + (uVar22 + 0x26));
        uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
        (vm.context)->pc = uVar22 + 0x2a;
        uVar34 = uVar34 ^ uVar20 ^ 0xffffffff;
        uVar4 = uVar4 ^ uVar20 ^ 0xffffffff;
        uVar22 = 0;
        if (uVar20 != 0) {
          uVar22 = uVar4 / uVar20;
        }
        uVar29 = 0;
        if (uVar20 != 0) {
          uVar29 = uVar19 / uVar20;
        }
        uVar5 = CONCAT11(pvmCode[uVar21 - uVar28 * uVar20],pvmCode[uVar4 - uVar22 * uVar20]);
        uVar21 = 0;
        if (uVar20 != 0) {
          uVar21 = uVar34 / uVar20;
        }
        uVar19 = uVar19 - uVar29 * uVar20;
        uVar34 = uVar34 - uVar21 * uVar20;
        if (uVar5 < 0x404) {
          if (uVar5 < 0x204) {
            if (uVar5 == 0x104) {
              fVar38 = (float)(int)pvmCode[uVar19];
LAB_0014998c:
              *(float *)(pvmCode + uVar34) = fVar38;
            }
            else if (uVar5 == 0x108) {
              *(double *)(pvmCode + uVar34) = (double)(int)pvmCode[uVar19];
            }
          }
          else {
            if (uVar5 == 0x204) {
              fVar38 = (float)(int)*(short *)(pvmCode + uVar19);
              goto LAB_0014998c;
            }
            if (uVar5 == 0x208) {
              *(double *)(pvmCode + uVar34) = (double)(int)*(short *)(pvmCode + uVar19);
            }
          }
        }
        else if (uVar5 < 0x804) {
          if (uVar5 == 0x404) {
            fVar38 = (float)*(int *)(pvmCode + uVar19);
            goto LAB_0014998c;
          }
          if (uVar5 == 0x408) {
            *(double *)(pvmCode + uVar34) = (double)*(int *)(pvmCode + uVar19);
          }
        }
        else {
          if (uVar5 == 0x804) {
            fVar38 = (float)*(long *)(pvmCode + uVar19);
            goto LAB_0014998c;
          }
          if (uVar5 == 0x808) {
            *(double *)(pvmCode + uVar34) = (double)*(long *)(pvmCode + uVar19);
          }
        }
        pvmCode = (vm.context)->vmCode;
        uVar36 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          codeLength = codeLength ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = codeLength / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(codeLength - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        break;
      case 0x2c:
        uVar20 = (vm.context)->vmCodeLength;
        codeLength = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + codeLength);
        (vm.context)->pc = codeLength + 4;
        uVar26 = *(uint *)(pvmCode + (codeLength + 4));
        (vm.context)->pc = codeLength + 8;
        uVar25 = *(ulong *)(pvmCode + (codeLength + 8));
        (vm.context)->pc = codeLength + 0x10;
        uVar19 = *(uint *)(pvmCode + (codeLength + 0x10));
        (vm.context)->pc = codeLength + 0x14;
        sVar7 = *(short *)(pvmCode + (codeLength + 0x14));
        (vm.context)->pc = codeLength + 0x16;
        uVar24 = *(uint *)(pvmCode + (codeLength + 0x16));
        (vm.context)->pc = codeLength + 0x1a;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        uVar27 = *(uint *)(pvmCode + (codeLength + 0x1a));
        (vm.context)->pc = codeLength + 0x1e;
        uVar22 = 0;
        if (uVar20 != 0) {
          uVar22 = uVar21 / uVar20;
        }
        uVar28 = *(uint *)(pvmCode + (codeLength + 0x1e));
        (vm.context)->pc = codeLength + 0x22;
        uVar34 = *(uint *)(pvmCode + (codeLength + 0x22));
        (vm.context)->pc = codeLength + 0x26;
        uVar28 = uVar28 ^ uVar20 ^ 0xffffffff;
        uVar34 = uVar34 ^ uVar20 ^ 0xffffffff;
        codeLength = 0;
        if (uVar20 != 0) {
          codeLength = uVar28 / uVar20;
        }
        uVar4 = 0;
        if (uVar20 != 0) {
          uVar4 = uVar34 / uVar20;
        }
        *(ulong *)(pvmCode + (uVar21 - uVar22 * uVar20)) =
             ~(*(ulong *)(pvmCode + (uVar34 - uVar4 * uVar20)) &
              *(ulong *)(pvmCode + (uVar28 - codeLength * uVar20)));
        pvmCode = (vm.context)->vmCode;
        uVar36 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar19 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar19 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        break;
      case 0x2d:
        uVar20 = (vm.context)->vmCodeLength;
        uVar19 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + uVar19) ^ uVar20 ^ 0xffffffff;
        (vm.context)->pc = uVar19 + 4;
        codeLength = 0;
        if (uVar20 != 0) {
          codeLength = uVar21 / uVar20;
        }
        uVar22 = *(uint *)(pvmCode + (uVar19 + 4));
        (vm.context)->pc = uVar19 + 8;
        uVar26 = *(uint *)(pvmCode + (uVar19 + 8));
        (vm.context)->pc = uVar19 + 0xc;
        uVar22 = uVar22 ^ uVar20 ^ 0xffffffff;
        uVar25 = *(ulong *)(pvmCode + (uVar19 + 0xc));
        (vm.context)->pc = uVar19 + 0x14;
        uVar28 = *(uint *)(pvmCode + (uVar19 + 0x14));
        (vm.context)->pc = uVar19 + 0x18;
        sVar7 = *(short *)(pvmCode + (uVar19 + 0x18));
        (vm.context)->pc = uVar19 + 0x1a;
        uVar24 = *(uint *)(pvmCode + (uVar19 + 0x1a));
        (vm.context)->pc = uVar19 + 0x1e;
        uVar27 = *(uint *)(pvmCode + (uVar19 + 0x1e));
        (vm.context)->pc = uVar19 + 0x22;
        uVar34 = 0;
        if (uVar20 != 0) {
          uVar34 = uVar22 / uVar20;
        }
        uVar4 = *(uint *)(pvmCode + (uVar19 + 0x22));
        (vm.context)->pc = uVar19 + 0x26;
        uVar4 = uVar4 ^ uVar20 ^ 0xffffffff;
        uVar19 = 0;
        if (uVar20 != 0) {
          uVar19 = uVar4 / uVar20;
        }
        *(uint *)(pvmCode + (uVar4 - uVar19 * uVar20)) =
             (uint)(*(int *)(pvmCode + (uVar21 - codeLength * uVar20)) != 0 &&
                   *(int *)(pvmCode + (uVar22 - uVar34 * uVar20)) != 0);
        uVar36 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          uVar28 = uVar28 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar28 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar28 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)(vm.context)->vmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        uVar26 = uVar26 ^ uVar20 ^ 0xffffffff;
        uVar21 = 0;
        if (uVar20 != 0) {
          uVar21 = uVar26 / uVar20;
        }
        iVar30 = *(int *)((vm.context)->vmCode + (uVar26 - uVar21 * uVar20));
        goto LAB_00149c28;
      case 0x30:
        uVar20 = (vm.context)->vmCodeLength;
        codeLength = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + codeLength);
        (vm.context)->pc = codeLength + 4;
        uVar26 = *(uint *)(pvmCode + (codeLength + 4));
        (vm.context)->pc = codeLength + 8;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        uVar25 = *(ulong *)(pvmCode + (codeLength + 8));
        (vm.context)->pc = codeLength + 0x10;
        uVar19 = *(uint *)(pvmCode + (codeLength + 0x10));
        (vm.context)->pc = codeLength + 0x14;
        sVar7 = *(short *)(pvmCode + (codeLength + 0x14));
        (vm.context)->pc = codeLength + 0x16;
        uVar24 = *(uint *)(pvmCode + (codeLength + 0x16));
        (vm.context)->pc = codeLength + 0x1a;
        uVar27 = *(uint *)(pvmCode + (codeLength + 0x1a));
        (vm.context)->pc = codeLength + 0x1e;
        uVar22 = 0;
        if (uVar20 != 0) {
          uVar22 = uVar21 / uVar20;
        }
        uVar28 = *(uint *)(pvmCode + (codeLength + 0x1e));
        (vm.context)->pc = codeLength + 0x22;
        uVar34 = *(uint *)(pvmCode + (codeLength + 0x22));
        (vm.context)->pc = codeLength + 0x26;
        uVar28 = uVar28 ^ uVar20 ^ 0xffffffff;
        uVar34 = uVar34 ^ uVar20 ^ 0xffffffff;
        codeLength = 0;
        if (uVar20 != 0) {
          codeLength = uVar28 / uVar20;
        }
        uVar4 = 0;
        if (uVar20 != 0) {
          uVar4 = uVar34 / uVar20;
        }
        uVar36 = 0xcbf29ce484222325;
        *(int *)(pvmCode + (uVar34 - uVar4 * uVar20)) =
             *(int *)(pvmCode + (uVar28 - codeLength * uVar20)) *
             *(int *)(pvmCode + (uVar21 - uVar22 * uVar20));
        pvmCode = (vm.context)->vmCode;
        if (sVar7 != 0) {
          uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar19 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar19 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        break;
      case 0x33:
        uVar20 = (vm.context)->vmCodeLength;
        codeLength = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + codeLength);
        (vm.context)->pc = codeLength + 4;
        uVar26 = *(uint *)(pvmCode + (codeLength + 4));
        (vm.context)->pc = codeLength + 8;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        uVar25 = *(ulong *)(pvmCode + (codeLength + 8));
        (vm.context)->pc = codeLength + 0x10;
        uVar19 = *(uint *)(pvmCode + (codeLength + 0x10));
        (vm.context)->pc = codeLength + 0x14;
        sVar7 = *(short *)(pvmCode + (codeLength + 0x14));
        (vm.context)->pc = codeLength + 0x16;
        uVar24 = *(uint *)(pvmCode + (codeLength + 0x16));
        (vm.context)->pc = codeLength + 0x1a;
        uVar22 = 0;
        if (uVar20 != 0) {
          uVar22 = uVar21 / uVar20;
        }
        uVar27 = *(uint *)(pvmCode + (codeLength + 0x1a));
        (vm.context)->pc = codeLength + 0x1e;
        uVar28 = *(uint *)(pvmCode + (codeLength + 0x1e));
        (vm.context)->pc = codeLength + 0x22;
        uVar28 = uVar28 ^ uVar20 ^ 0xffffffff;
        codeLength = 0;
        if (uVar20 != 0) {
          codeLength = uVar28 / uVar20;
        }
        uVar36 = 0xcbf29ce484222325;
        *(undefined2 *)(pvmCode + (uVar28 - codeLength * uVar20)) =
             *(undefined2 *)(pvmCode + (uVar21 - uVar22 * uVar20));
        pvmCode = (vm.context)->vmCode;
        if (sVar7 != 0) {
          uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar19 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar19 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        break;
      case 0x35:
        uVar20 = (vm.context)->vmCodeLength;
        uVar22 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar28 = *(uint *)(pvmCode + uVar22);
        (vm.context)->pc = uVar22 + 4;
        uVar36 = *(ulong *)(pvmCode + (uVar22 + 4));
        (vm.context)->pc = uVar22 + 0xc;
        codeLength = *(uint *)(pvmCode + (uVar22 + 0xc));
        (vm.context)->pc = uVar22 + 0x10;
        sVar7 = *(short *)(pvmCode + (uVar22 + 0x10));
        (vm.context)->pc = uVar22 + 0x12;
        uVar24 = *(uint *)(pvmCode + (uVar22 + 0x12));
        (vm.context)->pc = uVar22 + 0x16;
        uVar27 = *(uint *)(pvmCode + (uVar22 + 0x16));
        (vm.context)->pc = uVar22 + 0x1a;
        uVar21 = *(uint *)(pvmCode + (uVar22 + 0x1a));
        (vm.context)->pc = uVar22 + 0x1e;
        uVar19 = *(uint *)(pvmCode + (uVar22 + 0x1e));
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        (vm.context)->pc = uVar22 + 0x22;
        uVar26 = 0;
        if (uVar20 != 0) {
          uVar26 = uVar21 / uVar20;
        }
        uVar34 = *(uint *)(pvmCode + (uVar22 + 0x22));
        (vm.context)->pc = uVar22 + 0x26;
        uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
        uVar34 = uVar34 ^ uVar20 ^ 0xffffffff;
        uVar22 = 0;
        if (uVar20 != 0) {
          uVar22 = uVar19 / uVar20;
        }
        uVar25 = 0xcbf29ce484222325;
        uVar4 = 0;
        if (uVar20 != 0) {
          uVar4 = uVar34 / uVar20;
        }
        *(float *)(pvmCode + (uVar34 - uVar4 * uVar20)) =
             *(float *)(pvmCode + (uVar19 - uVar22 * uVar20)) +
             *(float *)(pvmCode + (uVar21 - uVar26 * uVar20));
        pvmCode = (vm.context)->vmCode;
        if (sVar7 != 0) {
          codeLength = codeLength ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = codeLength / uVar20;
          }
          uVar25 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(codeLength - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar25 = uVar25 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        goto LAB_00149514;
      case 0x3b:
        uVar20 = (vm.context)->vmCodeLength;
        uVar26 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar19 = *(uint *)(pvmCode + uVar26);
        (vm.context)->pc = uVar26 + 4;
        uVar21 = *(uint *)(pvmCode + (uVar26 + 4));
        (vm.context)->pc = uVar26 + 8;
        uVar22 = *(uint *)(pvmCode + (uVar26 + 8));
        (vm.context)->pc = uVar26 + 0xc;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        uVar25 = *(ulong *)(pvmCode + (uVar26 + 0xc));
        (vm.context)->pc = uVar26 + 0x14;
        codeLength = *(uint *)(pvmCode + (uVar26 + 0x14));
        (vm.context)->pc = uVar26 + 0x18;
        sVar7 = *(short *)(pvmCode + (uVar26 + 0x18));
        (vm.context)->pc = uVar26 + 0x1a;
        uVar24 = *(uint *)(pvmCode + (uVar26 + 0x1a));
        (vm.context)->pc = uVar26 + 0x1e;
        uVar34 = 0;
        if (uVar20 != 0) {
          uVar34 = uVar21 / uVar20;
        }
        uVar28 = *(uint *)(pvmCode + (uVar26 + 0x1e));
        (vm.context)->pc = uVar26 + 0x22;
        uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
        uVar4 = *(uint *)(pvmCode + (uVar26 + 0x22));
        (vm.context)->pc = uVar26 + 0x26;
        uVar4 = uVar4 ^ uVar20 ^ 0xffffffff;
        uVar26 = 0;
        if (uVar20 != 0) {
          uVar26 = uVar4 / uVar20;
        }
        uVar27 = 0;
        if (uVar20 != 0) {
          uVar27 = uVar19 / uVar20;
        }
        uVar36 = 0xcbf29ce484222325;
        *(int *)(pvmCode + (uVar19 - uVar27 * uVar20)) =
             *(int *)(pvmCode + (uVar21 - uVar34 * uVar20)) -
             *(int *)(pvmCode + (uVar4 - uVar26 * uVar20));
        pvmCode = (vm.context)->vmCode;
        if (sVar7 != 0) {
          codeLength = codeLength ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = codeLength / uVar20;
          }
          do {
            lVar14 = lVar33 + (ulong)(codeLength - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
LAB_00148e50:
        uVar22 = uVar22 ^ uVar20 ^ 0xffffffff;
        uVar21 = 0;
        if (uVar20 != 0) {
          uVar21 = uVar22 / uVar20;
        }
        uVar36 = uVar36 ^ (long)*(int *)(pvmCode + (uVar22 - uVar21 * uVar20));
        goto LAB_001493f8;
      case 0x3c:
        uVar20 = (vm.context)->vmCodeLength;
        uVar19 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + uVar19) ^ uVar20 ^ 0xffffffff;
        (vm.context)->pc = uVar19 + 4;
        codeLength = 0;
        if (uVar20 != 0) {
          codeLength = uVar21 / uVar20;
        }
        uVar22 = *(uint *)(pvmCode + (uVar19 + 4)) ^ uVar20 ^ 0xffffffff;
        (vm.context)->pc = uVar19 + 8;
        uVar28 = *(uint *)(pvmCode + (uVar19 + 8));
        (vm.context)->pc = uVar19 + 0xc;
        uVar28 = uVar28 ^ uVar20 ^ 0xffffffff;
        uVar26 = *(uint *)(pvmCode + (uVar19 + 0xc));
        (vm.context)->pc = uVar19 + 0x10;
        uVar34 = 0;
        if (uVar20 != 0) {
          uVar34 = uVar22 / uVar20;
        }
        uVar36 = *(ulong *)(pvmCode + (uVar19 + 0x10));
        (vm.context)->pc = uVar19 + 0x18;
        uVar4 = 0;
        if (uVar20 != 0) {
          uVar4 = uVar28 / uVar20;
        }
        uVar27 = *(uint *)(pvmCode + (uVar19 + 0x18));
        (vm.context)->pc = uVar19 + 0x1c;
        sVar7 = *(short *)(pvmCode + (uVar19 + 0x1c));
        (vm.context)->pc = uVar19 + 0x1e;
        uVar24 = *(uint *)(pvmCode + (uVar19 + 0x1e));
        (vm.context)->pc = uVar19 + 0x22;
        uVar29 = *(uint *)(pvmCode + (uVar19 + 0x22));
        (vm.context)->pc = uVar19 + 0x26;
        uVar25 = 0xcbf29ce484222325;
        *(double *)(pvmCode + (uVar28 - uVar4 * uVar20)) =
             *(double *)(pvmCode + (uVar21 - codeLength * uVar20)) *
             *(double *)(pvmCode + (uVar22 - uVar34 * uVar20));
        if (sVar7 != 0) {
          uVar27 = uVar27 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar27 / uVar20;
          }
          uVar25 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar27 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar25 = uVar25 * 0x100000001b3 ^ (long)(vm.context)->vmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        uVar26 = uVar26 ^ uVar20 ^ 0xffffffff;
        uVar21 = 0;
        if (uVar20 != 0) {
          uVar21 = uVar26 / uVar20;
        }
        iVar30 = *(int *)((vm.context)->vmCode + (uVar26 - uVar21 * uVar20));
        goto LAB_00148080;
      case 0x3d:
        uVar20 = (vm.context)->vmCodeLength;
        uVar19 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + uVar19);
        (vm.context)->pc = uVar19 + 4;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        codeLength = 0;
        if (uVar20 != 0) {
          codeLength = uVar21 / uVar20;
        }
        uVar22 = *(uint *)(pvmCode + (uVar19 + 4)) ^ uVar20 ^ 0xffffffff;
        (vm.context)->pc = uVar19 + 8;
        uVar26 = *(uint *)(pvmCode + (uVar19 + 8));
        (vm.context)->pc = uVar19 + 0xc;
        uVar25 = *(ulong *)(pvmCode + (uVar19 + 0xc));
        (vm.context)->pc = uVar19 + 0x14;
        uVar28 = *(uint *)(pvmCode + (uVar19 + 0x14));
        (vm.context)->pc = uVar19 + 0x18;
        uVar34 = 0;
        if (uVar20 != 0) {
          uVar34 = uVar22 / uVar20;
        }
        sVar7 = *(short *)(pvmCode + (uVar19 + 0x18));
        (vm.context)->pc = uVar19 + 0x1a;
        uVar24 = *(uint *)(pvmCode + (uVar19 + 0x1a));
        (vm.context)->pc = uVar19 + 0x1e;
        uVar27 = *(uint *)(pvmCode + (uVar19 + 0x1e));
        (vm.context)->pc = uVar19 + 0x22;
        *(uint *)(pvmCode + (uVar21 - codeLength * uVar20)) =
             (uint)(*(int *)(pvmCode + (uVar22 - uVar34 * uVar20)) == 0);
        pvmCode = (vm.context)->vmCode;
        uVar36 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          uVar28 = uVar28 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar28 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar28 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        break;
      case 0x40:
        uVar20 = (vm.context)->vmCodeLength;
        uVar19 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + uVar19) ^ uVar20 ^ 0xffffffff;
        (vm.context)->pc = uVar19 + 4;
        codeLength = 0;
        if (uVar20 != 0) {
          codeLength = uVar21 / uVar20;
        }
        uVar22 = *(uint *)(pvmCode + (uVar19 + 4));
        (vm.context)->pc = uVar19 + 8;
        uVar28 = *(uint *)(pvmCode + (uVar19 + 8));
        uVar22 = uVar22 ^ uVar20 ^ 0xffffffff;
        (vm.context)->pc = uVar19 + 0xc;
        uVar28 = uVar28 ^ uVar20 ^ 0xffffffff;
        uVar26 = *(uint *)(pvmCode + (uVar19 + 0xc));
        (vm.context)->pc = uVar19 + 0x10;
        uVar25 = *(ulong *)(pvmCode + (uVar19 + 0x10));
        (vm.context)->pc = uVar19 + 0x18;
        uVar34 = *(uint *)(pvmCode + (uVar19 + 0x18));
        (vm.context)->pc = uVar19 + 0x1c;
        sVar7 = *(short *)(pvmCode + (uVar19 + 0x1c));
        (vm.context)->pc = uVar19 + 0x1e;
        uVar4 = 0;
        if (uVar20 != 0) {
          uVar4 = uVar22 / uVar20;
        }
        uVar24 = *(uint *)(pvmCode + (uVar19 + 0x1e));
        (vm.context)->pc = uVar19 + 0x22;
        uVar29 = *(uint *)(pvmCode + (uVar19 + 0x22));
        (vm.context)->pc = uVar19 + 0x26;
        uVar27 = *(uint *)(pvmCode + (uVar19 + 0x26));
        (vm.context)->pc = uVar19 + 0x2a;
        uVar27 = uVar27 ^ uVar20 ^ 0xffffffff;
        uVar19 = 0;
        if (uVar20 != 0) {
          uVar19 = uVar27 / uVar20;
        }
        uVar22 = uVar22 - uVar4 * uVar20;
        uVar4 = 0;
        if (uVar20 != 0) {
          uVar4 = uVar28 / uVar20;
        }
        uVar5 = CONCAT11(pvmCode[uVar21 - codeLength * uVar20],pvmCode[uVar27 - uVar19 * uVar20]);
        uVar28 = uVar28 - uVar4 * uVar20;
        if (uVar5 < 0x801) {
          if (uVar5 < 0x404) {
            if (uVar5 == 0x401) {
              fVar38 = *(float *)(pvmCode + uVar22);
              if (fVar38 < -128.0) {
LAB_00149a40:
                pvmCode[uVar28] = -0x80;
              }
              else if (127.0 < fVar38) {
LAB_00149c4c:
                pvmCode[uVar28] = '\x7f';
              }
              else {
                pvmCode[uVar28] = (char)(int)fVar38;
              }
            }
            else if (uVar5 == 0x402) {
              fVar38 = *(float *)(pvmCode + uVar22);
              if (fVar38 < -32768.0) {
LAB_001497a0:
                *(undefined2 *)(pvmCode + uVar28) = 0x8000;
              }
              else if (32767.0 < fVar38) {
LAB_00149c8c:
                *(undefined2 *)(pvmCode + uVar28) = 0x7fff;
              }
              else {
                *(short *)(pvmCode + uVar28) = (short)(int)fVar38;
              }
            }
          }
          else if (uVar5 == 0x404) {
            fVar38 = *(float *)(pvmCode + uVar22);
            if (fVar38 < -2.147484e+09) {
LAB_00149a98:
              *(undefined4 *)(pvmCode + uVar28) = 0x80000000;
            }
            else if (2.147484e+09 < fVar38) {
LAB_00149c6c:
              *(undefined4 *)(pvmCode + uVar28) = 0x7fffffff;
            }
            else {
              *(int *)(pvmCode + uVar28) = (int)fVar38;
            }
          }
          else if (uVar5 == 0x408) {
            fVar38 = *(float *)(pvmCode + uVar22);
            if (fVar38 < -9.223372e+18) {
LAB_00149958:
              lVar33 = -0x8000000000000000;
            }
            else if (9.223372e+18 < fVar38) {
LAB_00149ca8:
              lVar33 = 0x7fffffffffffffff;
            }
            else {
              lVar33 = (long)fVar38;
            }
LAB_00149d54:
            *(long *)(pvmCode + uVar28) = lVar33;
          }
        }
        else if (uVar5 < 0x804) {
          if (uVar5 == 0x801) {
            dVar39 = *(double *)(pvmCode + uVar22);
            if (dVar39 < -128.0) goto LAB_00149a40;
            if (127.0 < dVar39) goto LAB_00149c4c;
            pvmCode[uVar28] = (char)(int)dVar39;
          }
          else if (uVar5 == 0x802) {
            dVar39 = *(double *)(pvmCode + uVar22);
            if (dVar39 < -32768.0) goto LAB_001497a0;
            if (32767.0 < dVar39) goto LAB_00149c8c;
            *(short *)(pvmCode + uVar28) = (short)(int)dVar39;
          }
        }
        else if (uVar5 == 0x804) {
          dVar39 = *(double *)(pvmCode + uVar22);
          if (dVar39 < -2147483648.0) goto LAB_00149a98;
          if (2147483647.0 < dVar39) goto LAB_00149c6c;
          *(int *)(pvmCode + uVar28) = (int)dVar39;
        }
        else if (uVar5 == 0x808) {
          dVar39 = *(double *)(pvmCode + uVar22);
          if (dVar39 < -9.223372036854776e+18) goto LAB_00149958;
          if (9.223372036854776e+18 < dVar39) goto LAB_00149ca8;
          lVar33 = (long)dVar39;
          goto LAB_00149d54;
        }
        pvmCode = (vm.context)->vmCode;
        uVar36 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          uVar34 = uVar34 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar34 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar34 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        goto LAB_00149db4;
      case 0x43:
        uVar20 = (vm.context)->vmCodeLength;
        codeLength = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + codeLength);
        (vm.context)->pc = codeLength + 4;
        uVar26 = *(uint *)(pvmCode + (codeLength + 4));
        (vm.context)->pc = codeLength + 8;
        uVar25 = *(ulong *)(pvmCode + (codeLength + 8));
        (vm.context)->pc = codeLength + 0x10;
        uVar19 = *(uint *)(pvmCode + (codeLength + 0x10));
        (vm.context)->pc = codeLength + 0x14;
        sVar7 = *(short *)(pvmCode + (codeLength + 0x14));
        (vm.context)->pc = codeLength + 0x16;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        uVar24 = *(uint *)(pvmCode + (codeLength + 0x16));
        (vm.context)->pc = codeLength + 0x1a;
        uVar22 = 0;
        if (uVar20 != 0) {
          uVar22 = uVar21 / uVar20;
        }
        uVar27 = *(uint *)(pvmCode + (codeLength + 0x1a));
        (vm.context)->pc = codeLength + 0x1e;
        uVar28 = *(uint *)(pvmCode + (codeLength + 0x1e));
        (vm.context)->pc = codeLength + 0x22;
        uVar28 = uVar28 ^ uVar20 ^ 0xffffffff;
        codeLength = 0;
        if (uVar20 != 0) {
          codeLength = uVar28 / uVar20;
        }
        *(undefined8 *)(pvmCode + (uVar21 - uVar22 * uVar20)) =
             *(undefined8 *)(pvmCode + (uVar28 - codeLength * uVar20));
        pvmCode = (vm.context)->vmCode;
        uVar36 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar19 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar19 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        break;
      case 0x4b:
        uVar20 = (vm.context)->vmCodeLength;
        codeLength = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + codeLength);
        (vm.context)->pc = codeLength + 4;
        uVar19 = *(uint *)(pvmCode + (codeLength + 4));
        (vm.context)->pc = codeLength + 8;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        uVar22 = 0;
        if (uVar20 != 0) {
          uVar22 = uVar21 / uVar20;
        }
        uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
        uVar28 = *(uint *)(pvmCode + (codeLength + 8)) ^ uVar20 ^ 0xffffffff;
        uVar34 = 0;
        if (uVar20 != 0) {
          uVar34 = uVar28 / uVar20;
        }
        (vm.context)->pc = codeLength + 0xc;
        uVar26 = *(uint *)(pvmCode + (codeLength + 0xc));
        (vm.context)->pc = codeLength + 0x10;
        uVar25 = *(ulong *)(pvmCode + (codeLength + 0x10));
        uVar4 = 0;
        if (uVar20 != 0) {
          uVar4 = uVar19 / uVar20;
        }
        (vm.context)->pc = codeLength + 0x18;
        uVar27 = *(uint *)(pvmCode + (codeLength + 0x18));
        (vm.context)->pc = codeLength + 0x1c;
        sVar7 = *(short *)(pvmCode + (codeLength + 0x1c));
        (vm.context)->pc = codeLength + 0x1e;
        uVar24 = *(uint *)(pvmCode + (codeLength + 0x1e));
        (vm.context)->pc = codeLength + 0x22;
        uVar29 = *(uint *)(pvmCode + (codeLength + 0x22));
        (vm.context)->pc = codeLength + 0x26;
        pvmCode[uVar19 - uVar4 * uVar20] =
             pvmCode[uVar28 - uVar34 * uVar20] ^ pvmCode[uVar21 - uVar22 * uVar20];
        pvmCode = (vm.context)->vmCode;
        uVar36 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          uVar27 = uVar27 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar27 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar27 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        goto LAB_00149db4;
      case 0x4e:
        uVar20 = (vm.context)->vmCodeLength;
        uVar34 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar22 = *(uint *)(pvmCode + uVar34);
        (vm.context)->pc = uVar34 + 4;
        uVar25 = *(ulong *)(pvmCode + (uVar34 + 4));
        (vm.context)->pc = uVar34 + 0xc;
        uVar28 = *(uint *)(pvmCode + (uVar34 + 0xc));
        (vm.context)->pc = uVar34 + 0x10;
        sVar7 = *(short *)(pvmCode + (uVar34 + 0x10));
        (vm.context)->pc = uVar34 + 0x12;
        uVar24 = *(uint *)(pvmCode + (uVar34 + 0x12));
        (vm.context)->pc = uVar34 + 0x16;
        uVar26 = *(uint *)(pvmCode + (uVar34 + 0x16));
        (vm.context)->pc = uVar34 + 0x1a;
        uVar21 = *(uint *)(pvmCode + (uVar34 + 0x1a));
        (vm.context)->pc = uVar34 + 0x1e;
        uVar19 = *(uint *)(pvmCode + (uVar34 + 0x1e));
        (vm.context)->pc = uVar34 + 0x22;
        codeLength = *(uint *)(pvmCode + (uVar34 + 0x22));
        (vm.context)->pc = uVar34 + 0x26;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
        uVar34 = 0;
        if (uVar20 != 0) {
          uVar34 = uVar21 / uVar20;
        }
        codeLength = codeLength ^ uVar20 ^ 0xffffffff;
        uVar4 = 0;
        if (uVar20 != 0) {
          uVar4 = uVar19 / uVar20;
        }
        uVar27 = 0;
        if (uVar20 != 0) {
          uVar27 = codeLength / uVar20;
        }
        iVar30 = *(int *)(pvmCode + (uVar19 - uVar4 * uVar20));
        iVar11 = 0;
        if (iVar30 != 0) {
          iVar11 = *(int *)(pvmCode + (codeLength - uVar27 * uVar20)) / iVar30;
        }
        *(int *)(pvmCode + (uVar21 - uVar34 * uVar20)) =
             *(int *)(pvmCode + (codeLength - uVar27 * uVar20)) - iVar11 * iVar30;
        pvmCode = (vm.context)->vmCode;
        uVar36 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          uVar28 = uVar28 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar28 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar28 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        goto LAB_0014760c;
      case 0x4f:
        uVar20 = (vm.context)->vmCodeLength;
        uVar26 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar28 = *(uint *)(pvmCode + uVar26);
        (vm.context)->pc = uVar26 + 4;
        uVar36 = *(ulong *)(pvmCode + (uVar26 + 4));
        (vm.context)->pc = uVar26 + 0xc;
        uVar22 = *(uint *)(pvmCode + (uVar26 + 0xc));
        (vm.context)->pc = uVar26 + 0x10;
        sVar7 = *(short *)(pvmCode + (uVar26 + 0x10));
        (vm.context)->pc = uVar26 + 0x12;
        uVar24 = *(uint *)(pvmCode + (uVar26 + 0x12));
        (vm.context)->pc = uVar26 + 0x16;
        uVar27 = *(uint *)(pvmCode + (uVar26 + 0x16));
        (vm.context)->pc = uVar26 + 0x1a;
        uVar21 = *(uint *)(pvmCode + (uVar26 + 0x1a));
        (vm.context)->pc = uVar26 + 0x1e;
        uVar19 = *(uint *)(pvmCode + (uVar26 + 0x1e));
        (vm.context)->pc = uVar26 + 0x22;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        codeLength = *(uint *)(pvmCode + (uVar26 + 0x22));
        uVar34 = 0;
        if (uVar20 != 0) {
          uVar34 = uVar21 / uVar20;
        }
        (vm.context)->pc = uVar26 + 0x26;
        uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
        codeLength = codeLength ^ uVar20 ^ 0xffffffff;
        uVar26 = 0;
        if (uVar20 != 0) {
          uVar26 = codeLength / uVar20;
        }
        uVar4 = 0;
        if (uVar20 != 0) {
          uVar4 = uVar19 / uVar20;
        }
        *(long *)(pvmCode + (uVar19 - uVar4 * uVar20)) =
             *(long *)(pvmCode + (codeLength - uVar26 * uVar20)) *
             *(long *)(pvmCode + (uVar21 - uVar34 * uVar20));
        pvmCode = (vm.context)->vmCode;
        uVar25 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          uVar22 = uVar22 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar22 / uVar20;
          }
          uVar25 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar22 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar25 = uVar25 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        goto LAB_00149514;
      case 0x51:
        codeLength = (vm.context)->vmCodeLength;
        uVar22 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + uVar22);
        (vm.context)->pc = uVar22 + 4;
        uVar19 = *(uint *)(pvmCode + (uVar22 + 4));
        (vm.context)->pc = uVar22 + 8;
        uVar21 = uVar21 ^ codeLength ^ 0xffffffff;
        uVar25 = *(ulong *)(pvmCode + (uVar22 + 8));
        (vm.context)->pc = uVar22 + 0x10;
        uVar20 = *(uint *)(pvmCode + (uVar22 + 0x10));
        (vm.context)->pc = uVar22 + 0x14;
        sVar7 = *(short *)(pvmCode + (uVar22 + 0x14));
        (vm.context)->pc = uVar22 + 0x16;
        uVar24 = *(uint *)(pvmCode + (uVar22 + 0x16));
        (vm.context)->pc = uVar22 + 0x1a;
        uVar28 = *(uint *)(pvmCode + (uVar22 + 0x1a));
        (vm.context)->pc = uVar22 + 0x1e;
        uVar26 = 0;
        if (codeLength != 0) {
          uVar26 = uVar21 / codeLength;
        }
        uVar34 = *(uint *)(pvmCode + (uVar22 + 0x1e));
        (vm.context)->pc = uVar22 + 0x22;
        uVar34 = uVar34 ^ codeLength ^ 0xffffffff;
        uVar22 = 0;
        if (codeLength != 0) {
          uVar22 = uVar34 / codeLength;
        }
        FUN_00149f88_XOR((astruct_3 *)local_b0,pvmCode,codeLength,uVar21 - uVar26 * codeLength,
                         uVar34 - uVar22 * codeLength);
        uVar36 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          uVar20 = uVar20 ^ codeLength ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (codeLength != 0) {
            uVar21 = uVar20 / codeLength;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar20 - uVar21 * codeLength);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)paVar11->vmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        uVar19 = uVar19 ^ codeLength ^ 0xffffffff;
        uVar21 = 0;
        if (codeLength != 0) {
          uVar21 = uVar19 / codeLength;
        }
        if ((uVar36 ^ (long)*(int *)(paVar11->vmCode + (uVar19 - uVar21 * codeLength))) != uVar25) {
          uVar24 = uVar28;
        }
        if (((ulong)local_b0 & 1) != 0) {
          free(local_a0[0].field0_0x0);
        }
        uVar24 = uVar24 ^ codeLength ^ 0xffffffff;
        uVar21 = 0;
        if (codeLength != 0) {
          uVar21 = uVar24 / codeLength;
        }
        uVar24 = uVar24 - uVar21 * codeLength;
        goto LAB_00149ddc;
      case 0x52:
        uVar20 = (vm.context)->vmCodeLength;
        uVar19 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + uVar19) ^ uVar20 ^ 0xffffffff;
        (vm.context)->pc = uVar19 + 4;
        codeLength = 0;
        if (uVar20 != 0) {
          codeLength = uVar21 / uVar20;
        }
        uVar22 = *(uint *)(pvmCode + (uVar19 + 4)) ^ uVar20 ^ 0xffffffff;
        (vm.context)->pc = uVar19 + 8;
        uVar28 = *(uint *)(pvmCode + (uVar19 + 8));
        (vm.context)->pc = uVar19 + 0xc;
        uVar26 = *(uint *)(pvmCode + (uVar19 + 0xc));
        (vm.context)->pc = uVar19 + 0x10;
        uVar34 = 0;
        if (uVar20 != 0) {
          uVar34 = uVar22 / uVar20;
        }
        uVar25 = *(ulong *)(pvmCode + (uVar19 + 0x10));
        (vm.context)->pc = uVar19 + 0x18;
        uVar4 = *(uint *)(pvmCode + (uVar19 + 0x18));
        (vm.context)->pc = uVar19 + 0x1c;
        sVar7 = *(short *)(pvmCode + (uVar19 + 0x1c));
        (vm.context)->pc = uVar19 + 0x1e;
        uVar24 = *(uint *)(pvmCode + (uVar19 + 0x1e));
        (vm.context)->pc = uVar19 + 0x22;
        uVar27 = *(uint *)(pvmCode + (uVar19 + 0x22));
        (vm.context)->pc = uVar19 + 0x26;
        uVar28 = uVar28 ^ uVar20 ^ 0xffffffff;
        uVar19 = 0;
        if (uVar20 != 0) {
          uVar19 = uVar28 / uVar20;
        }
        uVar36 = 0xcbf29ce484222325;
        *(double *)(pvmCode + (uVar28 - uVar19 * uVar20)) =
             *(double *)(pvmCode + (uVar21 - codeLength * uVar20)) /
             *(double *)(pvmCode + (uVar22 - uVar34 * uVar20));
        if (sVar7 != 0) {
          uVar4 = uVar4 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar4 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar4 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)(vm.context)->vmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        uVar26 = uVar26 ^ uVar20 ^ 0xffffffff;
        uVar21 = 0;
        if (uVar20 != 0) {
          uVar21 = uVar26 / uVar20;
        }
        if ((uVar36 ^ (long)*(int *)((vm.context)->vmCode + (uVar26 - uVar21 * uVar20))) != uVar25)
        {
          uVar24 = uVar27;
        }
        goto LAB_00149dd0;
      case 0x55:
        uVar20 = (vm.context)->vmCodeLength;
        uVar26 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar28 = *(uint *)(pvmCode + uVar26);
        (vm.context)->pc = uVar26 + 4;
        uVar36 = *(ulong *)(pvmCode + (uVar26 + 4));
        (vm.context)->pc = uVar26 + 0xc;
        uVar22 = *(uint *)(pvmCode + (uVar26 + 0xc));
        (vm.context)->pc = uVar26 + 0x10;
        sVar7 = *(short *)(pvmCode + (uVar26 + 0x10));
        (vm.context)->pc = uVar26 + 0x12;
        uVar24 = *(uint *)(pvmCode + (uVar26 + 0x12));
        (vm.context)->pc = uVar26 + 0x16;
        uVar27 = *(uint *)(pvmCode + (uVar26 + 0x16));
        (vm.context)->pc = uVar26 + 0x1a;
        uVar21 = *(uint *)(pvmCode + (uVar26 + 0x1a));
        (vm.context)->pc = uVar26 + 0x1e;
        uVar19 = *(uint *)(pvmCode + (uVar26 + 0x1e));
        (vm.context)->pc = uVar26 + 0x22;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        codeLength = *(uint *)(pvmCode + (uVar26 + 0x22));
        uVar34 = 0;
        if (uVar20 != 0) {
          uVar34 = uVar21 / uVar20;
        }
        (vm.context)->pc = uVar26 + 0x26;
        uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
        codeLength = codeLength ^ uVar20 ^ 0xffffffff;
        uVar26 = 0;
        if (uVar20 != 0) {
          uVar26 = codeLength / uVar20;
        }
        uVar4 = 0;
        if (uVar20 != 0) {
          uVar4 = uVar19 / uVar20;
        }
        uVar25 = 0xcbf29ce484222325;
        *(ulong *)(pvmCode + (uVar19 - uVar4 * uVar20)) =
             *(ulong *)(pvmCode + (uVar21 - uVar34 * uVar20)) ^
             *(ulong *)(pvmCode + (codeLength - uVar26 * uVar20));
        pvmCode = (vm.context)->vmCode;
        if (sVar7 != 0) {
          uVar22 = uVar22 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar22 / uVar20;
          }
          uVar25 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar22 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar25 = uVar25 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        goto LAB_00149514;
      case 0x57:
        uVar20 = (vm.context)->vmCodeLength;
        codeLength = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + codeLength);
        (vm.context)->pc = codeLength + 4;
        uVar26 = *(uint *)(pvmCode + (codeLength + 4));
        (vm.context)->pc = codeLength + 8;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        uVar25 = *(ulong *)(pvmCode + (codeLength + 8));
        (vm.context)->pc = codeLength + 0x10;
        uVar19 = *(uint *)(pvmCode + (codeLength + 0x10));
        (vm.context)->pc = codeLength + 0x14;
        sVar7 = *(short *)(pvmCode + (codeLength + 0x14));
        (vm.context)->pc = codeLength + 0x16;
        uVar24 = *(uint *)(pvmCode + (codeLength + 0x16));
        (vm.context)->pc = codeLength + 0x1a;
        uVar27 = *(uint *)(pvmCode + (codeLength + 0x1a));
        (vm.context)->pc = codeLength + 0x1e;
        uVar22 = 0;
        if (uVar20 != 0) {
          uVar22 = uVar21 / uVar20;
        }
        uVar28 = *(uint *)(pvmCode + (codeLength + 0x1e));
        (vm.context)->pc = codeLength + 0x22;
        uVar34 = *(uint *)(pvmCode + (codeLength + 0x22));
        (vm.context)->pc = codeLength + 0x26;
        uVar28 = uVar28 ^ uVar20 ^ 0xffffffff;
        uVar4 = *(uint *)(pvmCode + (codeLength + 0x26));
        (vm.context)->pc = codeLength + 0x2a;
        uVar34 = uVar34 ^ uVar20 ^ 0xffffffff;
        uVar4 = uVar4 ^ uVar20 ^ 0xffffffff;
        codeLength = 0;
        if (uVar20 != 0) {
          codeLength = uVar28 / uVar20;
        }
        uVar29 = 0;
        if (uVar20 != 0) {
          uVar29 = uVar34 / uVar20;
        }
        uVar5 = CONCAT11(pvmCode[uVar21 - uVar22 * uVar20],pvmCode[uVar28 - codeLength * uVar20]);
        uVar21 = 0;
        if (uVar20 != 0) {
          uVar21 = uVar4 / uVar20;
        }
        uVar34 = uVar34 - uVar29 * uVar20;
        uVar4 = uVar4 - uVar21 * uVar20;
        if (uVar5 < 0x401) {
          if (uVar5 < 0x201) {
            if (uVar5 == 0x102) {
              *(ushort *)(pvmCode + uVar4) = (ushort)(byte)pvmCode[uVar34];
            }
            else if (uVar5 == 0x104) {
              *(uint *)(pvmCode + uVar4) = (uint)(byte)pvmCode[uVar34];
            }
            else if (uVar5 == 0x108) {
              *(ulong *)(pvmCode + uVar4) = (ulong)(byte)pvmCode[uVar34];
            }
          }
          else if (uVar5 == 0x201) {
            pvmCode[uVar4] = pvmCode[uVar34];
          }
          else if (uVar5 == 0x204) {
            *(uint *)(pvmCode + uVar4) = (uint)*(ushort *)(pvmCode + uVar34);
          }
          else if (uVar5 == 0x208) {
            *(ulong *)(pvmCode + uVar4) = (ulong)*(ushort *)(pvmCode + uVar34);
          }
        }
        else if (uVar5 < 0x801) {
          if (uVar5 == 0x401) {
            pvmCode[uVar4] = (char)*(undefined4 *)(pvmCode + uVar34);
          }
          else if (uVar5 == 0x402) {
            *(short *)(pvmCode + uVar4) = (short)*(undefined4 *)(pvmCode + uVar34);
          }
          else if (uVar5 == 0x408) {
            *(ulong *)(pvmCode + uVar4) = (ulong)*(uint *)(pvmCode + uVar34);
          }
        }
        else if (uVar5 == 0x801) {
          pvmCode[uVar4] = (char)*(undefined8 *)(pvmCode + uVar34);
        }
        else if (uVar5 == 0x802) {
          *(short *)(pvmCode + uVar4) = (short)*(undefined8 *)(pvmCode + uVar34);
        }
        else if (uVar5 == 0x804) {
          *(int *)(pvmCode + uVar4) = (int)*(undefined8 *)(pvmCode + uVar34);
        }
        pvmCode = (vm.context)->vmCode;
        uVar36 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar19 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar19 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        break;
      case 0x58:
        uVar20 = (vm.context)->vmCodeLength;
        codeLength = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + codeLength);
        (vm.context)->pc = codeLength + 4;
        uVar26 = *(uint *)(pvmCode + (codeLength + 4));
        (vm.context)->pc = codeLength + 8;
        uVar25 = *(ulong *)(pvmCode + (codeLength + 8));
        (vm.context)->pc = codeLength + 0x10;
        uVar19 = *(uint *)(pvmCode + (codeLength + 0x10));
        (vm.context)->pc = codeLength + 0x14;
        sVar7 = *(short *)(pvmCode + (codeLength + 0x14));
        (vm.context)->pc = codeLength + 0x16;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        uVar24 = *(uint *)(pvmCode + (codeLength + 0x16));
        (vm.context)->pc = codeLength + 0x1a;
        uVar22 = 0;
        if (uVar20 != 0) {
          uVar22 = uVar21 / uVar20;
        }
        uVar27 = *(uint *)(pvmCode + (codeLength + 0x1a));
        (vm.context)->pc = codeLength + 0x1e;
        uVar28 = *(uint *)(pvmCode + (codeLength + 0x1e));
        (vm.context)->pc = codeLength + 0x22;
        uVar28 = uVar28 ^ uVar20 ^ 0xffffffff;
        codeLength = 0;
        if (uVar20 != 0) {
          codeLength = uVar28 / uVar20;
        }
        pvmCode[uVar21 - uVar22 * uVar20] = pvmCode[uVar28 - codeLength * uVar20];
        pvmCode = (vm.context)->vmCode;
        uVar36 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar19 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar19 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        break;
      case 0x5d:
        uVar20 = (vm.context)->vmCodeLength;
        uVar22 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + uVar22);
        (vm.context)->pc = uVar22 + 4;
        uVar19 = *(uint *)(pvmCode + (uVar22 + 4));
        (vm.context)->pc = uVar22 + 8;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        uVar26 = *(uint *)(pvmCode + (uVar22 + 8));
        (vm.context)->pc = uVar22 + 0xc;
        uVar25 = *(ulong *)(pvmCode + (uVar22 + 0xc));
        (vm.context)->pc = uVar22 + 0x14;
        codeLength = *(uint *)(pvmCode + (uVar22 + 0x14));
        (vm.context)->pc = uVar22 + 0x18;
        sVar7 = *(short *)(pvmCode + (uVar22 + 0x18));
        (vm.context)->pc = uVar22 + 0x1a;
        uVar24 = *(uint *)(pvmCode + (uVar22 + 0x1a));
        (vm.context)->pc = uVar22 + 0x1e;
        uVar28 = 0;
        if (uVar20 != 0) {
          uVar28 = uVar21 / uVar20;
        }
        uVar27 = *(uint *)(pvmCode + (uVar22 + 0x1e));
        (vm.context)->pc = uVar22 + 0x22;
        uVar34 = *(uint *)(pvmCode + (uVar22 + 0x22));
        (vm.context)->pc = uVar22 + 0x26;
        uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
        uVar34 = uVar34 ^ uVar20 ^ 0xffffffff;
        uVar22 = 0;
        if (uVar20 != 0) {
          uVar22 = uVar34 / uVar20;
        }
        uVar4 = 0;
        if (uVar20 != 0) {
          uVar4 = uVar19 / uVar20;
        }
        uVar36 = 0xcbf29ce484222325;
        *(float *)(pvmCode + (uVar19 - uVar4 * uVar20)) =
             *(float *)(pvmCode + (uVar21 - uVar28 * uVar20)) /
             *(float *)(pvmCode + (uVar34 - uVar22 * uVar20));
        pvmCode = (vm.context)->vmCode;
        if (sVar7 != 0) {
          codeLength = codeLength ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = codeLength / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(codeLength - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        break;
      case 0x5e:
        uVar19 = (vm.context)->vmCodeLength;
        codeLength = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + codeLength);
        (vm.context)->pc = codeLength + 4;
        uVar20 = *(uint *)(pvmCode + (codeLength + 4));
        (vm.context)->pc = codeLength + 8;
        uVar21 = uVar21 ^ uVar19 ^ 0xffffffff;
        uVar22 = 0;
        if (uVar19 != 0) {
          uVar22 = uVar21 / uVar19;
        }
        uVar20 = uVar20 ^ uVar19 ^ 0xffffffff;
        uVar28 = *(uint *)(pvmCode + (codeLength + 8)) ^ uVar19 ^ 0xffffffff;
        uVar26 = 0;
        if (uVar19 != 0) {
          uVar26 = uVar28 / uVar19;
        }
        (vm.context)->pc = codeLength + 0xc;
        uVar4 = *(uint *)(pvmCode + (codeLength + 0xc));
        uVar27 = 0;
        if (uVar19 != 0) {
          uVar27 = uVar20 / uVar19;
        }
        (vm.context)->pc = codeLength + 0x10;
        uVar36 = *(ulong *)(pvmCode + (codeLength + 0x10));
        (vm.context)->pc = codeLength + 0x18;
        uVar29 = *(uint *)(pvmCode + (codeLength + 0x18));
        (vm.context)->pc = codeLength + 0x1c;
        sVar7 = *(short *)(pvmCode + (codeLength + 0x1c));
        (vm.context)->pc = codeLength + 0x1e;
        uVar24 = *(uint *)(pvmCode + (codeLength + 0x1e));
        (vm.context)->pc = codeLength + 0x22;
        uVar34 = *(uint *)(pvmCode + (codeLength + 0x22));
        (vm.context)->pc = codeLength + 0x26;
        memmove(pvmCode + (uVar20 - uVar27 * uVar19),pvmCode + (uVar21 - uVar22 * uVar19),
                (long)*(short *)(pvmCode + (uVar28 - uVar26 * uVar19)));
        uVar25 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          uVar29 = uVar29 ^ uVar19 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar19 != 0) {
            uVar21 = uVar29 / uVar19;
          }
          uVar25 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar29 - uVar21 * uVar19);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar25 = uVar25 * 0x100000001b3 ^ (long)paVar11->vmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        uVar4 = uVar4 ^ uVar19 ^ 0xffffffff;
        uVar21 = 0;
        if (uVar19 != 0) {
          uVar21 = uVar4 / uVar19;
        }
        bVar9 = (uVar25 ^ (long)*(int *)(paVar11->vmCode + (uVar4 - uVar21 * uVar19))) == uVar36;
        goto LAB_00148af8;
      case 0x60:
        uVar20 = (vm.context)->vmCodeLength;
        uVar28 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        (vm.context)->pc = uVar28 + 4;
        uVar19 = *(uint *)(pvmCode + (uVar28 + 4));
        (vm.context)->pc = uVar28 + 8;
        uVar26 = *(uint *)(pvmCode + (uVar28 + 8));
        (vm.context)->pc = uVar28 + 0xc;
        uVar25 = *(ulong *)(pvmCode + (uVar28 + 0xc));
        (vm.context)->pc = uVar28 + 0x14;
        uVar22 = *(uint *)(pvmCode + (uVar28 + 0x14));
        (vm.context)->pc = uVar28 + 0x18;
        sVar7 = *(short *)(pvmCode + (uVar28 + 0x18));
        (vm.context)->pc = uVar28 + 0x1a;
        uVar24 = *(uint *)(pvmCode + (uVar28 + 0x1a));
        (vm.context)->pc = uVar28 + 0x1e;
        uVar27 = *(uint *)(pvmCode + (uVar28 + 0x1e));
        (vm.context)->pc = uVar28 + 0x22;
        codeLength = *(uint *)(pvmCode + (uVar28 + 0x22));
        (vm.context)->pc = uVar28 + 0x26;
        uVar21 = *(uint *)(pvmCode + (uVar28 + 0x26));
        (vm.context)->pc = uVar28 + 0x2a;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        uVar28 = 0;
        if (uVar20 != 0) {
          uVar28 = uVar21 / uVar20;
        }
        uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
        uVar34 = 0;
        if (uVar20 != 0) {
          uVar34 = uVar19 / uVar20;
        }
        uVar31 = 0xffffffff;
        if (*(double *)(pvmCode + (uVar19 - uVar34 * uVar20)) <
            *(double *)(pvmCode + (uVar21 - uVar28 * uVar20))) {
          uVar31 = 1;
        }
        uVar3 = 0;
        if (*(double *)(pvmCode + (uVar21 - uVar28 * uVar20)) !=
            *(double *)(pvmCode + (uVar19 - uVar34 * uVar20))) {
          uVar3 = uVar31;
        }
        codeLength = codeLength ^ uVar20 ^ 0xffffffff;
        uVar21 = 0;
        if (uVar20 != 0) {
          uVar21 = codeLength / uVar20;
        }
        *(undefined4 *)(pvmCode + (codeLength - uVar21 * uVar20)) = uVar3;
        pvmCode = (vm.context)->vmCode;
        uVar36 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          uVar22 = uVar22 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar22 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar22 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        break;
      case 0x61:
        uVar20 = (vm.context)->vmCodeLength;
        codeLength = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar25 = 0xcbf29ce484222325;
        uVar19 = *(uint *)(pvmCode + codeLength);
        (vm.context)->pc = codeLength + 4;
        uVar36 = *(ulong *)(pvmCode + (codeLength + 4));
        (vm.context)->pc = codeLength + 0xc;
        uVar21 = *(uint *)(pvmCode + (codeLength + 0xc));
        (vm.context)->pc = codeLength + 0x10;
        sVar7 = *(short *)(pvmCode + (codeLength + 0x10));
        (vm.context)->pc = codeLength + 0x12;
        uVar24 = *(uint *)(pvmCode + (codeLength + 0x12));
        (vm.context)->pc = codeLength + 0x16;
        uVar29 = *(uint *)(pvmCode + (codeLength + 0x16));
        (vm.context)->pc = codeLength + 0x1a;
        if (sVar7 != 0) {
          uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          codeLength = 0;
          if (uVar20 != 0) {
            codeLength = uVar21 / uVar20;
          }
          uVar25 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar21 - codeLength * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar25 = uVar25 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
        uVar21 = 0;
        if (uVar20 != 0) {
          uVar21 = uVar19 / uVar20;
        }
        iVar30 = *(int *)(pvmCode + (uVar19 - uVar21 * uVar20));
LAB_00148080:
        bVar9 = (uVar25 ^ (long)iVar30) == uVar36;
        goto LAB_00149dcc;
      case 0x62:
        uVar20 = (vm.context)->vmCodeLength;
        codeLength = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + codeLength);
        (vm.context)->pc = codeLength + 4;
        uVar26 = *(uint *)(pvmCode + (codeLength + 4));
        (vm.context)->pc = codeLength + 8;
        uVar25 = *(ulong *)(pvmCode + (codeLength + 8));
        (vm.context)->pc = codeLength + 0x10;
        uVar19 = *(uint *)(pvmCode + (codeLength + 0x10));
        (vm.context)->pc = codeLength + 0x14;
        sVar7 = *(short *)(pvmCode + (codeLength + 0x14));
        (vm.context)->pc = codeLength + 0x16;
        uVar24 = *(uint *)(pvmCode + (codeLength + 0x16));
        (vm.context)->pc = codeLength + 0x1a;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        uVar27 = *(uint *)(pvmCode + (codeLength + 0x1a));
        (vm.context)->pc = codeLength + 0x1e;
        uVar22 = 0;
        if (uVar20 != 0) {
          uVar22 = uVar21 / uVar20;
        }
        uVar28 = *(uint *)(pvmCode + (codeLength + 0x1e));
        (vm.context)->pc = codeLength + 0x22;
        uVar34 = *(uint *)(pvmCode + (codeLength + 0x22));
        (vm.context)->pc = codeLength + 0x26;
        uVar28 = uVar28 ^ uVar20 ^ 0xffffffff;
        uVar34 = uVar34 ^ uVar20 ^ 0xffffffff;
        codeLength = 0;
        if (uVar20 != 0) {
          codeLength = uVar28 / uVar20;
        }
        uVar4 = 0;
        if (uVar20 != 0) {
          uVar4 = uVar34 / uVar20;
        }
        *(int *)(pvmCode + (uVar21 - uVar22 * uVar20)) =
             *(int *)(pvmCode + (uVar34 - uVar4 * uVar20)) >>
             (*(uint *)(pvmCode + (uVar28 - codeLength * uVar20)) & 0x1f);
        pvmCode = (vm.context)->vmCode;
        uVar36 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar19 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar19 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        break;
      case 0x68:
        uVar20 = (vm.context)->vmCodeLength;
        uVar19 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + uVar19) ^ uVar20 ^ 0xffffffff;
        (vm.context)->pc = uVar19 + 4;
        codeLength = 0;
        if (uVar20 != 0) {
          codeLength = uVar21 / uVar20;
        }
        uVar22 = *(uint *)(pvmCode + (uVar19 + 4));
        (vm.context)->pc = uVar19 + 8;
        uVar28 = *(uint *)(pvmCode + (uVar19 + 8));
        (vm.context)->pc = uVar19 + 0xc;
        uVar22 = uVar22 ^ uVar20 ^ 0xffffffff;
        uVar28 = uVar28 ^ uVar20 ^ 0xffffffff;
        uVar26 = *(uint *)(pvmCode + (uVar19 + 0xc));
        (vm.context)->pc = uVar19 + 0x10;
        uVar25 = *(ulong *)(pvmCode + (uVar19 + 0x10));
        (vm.context)->pc = uVar19 + 0x18;
        uVar34 = *(uint *)(pvmCode + (uVar19 + 0x18));
        (vm.context)->pc = uVar19 + 0x1c;
        sVar7 = *(short *)(pvmCode + (uVar19 + 0x1c));
        (vm.context)->pc = uVar19 + 0x1e;
        uVar24 = *(uint *)(pvmCode + (uVar19 + 0x1e));
        (vm.context)->pc = uVar19 + 0x22;
        uVar4 = 0;
        if (uVar20 != 0) {
          uVar4 = uVar28 / uVar20;
        }
        uVar29 = *(uint *)(pvmCode + (uVar19 + 0x22));
        (vm.context)->pc = uVar19 + 0x26;
        uVar27 = *(uint *)(pvmCode + (uVar19 + 0x26));
        (vm.context)->pc = uVar19 + 0x2a;
        uVar21 = uVar21 - codeLength * uVar20;
        uVar27 = uVar27 ^ uVar20 ^ 0xffffffff;
        uVar19 = 0;
        if (uVar20 != 0) {
          uVar19 = uVar27 / uVar20;
        }
        codeLength = 0;
        if (uVar20 != 0) {
          codeLength = uVar22 / uVar20;
        }
        uVar22 = uVar22 - codeLength * uVar20;
        if (CONCAT11(pvmCode[uVar28 - uVar4 * uVar20],pvmCode[uVar27 - uVar19 * uVar20]) == 0x804) {
          *(float *)(pvmCode + uVar21) = (float)*(double *)(pvmCode + uVar22);
          pvmCode = (vm.context)->vmCode;
        }
        else {
          if (CONCAT11(pvmCode[uVar28 - uVar4 * uVar20],pvmCode[uVar27 - uVar19 * uVar20]) == 0x408)
          {
            *(double *)(pvmCode + uVar21) = (double)*(float *)(pvmCode + uVar22);
          }
          pvmCode = (vm.context)->vmCode;
        }
        uVar36 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          uVar34 = uVar34 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar34 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar34 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        goto LAB_00149db4;
      case 0x69:
        uVar20 = (vm.context)->vmCodeLength;
        uVar22 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + uVar22);
        (vm.context)->pc = uVar22 + 4;
        codeLength = *(uint *)(pvmCode + (uVar22 + 4));
        (vm.context)->pc = uVar22 + 8;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        uVar25 = *(ulong *)(pvmCode + (uVar22 + 8));
        (vm.context)->pc = uVar22 + 0x10;
        uVar19 = *(uint *)(pvmCode + (uVar22 + 0x10));
        (vm.context)->pc = uVar22 + 0x14;
        sVar7 = *(short *)(pvmCode + (uVar22 + 0x14));
        (vm.context)->pc = uVar22 + 0x16;
        uVar24 = *(uint *)(pvmCode + (uVar22 + 0x16));
        (vm.context)->pc = uVar22 + 0x1a;
        uVar28 = *(uint *)(pvmCode + (uVar22 + 0x1a));
        (vm.context)->pc = uVar22 + 0x1e;
        uVar26 = 0;
        if (uVar20 != 0) {
          uVar26 = uVar21 / uVar20;
        }
        uVar34 = *(uint *)(pvmCode + (uVar22 + 0x1e));
        (vm.context)->pc = uVar22 + 0x22;
        uVar4 = *(uint *)(pvmCode + (uVar22 + 0x22));
        (vm.context)->pc = uVar22 + 0x26;
        uVar34 = uVar34 ^ uVar20 ^ 0xffffffff;
        uVar4 = uVar4 ^ uVar20 ^ 0xffffffff;
        uVar22 = 0;
        if (uVar20 != 0) {
          uVar22 = uVar4 / uVar20;
        }
        uVar27 = 0;
        if (uVar20 != 0) {
          uVar27 = uVar34 / uVar20;
        }
        *(long *)(pvmCode + (uVar34 - uVar27 * uVar20)) =
             *(long *)(pvmCode + (uVar4 - uVar22 * uVar20)) >>
             ((ulong)*(uint *)(pvmCode + (uVar21 - uVar26 * uVar20)) & 0x3f);
        pvmCode = (vm.context)->vmCode;
        uVar36 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar19 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar19 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        goto LAB_001493e4;
      case 0x6c:
        uVar20 = (vm.context)->vmCodeLength;
        uVar19 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + uVar19) ^ uVar20 ^ 0xffffffff;
        (vm.context)->pc = uVar19 + 4;
        codeLength = 0;
        if (uVar20 != 0) {
          codeLength = uVar21 / uVar20;
        }
        uVar22 = *(uint *)(pvmCode + (uVar19 + 4)) ^ uVar20 ^ 0xffffffff;
        (vm.context)->pc = uVar19 + 8;
        uVar28 = *(uint *)(pvmCode + (uVar19 + 8));
        (vm.context)->pc = uVar19 + 0xc;
        uVar26 = 0;
        if (uVar20 != 0) {
          uVar26 = uVar22 / uVar20;
        }
        uVar36 = *(ulong *)(pvmCode + (uVar19 + 0xc));
        (vm.context)->pc = uVar19 + 0x14;
        uVar34 = *(uint *)(pvmCode + (uVar19 + 0x14));
        (vm.context)->pc = uVar19 + 0x18;
        sVar7 = *(short *)(pvmCode + (uVar19 + 0x18));
        (vm.context)->pc = uVar19 + 0x1a;
        uVar24 = *(uint *)(pvmCode + (uVar19 + 0x1a));
        (vm.context)->pc = uVar19 + 0x1e;
        uVar27 = *(uint *)(pvmCode + (uVar19 + 0x1e));
        (vm.context)->pc = uVar19 + 0x22;
        *(undefined4 *)(pvmCode + (uVar22 - uVar26 * uVar20)) =
             *(undefined4 *)(pvmCode + (uVar21 - codeLength * uVar20));
        pvmCode = (vm.context)->vmCode;
        uVar25 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          uVar34 = uVar34 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar34 / uVar20;
          }
          uVar25 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar34 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar25 = uVar25 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        goto LAB_00149514;
      case 0x73:
        uVar20 = (vm.context)->vmCodeLength;
        uVar34 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar22 = *(uint *)(pvmCode + uVar34);
        (vm.context)->pc = uVar34 + 4;
        uVar25 = *(ulong *)(pvmCode + (uVar34 + 4));
        (vm.context)->pc = uVar34 + 0xc;
        uVar28 = *(uint *)(pvmCode + (uVar34 + 0xc));
        (vm.context)->pc = uVar34 + 0x10;
        sVar7 = *(short *)(pvmCode + (uVar34 + 0x10));
        (vm.context)->pc = uVar34 + 0x12;
        uVar24 = *(uint *)(pvmCode + (uVar34 + 0x12));
        (vm.context)->pc = uVar34 + 0x16;
        uVar26 = *(uint *)(pvmCode + (uVar34 + 0x16));
        (vm.context)->pc = uVar34 + 0x1a;
        uVar21 = *(uint *)(pvmCode + (uVar34 + 0x1a));
        (vm.context)->pc = uVar34 + 0x1e;
        uVar19 = *(uint *)(pvmCode + (uVar34 + 0x1e));
        (vm.context)->pc = uVar34 + 0x22;
        codeLength = *(uint *)(pvmCode + (uVar34 + 0x22));
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        (vm.context)->pc = uVar34 + 0x26;
        uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
        uVar34 = 0;
        if (uVar20 != 0) {
          uVar34 = uVar21 / uVar20;
        }
        codeLength = codeLength ^ uVar20 ^ 0xffffffff;
        uVar4 = 0;
        if (uVar20 != 0) {
          uVar4 = uVar19 / uVar20;
        }
        uVar27 = 0;
        if (uVar20 != 0) {
          uVar27 = codeLength / uVar20;
        }
        uVar31 = 0xffffffff;
        if (*(ulong *)(pvmCode + (uVar19 - uVar4 * uVar20)) <
            *(ulong *)(pvmCode + (codeLength - uVar27 * uVar20))) {
          uVar31 = 1;
        }
        uVar3 = 0;
        if (*(ulong *)(pvmCode + (codeLength - uVar27 * uVar20)) !=
            *(ulong *)(pvmCode + (uVar19 - uVar4 * uVar20))) {
          uVar3 = uVar31;
        }
        *(undefined4 *)(pvmCode + (uVar21 - uVar34 * uVar20)) = uVar3;
        pvmCode = (vm.context)->vmCode;
        uVar36 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          uVar28 = uVar28 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar28 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar28 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        goto LAB_0014760c;
      case 0x80:
        uVar20 = (vm.context)->vmCodeLength;
        uVar19 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + uVar19);
        (vm.context)->pc = uVar19 + 4;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        codeLength = 0;
        if (uVar20 != 0) {
          codeLength = uVar21 / uVar20;
        }
        uVar22 = *(uint *)(pvmCode + (uVar19 + 4)) ^ uVar20 ^ 0xffffffff;
        (vm.context)->pc = uVar19 + 8;
        uVar26 = *(uint *)(pvmCode + (uVar19 + 8));
        (vm.context)->pc = uVar19 + 0xc;
        uVar25 = *(ulong *)(pvmCode + (uVar19 + 0xc));
        (vm.context)->pc = uVar19 + 0x14;
        uVar28 = *(uint *)(pvmCode + (uVar19 + 0x14));
        (vm.context)->pc = uVar19 + 0x18;
        uVar34 = 0;
        if (uVar20 != 0) {
          uVar34 = uVar22 / uVar20;
        }
        sVar7 = *(short *)(pvmCode + (uVar19 + 0x18));
        (vm.context)->pc = uVar19 + 0x1a;
        uVar24 = *(uint *)(pvmCode + (uVar19 + 0x1a));
        (vm.context)->pc = uVar19 + 0x1e;
        uVar27 = *(uint *)(pvmCode + (uVar19 + 0x1e));
        (vm.context)->pc = uVar19 + 0x22;
        *(uint *)(pvmCode + (uVar21 - codeLength * uVar20)) =
             (uint)(*(int *)(pvmCode + (uVar22 - uVar34 * uVar20)) != 0);
        pvmCode = (vm.context)->vmCode;
        uVar36 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          uVar28 = uVar28 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar28 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar28 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        break;
      case 0x87:
        uVar20 = (vm.context)->vmCodeLength;
        uVar19 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + uVar19);
        (vm.context)->pc = uVar19 + 4;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        codeLength = 0;
        if (uVar20 != 0) {
          codeLength = uVar21 / uVar20;
        }
        uVar22 = *(uint *)(pvmCode + (uVar19 + 4)) ^ uVar20 ^ 0xffffffff;
        (vm.context)->pc = uVar19 + 8;
        uVar28 = *(uint *)(pvmCode + (uVar19 + 8));
        (vm.context)->pc = uVar19 + 0xc;
        uVar34 = *(uint *)(pvmCode + (uVar19 + 0xc));
        (vm.context)->pc = uVar19 + 0x10;
        uVar25 = *(ulong *)(pvmCode + (uVar19 + 0x10));
        (vm.context)->pc = uVar19 + 0x18;
        uVar26 = *(uint *)(pvmCode + (uVar19 + 0x18));
        (vm.context)->pc = uVar19 + 0x1c;
        uVar4 = 0;
        if (uVar20 != 0) {
          uVar4 = uVar22 / uVar20;
        }
        lVar33 = -0x8000000000000000;
        sVar7 = *(short *)(pvmCode + (uVar19 + 0x1c));
        (vm.context)->pc = uVar19 + 0x1e;
        uVar24 = *(uint *)(pvmCode + (uVar19 + 0x1e));
        (vm.context)->pc = uVar19 + 0x22;
        uVar27 = *(uint *)(pvmCode + (uVar19 + 0x22));
        (vm.context)->pc = uVar19 + 0x26;
        lVar14 = *(long *)(pvmCode + (uVar21 - codeLength * uVar20));
        if (((*(long *)(pvmCode + (uVar22 - uVar4 * uVar20)) != -0x8000000000000000) ||
            (lVar14 != -1)) && (lVar33 = 0, lVar14 != 0)) {
          lVar33 = *(long *)(pvmCode + (uVar22 - uVar4 * uVar20)) / lVar14;
        }
        uVar28 = uVar28 ^ uVar20 ^ 0xffffffff;
        uVar21 = 0;
        if (uVar20 != 0) {
          uVar21 = uVar28 / uVar20;
        }
        *(long *)(pvmCode + (uVar28 - uVar21 * uVar20)) = lVar33;
        uVar36 = 0xcbf29ce484222325;
        pvmCode = (vm.context)->vmCode;
        if (sVar7 != 0) {
          uVar26 = uVar26 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar26 / uVar20;
          }
          do {
            lVar14 = lVar33 + (ulong)(uVar26 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
LAB_00148f7c:
        uVar34 = uVar34 ^ uVar20 ^ 0xffffffff;
        uVar21 = 0;
        if (uVar20 != 0) {
          uVar21 = uVar34 / uVar20;
        }
        if ((uVar36 ^ (long)*(int *)(pvmCode + (uVar34 - uVar21 * uVar20))) != uVar25) {
          uVar24 = uVar27;
        }
        goto LAB_00149dd0;
      case 0x88:
        uVar20 = (vm.context)->vmCodeLength;
        codeLength = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + codeLength);
        (vm.context)->pc = codeLength + 4;
        uVar19 = *(uint *)(pvmCode + (codeLength + 4));
        (vm.context)->pc = codeLength + 8;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        uVar22 = 0;
        if (uVar20 != 0) {
          uVar22 = uVar21 / uVar20;
        }
        uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
        uVar28 = *(uint *)(pvmCode + (codeLength + 8)) ^ uVar20 ^ 0xffffffff;
        uVar34 = 0;
        if (uVar20 != 0) {
          uVar34 = uVar19 / uVar20;
        }
        uVar4 = 0;
        if (uVar20 != 0) {
          uVar4 = uVar28 / uVar20;
        }
        (vm.context)->pc = codeLength + 0xc;
        uVar26 = *(uint *)(pvmCode + (codeLength + 0xc));
        (vm.context)->pc = codeLength + 0x10;
        uVar25 = *(ulong *)(pvmCode + (codeLength + 0x10));
        (vm.context)->pc = codeLength + 0x18;
        uVar27 = *(uint *)(pvmCode + (codeLength + 0x18));
        (vm.context)->pc = codeLength + 0x1c;
        sVar7 = *(short *)(pvmCode + (codeLength + 0x1c));
        (vm.context)->pc = codeLength + 0x1e;
        uVar24 = *(uint *)(pvmCode + (codeLength + 0x1e));
        (vm.context)->pc = codeLength + 0x22;
        uVar29 = *(uint *)(pvmCode + (codeLength + 0x22));
        (vm.context)->pc = codeLength + 0x26;
        *(uint *)(pvmCode + (uVar21 - uVar22 * uVar20)) =
             *(uint *)(pvmCode + (uVar19 - uVar34 * uVar20)) &
             *(uint *)(pvmCode + (uVar28 - uVar4 * uVar20));
        pvmCode = (vm.context)->vmCode;
        uVar36 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          uVar27 = uVar27 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar27 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar27 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        goto LAB_00149db4;
      case 0x8a:
        uVar20 = (vm.context)->vmCodeLength;
        uVar28 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar22 = *(uint *)(pvmCode + uVar28);
        (vm.context)->pc = uVar28 + 4;
        uVar25 = *(ulong *)(pvmCode + (uVar28 + 4));
        (vm.context)->pc = uVar28 + 0xc;
        codeLength = *(uint *)(pvmCode + (uVar28 + 0xc));
        (vm.context)->pc = uVar28 + 0x10;
        sVar7 = *(short *)(pvmCode + (uVar28 + 0x10));
        (vm.context)->pc = uVar28 + 0x12;
        uVar24 = *(uint *)(pvmCode + (uVar28 + 0x12));
        (vm.context)->pc = uVar28 + 0x16;
        uVar26 = *(uint *)(pvmCode + (uVar28 + 0x16));
        (vm.context)->pc = uVar28 + 0x1a;
        uVar21 = *(uint *)(pvmCode + (uVar28 + 0x1a));
        (vm.context)->pc = uVar28 + 0x1e;
        uVar19 = *(uint *)(pvmCode + (uVar28 + 0x1e));
        (vm.context)->pc = uVar28 + 0x22;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
        uVar28 = 0;
        if (uVar20 != 0) {
          uVar28 = uVar21 / uVar20;
        }
        uVar34 = 0;
        if (uVar20 != 0) {
          uVar34 = uVar19 / uVar20;
        }
        *(undefined4 *)(pvmCode + (uVar21 - uVar28 * uVar20)) =
             *(undefined4 *)(pvmCode + (uVar19 - uVar34 * uVar20));
        pvmCode = (vm.context)->vmCode;
        uVar36 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          codeLength = codeLength ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = codeLength / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(codeLength - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
LAB_0014760c:
        uVar22 = uVar22 ^ uVar20 ^ 0xffffffff;
        uVar21 = 0;
        if (uVar20 != 0) {
          uVar21 = uVar22 / uVar20;
        }
        if ((uVar36 ^ (long)*(int *)(pvmCode + (uVar22 - uVar21 * uVar20))) != uVar25) {
          uVar24 = uVar26;
        }
        goto LAB_00149dd0;
      case 0x8b:
        uVar19 = (vm.context)->vmCodeLength;
        uVar26 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + uVar26);
        (vm.context)->pc = uVar26 + 4;
        uVar20 = *(uint *)(pvmCode + (uVar26 + 4));
        (vm.context)->pc = uVar26 + 8;
        uVar28 = *(uint *)(pvmCode + (uVar26 + 8));
        (vm.context)->pc = uVar26 + 0xc;
        uVar21 = uVar21 ^ uVar19 ^ 0xffffffff;
        uVar25 = *(ulong *)(pvmCode + (uVar26 + 0xc));
        (vm.context)->pc = uVar26 + 0x14;
        uVar22 = *(uint *)(pvmCode + (uVar26 + 0x14));
        (vm.context)->pc = uVar26 + 0x18;
        sVar7 = *(short *)(pvmCode + (uVar26 + 0x18));
        (vm.context)->pc = uVar26 + 0x1a;
        uVar24 = *(uint *)(pvmCode + (uVar26 + 0x1a));
        (vm.context)->pc = uVar26 + 0x1e;
        uVar20 = uVar20 ^ uVar19 ^ 0xffffffff;
        uVar34 = *(uint *)(pvmCode + (uVar26 + 0x1e));
        (vm.context)->pc = uVar26 + 0x22;
        codeLength = *(uint *)(pvmCode + (uVar26 + 0x22));
        uVar4 = 0;
        if (uVar19 != 0) {
          uVar4 = uVar21 / uVar19;
        }
        (vm.context)->pc = uVar26 + 0x26;
        codeLength = codeLength ^ uVar19 ^ 0xffffffff;
        uVar26 = 0;
        if (uVar19 != 0) {
          uVar26 = codeLength / uVar19;
        }
        uVar27 = 0;
        if (uVar19 != 0) {
          uVar27 = uVar20 / uVar19;
        }
        dVar39 = fmod(*(double *)(pvmCode + (uVar21 - uVar4 * uVar19)),
                      *(double *)(pvmCode + (codeLength - uVar26 * uVar19)));
        *(double *)(pvmCode + (uVar20 - uVar27 * uVar19)) = dVar39;
        uVar36 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          uVar22 = uVar22 ^ uVar19 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar19 != 0) {
            uVar21 = uVar22 / uVar19;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar22 - uVar21 * uVar19);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)paVar11->vmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        uVar28 = uVar28 ^ uVar19 ^ 0xffffffff;
        uVar21 = 0;
        if (uVar19 != 0) {
          uVar21 = uVar28 / uVar19;
        }
        bVar9 = (uVar36 ^ (long)*(int *)(paVar11->vmCode + (uVar28 - uVar21 * uVar19))) == uVar25;
LAB_00148af8:
        if (!bVar9) {
          uVar24 = uVar34;
        }
LAB_00148afc:
        uVar24 = uVar24 ^ uVar19 ^ 0xffffffff;
        uVar21 = 0;
        if (uVar19 != 0) {
          uVar21 = uVar24 / uVar19;
        }
        uVar24 = uVar24 - uVar21 * uVar19;
        goto LAB_00149ddc;
      case 0x8d:
        uVar20 = (vm.context)->vmCodeLength;
        uVar22 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + uVar22);
        (vm.context)->pc = uVar22 + 4;
        uVar19 = *(uint *)(pvmCode + (uVar22 + 4));
        (vm.context)->pc = uVar22 + 8;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        codeLength = *(uint *)(pvmCode + (uVar22 + 8));
        uVar28 = 0;
        if (uVar20 != 0) {
          uVar28 = uVar21 / uVar20;
        }
        (vm.context)->pc = uVar22 + 0xc;
        uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
        uVar26 = *(uint *)(pvmCode + (uVar22 + 0xc));
        codeLength = codeLength ^ uVar20 ^ 0xffffffff;
        (vm.context)->pc = uVar22 + 0x10;
        uVar34 = 0;
        if (uVar20 != 0) {
          uVar34 = codeLength / uVar20;
        }
        uVar25 = *(ulong *)(pvmCode + (uVar22 + 0x10));
        (vm.context)->pc = uVar22 + 0x18;
        uVar4 = 0;
        if (uVar20 != 0) {
          uVar4 = uVar19 / uVar20;
        }
        uVar27 = *(uint *)(pvmCode + (uVar22 + 0x18));
        (vm.context)->pc = uVar22 + 0x1c;
        sVar7 = *(short *)(pvmCode + (uVar22 + 0x1c));
        (vm.context)->pc = uVar22 + 0x1e;
        uVar24 = *(uint *)(pvmCode + (uVar22 + 0x1e));
        (vm.context)->pc = uVar22 + 0x22;
        uVar29 = *(uint *)(pvmCode + (uVar22 + 0x22));
        (vm.context)->pc = uVar22 + 0x26;
        uVar36 = 0xcbf29ce484222325;
        *(float *)(pvmCode + (uVar19 - uVar4 * uVar20)) =
             *(float *)(pvmCode + (codeLength - uVar34 * uVar20)) *
             *(float *)(pvmCode + (uVar21 - uVar28 * uVar20));
        pvmCode = (vm.context)->vmCode;
        if (sVar7 != 0) {
          uVar27 = uVar27 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar27 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar27 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
LAB_00149db4:
        uVar26 = uVar26 ^ uVar20 ^ 0xffffffff;
        uVar21 = 0;
        if (uVar20 != 0) {
          uVar21 = uVar26 / uVar20;
        }
        bVar9 = (uVar36 ^ (long)*(int *)(pvmCode + (uVar26 - uVar21 * uVar20))) == uVar25;
LAB_00149dcc:
        if (!bVar9) {
          uVar24 = uVar29;
        }
        goto LAB_00149dd0;
      case 0x8f:
        uVar20 = (vm.context)->vmCodeLength;
        uVar22 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + uVar22);
        (vm.context)->pc = uVar22 + 4;
        codeLength = *(uint *)(pvmCode + (uVar22 + 4));
        (vm.context)->pc = uVar22 + 8;
        uVar21 = uVar21 ^ uVar20 ^ 0xffffffff;
        uVar25 = *(ulong *)(pvmCode + (uVar22 + 8));
        (vm.context)->pc = uVar22 + 0x10;
        uVar19 = *(uint *)(pvmCode + (uVar22 + 0x10));
        (vm.context)->pc = uVar22 + 0x14;
        sVar7 = *(short *)(pvmCode + (uVar22 + 0x14));
        (vm.context)->pc = uVar22 + 0x16;
        uVar24 = *(uint *)(pvmCode + (uVar22 + 0x16));
        (vm.context)->pc = uVar22 + 0x1a;
        uVar28 = *(uint *)(pvmCode + (uVar22 + 0x1a));
        (vm.context)->pc = uVar22 + 0x1e;
        uVar26 = 0;
        if (uVar20 != 0) {
          uVar26 = uVar21 / uVar20;
        }
        uVar34 = *(uint *)(pvmCode + (uVar22 + 0x1e));
        (vm.context)->pc = uVar22 + 0x22;
        uVar4 = *(uint *)(pvmCode + (uVar22 + 0x22));
        (vm.context)->pc = uVar22 + 0x26;
        uVar34 = uVar34 ^ uVar20 ^ 0xffffffff;
        uVar4 = uVar4 ^ uVar20 ^ 0xffffffff;
        uVar22 = 0;
        if (uVar20 != 0) {
          uVar22 = uVar4 / uVar20;
        }
        uVar27 = 0;
        if (uVar20 != 0) {
          uVar27 = uVar34 / uVar20;
        }
        uVar31 = 0xffffffff;
        if (*(int *)(pvmCode + (uVar21 - uVar26 * uVar20)) <
            *(int *)(pvmCode + (uVar4 - uVar22 * uVar20))) {
          uVar31 = 1;
        }
        uVar3 = 0;
        if (*(int *)(pvmCode + (uVar4 - uVar22 * uVar20)) !=
            *(int *)(pvmCode + (uVar21 - uVar26 * uVar20))) {
          uVar3 = uVar31;
        }
        uVar36 = 0xcbf29ce484222325;
        *(undefined4 *)(pvmCode + (uVar34 - uVar27 * uVar20)) = uVar3;
        pvmCode = (vm.context)->vmCode;
        if (sVar7 != 0) {
          uVar19 = uVar19 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar19 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar19 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
LAB_001493e4:
        codeLength = codeLength ^ uVar20 ^ 0xffffffff;
        uVar21 = 0;
        if (uVar20 != 0) {
          uVar21 = codeLength / uVar20;
        }
        uVar36 = uVar36 ^ (long)*(int *)(pvmCode + (codeLength - uVar21 * uVar20));
LAB_001493f8:
        if (uVar36 != uVar25) {
          uVar24 = uVar28;
        }
        goto LAB_00149dd0;
      case 0x91:
        uVar20 = (vm.context)->vmCodeLength;
        uVar19 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + uVar19) ^ uVar20 ^ 0xffffffff;
        (vm.context)->pc = uVar19 + 4;
        codeLength = 0;
        if (uVar20 != 0) {
          codeLength = uVar21 / uVar20;
        }
        uVar22 = *(uint *)(pvmCode + (uVar19 + 4)) ^ uVar20 ^ 0xffffffff;
        (vm.context)->pc = uVar19 + 8;
        uVar28 = *(uint *)(pvmCode + (uVar19 + 8));
        (vm.context)->pc = uVar19 + 0xc;
        uVar26 = 0;
        if (uVar20 != 0) {
          uVar26 = uVar22 / uVar20;
        }
        uVar36 = *(ulong *)(pvmCode + (uVar19 + 0xc));
        (vm.context)->pc = uVar19 + 0x14;
        uVar34 = *(uint *)(pvmCode + (uVar19 + 0x14));
        (vm.context)->pc = uVar19 + 0x18;
        sVar7 = *(short *)(pvmCode + (uVar19 + 0x18));
        (vm.context)->pc = uVar19 + 0x1a;
        uVar24 = *(uint *)(pvmCode + (uVar19 + 0x1a));
        (vm.context)->pc = uVar19 + 0x1e;
        uVar27 = *(uint *)(pvmCode + (uVar19 + 0x1e));
        (vm.context)->pc = uVar19 + 0x22;
        *(undefined8 *)(pvmCode + (uVar22 - uVar26 * uVar20)) =
             *(undefined8 *)(pvmCode + (uVar21 - codeLength * uVar20));
        pvmCode = (vm.context)->vmCode;
        uVar25 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          uVar34 = uVar34 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar34 / uVar20;
          }
          uVar25 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar34 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar25 = uVar25 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
LAB_00149514:
        uVar28 = uVar28 ^ uVar20 ^ 0xffffffff;
        uVar21 = 0;
        if (uVar20 != 0) {
          uVar21 = uVar28 / uVar20;
        }
        bVar9 = (uVar25 ^ (long)*(int *)(pvmCode + (uVar28 - uVar21 * uVar20))) == uVar36;
        goto LAB_00149c30;
      case 0x92:
        uVar19 = (vm.context)->vmCodeLength;
        codeLength = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + codeLength);
        (vm.context)->pc = codeLength + 4;
        uVar20 = *(uint *)(pvmCode + (codeLength + 4));
        (vm.context)->pc = codeLength + 8;
        uVar21 = uVar21 ^ uVar19 ^ 0xffffffff;
        uVar22 = 0;
        if (uVar19 != 0) {
          uVar22 = uVar21 / uVar19;
        }
        uVar20 = uVar20 ^ uVar19 ^ 0xffffffff;
        uVar28 = *(uint *)(pvmCode + (codeLength + 8)) ^ uVar19 ^ 0xffffffff;
        uVar26 = 0;
        if (uVar19 != 0) {
          uVar26 = uVar20 / uVar19;
        }
        uVar34 = 0;
        if (uVar19 != 0) {
          uVar34 = uVar28 / uVar19;
        }
        (vm.context)->pc = codeLength + 0xc;
        uVar27 = *(uint *)(pvmCode + (codeLength + 0xc));
        (vm.context)->pc = codeLength + 0x10;
        uVar36 = *(ulong *)(pvmCode + (codeLength + 0x10));
        (vm.context)->pc = codeLength + 0x18;
        uVar4 = *(uint *)(pvmCode + (codeLength + 0x18));
        (vm.context)->pc = codeLength + 0x1c;
        sVar7 = *(short *)(pvmCode + (codeLength + 0x1c));
        (vm.context)->pc = codeLength + 0x1e;
        uVar24 = *(uint *)(pvmCode + (codeLength + 0x1e));
        (vm.context)->pc = codeLength + 0x22;
        uVar29 = *(uint *)(pvmCode + (codeLength + 0x22));
        (vm.context)->pc = codeLength + 0x26;
        fVar38 = fmodf(*(float *)(pvmCode + (uVar28 - uVar34 * uVar19)),
                       *(float *)(pvmCode + (uVar20 - uVar26 * uVar19)));
        *(float *)(pvmCode + (uVar21 - uVar22 * uVar19)) = fVar38;
        uVar25 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          uVar4 = uVar4 ^ uVar19 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar19 != 0) {
            uVar21 = uVar4 / uVar19;
          }
          uVar25 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar4 - uVar21 * uVar19);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar25 = uVar25 * 0x100000001b3 ^ (long)paVar11->vmCode[lVar14];
          } while (sVar7 != iVar30);
        }
        uVar27 = uVar27 ^ uVar19 ^ 0xffffffff;
        uVar21 = 0;
        if (uVar19 != 0) {
          uVar21 = uVar27 / uVar19;
        }
        if ((uVar25 ^ (long)*(int *)(paVar11->vmCode + (uVar27 - uVar21 * uVar19))) != uVar36) {
          uVar24 = uVar29;
        }
        goto LAB_00148afc;
      case 0x9a:
        uVar20 = (vm.context)->vmCodeLength;
        uVar19 = (vm.context)->pc;
        pvmCode = (vm.context)->vmCode;
        uVar21 = *(uint *)(pvmCode + uVar19) ^ uVar20 ^ 0xffffffff;
        (vm.context)->pc = uVar19 + 4;
        codeLength = 0;
        if (uVar20 != 0) {
          codeLength = uVar21 / uVar20;
        }
        uVar22 = *(uint *)(pvmCode + (uVar19 + 4));
        (vm.context)->pc = uVar19 + 8;
        uVar26 = *(uint *)(pvmCode + (uVar19 + 8));
        uVar22 = uVar22 ^ uVar20 ^ 0xffffffff;
        (vm.context)->pc = uVar19 + 0xc;
        uVar25 = *(ulong *)(pvmCode + (uVar19 + 0xc));
        (vm.context)->pc = uVar19 + 0x14;
        uVar28 = *(uint *)(pvmCode + (uVar19 + 0x14));
        (vm.context)->pc = uVar19 + 0x18;
        sVar7 = *(short *)(pvmCode + (uVar19 + 0x18));
        (vm.context)->pc = uVar19 + 0x1a;
        uVar24 = *(uint *)(pvmCode + (uVar19 + 0x1a));
        (vm.context)->pc = uVar19 + 0x1e;
        uVar34 = 0;
        if (uVar20 != 0) {
          uVar34 = uVar22 / uVar20;
        }
        uVar27 = *(uint *)(pvmCode + (uVar19 + 0x1e));
        (vm.context)->pc = uVar19 + 0x22;
        uVar4 = *(uint *)(pvmCode + (uVar19 + 0x22));
        (vm.context)->pc = uVar19 + 0x26;
        uVar21 = uVar21 - codeLength * uVar20;
        codeLength = *(uint *)(pvmCode + (uVar19 + 0x26));
        (vm.context)->pc = uVar19 + 0x2a;
        uVar4 = uVar4 ^ uVar20 ^ 0xffffffff;
        codeLength = codeLength ^ uVar20 ^ 0xffffffff;
        uVar19 = 0;
        if (uVar20 != 0) {
          uVar19 = uVar4 / uVar20;
        }
        uVar29 = 0;
        if (uVar20 != 0) {
          uVar29 = codeLength / uVar20;
        }
        uVar5 = CONCAT11(pvmCode[uVar4 - uVar19 * uVar20],pvmCode[uVar22 - uVar34 * uVar20]);
        codeLength = codeLength - uVar29 * uVar20;
        if (uVar5 < 0x401) {
          if (uVar5 < 0x201) {
            if (uVar5 == 0x102) {
              *(short *)(pvmCode + codeLength) = (short)pvmCode[uVar21];
            }
            else if (uVar5 == 0x104) {
              *(int *)(pvmCode + codeLength) = (int)pvmCode[uVar21];
            }
            else if (uVar5 == 0x108) {
              *(long *)(pvmCode + codeLength) = (long)pvmCode[uVar21];
            }
          }
          else if (uVar5 == 0x201) {
            pvmCode[codeLength] = pvmCode[uVar21];
          }
          else if (uVar5 == 0x204) {
            *(int *)(pvmCode + codeLength) = (int)*(short *)(pvmCode + uVar21);
          }
          else if (uVar5 == 0x208) {
            *(long *)(pvmCode + codeLength) = (long)*(short *)(pvmCode + uVar21);
          }
        }
        else if (uVar5 < 0x801) {
          if (uVar5 == 0x401) {
            pvmCode[codeLength] = (char)*(undefined4 *)(pvmCode + uVar21);
          }
          else if (uVar5 == 0x402) {
            *(short *)(pvmCode + codeLength) = (short)*(undefined4 *)(pvmCode + uVar21);
          }
          else if (uVar5 == 0x408) {
            *(long *)(pvmCode + codeLength) = (long)*(int *)(pvmCode + uVar21);
          }
        }
        else if (uVar5 == 0x801) {
          pvmCode[codeLength] = (char)*(undefined8 *)(pvmCode + uVar21);
        }
        else if (uVar5 == 0x802) {
          *(short *)(pvmCode + codeLength) = (short)*(undefined8 *)(pvmCode + uVar21);
        }
        else if (uVar5 == 0x804) {
          *(int *)(pvmCode + codeLength) = (int)*(undefined8 *)(pvmCode + uVar21);
        }
        pvmCode = (vm.context)->vmCode;
        uVar36 = 0xcbf29ce484222325;
        if (sVar7 != 0) {
          uVar28 = uVar28 ^ uVar20 ^ 0xffffffff;
          lVar33 = 0;
          iVar30 = 0;
          uVar21 = 0;
          if (uVar20 != 0) {
            uVar21 = uVar28 / uVar20;
          }
          uVar36 = 0xcbf29ce484222325;
          do {
            lVar14 = lVar33 + (ulong)(uVar28 - uVar21 * uVar20);
            iVar30 = iVar30 + 1;
            lVar33 = (long)iVar30;
            uVar36 = uVar36 * 0x100000001b3 ^ (long)pvmCode[lVar14];
          } while (sVar7 != iVar30);
        }
      }
      uVar26 = uVar26 ^ uVar20 ^ 0xffffffff;
      uVar21 = 0;
      if (uVar20 != 0) {
        uVar21 = uVar26 / uVar20;
      }
      iVar30 = *(int *)(pvmCode + (uVar26 - uVar21 * uVar20));
LAB_00149c28:
      bVar9 = (uVar36 ^ (long)iVar30) == uVar25;
LAB_00149c30:
      if (!bVar9) {
        uVar24 = uVar27;
      }
LAB_00149dd0:
      uVar24 = uVar24 ^ uVar20 ^ 0xffffffff;
      uVar21 = 0;
      if (uVar20 != 0) {
        uVar21 = uVar24 / uVar20;
      }
      uVar24 = uVar24 - uVar21 * uVar20;
LAB_00149ddc:
      (vm.context)->pc = uVar24;
      plVar37 = (long *)((ulong)plVar23 & 0xffffffff);
      uVar21 = 0x4f04d9fd;
      goto switchD_00145a3c_caseD_5;
    }
    if (uVar19 != 0x7c659428) goto SUB_00145ba4;
    uVar25 = FUN_0014d77c((pairip_vm_head_t *)&local_1b0,opcode);
    if ((uVar25 & 1) == 0) {
      uVar21 = 0xae6dd400;
    }
  } while( true );
}

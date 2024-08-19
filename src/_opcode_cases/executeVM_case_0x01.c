#include "gvm/types.h"

void case_0x01(void) {
  unaff_x24 = *(astruct **)(local_470 + 8);
  uVar118 = unaff_x24->vmCodeLength;
  uVar117 = unaff_x24->pc;
  code = unaff_x24->vmCode;
  uVar119 = *(uint *)(code + (ulong)uVar117);
  uVar58 = uVar117 + 0xc;
  unaff_x24->pc = uVar117 + 4;
  uVar76 = *(uint *)(code + (ulong)(uVar117 + 4));
  unaff_x24->pc = uVar117 + 8;
  uVar117 = *(uint *)(code + (ulong)(uVar117 + 8));
  unaff_x24->pc = uVar58;
  paVar79 = *(astruct **)(code + (ulong)uVar58);
  uVar76 = uVar76 ^ uVar118 ^ 0xffffffff;
  uVar117 = uVar117 ^ uVar118 ^ 0xffffffff;
  iVar27 = (uVar58 * 2 | 0x10) + (uVar58 ^ 8) + (uVar58 * 2 ^ 0xffffffee);
  uVar58 = 0;
  if (uVar118 != 0) {
    uVar58 = uVar76 / uVar118;
  }
  uVar93 = iVar27 + 2;
  uVar121 = iVar27 + 6;
  unaff_x24->pc = uVar93;
  uVar93 = *(uint *)(code + (ulong)uVar93);
  unaff_x24->pc = uVar121;
  sVar13 = *(short *)(code + (ulong)uVar121);
  uVar93 = uVar93 ^ uVar118 ^ 0xffffffff;
  iVar27 = (uVar121 ^ 0xfffffffd) + (uVar121 * 2 | 4);
  unaff_x24->pc = iVar27 + 1U;
  uVar121 = 0;
  if (uVar118 != 0) {
    uVar121 = uVar117 / uVar118;
  }
  uVar89 = *(uint *)(code + (ulong)(iVar27 + 1U));
  unaff_x24->pc = iVar27 + 5U;
  uVar106 = *(uint *)(code + (ulong)(iVar27 + 5U));
  unaff_x24->pc = iVar27 + 9U;
  uVar75 = *(uint *)(code + (ulong)(iVar27 + 9U));
  uVar89 = uVar89 ^ uVar118 ^ 0xffffffff;
  unaff_x24->pc = iVar27 + 0xd;
  uVar106 = uVar106 ^ uVar118 ^ 0xffffffff;
  uVar75 = uVar75 ^ uVar118 ^ 0xffffffff;
  uVar18 = 0;
  if (uVar118 != 0) {
    uVar18 = uVar75 / uVar118;
  }
  uVar117 = uVar117 - uVar121 * uVar118;
  uVar121 = 0;
  if (uVar118 != 0) {
    uVar121 = uVar93 / uVar118;
  }
  uVar75 = uVar75 - uVar18 * uVar118;
  uVar70 = (ulong)uVar75;
  *(undefined8 *)(code + uVar70) = 0xffffffffffffffff;
  code = unaff_x24->vmCode;
  uVar45 = *(ulong *)(code + (ulong)(uVar76 - uVar58 * uVar118));
  uVar58 = 0;
  if (uVar118 != 0) {
    uVar58 = uVar89 / uVar118;
  }
  uVar93 = uVar93 - uVar121 * uVar118;
  uVar76 = 0;
  if (uVar118 != 0) {
    uVar76 = uVar106 / uVar118;
  }
  uVar89 = uVar89 - uVar58 * uVar118;
  uVar106 = uVar106 - uVar76 * uVar118;
  if (-1 < (int)uVar45) {
    uVar119 = uVar119 ^ uVar118 ^ 0xffffffff;
    uVar58 = 0;
    if (uVar118 != 0) {
      uVar58 = uVar119 / uVar118;
    }
    paVar71 = *(astruct **)(code + (ulong)(uVar119 - uVar58 * uVar118));
    if (-1 < (long)paVar71) {
      local_4f0 = (astruct *)CONCAT44(local_4f0._4_4_, uVar93);
      local_4b0 = (astruct *)CONCAT44(local_4b0._4_4_, uVar106);
      local_498 = (astruct *)CONCAT44(local_498._4_4_, uVar89);
      local_464 = uVar41;
      uVar97 = FUN_001153e0(0x3e, (long)(int)uVar45, 0, 1);
      local_4d0 = (astruct *)CONCAT44(local_4d0._4_4_, uVar117);
      local_508 = (undefined *)CONCAT44(local_508._4_4_, uVar75);
      if (0xfffffffffffff000 < uVar97) {
        iVar27 = (int)uVar97;
        uVar97 = 0xffffffffffffffff;
        *local_4b8 = -iVar27;
      }
      local_2e0 = (astruct *)0x16f6a0;
      uVar102 = 0;
      bVar24 = false;
      bVar25 = false;
      uVar100 = 0;
      bStack_2d8 = (byte)uVar45;
      uStack_2d7 = (undefined)(uVar45 >> 8);
      uStack_2d6 = (undefined2)(uVar45 >> 0x10);
      bStack_2d0 = (byte)uVar97;
      uStack_2cf = (undefined)(uVar97 >> 8);
      uStack_2ce = (undefined2)(uVar97 >> 0x10);
      iStack_2cc = (int)(uVar97 >> 0x20);
      local_490 = paVar79;
      local_2c8 = paVar71;
      uVar58 = 0x1d8474b2;
    LAB_001374c0:
      uVar76 = uVar58;
      uVar58 = (uint)(local_478 >> 0x20);
      if (-0x963ec2c < (int)uVar76) {
        if (0x21d23543 < (int)uVar76) {
          if (0x64db2d41 < (int)uVar76)
            goto LAB_001376e0;
          if (uVar76 == 0x21d23544) {
            uVar76 = (uint)(byte)local_360;
            uVar58 = 0x64db2d42;
            if ((uVar76 | 0xfffffffe) +
                    ((((byte)local_360 | 1) - ((byte)local_360 & 0xfe)) +
                         (uVar76 ^ 1) + (uVar76 ^ 0xfe) + 2 &
                     0xff) !=
                0) {
              thunk_EXT_FUN_0016a000(local_350);
              uVar58 = 0x64db2d42;
            }
          } else if (uVar76 == 0x4aa2c3b0) {
            bVar25 = false;
            uVar100 = 0;
            uVar58 = 0x21d23544;
          } else {
            if (uVar76 != 0x598043a6)
              goto LAB_00137ca0;
            if (!bVar24)
              goto LAB_001424a8;
            uVar58 = 0x76edb2e;
            if (uVar77 != uVar70) {
              uVar58 = 0x15bfc039;
            }
          }
          goto LAB_001374c0;
        }
        if ((int)uVar76 < 0x44ad530) {
          if (uVar76 == 0xf69c13d5) {
            (**(code **)&local_2e0->vmCodeLength)(&local_1a0, &local_2e0, 8);
            uVar58 = ~(uint)local_1a0;
            uVar41 = (uint)local_1a0;
            uVar76 = uVar58 | 1;
            uVar58 = (((local_1a0 | 1) + uVar41 * -2 + uVar58 * -3 +
                       (uVar41 & 0xfe ^ 0xfffffffe)) -
                      (uVar41 & 0xfe)) +
                     (uVar41 ^ 1) + (uVar41 | 0xfffffffe);
            if (uVar76 + (uVar58 & 0xff) == 0) {
              paVar71 = (astruct *)(ulong)(local_1a0 >> 1);
              if (paVar71 != (astruct *)0x0)
                goto LAB_001379d0;
            LAB_00137b64:
              bVar24 = false;
              unaff_x27 = (astruct *)0x0;
              uVar70 = 0;
              if (-uVar76 != (uVar58 & 0xff))
                goto LAB_00137c2c;
            } else {
              paVar71 = uStack_198;
              if (uStack_198 == (astruct *)0x0)
                goto LAB_00137b64;
            LAB_001379d0:
              if (-uVar76 == (uVar58 & 0xff)) {
                puVar62 = (ulong *)((ulong)&local_1a0 | 1);
              } else {
                puVar62 = (ulong *)CONCAT17(
                    uStack_189,
                    CONCAT16(
                        uStack_18a,
                        CONCAT15(
                            uStack_18b,
                            CONCAT14(
                                bStack_18c,
                                CONCAT13(uStack_18d,
                                         CONCAT12(uStack_18e,
                                                  CONCAT11(uStack_18f,
                                                           local_190)))))));
              }
              uVar97 = *puVar62;
              bVar24 = true;
              uVar72 = uVar97 << 1;
              uVar41 = ~(uint)uVar97;
              uVar70 =
                  (((ulong)((uint)uVar97 << 2) | 0xfffffffffffffc00) - uVar97) +
                  (ulong)(byte)uVar41 + (uVar97 ^ 0xff) + (uVar97 | 0xff) +
                  ((ulong)uVar41 | 0xffffffffffffff00) + 0x104;
              unaff_x27 =
                  (astruct *)((uVar97 | 0xff) * 3 +
                              ((uVar72 ^ 0xffffffffffffffff) &
                               0xfffffffffffffe00) +
                              (uVar97 ^ 0xff) + (uVar72 ^ 0xfffffffffffffe00) +
                              ((ulong) ~(uint)uVar72 & 0x1fe) +
                              (uVar72 | 0xfffffffffffffe00) + 6);
              if (-uVar76 != (uVar58 & 0xff)) {
              LAB_00137c2c:
                thunk_EXT_FUN_0016a000(CONCAT17(
                    uStack_189,
                    CONCAT16(
                        uStack_18a,
                        CONCAT15(
                            uStack_18b,
                            CONCAT14(
                                bStack_18c,
                                CONCAT13(uStack_18d,
                                         CONCAT12(uStack_18e,
                                                  CONCAT11(uStack_18f,
                                                           local_190))))))));
              }
            }
            uVar70 = (~(uVar70 & (ulong)unaff_x27) * -3 - (long)unaff_x27) +
                     ((ulong)unaff_x27 | uVar70 ^ 0xffffffffffffffff) * 2 +
                     uVar70 + (uVar70 ^ (ulong)unaff_x27) * 4 +
                     ~(uVar70 | (ulong)unaff_x27) * 2 + 1;
            uVar58 = 0xb0a23815;
            if (paVar71 != (astruct *)0x0) {
              uVar58 = 0x598043a6;
            }
          } else if (uVar76 == 0xfc90aaaa) {
          LAB_001374b0:
            bVar25 = false;
            uVar100 = 0;
            uVar58 = 0xa5824081;
          } else {
            uVar58 = 0xc47208ac;
            if (uVar76 != 0xfdb2acbe)
              goto LAB_00137ca0;
          }
          goto LAB_001374c0;
        }
        if (uVar76 == 0x44ad530) {
          uVar76 = (uint)uVar77;
          iVar27 = (uVar58 | uVar76 ^ 0xffffffff) +
                   (uVar58 & (uVar76 ^ 0xffffffff)) + (uVar58 & uVar76) * -3 +
                   ~(uVar58 & uVar76) * -3;
          uVar58 = iVar27 * 2 - 4;
          uVar45 =
              (ulong)(((uVar58 & 0xfffffff0) + (uVar58 | 0xe) +
                       ((uVar58 ^ 0xffffffff) & 0xe) + (uVar58 ^ 0xfffffff0) +
                       (iVar27 * -2 + 2U & 0xfffffff0) + iVar27) -
                      6);
          uVar58 = 0xa2e4c1d9;
          goto LAB_001374c0;
        }
        if (uVar76 == 0x76edb2e) {
          uVar102 = uVar45 >> 8;
          uVar100 = uVar45 & 0xff;
          bVar25 = true;
          uVar58 = 0xfdb2acbe;
          goto LAB_001374c0;
        }
        if (uVar76 == 0x15bfc039)
          goto LAB_001376cc;
        goto LAB_00137ca0;
      }
      if (-0x4f5dc7ec < (int)uVar76) {
        if ((int)uVar76 < -0x3ed864a2) {
          if (uVar76 == 0xb0a23815) {
          LAB_001376cc:
            bVar25 = false;
            uVar100 = 0;
            uVar58 = 0xfdb2acbe;
            goto LAB_001374c0;
          }
          if (uVar76 == 0xb6925cf2) {
            bVar25 = false;
            uVar100 = 0;
            uVar58 = 0x64db2d42;
            goto LAB_001374c0;
          }
          if (uVar76 == 0xbeb3fc2c)
            goto LAB_001374b0;
        } else {
          if (uVar76 == 0xc1279b5e) {
            if (local_4a0 < 0x10)
              goto LAB_0014249c;
            code._0_4_ = local_480->vmCodeLength;
            code._4_4_ = local_480->pc;
            uVar58 = 0x72126bb7;
            if (code != 0x3234206b636f6c42) {
              uVar58 = 0x4aa2c3b0;
            }
            goto LAB_001374c0;
          }
          uVar58 = 0x8cb077c2;
          if (uVar76 == 0xc47208ac)
            goto LAB_001374c0;
          if (uVar76 == 0xe45080e2) {
            bVar25 = false;
            uVar100 = 0;
            uVar58 = 0x8cb077c2;
            goto LAB_001374c0;
          }
        }
        goto LAB_00137ca0;
      }
      if ((int)uVar76 < -0x6541ff6e) {
        if (uVar76 == 0x86a19ad9) {
          bVar25 = false;
          uVar100 = 0;
          uVar58 = 0xc47208ac;
          goto LAB_001374c0;
        }
        if (uVar76 == 0x8b3e0439) {
          uVar58 = 0xe45080e2;
          if ((long)uVar77 < 0x7ffffff8) {
            uVar58 = 0x44ad530;
          }
          goto LAB_001374c0;
        }
        uVar58 = 0x21d23544;
        if (uVar76 == 0x8cb077c2)
          goto LAB_001374c0;
        goto LAB_00137ca0;
      }
      if ((int)uVar76 < -0x5a7dbf7f) {
        if (uVar76 == 0x9abe0092) {
          (**(code **)&local_2e0->vmCodeLength)(&local_360, &local_2e0, 0x18);
          uVar58 = (uint)(byte)local_360;
          uVar76 = ~uVar58 | 1;
          uVar58 = uVar58 * 3 + ~uVar58 + ((uVar58 ^ 0xffffffff) & 0xfffffffe) +
                   ((byte)local_360 ^ 1) + ((byte)local_360 ^ 0xfffffffe) +
                   (((byte)local_360 ^ 0xffffffff) & 1) + 4;
          if (uVar76 + (uVar58 & 0xff) == 0) {
            uVar97 = (ulong)((byte)local_360 >> 1);
          } else {
            uVar97 = CONCAT26(uStack_352, auStack_358);
          }
          if (uVar97 < 8)
            goto LAB_0014249c;
          uVar76 = -uVar76;
          local_480 = (astruct *)local_350;
          if (uVar76 == (uVar58 & 0xff)) {
            local_480 = (astruct *)((ulong)&local_360 | 1);
          }
          if (uVar76 == (uVar58 & 0xff)) {
            plVar81 = (long *)(auStack_358 + 1);
          } else {
            plVar81 = (long *)((long)local_350 + 8);
          }
          local_4a0 = uVar97;
          uVar58 = 0xc1279b5e;
          if (*plVar81 != 0x20676953204b5041) {
            uVar58 = 0x4aa2c3b0;
          }
          goto LAB_001374c0;
        }
        if (uVar76 == 0xa2e4c1d9) {
          uVar97 = (*(code *)*(astruct **)(local_2e0 + 1))(&local_2e0, uVar45);
          uVar58 = 0xf69c13d5;
          if ((uVar97 & 1) == 0) {
            uVar58 = 0x86a19ad9;
          }
          goto LAB_001374c0;
        }
        goto LAB_00137ca0;
      }
      if (uVar76 == 0xa9a08da4) {
        uVar97 = (*(code *)*(astruct **)(local_2e0 + 1))(
            &local_2e0, (uVar58 | 0xffffffe8) * 3 + (uVar58 & 0xffffffe8) * -3 +
                            (uVar58 & 0x3fffffe8) * 4 + ~uVar58 +
                            (uVar58 & 0x17) + (uVar58 ^ 0x17) +
                            (uVar58 ^ 0xffffffff | 0xffffffe8) + 0x1b);
        uVar58 = 0x9abe0092;
        if ((uVar97 & 1) == 0) {
          uVar58 = 0xb6925cf2;
        }
        goto LAB_001374c0;
      }
      if (uVar76 != 0xa5824081)
        goto LAB_00137ca0;
      if (bVar25) {
        *(ulong *)(unaff_x24->vmCode + ((ulong)local_508 & 0xffffffff)) =
            ~(uVar102 * 0x100) + uVar100 * 2 +
            (uVar102 * 0x300 - (uVar102 * 0x100 | uVar100)) + 1;
      }
      uVar77 = 0xcbf29ce484222325;
      if (sVar13 != 0) {
        code = 0;
        iVar27 = 0;
        do {
          lVar96 = code + ((ulong)local_4f0 & 0xffffffff);
          iVar27 = iVar27 + 1;
          code = (long)iVar27;
          uVar77 = uVar77 * 0x100000001b3 ^
                   (long)*(char *)(unaff_x24->vmCode + lVar96);
        } while (sVar13 != iVar27);
      }
      uVar70 = (ulong) *
               (int *)(unaff_x24->vmCode + ((ulong)local_4d0 & 0xffffffff));
      paVar71 = (astruct *)(ulong)local_464;
      uVar58 = (uint)local_498;
      if ((astruct *)(((uVar77 | uVar70) + ~uVar77) -
                      (uVar70 | uVar77 ^ 0xffffffffffffffff)) != local_490) {
        uVar58 = (uint)local_4b0;
      }
      puVar84 = (undefined8 *)(ulong)uVar58;
      goto LAB_0012ecfc;
    }
  }
  uVar77 = 0xcbf29ce484222325;
  if (sVar13 != 0) {
    lVar96 = 0;
    iVar27 = 0;
    do {
      lVar53 = lVar96 + (ulong)uVar93;
      iVar27 = iVar27 + 1;
      lVar96 = (long)iVar27;
      uVar77 = uVar77 * 0x100000001b3 ^ (long)*(char *)(code + lVar53);
    } while (sVar13 != iVar27);
  }
  uVar70 = (ulong) * (int *)(code + (ulong)uVar117);
  paVar71 = (astruct *)((ulong)paVar94 & 0xffffffff);
  if ((astruct *)(-2 - ((uVar77 | uVar70 ^ 0xffffffffffffffff) +
                        (uVar70 | uVar77 ^ 0xffffffffffffffff))) != paVar79) {
    uVar89 = uVar106;
  }
  puVar84 = (undefined8 *)(ulong)uVar89;
  local_464 = uVar41;
  goto LAB_0012ecfc;
}

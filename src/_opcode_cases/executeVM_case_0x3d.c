#include "gvm/types.h"

typedef struct {
  addr_t a;             // 0x00
  addr_t xorValueAddr;  // 0x04
  long hashValue;       // 0x08
  addr_t hashDataAddr;  // 0x10
  short hashDataLength; // 0x14

} insn_0x3d_t;

void case_0x3d() {
  lVar91 = *(long *)(local_470 + 8);
  uVar106 = *(uint *)(lVar91 + 0x10);
  uVar107 = *(uint *)(lVar91 + 0x14);
  lVar74 = *(long *)(lVar91 + 8);
  uVar56 = uVar107 + 0x10;
  uVar80 = *(uint *)(lVar74 + (ulong)uVar107);
  *(uint *)(lVar91 + 0x14) = uVar107 + 4;
  uVar80 = uVar80 ^ uVar106 ^ 0xffffffff;
  uVar108 = *(uint *)(lVar74 + (ulong)(uVar107 + 4));
  *(uint *)(lVar91 + 0x14) = uVar107 + 8;
  uVar90 = 0;
  if (uVar106 != 0) {
    uVar90 = uVar80 / uVar106;
  }
  uVar87 = ((uVar56 ^ 0xffffffff) & 0xfffffff7) * -3 + (~uVar107 | 0xfffffff7) +
           (uVar56 * 2 ^ 0xffffffee);
  uVar108 = uVar108 ^ uVar106 ^ 0xffffffff;
  uVar96 = *(uint *)(lVar74 + (ulong)(uVar107 + 8)) ^ uVar106 ^ 0xffffffff;
  uVar110 = uVar87 + 4;
  *(uint *)(lVar91 + 0x14) = uVar107 + 0xc;
  uVar107 = *(uint *)(lVar74 + (ulong)(uVar107 + 0xc));
  *(uint *)(lVar91 + 0x14) = uVar56;
  local_490 = *(long ***)(lVar74 + (ulong)uVar56);
  *(uint *)(lVar91 + 0x14) = uVar87;
  uVar107 = uVar107 ^ uVar106 ^ 0xffffffff;
  uVar56 = *(uint *)(lVar74 + (ulong)uVar87);
  *(uint *)(lVar91 + 0x14) = uVar110;
  uVar81 = (ulong)(uVar87 & 2 | (uVar87 * 2 & 4) + (uVar110 & 0xfffffffd)) ^ 2;
  sVar16 = *(short *)(lVar74 + (ulong)uVar110);
  iVar30 = (int)uVar81;
  *(int *)(lVar91 + 0x14) = iVar30;
  uVar110 = 0;
  if (uVar106 != 0) {
    uVar110 = uVar96 / uVar106;
  }
  uVar32 = *(undefined4 *)(lVar74 + uVar81);
  *(uint *)(lVar91 + 0x14) = iVar30 + 4U;
  uVar29 = *(undefined4 *)(lVar74 + (ulong)(iVar30 + 4U));
  *(uint *)(lVar91 + 0x14) = iVar30 + 8U;
  uVar56 = uVar56 ^ uVar106 ^ 0xffffffff;
  local_498 = (long **)CONCAT44(local_498._4_4_, uVar32);
  local_4b0 = (long **)CONCAT44(local_4b0._4_4_, uVar29);
  uVar87 = *(uint *)(lVar74 + (ulong)(iVar30 + 8U));
  *(int *)(lVar91 + 0x14) = iVar30 + 0xc;
  uVar87 = uVar87 ^ uVar106 ^ 0xffffffff;
  local_508 = *(undefined **)(lVar74 + (ulong)(uVar80 - uVar90 * uVar106));
  uVar80 = 0;
  if (uVar106 != 0) {
    uVar80 = uVar87 / uVar106;
  }
  local_4f0 = *(long **)(lVar74 + (ulong)(uVar96 - uVar110 * uVar106));
  uVar90 = 0;
  if (uVar106 != 0) {
    uVar90 = uVar107 / uVar106;
  }
  lVar52 = *(long *)(lVar74 + (ulong)(uVar87 - uVar80 * uVar106));
  uVar80 = 0;
  if (uVar106 != 0) {
    uVar80 = uVar108 / uVar106;
  }
  local_4d0 = (long **)CONCAT44(local_4d0._4_4_, uVar107 - uVar90 * uVar106);
  paVar72 = lVar52 % 1000000000;
  uVar107 = 0;
  if (uVar106 != 0) {
    uVar107 = uVar56 / uVar106;
  }
  plVar60 = (long *)(lVar74 + (ulong)(uVar108 - uVar80 * uVar106));
  local_530 = (long **)CONCAT44(local_530._4_4_, uVar56 - uVar107 * uVar106);
  local_464 = uVar43;
  buffer = (long *)malloc(0x100);
  plVar95 = buffer + 0x20;
  bStack_2d0 = (byte)plVar95;
  uStack_2cf = (undefined)((ulong)plVar95 >> 8);
  uStack_2ce = (undefined2)((ulong)plVar95 >> 0x10);
  iStack_2cc = (int)((ulong)plVar95 >> 0x20);
  lVar105 = plVar60[4];
  lVar58 = plVar60[7];
  lVar74 = plVar60[6];
  lVar118 = plVar60[1];
  lVar116 = *plVar60;
  lVar114 = plVar60[3];
  lVar112 = plVar60[2];
  buffer[5] = plVar60[5];
  buffer[4] = lVar105;
  buffer[7] = lVar58;
  buffer[6] = lVar74;
  buffer[1] = lVar118;
  *buffer = lVar116;
  buffer[3] = lVar114;
  buffer[2] = lVar112;
  lVar105 = plVar60[0xc];
  lVar58 = plVar60[0xf];
  lVar74 = plVar60[0xe];
  lVar118 = plVar60[9];
  lVar116 = plVar60[8];
  lVar114 = plVar60[0xb];
  lVar112 = plVar60[10];
  buffer[0xd] = plVar60[0xd];
  buffer[0xc] = lVar105;
  buffer[0xf] = lVar58;
  buffer[0xe] = lVar74;
  buffer[9] = lVar118;
  buffer[8] = lVar116;
  buffer[0xb] = lVar114;
  buffer[10] = lVar112;
  lVar105 = plVar60[0x14];
  lVar58 = plVar60[0x17];
  lVar74 = plVar60[0x16];
  lVar118 = plVar60[0x11];
  lVar116 = plVar60[0x10];
  lVar114 = plVar60[0x13];
  lVar112 = plVar60[0x12];
  buffer[0x15] = plVar60[0x15];
  buffer[0x14] = lVar105;
  buffer[0x17] = lVar58;
  buffer[0x16] = lVar74;
  buffer[0x11] = lVar118;
  buffer[0x10] = lVar116;
  buffer[0x13] = lVar114;
  buffer[0x12] = lVar112;
  lVar105 = plVar60[0x1c];
  lVar58 = plVar60[0x1f];
  lVar74 = plVar60[0x1e];
  lVar118 = plVar60[0x19];
  lVar116 = plVar60[0x18];
  lVar114 = plVar60[0x1b];
  lVar112 = plVar60[0x1a];
  bVar97 = *(byte *)buffer;
  local_2c0 = (long **)0x0;
  uStack_2b8 = (long **)0x0;
  buffer[0x1d] = plVar60[0x1d];
  buffer[0x1c] = lVar105;
  buffer[0x1f] = lVar58;
  buffer[0x1e] = lVar74;
  buffer[0x19] = lVar118;
  buffer[0x18] = lVar116;
  buffer[0x1b] = lVar114;
  buffer[0x1a] = lVar112;
  local_2c8 = (long **)0x0;
  bStack_2d8 = bStack_2d0;
  uStack_2d7 = uStack_2cf;
  uStack_2d6 = uStack_2ce;
  iStack_2d4 = iStack_2cc;
  local_2c8 = (long **)malloc(1);
  uStack_2b8 = (long **)((long)local_2c8 + 1);
  *(byte *)local_2c8 = bVar97 ^ 8;
  uVar81 = lVar52 / 1000000000;
  local_2c0 = uStack_2b8;
  do {
    while (true) {
      pplVar94 = local_2c0;
      pplVar76 = local_2c8;
      uVar46 =
          CONCAT44(iStack_2d4,
                   CONCAT22(uStack_2d6, CONCAT11(uStack_2d7, bStack_2d8))) -
          (long)buffer;
      pplVar82 = (long **)((long)local_2c0 - (long)local_2c8);
      uVar75 = 0;
      if (uVar46 != 0) {
        uVar75 = (ulong)pplVar82 / uVar46;
      }
      bVar97 = *(byte *)((long)buffer + ((long)pplVar82 - uVar75 * uVar46)) ^
               ((byte)uVar81 & 0x7f | (0x7f < uVar81) << 7);
      if (local_2c0 < uStack_2b8)
        break;
      uVar75 = (long)pplVar82 + 1;
      if ((long)uVar75 < 0)
        goto LAB_00142498;
      uVar46 = ((long)uStack_2b8 - (long)local_2c8) * 2;
      if (uVar46 < uVar75 || uVar46 - uVar75 == 0) {
        uVar46 = uVar75;
      }
      if (0x3ffffffffffffffe < (ulong)((long)uStack_2b8 - (long)local_2c8)) {
        uVar46 = 0x7fffffffffffffff;
      }
      if (uVar46 == 0) {
        uStack_2b8 = (long **)0x0;
        *(byte *)pplVar82 = bVar97;
        pplVar67 = pplVar82;
        pplVar66 = local_2c8;
      } else {
        uStack_2b8 = (long **)malloc(uVar46);
        pplVar67 = (long **)((long)uStack_2b8 + (long)pplVar82);
        *(byte *)pplVar67 = bVar97;
        pplVar66 = local_2c8;
      }
      pplVar71 = (long **)((long)pplVar67 + 1);
      local_2c8 = pplVar67;
      pplVar65 = pplVar94;
      if (pplVar94 != pplVar76) {
        local_2c8 = uStack_2b8;
        if (((long **)0x7 < pplVar82) &&
            (0x1f < (ulong)((long)pplVar76 - (long)uStack_2b8))) {
          pplVar65 = pplVar76;
          if (pplVar82 < (long **)0x20) {
            pplVar50 = (long **)0x0;
          } else {
            pplVar50 = (long **)((ulong)pplVar82 & 0xffffffffffffffe0);
            pplVar69 = pplVar94 + -2;
            pplVar63 = (long **)((long)uStack_2b8 + (long)pplVar82 + -0x10);
            pplVar49 = pplVar50;
            do {
              pplVar23 = pplVar69 + -1;
              plVar89 = pplVar69[-2];
              plVar60 = pplVar69[1];
              plVar95 = *pplVar69;
              pplVar49 = pplVar49 + -4;
              pplVar69 = pplVar69 + -4;
              pplVar63[-1] = *pplVar23;
              pplVar63[-2] = plVar89;
              pplVar63[1] = plVar60;
              *pplVar63 = plVar95;
              pplVar63 = pplVar63 + -4;
            } while (pplVar49 != (long **)0x0);
            if (pplVar82 == pplVar50)
              goto LAB_0013468c;
            if (((ulong)pplVar82 & 0x18) == 0) {
              pplVar67 = (long **)((long)pplVar67 - (long)pplVar50);
              pplVar94 = (long **)((long)pplVar94 - (long)pplVar50);
              goto LAB_00134674;
            }
          }
          puVar78 = (undefined8 *)((long)pplVar94 - (long)pplVar50);
          pplVar49 = (long **)((ulong)pplVar82 & 0xfffffffffffffff8);
          pplVar94 = (long **)((long)pplVar94 - (long)pplVar49);
          puVar84 = (undefined8 *)((long)uStack_2b8 +
                                   ((long)puVar78 - (long)pplVar76));
          lVar74 = (long)pplVar50 - (long)pplVar49;
          do {
            puVar78 = puVar78 + -1;
            puVar84 = puVar84 + -1;
            lVar74 = lVar74 + 8;
            *puVar84 = *puVar78;
          } while (lVar74 != 0);
          if (pplVar82 == pplVar49)
            goto LAB_0013468c;
          pplVar67 = (long **)((long)pplVar67 - (long)pplVar49);
        }
      LAB_00134674:
        do {
          pplVar67 = (long **)((long)pplVar67 + -1);
          pplVar94 = (long **)((long)pplVar94 + -1);
          *(undefined *)pplVar67 = *(undefined *)pplVar94;
          pplVar65 = pplVar66;
        } while (pplVar94 != pplVar76);
      }
    LAB_0013468c:
      uStack_2b8 = (long **)((long)uStack_2b8 + uVar46);
      if (pplVar65 != (long **)0x0) {
        local_2c0 = pplVar71;
        thunk_EXT_FUN_0016a000(pplVar65);
      }
      bVar27 = uVar81 < 0x80;
      uVar81 = uVar81 >> 7;
      local_2c0 = pplVar71;
      if (bVar27)
        goto LAB_001346c0;
    }
    pplVar71 = (long **)((long)local_2c0 + 1);
    *(byte *)local_2c0 = bVar97;
    bVar27 = 0x7f < uVar81;
    uVar81 = uVar81 >> 7;
    local_2c0 = pplVar71;
  } while (bVar27);
LAB_001346c0:
  unaff_x24 = local_2c8;
  pplVar76 = (long **)((long)pplVar71 - (long)local_2c8);
  uVar75 = CONCAT44(iStack_2d4,
                    CONCAT22(uStack_2d6, CONCAT11(uStack_2d7, bStack_2d8))) -
           (long)buffer;
  uVar81 = 0;
  if (uVar75 != 0) {
    uVar81 = (ulong)pplVar76 / uVar75;
  }
  bVar97 =
      *(byte *)((long)buffer + ((long)pplVar76 - uVar81 * uVar75)) ^ 0x10;
  if (pplVar71 < uStack_2b8) {
    pplVar67 = (long **)((long)pplVar71 + 1);
    *(byte *)pplVar71 = bVar97;
  } else {
    puVar92 = (undefined *)((long)pplVar76 + 1);
    local_2c0 = pplVar71;
    if ((long)puVar92 < 0) {
    LAB_00142498:
      FUN_0012ae1c();
    LAB_0014249c:
      FUN_001291bc("string_view::substr");
      goto LAB_001424a8;
    }
    puVar45 = (undefined *)(((long)uStack_2b8 - (long)local_2c8) * 2);
    if (puVar45 < puVar92 || (long)puVar45 - (long)puVar92 == 0) {
      puVar45 = puVar92;
    }
    if (0x3ffffffffffffffe < (ulong)((long)uStack_2b8 - (long)local_2c8)) {
      puVar45 = (undefined *)0x7fffffffffffffff;
    }
    if (puVar45 == (undefined *)0x0) {
      uStack_2b8 = (long **)0x0;
      *(byte *)pplVar76 = bVar97;
      pplVar94 = pplVar76;
      pplVar82 = local_2c8;
    } else {
      uStack_2b8 = (long **)malloc(puVar45);
      pplVar94 = (long **)((long)uStack_2b8 + (long)pplVar76);
      *(byte *)pplVar94 = bVar97;
      pplVar82 = local_2c8;
    }
    pplVar67 = (long **)((long)pplVar94 + 1);
    local_2c8 = pplVar94;
    pplVar66 = pplVar71;
    if (pplVar71 != unaff_x24) {
      local_2c8 = uStack_2b8;
      if (((long **)0x7 < pplVar76) &&
          (0x1f < (ulong)((long)unaff_x24 - (long)uStack_2b8))) {
        pplVar66 = unaff_x24;
        if (pplVar76 < (long **)0x20) {
          pplVar63 = (long **)0x0;
        } else {
          pplVar63 = (long **)((ulong)pplVar76 & 0xffffffffffffffe0);
          pplVar50 = pplVar71 + -2;
          pplVar65 =
              (long **)((long)pplVar50 + ((long)uStack_2b8 - (long)unaff_x24));
          pplVar49 = pplVar63;
          do {
            pplVar69 = pplVar50 + -1;
            plVar89 = pplVar50[-2];
            plVar60 = pplVar50[1];
            plVar95 = *pplVar50;
            pplVar49 = pplVar49 + -4;
            pplVar50 = pplVar50 + -4;
            pplVar65[-1] = *pplVar69;
            pplVar65[-2] = plVar89;
            pplVar65[1] = plVar60;
            *pplVar65 = plVar95;
            pplVar65 = pplVar65 + -4;
          } while (pplVar49 != (long **)0x0);
          if (pplVar76 == pplVar63)
            goto LAB_00141898;
          if (((ulong)pplVar76 & 0x18) == 0) {
            pplVar94 = (long **)((long)pplVar94 - (long)pplVar63);
            pplVar71 = (long **)((long)pplVar71 - (long)pplVar63);
            goto LAB_00141880;
          }
        }
        pplVar65 = (long **)((ulong)pplVar76 & 0xfffffffffffffff8);
        puVar78 = (undefined8 *)((long)pplVar71 - (long)pplVar63);
        puVar84 = (undefined8 *)(((long)uStack_2b8 -
                                  (long)((long)pplVar63 + (long)unaff_x24)) +
                                 (long)pplVar71);
        lVar74 = (long)pplVar63 - (long)pplVar65;
        do {
          puVar78 = puVar78 + -1;
          puVar84 = puVar84 + -1;
          lVar74 = lVar74 + 8;
          *puVar84 = *puVar78;
        } while (lVar74 != 0);
        if (pplVar76 == pplVar65)
          goto LAB_00141898;
        pplVar94 = (long **)((long)pplVar94 - (long)pplVar65);
        pplVar71 = (long **)((long)pplVar71 - (long)pplVar65);
      }
    LAB_00141880:
      do {
        pplVar94 = (long **)((long)pplVar94 + -1);
        pplVar71 = (long **)((long)pplVar71 + -1);
        *(undefined *)pplVar94 = *(undefined *)pplVar71;
        pplVar66 = pplVar82;
      } while (pplVar71 != unaff_x24);
    }
  LAB_00141898:
    uStack_2b8 = (long **)((long)uStack_2b8 + (long)puVar45);
    if (pplVar66 != (long **)0x0) {
      local_2c0 = pplVar67;
      thunk_EXT_FUN_0016a000(pplVar66);
    }
  }
  do {
    pplVar76 = local_2c8;
    uVar75 = CONCAT44(iStack_2d4,
                      CONCAT22(uStack_2d6, CONCAT11(uStack_2d7, bStack_2d8))) -
             (long)buffer;
    pplVar94 = (long **)((long)pplVar67 - (long)local_2c8);
    uVar81 = 0;
    if (uVar75 != 0) {
      uVar81 = (ulong)pplVar94 / uVar75;
    }
    bVar97 = *(byte *)((long)buffer + ((long)pplVar94 - uVar81 * uVar75)) ^
             ((byte)paVar72 & 0x7f | ((long **)0x7f < (ulong)paVar72) << 7);
    if (pplVar67 < uStack_2b8) {
      *(byte *)pplVar67 = bVar97;
      pplVar67 = (long **)((long)pplVar67 + 1);
    } else {
      pplVar82 = (long **)((long)pplVar94 + 1);
      local_2c0 = pplVar67;
      if ((long)pplVar82 < 0)
        goto LAB_00142498;
      unaff_x24 = (long **)(((long)uStack_2b8 - (long)local_2c8) * 2);
      if (unaff_x24 < pplVar82 || (long)unaff_x24 - (long)pplVar82 == 0) {
        unaff_x24 = pplVar82;
      }
      if (0x3ffffffffffffffe < (ulong)((long)uStack_2b8 - (long)local_2c8)) {
        unaff_x24 = (long **)0x7fffffffffffffff;
      }
      if (unaff_x24 == (long **)0x0) {
        uStack_2b8 = (long **)0x0;
        *(byte *)pplVar94 = bVar97;
        pplVar82 = pplVar94;
        pplVar71 = local_2c8;
      } else {
        uStack_2b8 = (long **)malloc(unaff_x24);
        pplVar82 = (long **)((long)uStack_2b8 + (long)pplVar94);
        *(byte *)pplVar82 = bVar97;
        pplVar71 = local_2c8;
      }
      local_2c0 = (long **)((long)pplVar82 + 1);
      local_2c8 = pplVar82;
      pplVar66 = pplVar67;
      if (pplVar67 != pplVar76) {
        local_2c8 = uStack_2b8;
        if (((long **)0x7 < pplVar94) &&
            (0x1f < (ulong)((long)pplVar76 - (long)uStack_2b8))) {
          pplVar66 = pplVar76;
          if (pplVar94 < (long **)0x20) {
            pplVar49 = (long **)0x0;
          } else {
            pplVar49 = (long **)((ulong)pplVar94 & 0xffffffffffffffe0);
            pplVar63 = pplVar67 + -2;
            pplVar50 =
                (long **)((undefined *)((long)uStack_2b8 + (long)pplVar94) +
                          -0x10);
            pplVar65 = pplVar49;
            do {
              pplVar69 = pplVar63 + -1;
              plVar89 = pplVar63[-2];
              plVar60 = pplVar63[1];
              plVar95 = *pplVar63;
              pplVar65 = pplVar65 + -4;
              pplVar63 = pplVar63 + -4;
              pplVar50[-1] = *pplVar69;
              pplVar50[-2] = plVar89;
              pplVar50[1] = plVar60;
              *pplVar50 = plVar95;
              pplVar50 = pplVar50 + -4;
            } while (pplVar65 != (long **)0x0);
            if (pplVar94 == pplVar49)
              goto LAB_00141a58;
            if (((ulong)pplVar94 & 0x18) == 0) {
              pplVar82 = (long **)((long)pplVar82 - (long)pplVar49);
              pplVar67 = (long **)((long)pplVar67 - (long)pplVar49);
              goto LAB_00141a40;
            }
          }
          puVar78 = (undefined8 *)((long)pplVar67 - (long)pplVar49);
          pplVar65 = (long **)((ulong)pplVar94 & 0xfffffffffffffff8);
          pplVar67 = (long **)((long)pplVar67 - (long)pplVar65);
          puVar84 = (undefined8 *)((long)uStack_2b8 +
                                   ((long)puVar78 - (long)pplVar76));
          lVar74 = (long)pplVar49 - (long)pplVar65;
          do {
            puVar78 = puVar78 + -1;
            puVar84 = puVar84 + -1;
            lVar74 = lVar74 + 8;
            *puVar84 = *puVar78;
          } while (lVar74 != 0);
          if (pplVar94 == pplVar65)
            goto LAB_00141a58;
          pplVar82 = (long **)((long)pplVar82 - (long)pplVar65);
        }
      LAB_00141a40:
        do {
          pplVar82 = (long **)((long)pplVar82 + -1);
          pplVar67 = (long **)((long)pplVar67 + -1);
          *(undefined *)pplVar82 = *(undefined *)pplVar67;
          pplVar66 = pplVar71;
        } while (pplVar67 != pplVar76);
      }
    LAB_00141a58:
      uStack_2b8 = (long **)((long)uStack_2b8 + (long)unaff_x24);
      pplVar67 = local_2c0;
      if (pplVar66 != (long **)0x0) {
        thunk_EXT_FUN_0016a000(pplVar66);
      }
    }
    unaff_x27 = (long **)((ulong)paVar72 >> 7);
    bVar27 = (long **)0x7f < (ulong)paVar72;
    paVar72 = (long)unaff_x27;
  } while (bVar27);
  local_2c0 = pplVar67;
  FUN_00142c40(local_4f0, &buffer, local_508);
  uVar81 = 0xcbf29ce484222325;
  if (sVar16 != 0) {
    lVar74 = 0;
    iVar30 = 0;
    do {
      pcVar38 = (char *)(*(long *)(lVar91 + 8) +
                         ((ulong)local_530 & 0xffffffff) + lVar74);
      iVar30 = iVar30 + 1;
      lVar74 = (long)iVar30;
      uVar81 = uVar81 * 0x100000001b3 ^ (long)*pcVar38;
    } while (sVar16 != iVar30);
  }
  uVar56 = (uint)local_498;
  if ((long **)(uVar81 ^ (long)*(int *)(*(long *)(lVar91 + 8) +
                                        ((ulong)local_4d0 & 0xffffffff))) !=
      local_490) {
    uVar56 = (uint)local_4b0;
  }
  if (local_2c8 != (long **)0x0) {
    thunk_EXT_FUN_0016a000();
  }
  plVar95 = buffer;
  if (buffer != (long *)0x0) {
  LAB_00141b00:
    thunk_EXT_FUN_0016a000(plVar95);
  }
LAB_00141b04:
  uVar56 = uVar56 ^ uVar106 ^ 0xffffffff;
  goto LAB_001395ac;
}

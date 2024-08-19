#include "gvm/dispatcher.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unable to use type for symbol ppaVar55 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long vm_dispatch_1(long param_1, short param_2)

{
  uint *puVar1;
  uint *puVar2;
  ushort *puVar3;
  long ***ppplVar4;
  undefined8 **ppuVar5;
  long ***ppplVar6;
  uint uVar7;
  VMInitList *pVVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  short sVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long *plVar23;
  long **pplVar24;
  byte value;
  byte bVar25;
  byte bVar26;
  char cVar27;
  bool bVar28;
  bool bVar29;
  undefined4 uVar30;
  int iVar31;
  int iVar32;
  undefined4 uVar33;
  int *piVar34;
  long *plVar95;
  undefined2 *puVar35;
  byte *pbVar36;
  undefined *puVar37;
  long *plVar38;
  long *plVar39;
  int *piVar40;
  basic_string *string;
  undefined4 *puVar41;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  ulong extraout_x1_06;
  ulong extraout_x1_07;
  ulong extraout_x1_08;
  ulong extraout_x1_09;
  ulong extraout_x1_10;
  ulong extraout_x1_11;
  ulong extraout_x1_12;
  ulong extraout_x1_13;
  ulong extraout_x1_14;
  char *pcVar42;
  ulong extraout_x1_15;
  ulong extraout_x1_16;
  ulong extraout_x1_17;
  ulong extraout_x1_18;
  int **ppiVar43;
  uint uVar44;
  int iVar45;
  undefined *puVar46;
  std::vector *plVar81;
  ulong uVar47;
  long *plVar48;
  undefined8 uVar49;
  long **pplVar50;
  long **pplVar51;
  byte *pbVar52;
  undefined *puVar53;
  long lVar54;
  long *plVar55;
  long *plVar56;
  char *pcVar57;
  uint uVar58;
  int iVar59;
  long lVar60;
  byte *pbVar61;
  undefined *puVar62;
  ulong *puVar63;
  ulong uVar64;
  long *plVar65;
  byte *pbVar66;
  long **pplVar67;
  char *pcVar68;
  long **pplVar69;
  long **pplVar70;
  long **pplVar71;
  byte *pbVar72;
  undefined *puVar73;
  long **pplVar74;
  long *plVar75;
  long *plVar76;
  long **pplVar77;
  long *plVar79;
  ulong extraout_x11;
  long lVar80;
  ulong uVar81;
  long **pplVar82;
  ulong uVar83;
  undefined8 *puVar84;
  uint uVar85;
  uint uVar86;
  ulong uVar87;
  std::vector *plVar78;
  long **pplVar88;
  astruct_1 *paVar89;
  int *piVar90;
  undefined8 *puVar91;
  uint *puVar92;
  int *piVar93;
  uint uVar94;
  int *piVar95;
  uint uVar96;
  long **unaff_x24;
  undefined *puVar97;
  long lVar91;
  long **unaff_x27;
  byte *pbVar98;
  long paVar72;
  std::vector *plVar100;
  ulong uVar99;
  long **pplVar100;
  uint uVar101;
  byte bVar102;
  byte bVar104;
  undefined2 uVar103;
  byte bVar105;
  byte bVar106;
  float fVar107;
  undefined8 uVar108;
  undefined8 uVar109;
  long lVar110;
  uint uVar111;
  uint uVar112;
  uint uVar113;
  undefined8 uVar114;
  uint uVar115;
  undefined8 uVar116;
  long lVar117;
  undefined8 uVar118;
  long lVar119;
  undefined8 uVar120;
  long lVar121;
  undefined8 uVar122;
  long lVar123;
  undefined auVar124 [16];
  byte bStack_9d0;
  undefined uStack_9cf;
  undefined uStack_9ce;
  undefined uStack_9cd;
  undefined uStack_9cc;
  undefined uStack_9cb;
  undefined uStack_9ca;
  undefined uStack_9c9;
  ulong uStack_9c0;
  long lStack_9b8;
  code *pcStack_9b0;
  int *piStack_9a0;
  ulong uStack_998;
  undefined4 local_97c;
  long **local_978;
  undefined8 *local_970;
  long **local_968;
  long local_960;
  undefined4 local_958;
  undefined4 local_954;
  long *local_950;
  byte *local_948;
  long ***local_940;
  undefined *local_938;
  undefined *local_930;
  undefined *local_928;
  undefined *puStack_920;
  undefined *local_918;
  undefined *puStack_910;
  long **local_908;
  undefined *local_900;
  long **local_8f8;
  undefined *local_8f0;
  long *local_8e8;
  long **local_8e0;
  long **local_8d8;
  long **local_8d0;
  long *local_8c8;
  long local_8c0;
  long lStack_8b8;
  long local_8b0;
  undefined8 local_8a8;
  undefined8 local_8a0;
  undefined8 local_898;
  undefined8 local_890;
  undefined8 *local_888;
  undefined8 *local_880;
  long **local_878;
  ushort *puStack_870;
  ushort *local_868;
  long **local_860;
  undefined8 local_858;
  undefined8 local_850;
  undefined8 uStack_848;
  long *local_840;
  long **pplStack_838;
  long **local_830;
  undefined8 *local_828;
  undefined8 local_820;
  undefined *local_818;
  uint local_80c;
  uint local_808;
  uint local_804;
  uint local_800;
  uint local_7fc;
  uint local_7f8;
  uint local_7f4;
  uint local_7f0;
  uint local_7ec;
  uint local_7e8;
  uint local_7e4;
  uint local_7e0;
  uint local_7dc;
  uint local_7d8;
  uint local_7d4;
  uint local_7d0;
  uint local_7cc;
  uint local_7c8;
  uint local_7c4;
  uint local_7c0;
  uint local_7bc;
  uint local_7b8;
  uint local_7b4;
  uint local_7b0;
  uint local_7ac;
  uint local_7a8;
  uint local_7a4;
  uint local_7a0;
  uint local_79c;
  uint local_798;
  uint local_794;
  uint local_790;
  uint local_78c;
  uint local_788;
  uint local_784;
  uint local_780;
  uint local_77c;
  uint local_778;
  uint local_774;
  uint local_770;
  uint local_76c;
  long **local_768;
  long local_760;
  undefined8 local_758;
  undefined8 local_750;
  byte *local_748;
  byte *local_740;
  byte *local_738;
  byte *local_730;
  byte *local_728;
  byte *local_720;
  long **local_718;
  byte *local_710;
  byte *local_708;
  byte *local_700;
  byte *local_6f8;
  byte *local_6f0;
  byte *local_6e8;
  long ***local_6e0;
  byte *local_6d8;
  undefined8 local_6d0;
  undefined8 *local_6c8;
  byte *local_6c0;
  byte *local_6b8;
  byte *local_6b0;
  byte *local_6a8;
  byte *local_6a0;
  byte *local_698;
  undefined8 **local_690;
  undefined8 local_688;
  ulong local_680;
  uint local_678;
  uint local_674;
  uint local_670;
  uint local_66c;
  uint local_668;
  uint local_664;
  uint local_660;
  uint local_65c;
  uint local_658;
  uint local_654;
  uint local_650;
  uint local_64c;
  uint local_648;
  uint local_644;
  uint local_640;
  uint local_63c;
  uint local_638;
  uint local_634;
  uint local_630;
  uint local_62c;
  uint local_628;
  uint local_624;
  uint local_620;
  uint local_61c;
  uint local_618;
  uint local_614;
  uint local_610;
  uint local_60c;
  uint local_608;
  uint local_604;
  uint local_600;
  uint local_5fc;
  uint local_5f8;
  uint local_5f4;
  uint local_5f0;
  uint local_5ec;
  long ***local_5e8;
  long **local_5e0;
  undefined8 *local_5d8;
  uint local_5d0;
  uint local_5cc;
  uint local_5c8;
  uint local_5c4;
  uint local_5c0;
  uint local_5bc;
  uint local_5b8;
  uint local_5b4;
  uint local_5b0;
  uint local_5ac;
  uint local_5a8;
  uint local_5a4;
  uint local_5a0;
  uint local_59c;
  uint local_598;
  uint local_594;
  uint local_590;
  uint local_58c;
  long **local_588;
  ulong local_580;
  long **local_578;
  long **local_570;
  undefined8 local_568;
  long **local_560;
  byte *local_558;
  long **local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  long **local_528;
  ulong local_520;
  ulong local_518;
  long **local_510;
  undefined8 local_508;
  undefined4 local_4fc;
  ulong local_4f8;
  long *local_4f0;
  long **local_4e8;
  long **local_4e0;
  long **local_4d8;
  undefined8 local_4d0;
  long *plStack_4c8;
  int *local_4b8;
  undefined8 local_4b0;
  long **pplStack_4a8;
  ulong local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined *puStack_488;
  long **local_480;
  ulong local_478;
  long local_470;
  uint local_464;
  undefined8 local_460;
  undefined *local_458;
  undefined local_450 [2];
  byte bStack_44e;
  byte bStack_44d;
  undefined4 uStack_44c;
  undefined8 *local_448;
  ulong local_440;
  undefined2 local_438 [4];
  long **local_430;
  long **local_428;
  undefined2 local_420 [4];
  long **local_418;
  ulong local_410;
  undefined2 local_408 [4];
  ulong local_400;
  ulong local_3f8;
  undefined local_3f0 [8];
  ulong local_3e8;
  long **local_3e0;
  undefined local_3d8 [8];
  undefined local_3d0 [2];
  undefined uStack_3ce;
  undefined uStack_3cd;
  undefined uStack_3cc;
  undefined uStack_3cb;
  undefined uStack_3ca;
  undefined uStack_3c9;
  long **local_3c8;
  undefined8 local_3c0;
  long **pplStack_3b8;
  undefined local_3b0 [13];
  ushort uStack_3a3;
  undefined auStack_3a1 [2];
  undefined auStack_39f [11];
  uint uStack_394;
  undefined8 local_390;
  undefined auStack_388 [2];
  byte bStack_386;
  byte bStack_385;
  byte bStack_384;
  byte bStack_383;
  byte bStack_382;
  byte bStack_381;
  long **local_380;
  undefined8 local_378;
  undefined4 local_368;
  uint uStack_364;
  undefined local_360 [6];
  undefined2 uStack_35a;
  undefined auStack_358 [6];
  undefined2 uStack_352;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  long **pplStack_338;
  long **pplStack_330;
  long **pplStack_328;
  undefined local_320 [8];
  code *pcStack_318;
  long **local_310;
  long **local_308;
  float local_300;
  long **local_2f8;
  long **pplStack_2f0;
  long **local_2e8;
  long *local_2e0;
  byte bStack_2d8;
  undefined uStack_2d7;
  undefined2 uStack_2d6;
  int iStack_2d4;
  byte bStack_2d0;
  undefined uStack_2cf;
  undefined2 uStack_2ce;
  int iStack_2cc;
  long **local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined *local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined auStack_298 [8];
  ulong local_290;
  ulong local_278;
  ulong uStack_270;
  ulong local_268;
  ulong uStack_260;
  ulong local_258;
  ulong uStack_250;
  ulong local_248;
  ulong uStack_240;
  undefined8 local_1bc;
  undefined8 local_1b0;
  undefined local_1a0;
  undefined auStack_19f [2];
  byte bStack_19d;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  byte local_190;
  undefined uStack_18f;
  undefined uStack_18e;
  undefined uStack_18d;
  byte bStack_18c;
  undefined uStack_18b;
  undefined uStack_18a;
  undefined uStack_189;
  undefined uStack_188;
  undefined uStack_187;
  undefined uStack_186;
  undefined uStack_185;
  undefined uStack_184;
  undefined uStack_183;
  undefined uStack_182;
  undefined uStack_181;
  undefined auStack_180 [8];
  undefined auStack_178 [8];
  undefined *local_170;
  long local_78;
  VMInitList *puVar89;
  long **ppaVar55;

  uVar58 = 0xf34248d0;
  local_58c = 0x376470be;
  if (param_2 != 0) {
    local_58c = 0x37d5dbc8;
  }
  local_770 = 0xc0a855fb;
  if (param_2 != 1) {
    local_770 = uVar58;
  }
  local_774 = 0x60aba98c;
  if (2 < param_2) {
    local_774 = 0xb53c541;
  }
  local_778 = 0x28fcb0f;
  if (9 < param_2) {
    local_778 = 0xebacae21;
  }
  puVar91 = &local_3c0;
  local_5ec = 0xa1e3ee3d;
  if (param_2 != 0xc) {
    local_5ec = uVar58;
  }
  local_5f0 = 0xb46fd9fb;
  if (0xb < param_2) {
    local_5f0 = 0x188af6da;
  }
  local_590 = 0x8914b5e1;
  if (10 < param_2) {
    local_590 = 0x884c6ae8;
  }
  local_5f4 = 0xd02b01b7;
  if (param_2 != 4) {
    local_5f4 = uVar58;
  }
  local_77c = 0xb4a95139;
  if (3 < param_2) {
    local_77c = 0x216ab904;
  }
  local_780 = 0xa6457d4c;
  if (0x15 < param_2) {
    local_780 = 0x5f21598f;
  }
  local_5f8 = 0x40db31b3;
  if (param_2 != 0x1c) {
    local_5f8 = uVar58;
  }
  local_594 = 0x1f27c6e7;
  if (0x1b < param_2) {
    local_594 = 0x9749e8b3;
  }
  local_784 = 0x26338b61;
  if (param_2 != 0x17) {
    local_784 = uVar58;
  }
  local_5fc = 0xbcaead09;
  if (0x16 < param_2) {
    local_5fc = 0x7a0eedb5;
  }
  local_788 = 0x6f7df4df;
  if (0x21 < param_2) {
    local_788 = 0x5741547a;
  }
  local_78c = 0xd24157f;
  if (param_2 != 0x24) {
    local_78c = uVar58;
  }
  local_598 = 0xbcfac370;
  if (0x23 < param_2) {
    local_598 = 0x81703c16;
  }
  local_790 = 0x6510f97b;
  if (0x22 < param_2) {
    local_790 = 0x5b691f21;
  }
  local_794 = 0xf61ba08;
  if (param_2 != 0x20) {
    local_794 = uVar58;
  }
  local_798 = 0xcde1a92a;
  if (0x1f < param_2) {
    local_798 = 0x151c9725;
  }
  local_79c = 0xe6c8602d;
  if (param_2 != 0x14) {
    local_79c = uVar58;
  }
  local_7a0 = 0xd65e876f;
  if (0x13 < param_2) {
    local_7a0 = 0xaf473bec;
  }
  local_7a4 = 0x32dccf2b;
  if (param_2 != 0x27) {
    local_7a4 = uVar58;
  }
  local_7a8 = 0xf1fd9f01;
  if (0x26 < param_2) {
    local_7a8 = 0xee7f9ab3;
  }
  local_59c = 0xd14943bf;
  if (param_2 != 0x2b) {
    local_59c = uVar58;
  }
  local_5a0 = 0x3d382541;
  if (0x2a < param_2) {
    local_5a0 = 0x65fb0cc9;
  }
  local_600 = 0x625b4dc6;
  if (param_2 != 0x29) {
    local_600 = uVar58;
  }
  local_7ac = 0x58801dbd;
  if (0x28 < param_2) {
    local_7ac = 0x263dc605;
  }
  local_604 = 0x9170442a;
  if (param_2 != 0x32) {
    local_604 = uVar58;
  }
  local_7b0 = 0xfbc79c53;
  if (0x31 < param_2) {
    local_7b0 = 0x35d73ef5;
  }
  local_608 = 0x35e91c8f;
  if (param_2 != 0x39) {
    local_608 = uVar58;
  }
  local_5a4 = 0x40c1bcb7;
  if (0x38 < param_2) {
    local_5a4 = 0xacd0c7c2;
  }
  local_7b4 = 0x92dfddb9;
  if (param_2 != 0x36) {
    local_7b4 = uVar58;
  }
  local_60c = 0x59e872a2;
  if (0x35 < param_2) {
    local_60c = 0xab460341;
  }
  local_5a8 = 0xc9d98bc1;
  if (0x30 < param_2) {
    local_5a8 = 0xeb794ab6;
  }
  local_7b8 = 0xed105b11;
  if (0x3c < param_2) {
    local_7b8 = 0x2fadc029;
  }
  local_7bc = 0x881a3bf6;
  if (0x3e < param_2) {
    local_7bc = 0x2198d070;
  }
  local_7c0 = 0xed22b893;
  if (0x3d < param_2) {
    local_7c0 = 0x402d7eb;
  }
  local_610 = 0x4c6a9874;
  if (param_2 != 0x41) {
    local_610 = uVar58;
  }
  local_614 = 0xdfad7c4f;
  if (0x40 < param_2) {
    local_614 = 0x7e607bbe;
  }
  local_7c4 = 0x8c2dfaae;
  if (param_2 != 0x49) {
    local_7c4 = uVar58;
  }
  local_5ac = 0xfa452fd1;
  if (0x48 < param_2) {
    local_5ac = 0xf6001153;
  }
  local_618 = 0xf9e56dd4;
  if (param_2 != 0x46) {
    local_618 = uVar58;
  }
  local_7c8 = 0xf83504c1;
  if (0x45 < param_2) {
    local_7c8 = 0x821454ee;
  }
  local_61c = 0xfa85355f;
  if (0x3f < param_2) {
    local_61c = 0x17ff3bf1;
  }
  local_5b0 = 0xcd46491f;
  if (0x3b < param_2) {
    local_5b0 = 0x79f262cd;
  }
  local_7cc = 0x79f73c3c;
  if (0x25 < param_2) {
    local_7cc = 0x158bcc02;
  }
  local_7d0 = 0xa7836dfd;
  if (0x50 < param_2) {
    local_7d0 = 0x42dfd966;
  }
  local_7d4 = 0x20be222;
  if (0x52 < param_2) {
    local_7d4 = 0xa9379dd1;
  }
  local_620 = 0x74bb892d;
  if (0x51 < param_2) {
    local_620 = 0x45409bae;
  }
  local_624 = 0xd8f11d2;
  if (0x54 < param_2) {
    local_624 = 0x72c4753d;
  }
  local_628 = 0x619cec59;
  if (param_2 != 0x58) {
    local_628 = uVar58;
  }
  local_7d8 = 0x98e51ae2;
  if (0x57 < param_2) {
    local_7d8 = 0x92df4404;
  }
  local_7dc = 0xa515824;
  if (param_2 != 0x56) {
    local_7dc = uVar58;
  }
  local_7e0 = 0xf550c5ab;
  if (0x55 < param_2) {
    local_7e0 = 0xfeac16f4;
  }
  local_62c = 0xbb6580dc;
  if (0x53 < param_2) {
    local_62c = 0xdec3fa5;
  }
  local_5b4 = 0x803b5d53;
  if (0x61 < param_2) {
    local_5b4 = 0x6d7b099b;
  }
  local_7e4 = 0x250ff82c;
  if (0x66 < param_2) {
    local_7e4 = 0xc66ceda;
  }
  local_630 = 0x436e5879;
  if (param_2 != 99) {
    local_630 = uVar58;
  }
  local_634 = 0xd71f6fe9;
  if (0x62 < param_2) {
    local_634 = 0x91ba958f;
  }
  local_5b8 = 0x47454c80;
  if (param_2 != 0x69) {
    local_5b8 = uVar58;
  }
  local_7e8 = 0x2f41c21d;
  if (0x68 < param_2) {
    local_7e8 = 0x3cc360c3;
  }
  local_7ec = 0xf0d4224c;
  if (0x77 < param_2) {
    local_7ec = 0x6e487ad9;
  }
  local_638 = 0x41dd9710;
  if (param_2 != 0x6f) {
    local_638 = uVar58;
  }
  local_7f0 = 0xcc203915;
  if (0x6e < param_2) {
    local_7f0 = 0xf8421b97;
  }
  local_63c = 0xede2c098;
  if (0x67 < param_2) {
    local_63c = 0xbf65031b;
  }
  local_5bc = 0xf5fd549b;
  if (0x60 < param_2) {
    local_5bc = 0xca15a97b;
  }
  local_5c0 = 0xf5a4b13e;
  if (0x7b < param_2) {
    local_5c0 = 0x305a4622;
  }
  local_640 = 0xa5824081;
  if (0x7e < param_2) {
    local_640 = 0xaad19cf6;
  }
  local_644 = 0x3dafd8cf;
  if (param_2 != 0x7d) {
    local_644 = uVar58;
  }
  local_7f4 = 0x54de58ef;
  if (0x7c < param_2) {
    local_7f4 = 0x64db2d42;
  }
  local_7f8 = 0x928ac97d;
  if (param_2 != 0x81) {
    local_7f8 = uVar58;
  }
  local_648 = 0x5c808dff;
  if (0x80 < param_2) {
    local_648 = 0x8cb077c2;
  }
  local_650 = 0xfdb2acbe;
  if (0x87 < param_2) {
    local_650 = 0x76edb2e;
  }
  local_64c = 0x544f7249;
  if (param_2 != 0x88) {
    local_64c = uVar58;
  }
  local_658 = 0xc47208ac;
  if (0x85 < param_2) {
    local_658 = 0x15bfc039;
  }
  local_654 = 0x59cf1e1;
  if (param_2 != 0x86) {
    local_654 = uVar58;
  }
  local_65c = 0x21d23544;
  if (0x7f < param_2) {
    local_65c = 0x598043a6;
  }
  local_660 = 0xf69c13d5;
  if (0x8e < param_2) {
    local_660 = 0xc2891d0f;
  }
  local_960 = tpidr_el0;
  local_7fc = 0x3f44a7f1;
  if (0x90 < param_2) {
    local_7fc = 0xed42f779;
  }
  local_78 = *(long *)(local_960 + 0x28);
  local_664 = 0x86a19ad9;
  if (0x8f < param_2) {
    local_664 = 0xa2e4c1d9;
  }
  local_5c8 = 0xe45080e2;
  if (0x93 < param_2) {
    local_5c8 = 0x8b3e0439;
  }
  local_5c4 = 0x629bb9c1;
  if (param_2 != 0x94) {
    local_5c4 = uVar58;
  }
  local_5cc = 0x4aa2c3b0;
  if (0x98 < param_2) {
    local_5cc = 0xc1279b5e;
  }
  local_800 = 0x2a839ade;
  if (param_2 != 0x99) {
    local_800 = uVar58;
  }
  local_668 = 0x72126bb7;
  if (0x96 < param_2) {
    local_668 = 0x9abe0092;
  }
  local_804 = 0xdd6d7075;
  if (param_2 != 0x97) {
    local_804 = uVar58;
  }
  local_670 = 0x44ad530;
  if (0x91 < param_2) {
    local_670 = 0xb6925cf2;
  }
  local_66c = 0xe505d81f;
  if (param_2 != 0x92) {
    local_66c = uVar58;
  }
  local_76c = 0xb0a23815;
  if (0x89 < param_2) {
    local_76c = 0xa9a08da4;
  }
  local_5d0 = 0x456f184e;
  if (param_2 != 0x8a) {
    local_5d0 = uVar58;
  }
  local_80c = 0x7088655;
  if (0x78 < param_2) {
    local_80c = 0xfc90aaaa;
  }
  local_808 = 0xb6bf25fa;
  if (param_2 != 0x79) {
    local_808 = uVar58;
  }
  local_690 = &local_448;
  local_5d8 = (undefined8 *)((ulong)&local_458 | 1);
  local_698 = local_450 + 7;
  local_6a0 = local_450 + 6;
  local_6a8 = local_450 + 5;
  local_6b0 = local_450 + 4;
  local_6b8 = local_450 + 3;
  local_6c0 = local_450 + 2;
  local_6c8 = (undefined8 *)(local_450 + 1);
  local_6d8 = auStack_388;
  local_6f8 = (byte *)((ulong)&local_390 | 4);
  local_6e0 = &local_380;
  local_578 = (long **)((ulong)&local_390 | 1);
  local_6e8 = (byte *)((ulong)&local_390 | 2);
  local_6f0 = (byte *)((ulong)&local_390 | 3);
  local_700 = (byte *)((ulong)&local_390 | 5);
  local_708 = (byte *)((ulong)&local_390 | 6);
  local_710 = (byte *)((ulong)&local_390 | 7);
  local_718 = (long **)(auStack_388 + 1);
  local_720 = auStack_388 + 2;
  local_728 = auStack_388 + 3;
  local_730 = auStack_388 + 4;
  local_738 = auStack_388 + 5;
  local_740 = auStack_388 + 6;
  local_748 = auStack_388 + 7;
  local_4d8 = (long **)((ulong)local_3d8 | 1);
  local_8d0 = (long **)((ulong)local_3d8 | 2);
  local_8d8 = (long **)((ulong)local_3d8 | 3);
  local_8e0 = (long **)((ulong)local_3d8 | 4);
  local_8e8 = (long *)((ulong)local_3d8 | 5);
  local_8f0 = (undefined *)((ulong)local_3d8 | 6);
  local_8f8 = (long **)((ulong)local_3d8 | 7);
  local_900 = local_3d8 + 8;
  local_908 = (long **)(local_3d8 + 9);
  puStack_910 = &uStack_3ce;
  local_918 = &uStack_3cd;
  puStack_920 = &uStack_3cc;
  local_928 = &uStack_3cb;
  local_930 = &uStack_3ca;
  local_938 = &uStack_3c9;
  local_940 = &local_3c8;
  local_5e0 = (long **)((ulong)local_3f0 | 1);
  local_570 = (long **)((ulong)&local_2e0 | 1);
  local_580 = (ulong)&local_1a0 | 1;
  local_818 = auStack_180 + 1;
  local_768 = (long **)&local_350;
  local_560 = (long **)((ulong)local_360 | 1);
  local_678 = 0x7f1de0ac;
  if (0x4d < param_2) {
    local_678 = 0x6dd51d2e;
  }
  local_8b0 = (long)&uStack_2d7 + 7;
  local_880 = &local_1bc;
  local_588 = (long **)((ulong)puVar91 | 1);
  local_830 = (long **)((ulong)&local_1a0 | 8);
  local_674 = 0x5e1e9802;
  if (param_2 != 0x4e) {
    local_674 = uVar58;
  }
  local_558 = &bStack_2d8;
  local_470 = param_1;
  local_4b8 = (int *)FUN_SharedStorageGet(0x173cd0);
  local_518 = (ulong)local_420 | 1;
  local_510 = (long **)((ulong)&local_2f8 | 1);
  local_528 = (long **)((ulong)local_438 | 1);
  local_520 = (ulong)local_408 | 1;
  local_550 = (long **)((ulong)local_320 | 1);
  local_5e8 = &local_310;
  local_828 = (undefined8 *)&local_190;
  local_888 = (undefined8 *)FUN_SharedStorageGet(0x173c70);
  local_680 = ~(ulong)local_320;
  local_970 = (undefined8 *)((ulong)&local_1a0 | 2);
  local_968 = (long **)&uStack_2d7;
  local_860 = (long **)(local_3b0 + 1);
  local_868 = &uStack_3a3;
  puStack_870 = (ushort *)auStack_3a1;
  local_878 = (long **)auStack_39f;
  local_460 = 0;
  pplStack_838 = (long **)0x3d8bbca9d335d3d0;
  local_840 = (long *)0x86ec122cb93c35b7;
  uStack_848 = 0x1de97aa0e83267c8;
  local_850 = 0x23a3e7168552c6c5;
  lStack_8b8 = -1;
  local_8c0 = 1;
  pplVar82 = (long **)&local_1a0;
  uVar58 = 0x1d8474b2;
LAB_0012ed04:
  uVar86 = uVar58;
  pplVar100 = pplVar82;
  plVar95 = (long *)0x100000001b3;
  uVar44 = (uint)pplVar100;
  pplVar82 = (long **)((ulong)pplVar100 & 0xffffffff);
  if ((int)uVar86 < -0x24d5342) {
    if ((int)uVar86 < -0x3f57aa05) {
      if ((int)uVar86 < -0x5a7dbf7f) {
        if ((int)uVar86 < -0x6e8fbbd6) {
          if ((int)uVar86 < -0x77b39518) {
            if (-0x7debab13 < (int)uVar86) {
              uVar58 = local_5ac;
              if ((uVar86 != 0x821454ee) && (uVar58 = local_660, uVar86 != 0x86a19ad9)) {
                if (uVar86 == 0x881a3bf6) {
                  pplVar100 = *(long ***)(local_470 + 8);
                  uVar112 = *(uint *)(pplVar100 + 2);
                  uVar96 = *(uint *)((long)pplVar100 + 0x14);
                  plVar48 = pplVar100[1];
                  uVar115 = *(uint *)(pplVar100 + 2);
                  uVar86 = *(uint *)((long)plVar48 + (ulong)uVar96);
                  *(uint *)((long)pplVar100 + 0x14) = uVar96 + 4;
                  uVar111 = *(uint *)((long)plVar48 + (ulong)(uVar96 + 4));
                  *(uint *)((long)pplVar100 + 0x14) = uVar96 + 8;
                  uVar58 = uVar96 + 0x20;
                  uVar86 = uVar86 ^ uVar112 ^ 0xffffffff;
                  uVar111 = uVar111 ^ uVar112 ^ 0xffffffff;
                  uVar113 = *(uint *)((long)plVar48 + (ulong)(uVar96 + 8)) ^ uVar112 ^ 0xffffffff;
                  uVar94 = 0;
                  if (uVar112 != 0) {
                    uVar94 = uVar86 / uVar112;
                  }
                  *(uint *)((long)pplVar100 + 0x14) = uVar96 + 0xc;
                  uVar101 = *(uint *)((long)plVar48 + (ulong)(uVar96 + 0xc));
                  *(uint *)((long)pplVar100 + 0x14) = uVar96 + 0x10;
                  uVar85 = *(uint *)((long)plVar48 + (ulong)(uVar96 + 0x10));
                  *(uint *)((long)pplVar100 + 0x14) = uVar96 + 0x14;
                  uVar22 = *(uint *)((long)plVar48 + (ulong)(uVar96 + 0x14));
                  *(uint *)((long)pplVar100 + 0x14) = uVar96 + 0x18;
                  uVar101 = uVar101 ^ uVar112 ^ 0xffffffff;
                  uVar20 = *(uint *)((long)plVar48 + (ulong)(uVar96 + 0x18));
                  *(uint *)((long)pplVar100 + 0x14) = uVar96 + 0x1c;
                  uVar85 = uVar85 ^ uVar112 ^ 0xffffffff;
                  uVar7 = *(uint *)((long)plVar48 + (ulong)(uVar96 + 0x1c));
                  *(uint *)((long)pplVar100 + 0x14) = uVar58;
                  plVar39 = *(long **)((long)plVar48 + (ulong)uVar58);
                  uVar22 = uVar22 ^ uVar112 ^ 0xffffffff;
                  uVar18 = 0;
                  if (uVar112 != 0) {
                    uVar18 = uVar113 / uVar112;
                  }
                  uVar7 = uVar7 ^ uVar112 ^ 0xffffffff;
                  uVar87 = ((ulong)uVar96 & 8 | (ulong)((uVar96 & 8) * 2 + (uVar58 & 0xfffffff7))) ^
                           8;
                  iVar31 = (int)uVar87;
                  *(int *)((long)pplVar100 + 0x14) = iVar31;
                  uVar9 = *(uint *)((long)plVar48 + uVar87);
                  uVar58 = iVar31 + 4;
                  *(uint *)((long)pplVar100 + 0x14) = uVar58;
                  sVar17 = *(short *)((long)plVar48 + (ulong)uVar58);
                  unaff_x27 = (long **)(long)sVar17;
                  uVar19 = 0;
                  if (uVar112 != 0) {
                    uVar19 = uVar111 / uVar112;
                  }
                  uVar113 = uVar113 - uVar18 * uVar112;
                  iVar31 = ((uVar58 ^ 0xffffffff) & 0xfffffffd) + (uVar96 & 2) + (uVar58 * 2 | 4);
                  uVar9 = uVar9 ^ uVar112 ^ 0xffffffff;
                  *(uint *)((long)pplVar100 + 0x14) = iVar31 + 1U;
                  uVar58 = *(uint *)((long)plVar48 + (ulong)(iVar31 + 1U));
                  *(uint *)((long)pplVar100 + 0x14) = iVar31 + 5U;
                  uVar96 = *(uint *)((long)pplVar100[1] + (ulong)(iVar31 + 5U));
                  *(int *)((long)pplVar100 + 0x14) = iVar31 + 9;
                  uVar58 = uVar58 ^ uVar112 ^ 0xffffffff;
                  *(undefined8 *)((long)pplVar100[1] + (ulong)uVar113) = 0xffffffffffffffff;
                  uVar18 = 0;
                  if (uVar112 != 0) {
                    uVar18 = uVar7 / uVar112;
                  }
                  uVar96 = uVar96 ^ uVar115 ^ 0xffffffff;
                  uVar111 = uVar111 - uVar19 * uVar112;
                  local_750 = (byte *)CONCAT44(local_750._4_4_,uVar113);
                  *(undefined4 *)((long)pplVar100[1] + (ulong)uVar111) = 0xffffffff;
                  local_758 = (long **)CONCAT44(local_758._4_4_,uVar111);
                  uVar111 = 0;
                  if (uVar112 != 0) {
                    uVar111 = uVar101 / uVar112;
                  }
                  local_688 = CONCAT44(local_688._4_4_,uVar7 - uVar18 * uVar112);
                  plVar48 = pplVar100[1];
                  iVar31 = (int)*(undefined8 *)((long)plVar48 + (ulong)(uVar86 - uVar94 * uVar112));
                  uVar86 = 0;
                  if (uVar112 != 0) {
                    uVar86 = uVar85 / uVar112;
                  }
                  uVar113 = 0;
                  if (uVar112 != 0) {
                    uVar113 = uVar22 / uVar112;
                  }
                  uVar94 = 0;
                  if (uVar112 != 0) {
                    uVar94 = uVar9 / uVar112;
                  }
                  uVar7 = 0;
                  if (uVar112 != 0) {
                    uVar7 = uVar58 / uVar112;
                  }
                  uVar49 = *(undefined8 *)((long)plVar48 + (ulong)(uVar22 - uVar113 * uVar112));
                  local_6d0 = (byte *)CONCAT44(local_6d0._4_4_,uVar9 - uVar94 * uVar112);
                  uVar113 = 0;
                  if (uVar115 != 0) {
                    uVar113 = uVar96 / uVar115;
                  }
                  uVar58 = uVar58 - uVar7 * uVar112;
                  unaff_x24 = (long **)(ulong)uVar58;
                  local_568 = CONCAT44(local_568._4_4_,
                                       *(undefined4 *)
                                        ((long)plVar48 + (ulong)(uVar101 - uVar111 * uVar112)));
                  uVar96 = uVar96 - uVar113 * uVar115;
                  local_464 = uVar44;
                  uVar87 = syscall(0x3e,(long)iVar31,
                                   *(undefined8 *)
                                    ((long)plVar48 + (ulong)(uVar85 - uVar86 * uVar112)),0);
                  iVar32 = (int)sVar17;
                  if (uVar87 < 0xfffffffffffff001) {
                    if (-1 < (int)uVar87) {
                      uVar87 = syscall(0x3e,(long)iVar31,0,1);
                      local_890 = (long **)CONCAT44(local_890._4_4_,iVar32);
                      local_898 = CONCAT44(local_898._4_4_,uVar58);
                      local_8a0 = CONCAT44(local_8a0._4_4_,uVar96);
                      if (0xfffffffffffff000 < uVar87) {
                        iVar32 = (int)uVar87;
                        uVar87 = 0xffffffffffffffff;
                        *local_4b8 = -iVar32;
                      }
                      uVar20 = uVar20 ^ uVar112 ^ 0xffffffff;
                      uVar58 = 0;
                      if (uVar112 != 0) {
                        uVar58 = uVar20 / uVar112;
                      }
                      local_508 = (undefined *)(ulong)uVar58;
                      local_4b0 = (long **)0x0;
                      unaff_x27 = (long **)0x0;
                      bVar28 = false;
                      local_4f0 = (long *)((ulong)local_4f0 & 0xffffffff00000000);
                      _local_1a0 = (long *)&DAT_0016f6a0;
                      uStack_198 = (long **)CONCAT44(uStack_198._4_4_,iVar31);
                      local_190 = (byte)uVar87;
                      uStack_18f = (undefined)(uVar87 >> 8);
                      uStack_18e = (undefined)(uVar87 >> 0x10);
                      uStack_18d = (undefined)(uVar87 >> 0x18);
                      bStack_18c = (byte)(uVar87 >> 0x20);
                      uStack_18b = (undefined)(uVar87 >> 0x28);
                      uStack_18a = (undefined)(uVar87 >> 0x30);
                      uStack_189 = (undefined)(uVar87 >> 0x38);
                      uStack_188 = (undefined)uVar49;
                      uStack_187 = (undefined)((ulong)uVar49 >> 8);
                      uStack_186 = (undefined)((ulong)uVar49 >> 0x10);
                      uStack_185 = (undefined)((ulong)uVar49 >> 0x18);
                      uStack_184 = (undefined)((ulong)uVar49 >> 0x20);
                      uStack_183 = (undefined)((ulong)uVar49 >> 0x28);
                      uStack_182 = (undefined)((ulong)uVar49 >> 0x30);
                      uStack_181 = (undefined)((ulong)uVar49 >> 0x38);
                      iVar31 = uVar20 - uVar58 * uVar112;
                      local_8a8 = (undefined *)CONCAT44(local_8a8._4_4_,iVar31);
                      uVar87 = extraout_x11;
                      uVar58 = 0x1d8474b2;
                      local_858 = plVar39;
                      local_820 = pplVar100;
                      iVar32 = 0x16f6a0;
LAB_0013a170:
                      iVar59 = iVar32;
                      iVar45 = iVar31;
                      uVar86 = uVar58;
                      uVar81 = uVar87 & 0xffffffff;
                      uVar33 = (undefined4)uVar87;
                      uVar87 = uVar81;
                      iVar31 = iVar45;
                      iVar32 = iVar59;
                      if ((int)uVar86 < -0x963ec2b) {
                        if ((int)uVar86 < -0x4f5dc7eb) {
                          if ((int)uVar86 < -0x6541ff6e) {
                            if (uVar86 == 0x86a19ad9) {
                              uVar58 = 0xf69c13d5;
                              if ((uint)local_540 != (uint)local_568 || (uint)local_4f0 == 0) {
                                uVar58 = 0x15bfc039;
                              }
                              goto LAB_0013a170;
                            }
                            if (uVar86 == 0x8b3e0439) {
                              plVar95 = (long *)(ulong)CONCAT22(uStack_2d6,
                                                                CONCAT11(uStack_2d7,bStack_2d8));
                              lVar80 = (*(code *)local_2e0[7])(&local_2e0);
                              lVar91 = (*(code *)local_2e0[6])(&local_2e0);
                              uVar96 = (uint)unaff_x24;
                              uVar58 = 0xe45080e2;
                              if ((ulong)(long)(int)uVar96 <= (ulong)(lVar80 - lVar91)) {
                                uVar58 = 0x44ad530;
                              }
                              goto LAB_0013a170;
                            }
                            uVar58 = 0x21d23544;
                            iVar32 = iVar45;
                            if (uVar86 == 0x8cb077c2) goto LAB_0013a170;
                          }
                          else if ((int)uVar86 < -0x5a7dbf7f) {
                            if (uVar86 == 0x9abe0092) {
                              (*(code *)local_2e0[2])(local_320,&local_2e0,8);
                              uVar58 = (uint)local_320[0];
                              uVar58 = ((((uVar58 ^ 0xffffffff) & 0xfffffffe) + (uVar58 ^ 1)) -
                                       uVar58) + ((uint)local_320[0] * 3 - (uVar58 | 1)) + 3;
                              pplVar82 = (long **)(ulong)(local_320[0] >> 1);
                              if ((~(uint)local_320[0] | 1) + (uVar58 & 0xff) != 0) {
                                pplVar82 = (long **)pcStack_318;
                              }
                              uVar86 = -(~(uint)local_320[0] | 1);
                              if (pplVar82 == (long **)0x0) {
                                uVar47 = 0;
                                uVar81 = 0;
                              }
                              else {
                                pplVar100 = local_550;
                                if (uVar86 != (uVar58 & 0xff)) {
                                  pplVar100 = local_310;
                                }
                                plVar48 = *pplVar100;
                                uVar81 = (long)plVar48 << 1;
                                uVar81 = ((((ulong)plVar48 >> 8) << 9 | 2) -
                                         ((ulong)plVar48 | 0xffffffffffffff00)) +
                                         ~(ulong)plVar48 * -3 + ((ulong)~(uint)uVar81 & 0x1fe) +
                                         (uVar81 ^ 0xfffffffffffffe00) +
                                         (uVar81 & 0xfffffffffffffe00 ^ 0xfffffffffffffe00) +
                                         ((ulong)(uint)((int)~(ulong)plVar48 << 1) |
                                         0xfffffffffffffe00) + 0xff;
                                uVar47 = ((~((ulong)plVar48 & 0xff) * -3 -
                                          ((long)plVar48 + ((ulong)plVar48 | 0xff))) +
                                         ((ulong)plVar48 & 0xffffffffffffff00) +
                                         ((ulong)plVar48 ^ 0xff) + ((ulong)plVar48 & 0xff ^ 0xff) +
                                         ((ulong)plVar48 | 0xffffffffffffff00)) - 2;
                              }
                              if (uVar86 != (uVar58 & 0xff)) {
                                free(local_310);
                              }
                              unaff_x24 = (long **)(uVar81 * 3 + uVar47 * 2 + (uVar81 & uVar47) * -3
                                                    + (-(uVar81 | uVar47) - (uVar81 ^ uVar47)) +
                                                   (uVar47 & (uVar81 ^ 0xffffffffffffffff)));
                              uVar58 = 0x72126bb7;
                              if (pplVar82 != (long **)0x0) {
                                uVar58 = 0xc1279b5e;
                              }
                              goto LAB_0013a170;
                            }
                            if (uVar86 == 0xa2e4c1d9) goto LAB_0013a65c;
                          }
                          else {
                            if (uVar86 == 0xa5824081) {
                              local_498 = (long **)CONCAT44(local_498._4_4_,2);
LAB_0013aa30:
                              uVar58 = 0xf5a4b13e;
                              goto LAB_0013a170;
                            }
                            if (uVar86 == 0xa9a08da4) {
                              local_4b0 = (long **)0x0;
                              unaff_x27 = (long **)0x0;
                              bStack_2d8 = 0;
                              uStack_2d7 = 0;
                              uStack_2d6 = 0;
                              iStack_2d4 = 0;
                              uVar58 = (uint)local_360[0] << 1;
                              local_2e0 = (long *)&DAT_0016f650;
                              local_2c8 = (long **)(ulong)(local_360[0] >> 1);
                              pplVar82 = local_560;
                              if (((local_360[0] & 0xfe) + (uint)local_360[0] + (uVar58 & 0xfc) +
                                   (uVar58 ^ 0xfc) + ((uVar58 ^ 0xffffffff) & 2) + 4 & 0xff) !=
                                  (-(~(uint)local_360[0] << 1 | 2) & 0xfe)) {
                                local_2c8 = (long **)CONCAT26(uStack_352,auStack_358);
                                pplVar82 = (long **)local_350;
                              }
                              bStack_2d0 = (byte)pplVar82;
                              uStack_2cf = (undefined)((ulong)pplVar82 >> 8);
                              uStack_2ce = (undefined2)((ulong)pplVar82 >> 0x10);
                              iStack_2cc = (int)((ulong)pplVar82 >> 0x20);
                              uVar58 = 0xb6925cf2;
                              goto LAB_0013a170;
                            }
                          }
                        }
                        else if ((int)uVar86 < -0x3b8df754) {
                          if ((int)uVar86 < -0x414c03d4) {
                            if (uVar86 == 0xb0a23815) {
LAB_0013a65c:
                              local_490 = (long **)CONCAT44(local_490._4_4_,1);
LAB_0013a664:
                              uVar58 = 0xc47208ac;
                              goto LAB_0013a170;
                            }
                            if (uVar86 == 0xb6925cf2) {
                              lVar80 = (*(code *)local_2e0[6])(&local_2e0);
                              lVar91 = (*(code *)local_2e0[7])(&local_2e0);
                              uVar58 = 0x64db2d42;
                              if (lVar80 != lVar91) {
                                uVar58 = 0x9abe0092;
                              }
                              goto LAB_0013a170;
                            }
                          }
                          else {
                            if (uVar86 == 0xbeb3fc2c) {
                              local_4d0 = (long **)CONCAT44(local_4d0._4_4_,1);
                              uVar58 = 0xca15a97b;
                              goto LAB_0013a170;
                            }
                            if (uVar86 == 0xc1279b5e) {
                              uVar58 = 0x72126bb7;
                              if (3 < (long)unaff_x24) {
                                uVar58 = 0x4aa2c3b0;
                              }
                              goto LAB_0013a170;
                            }
                          }
                        }
                        else if ((int)uVar86 < -0x1baf7f1e) {
                          uVar58 = 0x8cb077c2;
                          iVar31 = (uint)local_490;
                          if (uVar86 == 0xc47208ac) goto LAB_0013a170;
                          if (uVar86 == 0xca15a97b) goto LAB_0013cf54;
                        }
                        else {
                          if (uVar86 == 0xe45080e2) {
                            uVar58 = 0x8cb077c2;
                            iVar31 = 1;
                            goto LAB_0013a170;
                          }
                          uVar87 = (ulong)local_498 & 0xffffffff;
                          uVar58 = 0x7088655;
                          if (uVar86 == 0xf5a4b13e) goto LAB_0013a170;
                        }
                      }
                      else {
                        uVar58 = (uint)plVar95;
                        if ((int)uVar86 < 0x21d23544) {
                          if ((int)uVar86 < 0x44ad530) {
                            if (uVar86 == 0xf69c13d5) {
                              uVar58 = 0x598043a6;
                              if ((int)unaff_x27 != 0) {
                                uVar58 = 0xb0a23815;
                              }
                              goto LAB_0013a170;
                            }
                            if (uVar86 == 0xfc90aaaa) {
                              uVar87 = 1;
                              uVar58 = 0x7088655;
                              goto LAB_0013a170;
                            }
                            if (uVar86 == 0xfdb2acbe) {
                              local_490 = (long **)((ulong)local_490._4_4_ << 0x20);
                              goto LAB_0013a664;
                            }
                          }
                          else {
                            if ((int)uVar86 < 0x76edb2e) {
                              if (uVar86 == 0x44ad530) {
                                (*(code *)local_2e0[2])(local_320,&local_2e0,4);
                                uVar58 = ~(uint)local_320[0];
                                uVar44 = (uint)local_320[0];
                                uVar86 = uVar58 | 1;
                                uVar58 = uVar44 + uVar58 + (uVar44 & 0xfe ^ 0xfffffffe) +
                                         ((uint)local_320[0] << 1 | 2) +
                                         (uVar44 & 0xfe) + (uVar44 ^ 0xfffffffe) + 4;
                                pplVar82 = (long **)(ulong)(local_320[0] >> 1);
                                if (uVar86 + (uVar58 & 0xff) != 0) {
                                  pplVar82 = (long **)pcStack_318;
                                }
                                uVar86 = -uVar86;
                                if (pplVar82 == (long **)0x0) {
                                  uVar111 = 0;
                                  local_4f0 = (long *)((ulong)local_4f0._4_4_ << 0x20);
                                  uVar44 = 0;
                                }
                                else {
                                  pplVar100 = local_550;
                                  if (uVar86 != (uVar58 & 0xff)) {
                                    pplVar100 = local_310;
                                  }
                                  uVar111 = *(uint *)pplVar100;
                                  uVar44 = uVar111 << 1;
                                  uVar44 = ((uVar111 | 0xffffff00) * 3 - uVar111) +
                                           (uVar44 ^ 0x1fe) + ((uVar44 ^ 0xffffffff) & 0xfffffe00) +
                                           (uVar44 | 0x1fe) + 0x104;
                                  uVar111 = ~uVar111 +
                                            (uVar111 | 0xff) + (uVar111 | 0xffffff00) +
                                            (uVar111 & 0xff) + 2;
                                  local_4f0 = (long *)CONCAT44(local_4f0._4_4_,1);
                                }
                                if (uVar86 != (uVar58 & 0xff)) {
                                  free(local_310);
                                }
                                uVar58 = 0xa2e4c1d9;
                                if (pplVar82 != (long **)0x0) {
                                  uVar58 = 0x86a19ad9;
                                }
                                local_540 = (long **)CONCAT44(local_540._4_4_,
                                                              uVar111 + (uVar44 & (uVar111 ^
                                                                                  0xffffffff)) * 2 +
                                                              (uVar111 & (uVar44 ^ 0xffffffff)) +
                                                              (uVar44 | uVar111 ^ 0xffffffff) +
                                                              (uVar111 | uVar44 ^ 0xffffffff) + 2);
                              }
                              else {
                                if (uVar86 != 0x7088655) goto LAB_0013a6e8;
                                local_4d0 = (long **)CONCAT44(local_4d0._4_4_,uVar33);
                                uVar58 = 0xca15a97b;
                                if ((byte)((((local_360[0] | 1) + local_360[0] * -2 +
                                             ~local_360[0] * -3 + (local_360[0] & 0xfe ^ 0xfe)) -
                                           (local_360[0] & 0xfe)) +
                                          (local_360[0] ^ 1) + (local_360[0] | 0xfe)) !=
                                    (byte)-(~local_360[0] | 1)) {
                                  free(local_350);
                                  local_4d0 = (long **)CONCAT44(local_4d0._4_4_,uVar33);
                                  uVar58 = 0xca15a97b;
                                }
                              }
                              goto LAB_0013a170;
                            }
                            if (uVar86 == 0x76edb2e) goto LAB_0013a65c;
                            if (uVar86 == 0x15bfc039) {
                              iVar45 = ((uVar96 & (uVar58 ^ 0xffffffff)) - uVar58) +
                                       (-((uVar96 | uVar58) * -3 - (uVar96 & uVar58)) - uVar96) +
                                       (uVar96 ^ uVar58 ^ 0xffffffff) +
                                       (uVar58 | uVar96 ^ 0xffffffff) + 2;
                              uVar58 = 0x76edb2e;
                              if ((long **)(long)iVar45 <= local_2c8) {
                                bStack_2d8 = (byte)iVar45;
                                uStack_2d7 = (undefined)((uint)iVar45 >> 8);
                                uStack_2d6 = (undefined2)((uint)iVar45 >> 0x10);
                                iStack_2d4 = iVar45 >> 0x1f;
                                uVar58 = 0xfdb2acbe;
                              }
                              goto LAB_0013a170;
                            }
                          }
                        }
                        else {
                          if ((int)uVar86 < 0x598043a6) {
                            if (uVar86 == 0x21d23544) {
                              bVar29 = iVar59 == 0;
                              local_498 = (long **)CONCAT44(local_498._4_4_,1);
                              uVar58 = 0xb6925cf2;
                              uVar86 = 0xf5a4b13e;
LAB_0013ada4:
                              if (!bVar29) {
                                uVar58 = uVar86;
                              }
                            }
                            else {
                              if (uVar86 != 0x4aa2c3b0) {
                                if (uVar86 == 0x54de58ef) {
                                  local_498 = (long **)((ulong)local_498._4_4_ << 0x20);
                                  local_4f8 = (ulong)local_4b0 | (long)local_530 << 8;
                                  local_4fc = (uint)local_538;
                                  goto LAB_0013aa30;
                                }
                                goto LAB_0013a6e8;
                              }
                              uVar58 = 0x72126bb7;
                              if ((long)unaff_x24 < 0x80000000) {
                                uVar58 = 0x8b3e0439;
                              }
                            }
                            goto LAB_0013a170;
                          }
                          if (0x6dd51d2d < (int)uVar86) {
                            if (uVar86 == 0x6dd51d2e) {
                              if (bVar28) {
                                local_508 = (undefined *)(*(code *)_local_1a0[6])(&local_1a0);
                                uVar81 = (long)local_548 << 0x20;
                                (*(code *)_local_1a0[2])
                                          (local_360,&local_1a0,
                                           (long)(((long)local_548 << 0x21 | 0xffffffd000000000U) +
                                                  ((long)local_548 << 0x21 & 0xffffffd000000000U) +
                                                  uVar81 + (uVar81 & 0xffffffe800000000) * -3 +
                                                  (uVar81 ^ 0x17ffffffff) +
                                                  (uVar81 & 0xffffffe800000000 ^ 0xffffffe800000000)
                                                  + (uVar81 | 0x17ffffffff) +
                                                  (uVar81 ^ 0xffffffffffffffff | 0xffffffe800000000)
                                                 + 3) >> 0x20);
                                bVar28 = true;
                                uVar58 = (uint)local_360[0];
                                uVar81 = (ulong)(local_360[0] >> 1);
                                if ((uVar58 | 0xfffffffe) +
                                    (((uint)local_360[0] << 1 | 3) +
                                     ((local_360[0] ^ 0xffffffff) & 0xfe) + (uVar58 ^ 0xfe) +
                                     ((uVar58 ^ 0xffffffff) & 1) + 2 & 0xff) != 0) {
                                  uVar81 = CONCAT26(uStack_352,auStack_358);
                                }
                                uVar58 = 0xfc90aaaa;
                                bVar29 = uVar81 == 0;
                                uVar86 = 0xa9a08da4;
                                goto LAB_0013ada4;
                              }
                              goto LAB_001424a8;
                            }
                            if (uVar86 != 0x72126bb7) goto LAB_0013a6e8;
                            uVar58 = 0x21d23544;
                            iVar32 = 1;
                            goto LAB_0013a170;
                          }
                          if (uVar86 == 0x598043a6) {
                            unaff_x27 = (long **)0x1;
                            local_538 = (undefined *)CONCAT44(local_538._4_4_,uVar96);
                            uVar86 = (uint)local_508;
                            uVar81 = (ulong)(~uVar86 * -3 + (uVar86 & uVar58) * -2 + uVar58 +
                                             ((uVar58 & (uVar86 ^ 0xffffffff)) +
                                             (uVar86 | uVar58 ^ 0xffffffff) +
                                             (uVar58 | uVar86 ^ 0xffffffff)) * 2 + 1);
                            local_4b0 = (long **)(uVar81 & 0xff);
                            local_530 = (long **)((long)(uVar81 << 0x20) >> 0x28);
                            uVar58 = 0x15bfc039;
                            goto LAB_0013a170;
                          }
                          if (uVar86 == 0x64db2d42) {
                            uVar58 = 0xa5824081;
                            if ((int)unaff_x27 != 0) {
                              uVar58 = 0x54de58ef;
                            }
                            goto LAB_0013a170;
                          }
                        }
                      }
LAB_0013a6e8:
                      (*(code *)_local_1a0[2])(local_320,&local_1a0,8);
                      uVar44 = -(~(uint)local_320[0] * 2 | 2);
                      uVar58 = ~(uint)local_320[0] * 3 + ((uint)local_320[0] << 1 | 0xfffffffc) +
                               (local_320[0] | 1) * 7 + ((uint)local_320[0] << 1 ^ 0xfffffffc) + 6;
                      pplVar82 = (long **)(ulong)(local_320[0] >> 1);
                      if ((uVar44 & 0xfe) != (uVar58 & 0xff)) {
                        pplVar82 = (long **)pcStack_318;
                      }
                      if (pplVar82 == (long **)0x0) {
                        uVar47 = 0;
                        uVar87 = 0;
                        if ((uVar58 & 0xff) != (uVar44 & 0xff)) goto LAB_0013a7d8;
                      }
                      else {
                        pplVar100 = local_550;
                        if ((uVar58 & 0xff) != (uVar44 & 0xff)) {
                          pplVar100 = local_310;
                        }
                        plVar48 = *pplVar100;
                        uVar87 = (((ulong)plVar48 | 0xffffffffffffff00) - ((ulong)plVar48 & 0xff)) +
                                 ((ulong)plVar48 ^ 0xffffffffffffff00) + ((ulong)plVar48 ^ 0xff) +
                                 ((ulong)plVar48 | 0xff) + 2;
                        uVar47 = ((((long)plVar48 * 3 - ((ulong)plVar48 | 0xff)) +
                                  ((ulong)plVar48 & 0xffffffffffffff00 ^ 0xffffffffffffff00)) -
                                 ((ulong)plVar48 & 0xffffffffffffff00)) +
                                 ((ulong)plVar48 ^ 0xff) + ((ulong)plVar48 & 0xff ^ 0xff) +
                                 (~(ulong)plVar48 | 0xff) + 2;
                        if ((uVar58 & 0xff) != (uVar44 & 0xff)) {
LAB_0013a7d8:
                          free(local_310);
                        }
                      }
                      local_548 = (undefined *)
                                  ((uVar87 & uVar47) * 4 + ~uVar47 * 2 + ~(uVar87 | uVar47) +
                                   (uVar87 & (uVar47 ^ 0xffffffffffffffff)) * 2 +
                                   (uVar87 ^ uVar47) * 2 +
                                   (uVar47 & (uVar87 ^ 0xffffffffffffffff)) * 2 +
                                   (uVar47 | uVar87 ^ 0xffffffffffffffff) * 2 + 5);
                      if (pplVar82 == (long **)0x0) {
                        uVar58 = uVar86 << 1;
                        uVar58 = (uVar58 ^ 0xbda0f10b) +
                                 ((uVar58 ^ 0xffffffff) & 0x425f0ef4) + (uVar58 ^ 0xbda0f10a) +
                                 (uVar58 ^ 0x425f0ef4) + (uVar58 & 0xbda0f10a) + uVar86 + 0xa12f877d
                        ;
                      }
                      else {
                        uVar58 = (uVar86 ^ 0xafaf5783) + 0xa0a150fa +
                                 ((uVar86 ^ 0xffffffff) & 0x5050a87c) + (uVar86 & 0x2faf5783) * 2 +
                                 (uVar86 | 0xafaf5783);
                      }
                      bVar28 = pplVar82 != (long **)0x0;
                      local_4f8 = 0xffffffffffffffff;
                      local_4fc = 0xffffffff;
                      uVar87 = uVar81;
                      iVar31 = iVar45;
                      iVar32 = iVar59;
                      goto LAB_0013a170;
                    }
                  }
                  else {
                    *local_4b8 = -(int)uVar87;
                  }
                  uVar87 = 0xcbf29ce484222325;
                  if (iVar32 != 0) {
                    lVar80 = 0;
                    iVar31 = 0;
                    do {
                      lVar91 = lVar80 + ((ulong)local_6d0 & 0xffffffff);
                      iVar31 = iVar31 + 1;
                      lVar80 = (long)iVar31;
                      uVar87 = uVar87 * 0x100000001b3 ^ (long)*(char *)((long)pplVar100[1] + lVar91)
                      ;
                    } while (iVar32 != iVar31);
                  }
                  pplVar82 = (long **)(ulong)local_464;
                  uVar81 = (ulong)*(int *)((long)pplVar100[1] + (local_688 & 0xffffffff));
                  if ((long *)(((uVar87 | uVar81) + ~uVar81) -
                              (uVar87 | uVar81 ^ 0xffffffffffffffff)) != plVar39) {
                    uVar58 = uVar96;
                  }
                  puVar91 = (undefined8 *)(ulong)uVar58;
                  goto LAB_0012ecfc;
                }
                goto LAB_0013267c;
              }
              goto LAB_0012ed04;
            }
            if (uVar86 == 0x803b5d53) {
              lVar80 = *(long *)(local_470 + 8);
              uVar44 = *(uint *)(lVar80 + 0x10);
              uVar86 = *(uint *)(lVar80 + 0x14);
              lVar91 = *(long *)(lVar80 + 8);
              uVar58 = uVar86 + 4;
              iVar31 = (uVar58 ^ 8) + uVar58 * 2 + (uVar86 * -2 - 10 | 0x10);
              uVar94 = *(uint *)(lVar91 + (ulong)uVar86);
              *(uint *)(lVar80 + 0x14) = uVar58;
              uVar86 = iVar31 + 2;
              uVar111 = iVar31 + 6;
              uVar87 = *(ulong *)(lVar91 + (ulong)uVar58);
              *(uint *)(lVar80 + 0x14) = uVar86;
              uVar112 = *(uint *)(lVar91 + (ulong)uVar86);
              *(uint *)(lVar80 + 0x14) = uVar111;
              uVar58 = ((uVar86 & 2 | ((uVar86 & 2) >> 1) << 2) - (uVar111 | 2)) + (uVar111 * 2 ^ 4)
              ;
              sVar17 = *(short *)(lVar91 + (ulong)uVar111);
              *(uint *)(lVar80 + 0x14) = uVar58;
              uVar96 = *(uint *)(lVar91 + (ulong)uVar58);
              *(uint *)(lVar80 + 0x14) = uVar58 + 4;
              uVar115 = *(uint *)(lVar91 + (ulong)(uVar58 + 4));
              *(uint *)(lVar80 + 0x14) = uVar58 + 8;
              uVar86 = *(uint *)(lVar91 + (ulong)(uVar58 + 8));
              *(uint *)(lVar80 + 0x14) = uVar58 + 0xc;
              uVar111 = *(uint *)(lVar91 + (ulong)(uVar58 + 0xc));
              *(uint *)(lVar80 + 0x14) = uVar58 + 0x10;
              uVar113 = *(uint *)(lVar91 + (ulong)(uVar58 + 0x10));
              uVar86 = uVar86 ^ uVar44 ^ 0xffffffff;
              *(uint *)(lVar80 + 0x14) = uVar58 + 0x14;
              uVar58 = 0;
              if (uVar44 != 0) {
                uVar58 = uVar86 / uVar44;
              }
              uVar111 = uVar111 ^ uVar44 ^ 0xffffffff;
              uVar113 = uVar113 ^ uVar44 ^ 0xffffffff;
              uVar101 = 0;
              if (uVar44 != 0) {
                uVar101 = uVar113 / uVar44;
              }
              uVar85 = 0;
              if (uVar44 != 0) {
                uVar85 = uVar111 / uVar44;
              }
              *(uint *)(lVar91 + (ulong)(uVar111 - uVar85 * uVar44)) =
                   (uint)*(byte *)(*(long *)(lVar91 + (ulong)(uVar113 - uVar101 * uVar44)) +
                                  (long)*(int *)(lVar91 + (ulong)(uVar86 - uVar58 * uVar44)));
              uVar81 = 0xcbf29ce484222325;
              if (sVar17 != 0) {
                uVar112 = uVar112 ^ uVar44 ^ 0xffffffff;
                lVar91 = 0;
                iVar31 = 0;
                uVar58 = 0;
                if (uVar44 != 0) {
                  uVar58 = uVar112 / uVar44;
                }
                uVar81 = 0xcbf29ce484222325;
                do {
                  pcVar42 = (char *)(*(long *)(lVar80 + 8) + (ulong)(uVar112 - uVar58 * uVar44) +
                                    lVar91);
                  iVar31 = iVar31 + 1;
                  lVar91 = (long)iVar31;
                  uVar81 = uVar81 * 0x100000001b3 ^ (long)*pcVar42;
                } while (sVar17 != iVar31);
              }
              uVar94 = uVar94 ^ uVar44 ^ 0xffffffff;
              uVar58 = 0;
              if (uVar44 != 0) {
                uVar58 = uVar94 / uVar44;
              }
              uVar47 = (ulong)*(int *)(*(long *)(lVar80 + 8) + (ulong)(uVar94 - uVar58 * uVar44));
              uVar81 = (uVar47 + ~(uVar81 & uVar47)) - (uVar47 | uVar81 ^ 0xffffffffffffffff);
LAB_001385cc:
              if (uVar81 != uVar87) {
                uVar96 = uVar115;
              }
              goto LAB_001396a8;
            }
            uVar58 = local_78c;
            if (uVar86 == 0x81703c16) goto LAB_0012ed04;
          }
          else if ((int)uVar86 < -0x74c1fbc7) {
            uVar58 = local_5f0;
            if ((uVar86 == 0x884c6ae8) || (uVar58 = local_778, uVar86 == 0x8914b5e1))
            goto LAB_0012ed04;
          }
          else {
            uVar58 = local_5c4;
            if (uVar86 == 0x8b3e0439) goto LAB_0012ed04;
            if (uVar86 == 0x8c2dfaae) {
              lVar91 = *(long *)(local_470 + 8);
              uVar111 = *(uint *)(lVar91 + 0x10);
              uVar112 = *(uint *)(lVar91 + 0x14);
              lVar80 = *(long *)(lVar91 + 8);
              uVar86 = *(uint *)(lVar80 + (ulong)uVar112);
              *(uint *)(lVar91 + 0x14) = uVar112 + 4;
              uVar58 = uVar112 + 0x1c;
              uVar96 = *(uint *)(lVar80 + (ulong)(uVar112 + 4));
              *(uint *)(lVar91 + 0x14) = uVar112 + 8;
              uVar86 = uVar86 ^ uVar111 ^ 0xffffffff;
              uVar113 = *(uint *)(lVar80 + (ulong)(uVar112 + 8));
              uVar115 = 0;
              if (uVar111 != 0) {
                uVar115 = uVar86 / uVar111;
              }
              *(uint *)(lVar91 + 0x14) = uVar112 + 0xc;
              uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
              uVar94 = *(uint *)(lVar80 + (ulong)(uVar112 + 0xc));
              *(uint *)(lVar91 + 0x14) = uVar112 + 0x10;
              iVar31 = (uVar58 ^ 0xfffffffd) + (uVar58 * 2 | 4);
              lVar54 = *(long *)(lVar80 + (ulong)(uVar112 + 0x10));
              *(uint *)(lVar91 + 0x14) = uVar112 + 0x18;
              uVar22 = *(uint *)(lVar80 + (ulong)(uVar112 + 0x18));
              *(uint *)(lVar91 + 0x14) = uVar58;
              sVar17 = *(short *)(lVar80 + (ulong)uVar58);
              uVar101 = 0;
              if (uVar111 != 0) {
                uVar101 = uVar113 / uVar111;
              }
              *(uint *)(lVar91 + 0x14) = iVar31 + 1U;
              uVar58 = *(uint *)(lVar80 + (ulong)(iVar31 + 1U));
              *(uint *)(lVar91 + 0x14) = iVar31 + 5U;
              uVar112 = *(uint *)(lVar80 + (ulong)(iVar31 + 5U));
              *(int *)(lVar91 + 0x14) = iVar31 + 9;
              plVar81 = *(std::vector **)(lVar80 + (ulong)(uVar86 - uVar115 * uVar111));
              _local_1a0 = (long *)CONCAT44(uStack_19c,
                                            *(undefined4 *)
                                             (lVar80 + (ulong)(uVar113 - uVar101 * uVar111)));
              pVVar8 = (VMInitList *)plVar81->__end_;
              local_464 = uVar44;
              for (puVar89 = (VMInitList *)plVar81->__begin_; puVar89 != pVVar8;
                  puVar89 = (VMInitList *)&puVar89->field1_0x8) {
                    /* WARNING: Load size is inaccurate */
                (***puVar89->fnTable)(&local_2e0,puVar89->fnTable,&local_1a0);
                if ((uint)local_2e0 != 0) {
                  uVar33 = 0;
                  goto LAB_0013c008;
                }
              }
              uVar33 = 1;
              local_2e0 = (long *)((ulong)local_2e0 & 0xffffffff00000000);
LAB_0013c008:
              uVar96 = uVar96 ^ uVar111 ^ 0xffffffff;
              uVar86 = 0;
              if (uVar111 != 0) {
                uVar86 = uVar96 / uVar111;
              }
              uVar87 = 0xcbf29ce484222325;
              *(undefined4 *)(*(long *)(lVar91 + 8) + (ulong)(uVar96 - uVar86 * uVar111)) = uVar33;
              lVar80 = *(long *)(lVar91 + 8);
              if (sVar17 != 0) {
                uVar86 = uVar22 ^ uVar111 ^ 0xffffffff;
                lVar91 = 0;
                iVar31 = 0;
                uVar44 = 0;
                if (uVar111 != 0) {
                  uVar44 = uVar86 / uVar111;
                }
                uVar87 = 0xcbf29ce484222325;
                do {
                  pcVar42 = (char *)(lVar80 + (ulong)(uVar86 - uVar44 * uVar111) + lVar91);
                  iVar31 = iVar31 + 1;
                  lVar91 = (long)iVar31;
                  uVar87 = uVar87 * 0x100000001b3 ^ (long)*pcVar42;
                } while (sVar17 != iVar31);
              }
              uVar94 = uVar94 ^ uVar111 ^ 0xffffffff;
LAB_0013c108:
              unaff_x27 = (long **)(ulong)uVar22;
              unaff_x24 = (long **)(ulong)uVar112;
              uVar86 = 0;
              if (uVar111 != 0) {
                uVar86 = uVar94 / uVar111;
              }
              uVar81 = (ulong)*(int *)(lVar80 + (ulong)(uVar94 - uVar86 * uVar111));
              if ((uVar87 - uVar81) + (uVar81 & (uVar87 ^ 0xffffffffffffffff)) * 2 != lVar54) {
                uVar58 = uVar112;
              }
              goto LAB_001395a8;
            }
            uVar58 = local_7f8;
            if (uVar86 == 0x8cb077c2) goto LAB_0012ed04;
          }
        }
        else {
          if ((int)uVar86 < -0x68b6174d) {
            if ((int)uVar86 < -0x6d753683) {
              if (uVar86 == 0x9170442a) {
                lVar91 = *(long *)(local_470 + 8);
                uVar111 = *(uint *)(lVar91 + 0x10);
                uVar113 = *(uint *)(lVar91 + 0x14);
                lVar80 = *(long *)(lVar91 + 8);
                uVar58 = uVar113 + 8;
                uVar86 = *(uint *)(lVar80 + (ulong)uVar113);
                *(uint *)(lVar91 + 0x14) = uVar113 + 4;
                uVar86 = uVar86 ^ uVar111 ^ 0xffffffff;
                uVar44 = *(uint *)(lVar80 + (ulong)(uVar113 + 4));
                iVar31 = (uVar58 * 2 | 0x10) + (uVar58 | 0xfffffff7) + (-uVar113 - 9 | 8);
                *(uint *)(lVar91 + 0x14) = uVar58;
                uVar113 = 0;
                if (uVar111 != 0) {
                  uVar113 = uVar86 / uVar111;
                }
                uVar87 = *(ulong *)(lVar80 + (ulong)uVar58);
                *(uint *)(lVar91 + 0x14) = iVar31 + 2U;
                uVar94 = *(uint *)(lVar80 + (ulong)(iVar31 + 2U));
                *(uint *)(lVar91 + 0x14) = iVar31 + 6U;
                sVar17 = *(short *)(lVar80 + (ulong)(iVar31 + 6U));
                unaff_x24 = (long **)(long)sVar17;
                *(uint *)(lVar91 + 0x14) = iVar31 + 8U;
                uVar58 = *(uint *)(lVar80 + (ulong)(iVar31 + 8U));
                *(uint *)(lVar91 + 0x14) = iVar31 + 0xcU;
                uVar101 = *(uint *)(lVar80 + (ulong)(iVar31 + 0xcU));
                *(uint *)(lVar91 + 0x14) = iVar31 + 0x10U;
                uVar112 = *(uint *)(lVar80 + (ulong)(iVar31 + 0x10U));
                *(uint *)(lVar91 + 0x14) = iVar31 + 0x14U;
                uVar96 = *(uint *)(lVar80 + (ulong)(iVar31 + 0x14U));
                *(uint *)(lVar91 + 0x14) = iVar31 + 0x18U;
                uVar115 = *(uint *)(lVar80 + (ulong)(iVar31 + 0x18U));
                *(int *)(lVar91 + 0x14) = iVar31 + 0x1c;
                uVar112 = uVar112 ^ uVar111 ^ 0xffffffff;
                uVar85 = 0;
                if (uVar111 != 0) {
                  uVar85 = uVar112 / uVar111;
                }
                uVar96 = uVar96 ^ uVar111 ^ 0xffffffff;
                uVar115 = uVar115 ^ uVar111 ^ 0xffffffff;
                uVar86 = *(uint *)(lVar80 + (ulong)(uVar86 - uVar113 * uVar111)) ^
                         uVar111 ^ 0xffffffff;
                uVar113 = 0;
                if (uVar111 != 0) {
                  uVar113 = uVar115 / uVar111;
                }
                uVar22 = 0;
                if (uVar111 != 0) {
                  uVar22 = uVar86 / uVar111;
                }
                uVar7 = 0;
                if (uVar111 != 0) {
                  uVar7 = uVar96 / uVar111;
                }
                lVar54 = *(long *)(lVar91 + 8);
                uVar86 = *(uint *)(lVar54 + (ulong)((uVar86 - uVar22 * uVar111) +
                                                    ((*(int *)(lVar80 + (ulong)(uVar115 -
                                                                               uVar113 * uVar111))
                                                     << 0x10) >> 0xe) + 2)) ^ uVar111 ^ 0xffffffff;
                uVar113 = 0;
                if (uVar111 != 0) {
                  uVar113 = uVar86 / uVar111;
                }
                func_0x0016a0c0(lVar54 + (ulong)(uVar86 - uVar113 * uVar111),
                                lVar54 + (ulong)(uVar96 - uVar7 * uVar111),
                                *(undefined2 *)(lVar80 + (ulong)(uVar112 - uVar85 * uVar111)));
                uVar81 = 0xcbf29ce484222325;
                if (sVar17 != 0) {
                  uVar94 = uVar94 ^ uVar111 ^ 0xffffffff;
                  lVar80 = 0;
                  iVar31 = 0;
                  uVar86 = 0;
                  if (uVar111 != 0) {
                    uVar86 = uVar94 / uVar111;
                  }
                  uVar81 = 0xcbf29ce484222325;
                  do {
                    pcVar42 = (char *)(*(long *)(lVar91 + 8) + (ulong)(uVar94 - uVar86 * uVar111) +
                                      lVar80);
                    iVar31 = iVar31 + 1;
                    lVar80 = (long)iVar31;
                    uVar81 = uVar81 * 0x100000001b3 ^ (long)*pcVar42;
                  } while (sVar17 != iVar31);
                }
                uVar44 = uVar44 ^ uVar111 ^ 0xffffffff;
                uVar86 = 0;
                if (uVar111 != 0) {
                  uVar86 = uVar44 / uVar111;
                }
                if ((uVar81 ^ (long)*(int *)(*(long *)(lVar91 + 8) +
                                            (ulong)(uVar44 - uVar86 * uVar111))) != uVar87) {
                  uVar58 = uVar101;
                }
                goto LAB_00138770;
              }
              uVar58 = local_7e4;
              if (uVar86 != 0x91ba958f) goto LAB_0013267c;
            }
            else {
              if (uVar86 == 0x928ac97d) {
                lVar91 = *(long *)(local_470 + 8);
                uVar111 = *(uint *)(lVar91 + 0x10);
                uVar113 = *(uint *)(lVar91 + 0x14);
                lVar80 = *(long *)(lVar91 + 8);
                uVar58 = uVar113 + 8;
                uVar86 = *(uint *)(lVar80 + (ulong)uVar113);
                *(uint *)(lVar91 + 0x14) = uVar113 + 4;
                uVar113 = *(uint *)(lVar80 + (ulong)(uVar113 + 4));
                *(uint *)(lVar91 + 0x14) = uVar58;
                uVar86 = uVar86 ^ uVar111 ^ 0xffffffff;
                iVar31 = (uVar58 ^ 8) + (uVar58 * 2 | 0xffffffee);
                local_490 = *(long ***)(lVar80 + (ulong)uVar58);
                uVar58 = 0;
                if (uVar111 != 0) {
                  uVar58 = uVar86 / uVar111;
                }
                uVar112 = iVar31 + 0x12;
                uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
                uVar96 = iVar31 + 0x16;
                *(uint *)(lVar91 + 0x14) = uVar112;
                uVar115 = *(uint *)(lVar80 + (ulong)uVar112);
                *(uint *)(lVar91 + 0x14) = uVar96;
                uVar112 = (uVar112 * 2 & 4) + (uVar96 ^ 2);
                sVar17 = *(short *)(lVar80 + (ulong)uVar96);
                *(uint *)(lVar91 + 0x14) = uVar112;
                uVar33 = *(undefined4 *)(lVar80 + (ulong)uVar112);
                *(uint *)(lVar91 + 0x14) = uVar112 + 4;
                uVar30 = *(undefined4 *)(lVar80 + (ulong)(uVar112 + 4));
                uVar96 = 0;
                if (uVar111 != 0) {
                  uVar96 = uVar113 / uVar111;
                }
                uVar115 = uVar115 ^ uVar111 ^ 0xffffffff;
                local_498 = (long **)CONCAT44(local_498._4_4_,uVar33);
                *(uint *)(lVar91 + 0x14) = uVar112 + 8;
                local_4b0 = (long **)CONCAT44(local_4b0._4_4_,uVar30);
                uVar94 = *(uint *)(lVar80 + (ulong)(uVar112 + 8));
                *(uint *)(lVar91 + 0x14) = uVar112 + 0xc;
                uVar101 = *(uint *)(lVar80 + (ulong)(uVar112 + 0xc));
                uVar94 = uVar94 ^ uVar111 ^ 0xffffffff;
                *(uint *)(lVar91 + 0x14) = uVar112 + 0x10;
                uVar101 = uVar101 ^ uVar111 ^ 0xffffffff;
                uVar112 = 0;
                if (uVar111 != 0) {
                  uVar112 = uVar94 / uVar111;
                }
                local_4d0 = (long **)CONCAT44(local_4d0._4_4_,uVar113 - uVar96 * uVar111);
                uVar113 = 0;
                if (uVar111 != 0) {
                  uVar113 = uVar101 / uVar111;
                }
                paVar89 = *(astruct_1 **)(lVar80 + (ulong)(uVar94 - uVar112 * uVar111));
                unaff_x27 = (long **)paVar89->field11_0x20;
                uVar112 = 0;
                if (uVar111 != 0) {
                  uVar112 = uVar115 / uVar111;
                }
                local_4f0 = (long *)CONCAT44(local_4f0._4_4_,
                                             *(undefined4 *)
                                              (lVar80 + (ulong)(uVar86 - uVar58 * uVar111)));
                local_508 = (undefined *)CONCAT44(local_508._4_4_,uVar115 - uVar112 * uVar111);
                uVar87 = *(long *)(lVar80 + (ulong)(uVar101 - uVar113 * uVar111)) << 3;
                local_464 = uVar44;
                do {
                  pplVar82 = (long **)paVar89->field10_0x18;
                  plVar95 = (long *)((long)unaff_x27 - (long)pplVar82);
                  uVar47 = paVar89->field1_0x8 - paVar89->pStart;
                  uVar81 = 0;
                  if (uVar47 != 0) {
                    uVar81 = (ulong)plVar95 / uVar47;
                  }
                  uVar58 = (uint)*(byte *)((long)plVar95 + (paVar89->pStart - uVar81 * uVar47)) ^
                           ((uint)uVar87 & 0x7f | (uint)(0x7f < uVar87) << 7);
                  unaff_x24 = (long **)(ulong)uVar58;
                  uVar13 = (undefined)uVar58;
                  if (unaff_x27 < paVar89->field12_0x28) {
                    *(undefined *)unaff_x27 = uVar13;
                    pplVar100 = (long **)((long)unaff_x27 + 1);
                  }
                  else {
                    puVar97 = (undefined *)((long)plVar95 + 1);
                    if ((long)puVar97 < 0) goto LAB_00142498;
                    uVar81 = (long)paVar89->field12_0x28 - (long)pplVar82;
                    puVar46 = (undefined *)(uVar81 * 2);
                    if (puVar46 < puVar97 || (long)puVar46 - (long)puVar97 == 0) {
                      puVar46 = puVar97;
                    }
                    if (0x3ffffffffffffffe < uVar81) {
                      puVar46 = (undefined *)0x7fffffffffffffff;
                    }
                    if (puVar46 == (undefined *)0x0) {
                      plVar39 = (long *)0x0;
                      *(undefined *)plVar95 = uVar13;
                      plVar48 = plVar95;
                    }
                    else {
                      plVar39 = (long *)malloc(puVar46);
                      plVar48 = (long *)((long)plVar39 + (long)plVar95);
                      *(undefined *)plVar48 = uVar13;
                    }
                    pplVar100 = (long **)((long)plVar48 + 1);
                    if (unaff_x27 != pplVar82) {
                      if ((plVar95 < (long *)0x8) ||
                         ((ulong)((long)pplVar82 - (long)plVar39) < 0x20)) {
LAB_00138a10:
                        do {
                          plVar48 = (long *)((long)plVar48 + -1);
                          unaff_x27 = (long **)((long)unaff_x27 + -1);
                          *(undefined *)plVar48 = *(undefined *)unaff_x27;
                        } while (unaff_x27 != pplVar82);
                      }
                      else if (plVar95 < (long *)0x20) {
                        plVar56 = (long *)0x0;
LAB_001389c0:
                        puVar84 = (undefined8 *)((long)unaff_x27 - (long)plVar56);
                        plVar79 = (long *)((ulong)plVar95 & 0xfffffffffffffff8);
                        unaff_x27 = (long **)((long)unaff_x27 - (long)plVar79);
                        puVar91 = (undefined8 *)((long)plVar39 + ((long)puVar84 - (long)pplVar82));
                        lVar80 = (long)plVar56 - (long)plVar79;
                        do {
                          puVar84 = puVar84 + -1;
                          puVar91 = puVar91 + -1;
                          lVar80 = lVar80 + 8;
                          *puVar91 = *puVar84;
                        } while (lVar80 != 0);
                        if (plVar95 != plVar79) {
                          plVar48 = (long *)((long)plVar48 - (long)plVar79);
                          goto LAB_00138a10;
                        }
                      }
                      else {
                        plVar56 = (long *)((ulong)plVar95 & 0xffffffffffffffe0);
                        pplVar88 = unaff_x27 + -2;
                        pplVar77 = (long **)((undefined *)((long)plVar39 + (long)plVar95) + -0x10);
                        plVar79 = plVar56;
                        do {
                          pplVar71 = pplVar88 + -1;
                          plVar55 = pplVar88[-2];
                          plVar76 = pplVar88[1];
                          plVar38 = *pplVar88;
                          plVar79 = plVar79 + -4;
                          pplVar88 = pplVar88 + -4;
                          pplVar77[-1] = *pplVar71;
                          pplVar77[-2] = plVar55;
                          pplVar77[1] = plVar76;
                          *pplVar77 = plVar38;
                          pplVar77 = pplVar77 + -4;
                        } while (plVar79 != (long *)0x0);
                        if (plVar95 != plVar56) {
                          if (((ulong)plVar95 & 0x18) == 0) {
                            plVar48 = (long *)((long)plVar48 - (long)plVar56);
                            unaff_x27 = (long **)((long)unaff_x27 - (long)plVar56);
                            goto LAB_00138a10;
                          }
                          goto LAB_001389c0;
                        }
                      }
                      unaff_x27 = (long **)paVar89->field10_0x18;
                      plVar48 = plVar39;
                    }
                    paVar89->field10_0x18 = plVar48;
                    paVar89->field11_0x20 = (char *)pplVar100;
                    paVar89->field12_0x28 = (char *)((long)plVar39 + (long)puVar46);
                    if (unaff_x27 != (long **)0x0) {
                      free(unaff_x27);
                    }
                  }
                  unaff_x27 = pplVar100;
                  paVar89->field11_0x20 = (char *)unaff_x27;
                  bVar28 = 0x7f < uVar87;
                  uVar87 = uVar87 >> 7;
                } while (bVar28);
                vector_append_value(paVar89,(uint)((uint)local_4f0 != 0));
                lVar80 = *(long *)(lVar91 + 8);
                uVar87 = 0xcbf29ce484222325;
                if (sVar17 != 0) {
                  lVar91 = 0;
                  iVar31 = 0;
                  do {
                    pcVar42 = (char *)(lVar80 + ((ulong)local_508 & 0xffffffff) + lVar91);
                    iVar31 = iVar31 + 1;
                    lVar91 = (long)iVar31;
                    uVar87 = uVar87 * 0x100000001b3 ^ (long)*pcVar42;
                  } while (sVar17 != iVar31);
                }
                goto LAB_00139344;
              }
              uVar58 = local_628;
              if (uVar86 != 0x92df4404) {
                if (uVar86 == 0x92dfddb9) {
                  lVar91 = *(long *)(local_470 + 8);
                  uVar111 = *(uint *)(lVar91 + 0x10);
                  uVar96 = *(uint *)(lVar91 + 0x14);
                  lVar80 = *(long *)(lVar91 + 8);
                  uVar58 = uVar96 + 0x10;
                  uVar86 = *(uint *)(lVar80 + (ulong)uVar96);
                  *(uint *)(lVar91 + 0x14) = uVar96 + 4;
                  uVar113 = *(uint *)(lVar80 + (ulong)(uVar96 + 4));
                  *(uint *)(lVar91 + 0x14) = uVar96 + 8;
                  uVar86 = uVar86 ^ uVar111 ^ 0xffffffff;
                  uVar112 = *(uint *)(lVar80 + (ulong)(uVar96 + 8));
                  uVar115 = 0;
                  if (uVar111 != 0) {
                    uVar115 = uVar86 / uVar111;
                  }
                  *(uint *)(lVar91 + 0x14) = uVar96 + 0xc;
                  iVar31 = (uVar58 ^ 0xfffffff7) + (uVar58 * 2 | 0x10);
                  uVar101 = *(uint *)(lVar80 + (ulong)(uVar96 + 0xc));
                  uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
                  uVar96 = iVar31 + 5;
                  *(uint *)(lVar91 + 0x14) = uVar58;
                  uVar94 = iVar31 + 1;
                  lVar54 = *(long *)(lVar80 + (ulong)uVar58);
                  *(uint *)(lVar91 + 0x14) = uVar94;
                  uVar33 = *(undefined4 *)(lVar80 + (ulong)uVar94);
                  iVar31 = ((uVar96 ^ 0xffffffff) & 0xfffffffd) + (uVar94 & 2) + (uVar96 * 2 | 4);
                  *(uint *)(lVar91 + 0x14) = uVar96;
                  local_490 = (long **)CONCAT44(local_490._4_4_,uVar33);
                  sVar17 = *(short *)(lVar80 + (ulong)uVar96);
                  uVar96 = 0;
                  if (uVar111 != 0) {
                    uVar96 = uVar113 / uVar111;
                  }
                  *(uint *)(lVar91 + 0x14) = iVar31 + 1U;
                  uVar58 = *(uint *)(lVar80 + (ulong)(iVar31 + 1U));
                  unaff_x24 = (long **)(ulong)uVar58;
                  *(uint *)(lVar91 + 0x14) = iVar31 + 5U;
                  uVar85 = *(uint *)(lVar80 + (ulong)(iVar31 + 5U));
                  unaff_x27 = (long **)(ulong)uVar85;
                  *(uint *)(lVar91 + 0x14) = iVar31 + 9U;
                  uVar94 = *(uint *)(lVar80 + (ulong)(iVar31 + 9U));
                  *(int *)(lVar91 + 0x14) = iVar31 + 0xd;
                  uVar49 = *(undefined8 *)(lVar80 + (ulong)(uVar86 - uVar115 * uVar111));
                  pplVar82 = *(long ***)(lVar80 + (ulong)(uVar113 - uVar96 * uVar111));
                  local_464 = uVar44;
                  uVar87 = syscall(0x3e,(long)(int)uVar49,0,1);
                  if (0xfffffffffffff000 < uVar87) {
                    iVar31 = (int)uVar87;
                    uVar87 = 0xffffffffffffffff;
                    *local_4b8 = -iVar31;
                  }
                  uVar94 = uVar94 ^ uVar111 ^ 0xffffffff;
                  uVar86 = 0;
                  if (uVar111 != 0) {
                    uVar86 = uVar94 / uVar111;
                  }
                  bStack_2d0 = (byte)uVar87;
                  uStack_2cf = (undefined)(uVar87 >> 8);
                  uStack_2ce = (undefined2)(uVar87 >> 0x10);
                  iStack_2cc = (int)(uVar87 >> 0x20);
                  local_2e0 = (long *)&DAT_0016f6a0;
                  bStack_2d8 = (byte)uVar49;
                  uStack_2d7 = (undefined)((ulong)uVar49 >> 8);
                  uStack_2d6 = (undefined2)((ulong)uVar49 >> 0x10);
                  uVar94 = uVar94 - uVar86 * uVar111;
                  local_2c8 = pplVar82;
                  auVar124 = func_0x00169c20(&local_2e0);
                  if ((auVar124 & (undefined  [16])0xff00000000) == (undefined  [16])0x0) {
                    uVar87 = 0;
                    *(undefined8 *)(*(long *)(lVar91 + 8) + (ulong)uVar94) = 0;
                  }
                  else {
                    *(ulong *)(*(long *)(lVar91 + 8) + (ulong)uVar94) = auVar124._0_8_ >> 0x20;
                    uVar87 = auVar124._0_8_ & 0xffffffff;
                  }
                  uVar112 = uVar112 ^ uVar111 ^ 0xffffffff;
                  uVar86 = 0;
                  if (uVar111 != 0) {
                    uVar86 = uVar112 / uVar111;
                  }
                  uVar81 = 0xcbf29ce484222325;
                  *(ulong *)(*(long *)(lVar91 + 8) + (ulong)(uVar112 - uVar86 * uVar111)) = uVar87;
                  if (sVar17 != 0) {
                    lVar80 = 0;
                    iVar31 = 0;
                    uVar86 = (uint)local_490 ^ uVar111 ^ 0xffffffff;
                    uVar44 = 0;
                    if (uVar111 != 0) {
                      uVar44 = uVar86 / uVar111;
                    }
                    uVar81 = 0xcbf29ce484222325;
                    do {
                      pcVar42 = (char *)(*(long *)(lVar91 + 8) + (ulong)(uVar86 - uVar44 * uVar111)
                                        + lVar80);
                      iVar31 = iVar31 + 1;
                      lVar80 = (long)iVar31;
                      uVar81 = uVar81 * 0x100000001b3 ^ (long)*pcVar42;
                    } while (sVar17 != iVar31);
                  }
                  uVar101 = uVar101 ^ uVar111 ^ 0xffffffff;
                  uVar86 = 0;
                  if (uVar111 != 0) {
                    uVar86 = uVar101 / uVar111;
                  }
                  uVar87 = (ulong)*(int *)(*(long *)(lVar91 + 8) +
                                          (ulong)(uVar101 - uVar86 * uVar111));
                  if ((uVar81 | uVar87) * 2 - (uVar81 + uVar87) != lVar54) {
                    uVar58 = uVar85;
                  }
                  goto LAB_001395a8;
                }
                goto LAB_0013267c;
              }
            }
            goto LAB_0012ed04;
          }
          if ((int)uVar86 < -0x6541ff6e) {
            uVar58 = local_5f8;
            if ((uVar86 != 0x9749e8b3) && (uVar58 = local_7dc, uVar86 != 0x98e51ae2))
            goto LAB_0013267c;
            goto LAB_0012ed04;
          }
          uVar58 = local_5cc;
          if (uVar86 == 0x9abe0092) goto LAB_0012ed04;
          if (uVar86 == 0xa1e3ee3d) {
            lVar80 = *(long *)(local_470 + 8);
            if ((DAT_00174968 & 1) == 0) {
              local_464 = uVar44;
              uVar87 = FUN_0014238c();
              return uVar87;
            }
            uVar115 = *(uint *)(lVar80 + 0x10);
            uVar96 = *(uint *)(lVar80 + 0x14);
            pcVar42 = *(char **)(lVar80 + 8);
            uVar86 = uVar96 & 8;
            uVar111 = *(uint *)(pcVar42 + uVar96);
            *(uint *)(lVar80 + 0x14) = uVar96 + 4;
            uVar113 = *(uint *)(pcVar42 + (uVar96 + 4));
            *(uint *)(lVar80 + 0x14) = uVar96 + 8;
            uVar58 = uVar96 + 0x10;
            uVar112 = *(uint *)(pcVar42 + (uVar96 + 8));
            *(uint *)(lVar80 + 0x14) = uVar96 + 0xc;
            uVar33 = *(undefined4 *)(pcVar42 + (uVar96 + 0xc));
            *(uint *)(lVar80 + 0x14) = uVar58;
            iVar31 = (uVar58 ^ 8) + ~uVar86 + (uVar86 | (uVar86 >> 3) << 4);
            uVar87 = *(ulong *)(pcVar42 + uVar58);
            local_490 = (long **)CONCAT44(local_490._4_4_,uVar33);
            uVar58 = iVar31 + 5;
            uVar86 = iVar31 + 1;
            *(uint *)(lVar80 + 0x14) = uVar86;
            uVar96 = *(uint *)(pcVar42 + uVar86);
            *(uint *)(lVar80 + 0x14) = uVar58;
            uVar111 = uVar111 ^ uVar115 ^ 0xffffffff;
            uVar86 = (uVar58 * 2 | 5) + (uVar58 ^ 0xfffffffd);
            sVar17 = *(short *)(pcVar42 + uVar58);
            uVar113 = uVar113 ^ uVar115 ^ 0xffffffff;
            *(uint *)(lVar80 + 0x14) = uVar86;
            uVar112 = uVar112 ^ uVar115 ^ 0xffffffff;
            uVar58 = *(uint *)(pcVar42 + uVar86);
            *(uint *)(lVar80 + 0x14) = uVar86 + 4;
            uVar94 = 0;
            if (uVar115 != 0) {
              uVar94 = uVar111 / uVar115;
            }
            uVar85 = *(uint *)(pcVar42 + (uVar86 + 4));
            unaff_x27 = (long **)(ulong)uVar85;
            *(uint *)(lVar80 + 0x14) = uVar86 + 8;
            uVar101 = *(uint *)(pcVar42 + (uVar86 + 8)) ^ uVar115 ^ 0xffffffff;
            uVar22 = 0;
            if (uVar115 != 0) {
              uVar22 = uVar113 / uVar115;
            }
            *(uint *)(lVar80 + 0x14) = uVar86 + 0xc;
            uVar7 = *(uint *)(pcVar42 + (uVar86 + 0xc));
            unaff_x24 = (long **)(ulong)uVar7;
            uVar20 = 0;
            if (uVar115 != 0) {
              uVar20 = uVar112 / uVar115;
            }
            iVar31 = uVar113 - uVar22 * uVar115;
            *(uint *)(lVar80 + 0x14) = uVar86 + 0x10;
            uVar86 = 0;
            if (uVar115 != 0) {
              uVar86 = uVar101 / uVar115;
            }
            uVar49 = *(undefined8 *)(pcVar42 + (uVar112 - uVar20 * uVar115));
            local_464 = uVar44;
            FUN_00149a84_XOR((astruct_3 *)&local_2e0,pcVar42,uVar115,uVar111 - uVar94 * uVar115,
                             iVar31);
            FUN_00149a84_XOR((astruct_3 *)&local_1a0,*(char **)(lVar80 + 8),
                             *(undefined4 *)(lVar80 + 0x10),uVar101 - uVar86 * uVar115,iVar31);
            if (_DAT_00174970 == (code *)0x0) {
              uVar49 = 0;
            }
            else {
              pplVar82 = local_570;
              if (((ulong)local_2e0 & 1) != 0) {
                pplVar82 = (long **)CONCAT44(iStack_2cc,
                                             CONCAT22(uStack_2ce,CONCAT11(uStack_2cf,bStack_2d0)));
              }
              uVar81 = local_580;
              if (((ulong)_local_1a0 & 1) != 0) {
                uVar81 = CONCAT17(uStack_189,
                                  CONCAT16(uStack_18a,
                                           CONCAT15(uStack_18b,
                                                    CONCAT14(bStack_18c,
                                                             CONCAT13(uStack_18d,
                                                                      CONCAT12(uStack_18e,
                                                                               CONCAT11(uStack_18f,
                                                                                        local_190)))
                                                            ))));
              }
              uVar49 = (*_DAT_00174970)(uVar49,pplVar82,uVar81);
            }
            uVar7 = uVar7 ^ uVar115 ^ 0xffffffff;
            uVar86 = 0;
            if (uVar115 != 0) {
              uVar86 = uVar7 / uVar115;
            }
            uVar81 = 0xcbf29ce484222325;
            *(undefined8 *)(*(long *)(lVar80 + 8) + (ulong)(uVar7 - uVar86 * uVar115)) = uVar49;
            if (sVar17 != 0) {
              uVar96 = uVar96 ^ uVar115 ^ 0xffffffff;
              lVar91 = 0;
              iVar31 = 0;
              uVar86 = 0;
              if (uVar115 != 0) {
                uVar86 = uVar96 / uVar115;
              }
              uVar81 = 0xcbf29ce484222325;
              do {
                pcVar42 = (char *)(*(long *)(lVar80 + 8) + (ulong)(uVar96 - uVar86 * uVar115) +
                                  lVar91);
                iVar31 = iVar31 + 1;
                lVar91 = (long)iVar31;
                uVar81 = uVar81 * 0x100000001b3 ^ (long)*pcVar42;
              } while (sVar17 != iVar31);
            }
            uVar86 = (uint)local_490 ^ uVar115 ^ 0xffffffff;
            uVar44 = 0;
            if (uVar115 != 0) {
              uVar44 = uVar86 / uVar115;
            }
            if ((uVar81 ^ (long)*(int *)(*(long *)(lVar80 + 8) + (ulong)(uVar86 - uVar44 * uVar115))
                ) != uVar87) {
              uVar58 = uVar85;
            }
            if (((ulong)_local_1a0 & 1) != 0) {
              free(CONCAT17(uStack_189,
                            CONCAT16(uStack_18a,
                                     CONCAT15(uStack_18b,
                                              CONCAT14(bStack_18c,
                                                       CONCAT13(uStack_18d,
                                                                CONCAT12(uStack_18e,
                                                                         CONCAT11(uStack_18f,
                                                                                  local_190))))))));
            }
            if ((byte)((byte)local_2e0 + 1) != ((byte)local_2e0 | 1)) {
              free(CONCAT44(iStack_2cc,CONCAT22(uStack_2ce,CONCAT11(uStack_2cf,bStack_2d0))));
            }
            uVar58 = uVar58 ^ uVar115 ^ 0xffffffff;
            pplVar82 = (long **)(ulong)local_464;
            uVar86 = 0;
            if (uVar115 != 0) {
              uVar86 = uVar58 / uVar115;
            }
            puVar91 = (undefined8 *)(ulong)(uVar58 - uVar86 * uVar115);
            goto LAB_0012ecfc;
          }
          uVar58 = local_7fc;
          if (uVar86 == 0xa2e4c1d9) goto LAB_0012ed04;
        }
      }
      else if ((int)uVar86 < -0x4f5dc7eb) {
        if ((int)uVar86 < -0x565f725c) {
          if (-0x58c58e54 < (int)uVar86) {
            if (uVar86 == 0xa73a71ad) {
              *(int *)(*(long *)(local_470 + 8) + 0x14) = (int)puVar91;
              pplVar82 = (long **)0x1;
              uVar58 = 0xfacb36c3;
            }
            else {
              uVar58 = local_674;
              if (uVar86 != 0xa7836dfd) {
                if (uVar86 == 0xa9379dd1) {
                  lVar54 = *(long *)(local_470 + 8);
                  uVar111 = *(uint *)(lVar54 + 0x10);
                  uVar44 = *(uint *)(lVar54 + 0x14);
                  lVar80 = *(long *)(lVar54 + 8);
                  uVar58 = uVar44 + 8;
                  uVar86 = *(uint *)(lVar80 + (ulong)uVar44);
                  *(uint *)(lVar54 + 0x14) = uVar44 + 4;
                  uVar44 = *(uint *)(lVar80 + (ulong)(uVar44 + 4));
                  uVar86 = uVar86 ^ uVar111 ^ 0xffffffff;
                  *(uint *)(lVar54 + 0x14) = uVar58;
                  lVar91 = *(long *)(lVar80 + (ulong)uVar58);
                  uVar58 = (uVar58 * 2 & 0x10) + (uVar58 ^ 8);
                  uVar113 = 0;
                  if (uVar111 != 0) {
                    uVar113 = uVar86 / uVar111;
                  }
                  uVar112 = uVar58 + 4;
                  *(uint *)(lVar54 + 0x14) = uVar58;
                  uVar101 = *(uint *)(lVar80 + (ulong)uVar58);
                  *(uint *)(lVar54 + 0x14) = uVar112;
                  uVar96 = (uVar112 * 2 | 5) + (uVar112 ^ 0xfffffffd);
                  sVar17 = *(short *)(lVar80 + (ulong)uVar112);
                  *(uint *)(lVar54 + 0x14) = uVar96;
                  uVar58 = *(uint *)(lVar80 + (ulong)uVar96);
                  *(uint *)(lVar54 + 0x14) = uVar96 + 4;
                  uVar85 = *(uint *)(lVar80 + (ulong)(uVar96 + 4));
                  unaff_x24 = (long **)(ulong)uVar85;
                  *(uint *)(lVar54 + 0x14) = uVar96 + 8;
                  uVar112 = *(uint *)(lVar80 + (ulong)(uVar96 + 8));
                  *(uint *)(lVar54 + 0x14) = uVar96 + 0xc;
                  uVar115 = *(uint *)(lVar80 + (ulong)(uVar96 + 0xc));
                  *(uint *)(lVar54 + 0x14) = uVar96 + 0x10;
                  uVar94 = *(uint *)(lVar80 + (ulong)(uVar96 + 0x10));
                  *(uint *)(lVar54 + 0x14) = uVar96 + 0x14;
                  uVar112 = uVar112 ^ uVar111 ^ 0xffffffff;
                  uVar115 = uVar115 ^ uVar111 ^ 0xffffffff;
                  uVar96 = 0;
                  if (uVar111 != 0) {
                    uVar96 = uVar112 / uVar111;
                  }
                  uVar94 = uVar94 ^ uVar111 ^ 0xffffffff;
                  uVar86 = *(uint *)(lVar80 + (ulong)(uVar86 - uVar113 * uVar111)) ^
                           uVar111 ^ 0xffffffff;
                  uVar113 = 0;
                  if (uVar111 != 0) {
                    uVar113 = uVar94 / uVar111;
                  }
                  uVar22 = 0;
                  if (uVar111 != 0) {
                    uVar22 = uVar86 / uVar111;
                  }
                  uVar7 = 0;
                  if (uVar111 != 0) {
                    uVar7 = uVar115 / uVar111;
                  }
                  lVar60 = *(long *)(lVar54 + 8);
                  uVar86 = *(uint *)(lVar60 + (ulong)((uVar86 - uVar22 * uVar111) +
                                                      ((*(int *)(lVar80 + (ulong)(uVar94 - uVar113 *
                                                                                           uVar111))
                                                       << 0x10) >> 0xe) + 2)) ^ uVar111 ^ 0xffffffff
                  ;
                  uVar113 = 0;
                  if (uVar111 != 0) {
                    uVar113 = uVar86 / uVar111;
                  }
                  func_0x0016a0c0(lVar60 + (ulong)(uVar112 - uVar96 * uVar111),
                                  lVar60 + (ulong)(uVar86 - uVar113 * uVar111),
                                  *(undefined2 *)(lVar80 + (ulong)(uVar115 - uVar7 * uVar111)));
                  uVar87 = 0xcbf29ce484222325;
                  if (sVar17 != 0) {
                    uVar101 = uVar101 ^ uVar111 ^ 0xffffffff;
                    lVar80 = 0;
                    iVar31 = 0;
                    uVar86 = 0;
                    if (uVar111 != 0) {
                      uVar86 = uVar101 / uVar111;
                    }
                    uVar87 = 0xcbf29ce484222325;
                    do {
                      pcVar42 = (char *)(*(long *)(lVar54 + 8) + (ulong)(uVar101 - uVar86 * uVar111)
                                        + lVar80);
                      iVar31 = iVar31 + 1;
                      lVar80 = (long)iVar31;
                      uVar87 = uVar87 * 0x100000001b3 ^ (long)*pcVar42;
                    } while (sVar17 != iVar31);
                  }
                  uVar44 = uVar44 ^ uVar111 ^ 0xffffffff;
                  uVar86 = 0;
                  if (uVar111 != 0) {
                    uVar86 = uVar44 / uVar111;
                  }
                  uVar81 = (ulong)*(int *)(*(long *)(lVar54 + 8) +
                                          (ulong)(uVar44 - uVar86 * uVar111));
                  if ((uVar81 - uVar87) + (uVar87 & (uVar81 ^ 0xffffffffffffffff)) * 2 != lVar91) {
                    uVar58 = uVar85;
                  }
                  goto LAB_00138770;
                }
                goto LAB_0013267c;
              }
            }
            goto LAB_0012ed04;
          }
          uVar58 = local_644;
          if ((uVar86 == 0xa5824081) || (uVar58 = local_79c, uVar86 == 0xa6457d4c))
          goto LAB_0012ed04;
        }
        else if ((int)uVar86 < -0x54b9fcbf) {
          uVar58 = local_670;
          if (uVar86 == 0xa9a08da4) goto LAB_0012ed04;
          if (uVar86 == 0xaad19cf6) {
            lVar80 = *(long *)(local_470 + 8);
            uVar112 = *(uint *)(lVar80 + 0x10);
            uVar96 = *(uint *)(lVar80 + 0x14);
            pcVar42 = *(char **)(lVar80 + 8);
            uVar58 = uVar96 + 4;
            uVar111 = (uVar58 * 2 & 0x10) + (uVar58 ^ 8);
            uVar113 = *(uint *)(pcVar42 + uVar96);
            uVar86 = uVar111 + 4;
            *(uint *)(lVar80 + 0x14) = uVar58;
            uVar87 = *(ulong *)(pcVar42 + uVar58);
            *(uint *)(lVar80 + 0x14) = uVar111;
            iVar31 = (uVar86 | 2) + (uVar96 | 0xfffffffd);
            uVar111 = *(uint *)(pcVar42 + uVar111);
            *(uint *)(lVar80 + 0x14) = uVar86;
            sVar17 = *(short *)(pcVar42 + uVar86);
            unaff_x24 = (long **)(long)sVar17;
            *(uint *)(lVar80 + 0x14) = iVar31 + 3U;
            uVar113 = uVar113 ^ uVar112 ^ 0xffffffff;
            uVar33 = *(undefined4 *)(pcVar42 + (iVar31 + 3U));
            *(uint *)(lVar80 + 0x14) = iVar31 + 7U;
            uVar115 = *(uint *)(pcVar42 + (iVar31 + 7U));
            *(uint *)(lVar80 + 0x14) = iVar31 + 0xbU;
            local_490 = (long **)CONCAT44(local_490._4_4_,uVar33);
            uVar96 = *(uint *)(pcVar42 + (iVar31 + 0xbU));
            unaff_x27 = (long **)(ulong)uVar96;
            *(uint *)(lVar80 + 0x14) = iVar31 + 0xfU;
            uVar58 = *(uint *)(pcVar42 + (iVar31 + 0xfU));
            *(uint *)(lVar80 + 0x14) = iVar31 + 0x13U;
            uVar86 = *(uint *)(pcVar42 + (iVar31 + 0x13U));
            *(int *)(lVar80 + 0x14) = iVar31 + 0x17;
            uVar58 = uVar58 ^ uVar112 ^ 0xffffffff;
            uVar86 = uVar86 ^ uVar112 ^ 0xffffffff;
            uVar94 = 0;
            if (uVar112 != 0) {
              uVar94 = uVar58 / uVar112;
            }
            uVar101 = 0;
            if (uVar112 != 0) {
              uVar101 = uVar86 / uVar112;
            }
            local_464 = uVar44;
            FUN_00149a84_XOR((astruct_3 *)&local_2e0,pcVar42,uVar112,uVar86 - uVar101 * uVar112,
                             uVar58 - uVar94 * uVar112);
            plVar95 = local_2e0;
            pplVar82 = (long **)CONCAT44(iStack_2cc,
                                         CONCAT22(uStack_2ce,CONCAT11(uStack_2cf,bStack_2d0)));
            puVar35 = (undefined2 *)malloc0(3);
            uVar111 = uVar111 ^ uVar112 ^ 0xffffffff;
            uVar58 = 0;
            if (uVar112 != 0) {
              uVar58 = uVar113 / uVar112;
            }
            *puVar35 = 0;
            *(undefined *)(puVar35 + 1) = 0;
            *(undefined *)puVar35 = 0x72;
            *(undefined *)((long)puVar35 + 1) = 0x62;
            *(undefined *)(puVar35 + 1) = 0;
            uVar86 = 0;
            if (uVar112 != 0) {
              uVar86 = uVar111 / uVar112;
            }
            uVar113 = uVar113 - uVar58 * uVar112;
            uVar111 = uVar111 - uVar86 * uVar112;
            free();
            piVar34 = (int *)func_0x0016a250(1,0x418);
            iVar31 = (int)sVar17;
            if (piVar34 == (int *)0x0) {
              piVar34 = (int *)func_0x0016a0b0();
              *local_4b8 = *piVar34;
              lVar80 = *(long *)(lVar80 + 8);
joined_r0x0013bfd8:
              uVar81 = 0xcbf29ce484222325;
              if (iVar31 != 0) {
                uVar81 = 0xcbf29ce484222325;
                lVar91 = 0;
                iVar32 = 0;
                do {
                  pcVar42 = (char *)(lVar80 + (ulong)uVar111 + lVar91);
                  iVar32 = iVar32 + 1;
                  lVar91 = (long)iVar32;
                  uVar81 = uVar81 * 0x100000001b3 ^ (long)*pcVar42;
                } while (iVar31 != iVar32);
              }
              uVar47 = (ulong)*(int *)(lVar80 + (ulong)uVar113);
              bVar28 = ((uVar81 & uVar47) - uVar81) + (uVar81 | uVar47 ^ 0xffffffffffffffff) ==
                       (uVar87 ^ 0xfffffffffffffffe) + (uVar87 & 1) +
                       (-(uVar87 & 1) & 0xfffffffffffffffd);
            }
            else {
              *(int **)(piVar34 + 0x102) = piVar34 + 1;
              pplVar100 = local_570;
              if (((ulong)plVar95 & 1) != 0) {
                pplVar100 = pplVar82;
              }
              *(int **)(piVar34 + 0x104) = piVar34 + 1;
              uVar81 = syscall(0x38,0xffffffffffffff9c,pplVar100,0,0);
              iVar32 = (int)uVar81;
              if (0xfffffffffffff000 < uVar81) {
                *local_4b8 = -iVar32;
LAB_0013c2a0:
                func_0x0016a000(piVar34);
                lVar80 = *(long *)(lVar80 + 8);
                goto joined_r0x0013bfd8;
              }
              *piVar34 = iVar32;
              if (iVar32 == -1) goto LAB_0013c2a0;
              uVar96 = uVar96 ^ uVar112 ^ 0xffffffff;
              uVar58 = 0;
              if (uVar112 != 0) {
                uVar58 = uVar96 / uVar112;
              }
              uVar81 = 0xcbf29ce484222325;
              *(int **)(*(long *)(lVar80 + 8) + (ulong)(uVar96 - uVar58 * uVar112)) = piVar34;
              if (iVar31 != 0) {
                lVar91 = 0;
                iVar32 = 0;
                do {
                  pcVar42 = (char *)(*(long *)(lVar80 + 8) + (ulong)uVar111 + lVar91);
                  iVar32 = iVar32 + 1;
                  lVar91 = (long)iVar32;
                  uVar81 = uVar81 * 0x100000001b3 ^ (long)*pcVar42;
                } while (iVar31 != iVar32);
              }
              uVar47 = (ulong)*(int *)(*(long *)(lVar80 + 8) + (ulong)uVar113);
              bVar28 = ((uVar47 | uVar81 ^ 0xffffffffffffffff) -
                       (uVar81 | uVar47 ^ 0xffffffffffffffff)) +
                       (uVar81 & (uVar47 ^ 0xffffffffffffffff)) * 2 == uVar87;
            }
            bVar102 = (byte)local_2e0 & 1 ^ ((byte)local_2e0 | 1) - ((byte)local_2e0 & 0xfe);
            uVar58 = (uint)local_490;
            if (!bVar28) {
              uVar58 = uVar115;
            }
joined_r0x00138bec:
            if (bVar102 != 1) goto LAB_0013c34c;
            goto LAB_0013c354;
          }
        }
        else {
          uVar58 = local_5a4;
          if (((uVar86 == 0xab460341) || (uVar58 = local_608, uVar86 == 0xacd0c7c2)) ||
             (uVar58 = local_798, uVar86 == 0xaf473bec)) goto LAB_0012ed04;
        }
      }
      else if ((int)uVar86 < -0x449a7f24) {
        if ((int)uVar86 < -0x4b56aec7) {
          uVar58 = local_65c;
          if (uVar86 == 0xb0a23815) goto LAB_0012ed04;
          if (uVar86 == 0xb46fd9fb) {
            lVar91 = *(long *)(local_470 + 8);
            uVar44 = *(uint *)(lVar91 + 0x10);
            lVar80 = *(long *)(lVar91 + 8);
            uVar58 = *(uint *)(lVar91 + 0x14) + 4;
            uVar86 = *(uint *)(lVar80 + (ulong)*(uint *)(lVar91 + 0x14));
            *(uint *)(lVar91 + 0x14) = uVar58;
            uVar87 = *(ulong *)(lVar80 + (ulong)uVar58);
            uVar86 = uVar86 ^ uVar44 ^ 0xffffffff;
            uVar111 = 0;
            if (uVar44 != 0) {
              uVar111 = uVar86 / uVar44;
            }
            iVar31 = (uVar58 ^ 8) * 3 + (uVar58 * 2 & 0x10) + (uVar58 * 2 ^ 0xffffffee);
            uVar58 = iVar31 + 2;
            uVar113 = iVar31 + 6;
            *(uint *)(lVar91 + 0x14) = uVar58;
            uVar112 = *(uint *)(lVar80 + (ulong)uVar58);
            *(uint *)(lVar91 + 0x14) = uVar113;
            sVar17 = *(short *)(lVar80 + (ulong)uVar113);
            uVar112 = uVar112 ^ uVar44 ^ 0xffffffff;
            iVar31 = (uVar113 ^ 2) + uVar113 * 2 + (uVar58 * -2 - 10 | 4);
            *(uint *)(lVar91 + 0x14) = iVar31 + 2U;
            uVar58 = *(uint *)(lVar80 + (ulong)(iVar31 + 2U));
            *(uint *)(lVar91 + 0x14) = iVar31 + 6U;
            uVar113 = 0;
            if (uVar44 != 0) {
              uVar113 = uVar112 / uVar44;
            }
            uVar96 = *(uint *)(lVar80 + (ulong)(iVar31 + 6U));
            *(uint *)(lVar91 + 0x14) = iVar31 + 10U;
            uVar86 = uVar86 - uVar111 * uVar44;
            uVar111 = *(uint *)(lVar80 + (ulong)(iVar31 + 10U));
            *(uint *)(lVar91 + 0x14) = iVar31 + 0xeU;
            uVar58 = uVar58 ^ uVar44 ^ 0xffffffff;
            uVar115 = *(uint *)(lVar80 + (ulong)(iVar31 + 0xeU));
            *(int *)(lVar91 + 0x14) = iVar31 + 0x12;
            uVar96 = uVar96 ^ uVar44 ^ 0xffffffff;
            uVar111 = uVar111 ^ uVar44 ^ 0xffffffff;
            uVar115 = uVar115 ^ uVar44 ^ 0xffffffff;
            uVar94 = 0;
            if (uVar44 != 0) {
              uVar94 = uVar115 / uVar44;
            }
            unaff_x27 = (long **)(ulong)(uVar112 - uVar113 * uVar44);
            uVar113 = 0;
            if (uVar44 != 0) {
              uVar113 = uVar111 / uVar44;
            }
            uVar112 = *(uint *)(lVar80 + (ulong)(uVar115 - uVar94 * uVar44)) ^ uVar44 ^ 0xffffffff;
            uVar115 = 0;
            if (uVar44 != 0) {
              uVar115 = uVar112 / uVar44;
            }
            uVar94 = 0;
            if (uVar44 != 0) {
              uVar94 = uVar58 / uVar44;
            }
            uVar112 = uVar112 - uVar115 * uVar44;
            uVar16 = *(ushort *)(lVar80 + (ulong)(uVar111 - uVar113 * uVar44));
            uVar81 = (ulong)uVar16;
            uVar111 = 0;
            if (uVar44 != 0) {
              uVar111 = uVar96 / uVar44;
            }
            uVar58 = uVar58 - uVar94 * uVar44;
            uVar96 = uVar96 - uVar111 * uVar44;
            unaff_x24 = (long **)(ulong)uVar96;
            if ((int)(short)(*(ushort *)(lVar80 + (ulong)uVar112) ^ (ushort)uVar112 ^ 0xffff) <
                (int)(uint)uVar16) {
              uVar81 = 0xcbf29ce484222325;
              if (sVar17 != 0) {
                lVar91 = 0;
                iVar31 = 0;
                do {
                  lVar54 = lVar91 + lVar80;
                  iVar31 = iVar31 + 1;
                  lVar91 = (long)iVar31;
                  uVar81 = uVar81 * 0x100000001b3 ^ (long)*(char *)((long)unaff_x27 + lVar54);
                } while (sVar17 != iVar31);
              }
              uVar47 = (ulong)*(int *)(lVar80 + (ulong)uVar86);
              if (((uVar81 & uVar47) - uVar81) + (uVar81 | uVar47 ^ 0xffffffffffffffff) !=
                  (((uVar87 & 1 | uVar87 << 1) ^ 0xffffffffffffffff) & 0xfffffffffffffffd) +
                  (uVar87 | 1)) {
                uVar58 = uVar96;
              }
              puVar91 = (undefined8 *)(ulong)uVar58;
            }
            else {
              pcVar42 = (char *)FUN_SharedStorageGet(0x173c50);
              if (*pcVar42 == '\x01') {
                FUN_0012d7bc(&local_2e0,*local_888,uVar81);
              }
              else {
                local_490 = (long **)FUN_00142da4();
                *local_888 = local_490;
                puVar97 = (undefined *)FUN_SharedStorageGet(0x173c50);
                *puVar97 = 1;
                FUN_0012d7bc(&local_2e0,local_490,uVar81);
              }
              if (uVar16 != 0) {
                uVar47 = 0;
                do {
                  uVar111 = *(uint *)(lVar91 + 0x10);
                  uVar44 = *(uint *)(*(long *)(lVar91 + 8) +
                                    (ulong)(uVar112 + 2 + (((int)uVar47 << 0x10) >> 0xe))) ^
                           uVar111 ^ 0xffffffff;
                  uVar113 = 0;
                  if (uVar111 != 0) {
                    uVar113 = uVar44 / uVar111;
                  }
                  puVar97 = (undefined *)((long)local_2e0 + uVar47);
                  uVar47 = (uVar47 ^ 1) + uVar47 * 2 + (~uVar47 << 1 | 2) + 2;
                  *(undefined *)(*(long *)(lVar91 + 8) + (ulong)(uVar44 - uVar113 * uVar111)) =
                       *puVar97;
                } while (uVar47 != uVar81);
              }
              uVar81 = 0xcbf29ce484222325;
              if (sVar17 != 0) {
                lVar80 = 0;
                iVar31 = 0;
                do {
                  lVar54 = lVar80 + *(long *)(lVar91 + 8);
                  iVar31 = iVar31 + 1;
                  lVar80 = (long)iVar31;
                  uVar81 = uVar81 * 0x100000001b3 ^ (long)*(char *)((long)unaff_x27 + lVar54);
                } while (sVar17 != iVar31);
              }
              uVar47 = (ulong)*(int *)(*(long *)(lVar91 + 8) + (ulong)uVar86);
              if ((uVar81 | uVar47 ^ 0xffffffffffffffff) + (uVar81 ^ uVar47) * 2 +
                  (uVar47 | uVar81 ^ 0xffffffffffffffff) + 2 != uVar87) {
                uVar58 = uVar96;
              }
              puVar91 = (undefined8 *)(ulong)uVar58;
              if (local_2e0 != (long *)0x0) {
                bStack_2d8 = (byte)local_2e0;
                uStack_2d7 = (undefined)((ulong)local_2e0 >> 8);
                uStack_2d6 = (undefined2)((ulong)local_2e0 >> 0x10);
                iStack_2d4 = (int)((ulong)local_2e0 >> 0x20);
                free();
              }
            }
            goto LAB_0012ecfc;
          }
        }
        else {
          uVar58 = local_58c;
          if ((uVar86 == 0xb4a95139) || (uVar58 = local_668, uVar86 == 0xb6925cf2))
          goto LAB_0012ed04;
          if (uVar86 == 0xb6bf25fa) {
            unaff_x27 = *(long ***)(local_470 + 8);
            uVar96 = *(uint *)(unaff_x27 + 2);
            uVar58 = *(uint *)((long)unaff_x27 + 0x14) + 4;
            uVar86 = (uVar58 * 2 | 0x10) - (uVar58 & 0xfffffff7);
            plVar95 = unaff_x27[1];
            uVar113 = uVar86 & 2;
            iVar31 = (uVar58 | 0xfffffff7) + uVar86;
            uVar112 = *(uint *)((long)plVar95 + (ulong)*(uint *)((long)unaff_x27 + 0x14));
            uVar86 = iVar31 + 5;
            *(uint *)((long)unaff_x27 + 0x14) = uVar58;
            uVar111 = iVar31 + 1;
            uVar87 = *(ulong *)((long)plVar95 + (ulong)uVar58);
            *(uint *)((long)unaff_x27 + 0x14) = uVar111;
            iVar31 = (uVar86 ^ 2) + ~uVar113 + (uVar113 | (uVar113 >> 1) << 2);
            uVar113 = *(uint *)((long)plVar95 + (ulong)uVar111);
            *(uint *)((long)unaff_x27 + 0x14) = uVar86;
            sVar17 = *(short *)((long)plVar95 + (ulong)uVar86);
            *(uint *)((long)unaff_x27 + 0x14) = iVar31 + 1U;
            uVar58 = *(uint *)((long)plVar95 + (ulong)(iVar31 + 1U));
            unaff_x24 = (long **)(ulong)uVar58;
            *(uint *)((long)unaff_x27 + 0x14) = iVar31 + 5U;
            uVar111 = *(uint *)((long)plVar95 + (ulong)(iVar31 + 5U));
            *(uint *)((long)unaff_x27 + 0x14) = iVar31 + 9U;
            uVar86 = *(uint *)((long)plVar95 + (ulong)(iVar31 + 9U));
            *(int *)((long)unaff_x27 + 0x14) = iVar31 + 0xd;
            uVar86 = uVar86 ^ uVar96 ^ 0xffffffff;
            uVar115 = 0;
            if (uVar96 != 0) {
              uVar115 = uVar86 / uVar96;
            }
            piVar34 = *(int **)((long)plVar95 + (ulong)(uVar86 - uVar115 * uVar96));
            if (piVar34 == (int *)0x0) {
              iVar31 = -1;
              *local_4b8 = 0x16;
              local_464 = uVar44;
            }
            else {
              local_464 = uVar44;
              uVar81 = syscall(0x39,(long)*piVar34);
              if (uVar81 < 0xfffffffffffff001) {
                if ((int)uVar81 == -1) {
                  iVar31 = *local_4b8;
                  goto LAB_0013c13c;
                }
              }
              else {
                iVar31 = -(int)uVar81;
                *local_4b8 = iVar31;
LAB_0013c13c:
                uVar81 = (ulong)-(uint)(iVar31 != 4);
              }
              iVar31 = (int)uVar81;
              func_0x0016a000(piVar34);
              plVar95 = unaff_x27[1];
            }
            uVar81 = 0xcbf29ce484222325;
            if (sVar17 != 0) {
              uVar113 = uVar113 ^ uVar96 ^ 0xffffffff;
              lVar80 = 0;
              iVar32 = 0;
              uVar86 = 0;
              if (uVar96 != 0) {
                uVar86 = uVar113 / uVar96;
              }
              uVar81 = 0xcbf29ce484222325;
              do {
                lVar91 = lVar80 + (ulong)(uVar113 - uVar86 * uVar96);
                iVar32 = iVar32 + 1;
                lVar80 = (long)iVar32;
                uVar81 = uVar81 * 0x100000001b3 ^ (long)*(char *)((long)plVar95 + lVar91);
              } while (sVar17 != iVar32);
            }
            uVar112 = uVar112 ^ uVar96 ^ 0xffffffff;
            uVar58 = uVar58 ^ uVar96 ^ 0xffffffff;
            uVar111 = uVar111 ^ uVar96 ^ 0xffffffff;
            uVar86 = 0;
            if (uVar96 != 0) {
              uVar86 = uVar112 / uVar96;
            }
            uVar44 = 0;
            if (uVar96 != 0) {
              uVar44 = uVar58 / uVar96;
            }
            uVar81 = uVar81 ^ (long)*(int *)((long)plVar95 + (ulong)(uVar112 - uVar86 * uVar96));
            uVar86 = 0;
            if (uVar96 != 0) {
              uVar86 = uVar111 / uVar96;
            }
            uVar58 = uVar58 - uVar44 * uVar96;
            uVar111 = uVar111 - uVar86 * uVar96;
            if (iVar31 != -1) goto LAB_0013c1dc;
            uVar87 = (uVar87 << 1 | 2) + (uVar87 ^ 1) + (uVar87 << 1 ^ 0xfffffffffffffffc) + 2;
LAB_0013c208:
            pplVar82 = (long **)(ulong)local_464;
            if (uVar81 != uVar87) {
              uVar58 = uVar111;
            }
            puVar91 = (undefined8 *)(ulong)uVar58;
            goto LAB_0012ecfc;
          }
        }
      }
      else if ((int)uVar86 < -0x43053c90) {
        uVar58 = local_620;
        if ((uVar86 == 0xbb6580dc) || (uVar58 = local_780, uVar86 == 0xbcaead09)) goto LAB_0012ed04;
      }
      else {
        if (uVar86 == 0xbcfac370) {
          unaff_x24 = *(long ***)(local_470 + 8);
          uVar112 = *(uint *)(unaff_x24 + 2);
          uVar115 = *(uint *)((long)unaff_x24 + 0x14);
          plVar95 = unaff_x24[1];
          uVar58 = uVar115 + 0xc;
          uVar113 = *(uint *)((long)plVar95 + (ulong)uVar115);
          *(uint *)((long)unaff_x24 + 0x14) = uVar115 + 4;
          uVar111 = (uVar58 | 8) + (uVar58 & 8);
          uVar96 = *(uint *)((long)plVar95 + (ulong)(uVar115 + 4));
          uVar86 = uVar111 + 4;
          *(uint *)((long)unaff_x24 + 0x14) = uVar115 + 8;
          uVar113 = uVar113 ^ uVar112 ^ 0xffffffff;
          uVar115 = *(uint *)((long)plVar95 + (ulong)(uVar115 + 8));
          *(uint *)((long)unaff_x24 + 0x14) = uVar58;
          uVar87 = *(ulong *)((long)plVar95 + (ulong)uVar58);
          *(uint *)((long)unaff_x24 + 0x14) = uVar111;
          uVar96 = uVar96 ^ uVar112 ^ 0xffffffff;
          uVar111 = *(uint *)((long)plVar95 + (ulong)uVar111);
          *(uint *)((long)unaff_x24 + 0x14) = uVar86;
          iVar31 = (uVar86 | 0xfffffffd) + ((uVar86 * 2 | 4) - (uVar86 & 0xfffffffd));
          sVar17 = *(short *)((long)plVar95 + (ulong)uVar86);
          uVar86 = 0;
          if (uVar112 != 0) {
            uVar86 = uVar96 / uVar112;
          }
          *(uint *)((long)unaff_x24 + 0x14) = iVar31 + 1U;
          uVar58 = *(uint *)((long)plVar95 + (ulong)(iVar31 + 1U));
          *(uint *)((long)unaff_x24 + 0x14) = iVar31 + 5U;
          uVar101 = *(uint *)((long)plVar95 + (ulong)(iVar31 + 5U));
          *(uint *)((long)unaff_x24 + 0x14) = iVar31 + 9U;
          uVar94 = *(uint *)((long)plVar95 + (ulong)(iVar31 + 9U));
          *(uint *)((long)unaff_x24 + 0x14) = iVar31 + 0xdU;
          uVar94 = uVar94 ^ uVar112 ^ 0xffffffff;
          uVar85 = 0;
          if (uVar112 != 0) {
            uVar85 = uVar113 / uVar112;
          }
          uVar22 = *(uint *)((long)plVar95 + (ulong)(iVar31 + 0xdU)) ^ uVar112 ^ 0xffffffff;
          uVar7 = 0;
          if (uVar112 != 0) {
            uVar7 = uVar22 / uVar112;
          }
          unaff_x27 = (long **)(ulong)(uVar113 - uVar85 * uVar112);
          *(int *)((long)unaff_x24 + 0x14) = iVar31 + 0x11;
          uVar113 = 0;
          if (uVar112 != 0) {
            uVar113 = uVar94 / uVar112;
          }
          local_464 = uVar44;
          FUN_00149a84_XOR((astruct_3 *)&local_2e0,(char *)plVar95,uVar112,uVar22 - uVar7 * uVar112,
                           uVar96 - uVar86 * uVar112);
          pplVar82 = local_570;
          if (((ulong)local_2e0 & 1) != 0) {
            pplVar82 = (long **)CONCAT44(iStack_2cc,
                                         CONCAT22(uStack_2ce,CONCAT11(uStack_2cf,bStack_2d0)));
          }
          uVar49 = func_0x00169f60(pplVar82,*(undefined4 *)
                                             ((long)unaff_x24[1] +
                                             (ulong)(uVar94 - uVar113 * uVar112)));
          *(undefined8 *)((long)unaff_x24[1] + (long)unaff_x27) = uVar49;
          uVar81 = 0xcbf29ce484222325;
          if (sVar17 != 0) {
            uVar111 = uVar111 ^ uVar112 ^ 0xffffffff;
            lVar80 = 0;
            iVar31 = 0;
            uVar86 = 0;
            if (uVar112 != 0) {
              uVar86 = uVar111 / uVar112;
            }
            uVar81 = 0xcbf29ce484222325;
            do {
              lVar91 = lVar80 + (ulong)(uVar111 - uVar86 * uVar112);
              iVar31 = iVar31 + 1;
              lVar80 = (long)iVar31;
              uVar81 = uVar81 * 0x100000001b3 ^ (long)*(char *)((long)unaff_x24[1] + lVar91);
            } while (sVar17 != iVar31);
          }
          uVar115 = uVar115 ^ uVar112 ^ 0xffffffff;
          uVar86 = 0;
          if (uVar112 != 0) {
            uVar86 = uVar115 / uVar112;
          }
          bVar102 = (byte)local_2e0 & 1 ^ ((byte)local_2e0 | 1) - ((byte)local_2e0 & 0xfe);
          if ((uVar81 ^ (long)*(int *)((long)unaff_x24[1] + (ulong)(uVar115 - uVar86 * uVar112))) !=
              uVar87) {
            uVar58 = uVar101;
          }
          goto joined_r0x00138bec;
        }
        uVar58 = local_678;
        if ((uVar86 == 0xbeb3fc2c) || (uVar58 = local_7f0, uVar86 == 0xbf65031b)) goto LAB_0012ed04;
      }
    }
    else if ((int)uVar86 < -0x12efa4ef) {
      if (-0x2eb6bc42 < (int)uVar86) {
        if ((int)uVar86 < -0x1baf7f1e) {
          if ((int)uVar86 < -0x28e09017) {
            if (uVar86 == 0xd14943bf) {
              lVar80 = *(long *)(local_470 + 8);
              uVar44 = *(uint *)(lVar80 + 0x10);
              uVar111 = *(uint *)(lVar80 + 0x14);
              lVar91 = *(long *)(lVar80 + 8);
              uVar58 = uVar111 + 0xc;
              uVar86 = *(uint *)(lVar91 + (ulong)uVar111) ^ uVar44 ^ 0xffffffff;
              *(uint *)(lVar80 + 0x14) = uVar111 + 4;
              uVar113 = 0;
              if (uVar44 != 0) {
                uVar113 = uVar86 / uVar44;
              }
              uVar115 = *(uint *)(lVar91 + (ulong)(uVar111 + 4));
              *(uint *)(lVar80 + 0x14) = uVar111 + 8;
              iVar31 = (uVar58 ^ 8) + uVar58 * 2 + (uVar111 * -2 - 0x1a | 0x10);
              uVar101 = *(uint *)(lVar91 + (ulong)(uVar111 + 8));
              *(uint *)(lVar80 + 0x14) = uVar58;
              uVar111 = iVar31 + 2;
              uVar112 = iVar31 + 6;
              lVar54 = *(long *)(lVar91 + (ulong)uVar58);
              *(uint *)(lVar80 + 0x14) = uVar111;
              uVar94 = *(uint *)(lVar91 + (ulong)uVar111);
              *(uint *)(lVar80 + 0x14) = uVar112;
              uVar115 = uVar115 ^ uVar44 ^ 0xffffffff;
              sVar17 = *(short *)(lVar91 + (ulong)uVar112);
              uVar58 = ((uVar112 ^ 0xffffffff) & 0xfffffffd) * -3 +
                       (~uVar111 | 0xfffffffd) + (uVar112 * 2 ^ 0xfffffffa);
              *(uint *)(lVar80 + 0x14) = uVar58;
              uVar96 = *(uint *)(lVar91 + (ulong)uVar58);
              *(uint *)(lVar80 + 0x14) = uVar58 + 4;
              uVar111 = *(uint *)(lVar91 + (ulong)(uVar58 + 4));
              *(uint *)(lVar80 + 0x14) = uVar58 + 8;
              uVar58 = 0;
              if (uVar44 != 0) {
                uVar58 = uVar115 / uVar44;
              }
              uVar86 = *(uint *)(lVar91 + (ulong)(uVar86 - uVar113 * uVar44)) ^ uVar44 ^ 0xffffffff;
              uVar113 = 0;
              if (uVar44 != 0) {
                uVar113 = uVar86 / uVar44;
              }
              uVar86 = uVar86 - uVar113 * uVar44;
              *(int *)(lVar91 + (ulong)(uVar115 - uVar58 * uVar44)) =
                   (int)(short)(*(ushort *)(lVar91 + (ulong)uVar86) ^ (ushort)uVar86 ^ 0xffff);
              uVar87 = 0xcbf29ce484222325;
              if (sVar17 != 0) {
                uVar94 = uVar94 ^ uVar44 ^ 0xffffffff;
                lVar91 = 0;
                iVar31 = 0;
                uVar58 = 0;
                if (uVar44 != 0) {
                  uVar58 = uVar94 / uVar44;
                }
                uVar87 = 0xcbf29ce484222325;
                do {
                  pcVar42 = (char *)(*(long *)(lVar80 + 8) + (ulong)(uVar94 - uVar58 * uVar44) +
                                    lVar91);
                  iVar31 = iVar31 + 1;
                  lVar91 = (long)iVar31;
                  uVar87 = uVar87 * 0x100000001b3 ^ (long)*pcVar42;
                } while (sVar17 != iVar31);
              }
              uVar101 = uVar101 ^ uVar44 ^ 0xffffffff;
              uVar58 = 0;
              if (uVar44 != 0) {
                uVar58 = uVar101 / uVar44;
              }
              uVar81 = (ulong)*(int *)(*(long *)(lVar80 + 8) + (ulong)(uVar101 - uVar58 * uVar44));
              if ((uVar81 - uVar87) + (uVar87 & (uVar81 ^ 0xffffffffffffffff)) * 2 != lVar54) {
                uVar96 = uVar111;
              }
LAB_001396a8:
              uVar96 = uVar96 ^ uVar44 ^ 0xffffffff;
              uVar58 = 0;
              if (uVar44 != 0) {
                uVar58 = uVar96 / uVar44;
              }
              puVar91 = (undefined8 *)(ulong)(uVar96 - uVar58 * uVar44);
              goto LAB_0012ecfc;
            }
            uVar58 = local_77c;
            if (uVar86 != 0xd65e876f) goto LAB_0013267c;
          }
          else {
            uVar58 = local_5b4;
            if (uVar86 != 0xd71f6fe9) {
              if (uVar86 == 0xdd6d7075) {
                lVar91 = *(long *)(local_470 + 8);
                uVar111 = *(uint *)(lVar91 + 0x10);
                uVar115 = *(uint *)(lVar91 + 0x14);
                lVar80 = *(long *)(lVar91 + 8);
                uVar112 = *(uint *)(lVar80 + (ulong)uVar115);
                *(uint *)(lVar91 + 0x14) = uVar115 + 4;
                uVar58 = uVar115 + 0x10;
                uVar86 = *(uint *)(lVar80 + (ulong)(uVar115 + 4));
                *(uint *)(lVar91 + 0x14) = uVar115 + 8;
                uVar113 = *(uint *)(lVar80 + (ulong)(uVar115 + 8));
                *(uint *)(lVar91 + 0x14) = uVar115 + 0xc;
                uVar86 = uVar86 ^ uVar111 ^ 0xffffffff;
                uVar96 = *(uint *)(lVar80 + (ulong)(uVar115 + 0xc));
                iVar31 = (uVar58 ^ 8) + (uVar115 << 1 | 0xffffffee);
                uVar115 = 0;
                if (uVar111 != 0) {
                  uVar115 = uVar86 / uVar111;
                }
                uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
                *(uint *)(lVar91 + 0x14) = uVar58;
                uVar112 = uVar112 ^ uVar111 ^ 0xffffffff;
                uVar94 = iVar31 + 0x12;
                local_498 = *(long ***)(lVar80 + (ulong)uVar58);
                *(uint *)(lVar91 + 0x14) = uVar94;
                uVar58 = iVar31 + 0x16;
                uVar96 = uVar96 ^ uVar111 ^ 0xffffffff;
                uVar101 = *(uint *)(lVar80 + (ulong)uVar94);
                *(uint *)(lVar91 + 0x14) = uVar58;
                uVar101 = uVar101 ^ uVar111 ^ 0xffffffff;
                sVar17 = *(short *)(lVar80 + (ulong)uVar58);
                uVar85 = 0;
                if (uVar111 != 0) {
                  uVar85 = uVar113 / uVar111;
                }
                iVar31 = (uVar58 ^ 2) + uVar58 * 2 + (uVar94 * -2 - 10 | 4);
                uVar58 = 0;
                if (uVar111 != 0) {
                  uVar58 = uVar112 / uVar111;
                }
                *(uint *)(lVar91 + 0x14) = iVar31 + 2U;
                uVar33 = *(undefined4 *)(lVar80 + (ulong)(iVar31 + 2U));
                *(uint *)(lVar91 + 0x14) = iVar31 + 6U;
                local_4b0 = (long **)CONCAT44(local_4b0._4_4_,uVar33);
                uVar94 = 0;
                if (uVar111 != 0) {
                  uVar94 = uVar96 / uVar111;
                }
                uVar33 = *(undefined4 *)(lVar80 + (ulong)(iVar31 + 6U));
                *(int *)(lVar91 + 0x14) = iVar31 + 10;
                local_4d0 = (long **)CONCAT44(local_4d0._4_4_,uVar33);
                plVar95 = *(long **)(lVar80 + (ulong)(uVar113 - uVar85 * uVar111));
                uVar113 = 0;
                if (uVar111 != 0) {
                  uVar113 = uVar101 / uVar111;
                }
                local_4f0 = (long *)CONCAT44(local_4f0._4_4_,uVar96 - uVar94 * uVar111);
                local_490 = (long **)(long)*(int *)(lVar80 + (ulong)(uVar112 - uVar58 * uVar111));
                local_508 = (undefined *)CONCAT44(local_508._4_4_,uVar101 - uVar113 * uVar111);
                pplVar82 = (long **)plVar95[4];
                uVar87 = *(long *)(lVar80 + (ulong)(uVar86 - uVar115 * uVar111)) << 3;
                local_464 = uVar44;
                do {
                  while( true ) {
                    pplVar100 = (long **)plVar95[3];
                    pbVar98 = (byte *)((long)pplVar82 - (long)pplVar100);
                    uVar47 = plVar95[1] - *plVar95;
                    uVar81 = 0;
                    if (uVar47 != 0) {
                      uVar81 = (ulong)pbVar98 / uVar47;
                    }
                    bVar102 = pbVar98[*plVar95 - uVar81 * uVar47] ^
                              ((byte)uVar87 & 0x7f | (0x7f < uVar87) << 7);
                    if (pplVar82 < (long **)plVar95[5]) break;
                    pbVar66 = pbVar98 + 1;
                    if ((long)pbVar66 < 0) goto LAB_00142498;
                    uVar81 = (long)(long **)plVar95[5] - (long)pplVar100;
                    pbVar61 = (byte *)(uVar81 * 2);
                    if (pbVar61 < pbVar66 || (long)pbVar61 - (long)pbVar66 == 0) {
                      pbVar61 = pbVar66;
                    }
                    if (0x3ffffffffffffffe < uVar81) {
                      pbVar61 = (byte *)0x7fffffffffffffff;
                    }
                    if (pbVar61 == (byte *)0x0) {
                      pbVar36 = (byte *)0x0;
                      *pbVar98 = bVar102;
                      pbVar66 = pbVar98;
                    }
                    else {
                      pbVar36 = (byte *)malloc(pbVar61);
                      pbVar66 = pbVar36 + (long)pbVar98;
                      *pbVar66 = bVar102;
                    }
                    pplVar88 = (long **)(pbVar66 + 1);
                    if (pplVar82 != pplVar100) {
                      if ((pbVar98 < (byte *)0x8) ||
                         ((ulong)((long)pplVar100 - (long)pbVar36) < 0x20)) {
LAB_00133a84:
                        do {
                          pbVar66 = pbVar66 + -1;
                          pplVar82 = (long **)((long)pplVar82 + -1);
                          *pbVar66 = *(byte *)pplVar82;
                        } while (pplVar82 != pplVar100);
                      }
                      else if (pbVar98 < (byte *)0x20) {
                        pbVar52 = (byte *)0x0;
LAB_00133a34:
                        puVar84 = (undefined8 *)((long)pplVar82 - (long)pbVar52);
                        pbVar72 = (byte *)((ulong)pbVar98 & 0xfffffffffffffff8);
                        pplVar82 = (long **)((long)pplVar82 - (long)pbVar72);
                        puVar91 = (undefined8 *)(pbVar36 + ((long)puVar84 - (long)pplVar100));
                        lVar80 = (long)pbVar52 - (long)pbVar72;
                        do {
                          puVar84 = puVar84 + -1;
                          puVar91 = puVar91 + -1;
                          lVar80 = lVar80 + 8;
                          *puVar91 = *puVar84;
                        } while (lVar80 != 0);
                        if (pbVar98 != pbVar72) {
                          pbVar66 = pbVar66 + -(long)pbVar72;
                          goto LAB_00133a84;
                        }
                      }
                      else {
                        pbVar52 = (byte *)((ulong)pbVar98 & 0xffffffffffffffe0);
                        pplVar77 = pplVar82 + -2;
                        pplVar71 = (long **)(pbVar36 + (long)pbVar98 + -0x10);
                        pbVar72 = pbVar52;
                        do {
                          pplVar70 = pplVar77 + -1;
                          plVar79 = pplVar77[-2];
                          plVar39 = pplVar77[1];
                          plVar48 = *pplVar77;
                          pbVar72 = pbVar72 + -0x20;
                          pplVar77 = pplVar77 + -4;
                          pplVar71[-1] = *pplVar70;
                          pplVar71[-2] = plVar79;
                          pplVar71[1] = plVar39;
                          *pplVar71 = plVar48;
                          pplVar71 = pplVar71 + -4;
                        } while (pbVar72 != (byte *)0x0);
                        if (pbVar98 != pbVar52) {
                          if (((ulong)pbVar98 & 0x18) == 0) {
                            pbVar66 = pbVar66 + -(long)pbVar52;
                            pplVar82 = (long **)((long)pplVar82 - (long)pbVar52);
                            goto LAB_00133a84;
                          }
                          goto LAB_00133a34;
                        }
                      }
                      pplVar82 = (long **)plVar95[3];
                      pbVar66 = pbVar36;
                    }
                    plVar95[3] = (long)pbVar66;
                    plVar95[4] = (long)pplVar88;
                    plVar95[5] = (long)(pbVar36 + (long)pbVar61);
                    if (pplVar82 != (long **)0x0) {
                      free(pplVar82);
                    }
                    plVar95[4] = (long)pplVar88;
                    bVar28 = uVar87 < 0x80;
                    pplVar82 = pplVar88;
                    uVar87 = uVar87 >> 7;
                    if (bVar28) goto LAB_00133acc;
                  }
                  pplVar88 = (long **)((long)pplVar82 + 1);
                  *(byte *)pplVar82 = bVar102;
                  plVar95[4] = (long)pplVar88;
                  bVar28 = 0x7f < uVar87;
                  pplVar82 = pplVar88;
                  uVar87 = uVar87 >> 7;
                } while (bVar28);
LAB_00133acc:
                uVar87 = (long)local_490 >> 0x3f ^ (long)local_490 << 1;
                do {
                  unaff_x24 = (long **)plVar95[3];
                  puVar97 = (undefined *)((long)pplVar88 - (long)unaff_x24);
                  uVar47 = plVar95[1] - *plVar95;
                  uVar81 = 0;
                  if (uVar47 != 0) {
                    uVar81 = (ulong)puVar97 / uVar47;
                  }
                  uVar58 = (uint)(byte)puVar97[*plVar95 - uVar81 * uVar47] ^
                           ((uint)uVar87 & 0x7f | (uint)(0x7f < uVar87) << 7);
                  unaff_x27 = (long **)(ulong)uVar58;
                  uVar13 = (undefined)uVar58;
                  if (pplVar88 < (long **)plVar95[5]) {
                    *(undefined *)pplVar88 = uVar13;
                    pplVar82 = (long **)((long)pplVar88 + 1);
                  }
                  else {
                    puVar46 = puVar97 + 1;
                    if ((long)puVar46 < 0) goto LAB_00142498;
                    uVar81 = (long)(long **)plVar95[5] - (long)unaff_x24;
                    puVar62 = (undefined *)(uVar81 * 2);
                    if (puVar62 < puVar46 || (long)puVar62 - (long)puVar46 == 0) {
                      puVar62 = puVar46;
                    }
                    if (0x3ffffffffffffffe < uVar81) {
                      puVar62 = (undefined *)0x7fffffffffffffff;
                    }
                    if (puVar62 == (undefined *)0x0) {
                      puVar37 = (undefined *)0x0;
                      *puVar97 = uVar13;
                      puVar46 = puVar97;
                    }
                    else {
                      puVar37 = (undefined *)malloc(puVar62);
                      puVar46 = puVar37 + (long)puVar97;
                      *puVar46 = uVar13;
                    }
                    pplVar82 = (long **)(puVar46 + 1);
                    if (pplVar88 != unaff_x24) {
                      if ((puVar97 < (undefined *)0x8) ||
                         ((ulong)((long)unaff_x24 - (long)puVar37) < 0x20)) {
LAB_00133c4c:
                        do {
                          puVar46 = puVar46 + -1;
                          pplVar88 = (long **)((long)pplVar88 + -1);
                          *puVar46 = *(undefined *)pplVar88;
                        } while (pplVar88 != unaff_x24);
                      }
                      else if (puVar97 < (undefined *)0x20) {
                        puVar53 = (undefined *)0x0;
LAB_00133bfc:
                        puVar84 = (undefined8 *)((long)pplVar88 - (long)puVar53);
                        puVar73 = (undefined *)((ulong)puVar97 & 0xfffffffffffffff8);
                        pplVar88 = (long **)((long)pplVar88 - (long)puVar73);
                        puVar91 = (undefined8 *)(puVar37 + ((long)puVar84 - (long)unaff_x24));
                        lVar80 = (long)puVar53 - (long)puVar73;
                        do {
                          puVar84 = puVar84 + -1;
                          puVar91 = puVar91 + -1;
                          lVar80 = lVar80 + 8;
                          *puVar91 = *puVar84;
                        } while (lVar80 != 0);
                        if (puVar97 != puVar73) {
                          puVar46 = puVar46 + -(long)puVar73;
                          goto LAB_00133c4c;
                        }
                      }
                      else {
                        puVar53 = (undefined *)((ulong)puVar97 & 0xffffffffffffffe0);
                        pplVar100 = pplVar88 + -2;
                        pplVar77 = (long **)(puVar37 + (long)puVar97 + -0x10);
                        puVar73 = puVar53;
                        do {
                          pplVar71 = pplVar100 + -1;
                          plVar79 = pplVar100[-2];
                          plVar39 = pplVar100[1];
                          plVar48 = *pplVar100;
                          puVar73 = puVar73 + -0x20;
                          pplVar100 = pplVar100 + -4;
                          pplVar77[-1] = *pplVar71;
                          pplVar77[-2] = plVar79;
                          pplVar77[1] = plVar39;
                          *pplVar77 = plVar48;
                          pplVar77 = pplVar77 + -4;
                        } while (puVar73 != (undefined *)0x0);
                        if (puVar97 != puVar53) {
                          if (((ulong)puVar97 & 0x18) == 0) {
                            puVar46 = puVar46 + -(long)puVar53;
                            pplVar88 = (long **)((long)pplVar88 - (long)puVar53);
                            goto LAB_00133c4c;
                          }
                          goto LAB_00133bfc;
                        }
                      }
                      pplVar88 = (long **)plVar95[3];
                      puVar46 = puVar37;
                    }
                    plVar95[3] = (long)puVar46;
                    plVar95[4] = (long)pplVar82;
                    plVar95[5] = (long)(puVar37 + (long)puVar62);
                    if (pplVar88 != (long **)0x0) {
                      free(pplVar88);
                    }
                  }
                  pplVar88 = pplVar82;
                  plVar95[4] = (long)pplVar88;
                  bVar28 = 0x7f < uVar87;
                  uVar87 = uVar87 >> 7;
                } while (bVar28);
                uVar87 = 0xcbf29ce484222325;
                if (sVar17 != 0) {
                  lVar80 = 0;
                  iVar31 = 0;
                  do {
                    pcVar42 = (char *)(*(long *)(lVar91 + 8) + ((ulong)local_508 & 0xffffffff) +
                                      lVar80);
                    iVar31 = iVar31 + 1;
                    lVar80 = (long)iVar31;
                    uVar87 = uVar87 * 0x100000001b3 ^ (long)*pcVar42;
                  } while (sVar17 != iVar31);
                }
                uVar81 = (ulong)*(int *)(*(long *)(lVar91 + 8) + ((ulong)local_4f0 & 0xffffffff));
                pplVar82 = (long **)((uVar81 - uVar87) +
                                    (uVar87 & (uVar81 ^ 0xffffffffffffffff)) * 2);
                goto LAB_00139594;
              }
              local_464 = uVar44;
              if (uVar86 != 0xdfad7c4f) goto LAB_0013267c;
              lVar91 = *(long *)(local_470 + 8);
              uVar111 = *(uint *)(lVar91 + 0x10);
              lVar80 = *(long *)(lVar91 + 8);
              uVar58 = *(uint *)(lVar91 + 0x14) + 4;
              uVar112 = *(uint *)(lVar80 + (ulong)*(uint *)(lVar91 + 0x14));
              *(uint *)(lVar91 + 0x14) = uVar58;
              unaff_x24 = *(long ***)(lVar80 + (ulong)uVar58);
              iVar31 = (uVar58 ^ 0xfffffff7) + (uVar58 * 2 | 0x10);
              uVar58 = iVar31 + 1;
              uVar86 = iVar31 + 5;
              *(uint *)(lVar91 + 0x14) = uVar58;
              uVar33 = *(undefined4 *)(lVar80 + (ulong)uVar58);
              *(uint *)(lVar91 + 0x14) = uVar86;
              sVar17 = *(short *)(lVar80 + (ulong)uVar86);
              unaff_x27 = (long **)(long)sVar17;
              uVar86 = (uVar58 * 2 & 4) + (uVar86 ^ 2);
              local_498 = (long **)CONCAT44(local_498._4_4_,uVar33);
              *(uint *)(lVar91 + 0x14) = uVar86;
              uVar58 = *(uint *)(lVar80 + (ulong)uVar86);
              *(uint *)(lVar91 + 0x14) = uVar86 + 4;
              uVar33 = *(undefined4 *)(lVar80 + (ulong)(uVar86 + 4));
              *(uint *)(lVar91 + 0x14) = uVar86 + 8;
              uVar113 = *(uint *)(lVar80 + (ulong)(uVar86 + 8)) ^ uVar111 ^ 0xffffffff;
              uVar96 = 0;
              if (uVar111 != 0) {
                uVar96 = uVar113 / uVar111;
              }
              uVar113 = uVar113 - uVar96 * uVar111;
              *(uint *)(lVar91 + 0x14) = uVar86 + 0xc;
              local_320 = (undefined  [8])CONCAT44(local_320._4_4_,uVar113);
              uVar96 = *(uint *)(lVar80 + (ulong)(uVar86 + 0xc));
              *(uint *)(lVar91 + 0x14) = uVar86 + 0x10;
              uVar115 = *(uint *)(lVar80 + (ulong)(uVar86 + 0x10));
              *(uint *)(lVar91 + 0x14) = uVar86 + 0x14;
              uVar87 = *(ulong *)(lVar80 + (ulong)uVar113);
              _local_1a0 = (long *)0x0;
              lVar80 = (((ulong)local_320 | uVar87 ^ 0xffffffffffffffff) - (uVar87 | local_680)) +
                       (uVar87 & local_680) * 2;
              local_360[0] = (byte)lVar80;
              local_360._1_5_ = (undefined5)((ulong)lVar80 >> 8);
              uStack_35a = (undefined2)((ulong)lVar80 >> 0x30);
              uVar30 = func_0x0016a240(0xa7,3);
              func_0x0016a240(0xa7,4,1);
              func_0x0016a240(0xa7,0x59616d61,0xffffffffffffffff);
              iVar31 = func_0x0016a240(0xdc,0,0,0,0);
              local_490 = (long **)CONCAT44(local_490._4_4_,uVar33);
              if (iVar31 < 0) {
LAB_0013d5f8:
                iVar31 = -1;
              }
              else {
                if (iVar31 != 0) {
                  local_2e0 = (long *)((ulong)local_2e0 & 0xffffffff00000000);
                  do {
                    iVar32 = func_0x0016a240(0x104,iVar31,&local_2e0,0x80000000,0);
                    if (iVar32 != -1) {
                      if (-1 < iVar32) {
                        if ((iVar32 != 0) && (((ulong)local_2e0 & 0x7f) == 0)) {
                          iVar31 = -((uint)local_2e0 >> 8 & 0xff);
                          goto LAB_0013d5fc;
                        }
                        func_0x0016a240(0x81,iVar31,9);
                      }
                      break;
                    }
                    piVar34 = (int *)func_0x0016a0b0();
                  } while (*piVar34 == 4);
                  goto LAB_0013d5f8;
                }
                uVar33 = func_0x0016a240(0xad);
                iVar31 = func_0x0016a240(0x75,0x10,uVar33);
                if (iVar31 < 0) {
                  func_0x0016a240(0x5d,-iVar31);
                }
                uVar86 = 0;
                local_2e0 = (long *)((ulong)local_2e0 & 0xffffffff00000000);
LAB_0013d114:
                do {
                  iVar31 = func_0x0016a240(0x104,uVar33,&local_2e0,0x40000000,0);
                  if (iVar31 == -1) {
                    piVar34 = (int *)func_0x0016a0b0();
                    if (*piVar34 == 4) goto LAB_0013d114;
                  }
                  if (((uint)local_2e0 & 0xff) == 0x7f) {
                    uVar86 = (uint)local_2e0 >> 8 & 0xff;
                    if (uVar86 == 0x13) break;
                    func_0x0016a240(0x75,7,uVar33,0,uVar86);
                    if (uVar86 == 0x13) break;
                    goto LAB_0013d114;
                  }
                  func_0x0016a240(0x5d,1);
                } while (uVar86 != 0x13);
                local_2e0 = (long *)0x0;
                func_0x0016a240(0x75,2,uVar33,local_360,&local_2e0);
                func_0x0016a240(0x75,5,uVar33,&local_1a0,local_2e0);
                func_0x0016a240(0x75,0x11,uVar33,0,0);
                func_0x0016a240(0x5d,0);
                iVar31 = 0;
              }
LAB_0013d5fc:
              uVar96 = uVar96 ^ uVar111 ^ 0xffffffff;
              uVar115 = uVar115 ^ uVar111 ^ 0xffffffff;
              uVar86 = 0;
              if (uVar111 != 0) {
                uVar86 = uVar96 / uVar111;
              }
              uVar44 = 0;
              if (uVar111 != 0) {
                uVar44 = uVar115 / uVar111;
              }
              func_0x0016a240(0xa7,0x59616d61,0);
              func_0x0016a240(0xa7,4,uVar30);
              _local_1a0 = (long *)((((ulong)_local_1a0 | (ulong)local_320) + local_680) -
                                   ((ulong)_local_1a0 | local_680));
              uVar87 = 0xcbf29ce484222325;
              *(int *)(*(long *)(lVar91 + 8) + (ulong)(uVar115 - uVar44 * uVar111)) = iVar31;
              *(long **)(*(long *)(lVar91 + 8) + (ulong)(uVar96 - uVar86 * uVar111)) = _local_1a0;
              if (sVar17 != 0) {
                lVar80 = 0;
                iVar31 = 0;
                uVar86 = (uint)local_498 ^ uVar111 ^ 0xffffffff;
                uVar44 = 0;
                if (uVar111 != 0) {
                  uVar44 = uVar86 / uVar111;
                }
                uVar87 = 0xcbf29ce484222325;
                do {
                  pcVar42 = (char *)(*(long *)(lVar91 + 8) + (ulong)(uVar86 - uVar44 * uVar111) +
                                    lVar80);
                  iVar31 = iVar31 + 1;
                  lVar80 = (long)iVar31;
                  uVar87 = uVar87 * 0x100000001b3 ^ (long)*pcVar42;
                } while (sVar17 != iVar31);
              }
              uVar112 = uVar112 ^ uVar111 ^ 0xffffffff;
              uVar86 = 0;
              if (uVar111 != 0) {
                uVar86 = uVar112 / uVar111;
              }
              uVar81 = (ulong)*(int *)(*(long *)(lVar91 + 8) + (ulong)(uVar112 - uVar86 * uVar111));
              if ((long **)((uVar81 + ~(uVar87 & uVar81)) - (uVar81 | uVar87 ^ 0xffffffffffffffff))
                  != unaff_x24) {
                uVar58 = (uint)local_490;
              }
LAB_001395a8:
              uVar58 = uVar58 ^ uVar111 ^ 0xffffffff;
LAB_001395ac:
              uVar86 = 0;
              if (uVar111 != 0) {
                uVar86 = uVar58 / uVar111;
              }
              pplVar82 = (long **)(ulong)local_464;
              goto LAB_0012ecf0;
            }
          }
        }
        else if ((int)uVar86 < -0x19379fd3) {
          pplVar82 = (long **)((ulong)pplVar100 & 0xffffffff);
          uVar58 = local_66c;
          if (uVar86 != 0xe45080e2) {
            if (uVar86 == 0xe505d81f) {
              lVar91 = *(long *)(local_470 + 8);
              uVar111 = *(uint *)(lVar91 + 0x10);
              lVar80 = *(long *)(lVar91 + 8);
              uVar58 = *(uint *)(lVar91 + 0x14) + 4;
              uVar96 = *(uint *)(lVar80 + (ulong)*(uint *)(lVar91 + 0x14));
              *(uint *)(lVar91 + 0x14) = uVar58;
              uVar87 = *(ulong *)(lVar80 + (ulong)uVar58);
              uVar86 = (uVar58 * 2 | 0x11) + (uVar58 ^ 0xfffffff7);
              uVar58 = uVar86 + 4;
              *(uint *)(lVar91 + 0x14) = uVar86;
              uVar94 = *(uint *)(lVar80 + (ulong)uVar86);
              *(uint *)(lVar91 + 0x14) = uVar58;
              sVar17 = *(short *)(lVar80 + (ulong)uVar58);
              uVar86 = (uVar86 * 2 & 4) + (uVar58 ^ 2);
              *(uint *)(lVar91 + 0x14) = uVar86;
              uVar58 = *(uint *)(lVar80 + (ulong)uVar86);
              *(uint *)(lVar91 + 0x14) = uVar86 + 4;
              uVar115 = *(uint *)(lVar80 + (ulong)(uVar86 + 4));
              *(uint *)(lVar91 + 0x14) = uVar86 + 8;
              uVar113 = *(uint *)(lVar80 + (ulong)(uVar86 + 8));
              *(uint *)(lVar91 + 0x14) = uVar86 + 0xc;
              uVar112 = *(uint *)(lVar80 + (ulong)(uVar86 + 0xc));
              *(uint *)(lVar91 + 0x14) = uVar86 + 0x10;
              uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
              uVar86 = 0;
              if (uVar111 != 0) {
                uVar86 = uVar113 / uVar111;
              }
              local_464 = uVar44;
              uVar81 = syscall(0x38,0xffffffffffffff9c,
                               *(undefined8 *)(lVar80 + (ulong)(uVar113 - uVar86 * uVar111)),0x84000
                               ,0);
              iVar31 = (int)uVar81;
              if (uVar81 < 0xfffffffffffff001) {
                if (iVar31 == -1) {
                  piVar34 = (int *)0x0;
                }
                else {
                  piVar34 = (int *)func_0x0016a250(1,0x1090);
                  if (piVar34 != (int *)0x0) {
                    *piVar34 = iVar31;
                  }
                }
              }
              else {
                piVar34 = (int *)0x0;
                *local_4b8 = -iVar31;
              }
              uVar112 = uVar112 ^ uVar111 ^ 0xffffffff;
              uVar86 = 0;
              if (uVar111 != 0) {
                uVar86 = uVar112 / uVar111;
              }
              uVar81 = 0xcbf29ce484222325;
              *(int **)(*(long *)(lVar91 + 8) + (ulong)(uVar112 - uVar86 * uVar111)) = piVar34;
              if (sVar17 != 0) {
                uVar86 = uVar94 ^ uVar111 ^ 0xffffffff;
                lVar80 = 0;
                iVar31 = 0;
                uVar44 = 0;
                if (uVar111 != 0) {
                  uVar44 = uVar86 / uVar111;
                }
                uVar81 = 0xcbf29ce484222325;
                do {
                  pcVar42 = (char *)(*(long *)(lVar91 + 8) + (ulong)(uVar86 - uVar44 * uVar111) +
                                    lVar80);
                  iVar31 = iVar31 + 1;
                  lVar80 = (long)iVar31;
                  uVar81 = uVar81 * 0x100000001b3 ^ (long)*pcVar42;
                } while (sVar17 != iVar31);
              }
              uVar96 = uVar96 ^ uVar111 ^ 0xffffffff;
              uVar86 = 0;
              if (uVar111 != 0) {
                uVar86 = uVar96 / uVar111;
              }
              uVar81 = uVar81 ^ (long)*(int *)(*(long *)(lVar91 + 8) +
                                              (ulong)(uVar96 - uVar86 * uVar111));
LAB_0013d898:
              unaff_x27 = (long **)(ulong)uVar94;
              unaff_x24 = (long **)(ulong)uVar115;
              if (uVar81 != uVar87) {
                uVar58 = uVar115;
              }
              goto LAB_001395a8;
            }
            goto LAB_0013267c;
          }
        }
        else {
          if (uVar86 == 0xe6c8602d) {
            unaff_x24 = *(long ***)(local_470 + 8);
            uVar113 = *(uint *)(unaff_x24 + 2);
            uVar111 = *(uint *)((long)unaff_x24 + 0x14);
            plVar95 = unaff_x24[1];
            uVar58 = uVar111 + 8;
            uVar86 = *(uint *)((long)plVar95 + (ulong)uVar111) ^ uVar113 ^ 0xffffffff;
            uVar112 = 0;
            if (uVar113 != 0) {
              uVar112 = uVar86 / uVar113;
            }
            *(uint *)((long)unaff_x24 + 0x14) = uVar111 + 4;
            iVar31 = (uVar58 ^ 8) + uVar58 * 2 + (uVar111 * -2 - 0x12 | 0x10);
            uVar94 = *(uint *)((long)plVar95 + (ulong)(uVar111 + 4));
            *(uint *)((long)unaff_x24 + 0x14) = uVar58;
            uVar111 = iVar31 + 2;
            uVar87 = *(ulong *)((long)plVar95 + (ulong)uVar58);
            uVar58 = iVar31 + 6;
            *(uint *)((long)unaff_x24 + 0x14) = uVar111;
            uVar115 = *(uint *)((long)plVar95 + (ulong)uVar111);
            *(uint *)((long)unaff_x24 + 0x14) = uVar58;
            sVar17 = *(short *)((long)plVar95 + (ulong)uVar58);
            unaff_x27 = (long **)(long)sVar17;
            uVar96 = (uVar111 * 2 & 4) + (uVar58 ^ 2);
            *(uint *)((long)unaff_x24 + 0x14) = uVar96;
            uVar58 = *(uint *)((long)plVar95 + (ulong)uVar96);
            *(uint *)((long)unaff_x24 + 0x14) = uVar96 + 4;
            uVar111 = *(uint *)((long)plVar95 + (ulong)(uVar96 + 4));
            *(uint *)((long)unaff_x24 + 0x14) = uVar96 + 8;
            piVar34 = *(int **)((long)plVar95 + (ulong)(uVar86 - uVar112 * uVar113));
            local_464 = uVar44;
            uVar47 = syscall(0x39,(long)*piVar34);
            if (uVar47 < 0xfffffffffffff001) {
              if ((int)uVar47 == -1) {
                iVar31 = *local_4b8;
                goto LAB_0013af30;
              }
            }
            else {
              iVar31 = -(int)uVar47;
              *local_4b8 = iVar31;
LAB_0013af30:
              uVar47 = (ulong)-(uint)(iVar31 != 4);
            }
            func_0x0016a000(piVar34);
            uVar81 = 0xcbf29ce484222325;
            if (sVar17 != 0) {
              uVar115 = uVar115 ^ uVar113 ^ 0xffffffff;
              lVar80 = 0;
              iVar31 = 0;
              uVar86 = 0;
              if (uVar113 != 0) {
                uVar86 = uVar115 / uVar113;
              }
              uVar81 = 0xcbf29ce484222325;
              do {
                lVar91 = lVar80 + (ulong)(uVar115 - uVar86 * uVar113);
                iVar31 = iVar31 + 1;
                lVar80 = (long)iVar31;
                uVar81 = uVar81 * 0x100000001b3 ^ (long)*(char *)((long)unaff_x24[1] + lVar91);
              } while (sVar17 != iVar31);
            }
            uVar94 = uVar94 ^ uVar113 ^ 0xffffffff;
            uVar58 = uVar58 ^ uVar113 ^ 0xffffffff;
            uVar111 = uVar111 ^ uVar113 ^ 0xffffffff;
            uVar86 = 0;
            if (uVar113 != 0) {
              uVar86 = uVar94 / uVar113;
            }
            uVar44 = 0;
            if (uVar113 != 0) {
              uVar44 = uVar58 / uVar113;
            }
            uVar81 = uVar81 ^ (long)*(int *)((long)unaff_x24[1] + (ulong)(uVar94 - uVar86 * uVar113)
                                            );
            uVar86 = 0;
            if (uVar113 != 0) {
              uVar86 = uVar111 / uVar113;
            }
            uVar58 = uVar58 - uVar44 * uVar113;
            uVar111 = uVar111 - uVar86 * uVar113;
            if ((int)uVar47 != 0) {
              uVar87 = uVar87 + (uVar87 | 1) + (~uVar87 | 1) + 1;
              goto LAB_0013c208;
            }
LAB_0013c1dc:
            pplVar82 = (long **)(ulong)local_464;
            if (uVar81 != uVar87) {
              uVar58 = uVar111;
            }
            puVar91 = (undefined8 *)(ulong)uVar58;
            goto LAB_0012ecfc;
          }
          uVar58 = local_60c;
          if (uVar86 != 0xeb794ab6) {
            if (uVar86 != 0xebacae21) goto LAB_0013267c;
            lVar91 = *(long *)(local_470 + 8);
            uVar112 = *(uint *)(lVar91 + 0x10);
            uVar86 = *(uint *)(lVar91 + 0x14);
            lVar80 = *(long *)(lVar91 + 8);
            uVar58 = uVar86 + 0xc;
            uVar96 = *(uint *)(lVar80 + (ulong)uVar86);
            *(uint *)(lVar91 + 0x14) = uVar86 + 4;
            uVar113 = *(uint *)(lVar80 + (ulong)(uVar86 + 4));
            *(uint *)(lVar91 + 0x14) = uVar86 + 8;
            uVar111 = (uVar58 * 2 & 0x10) + (uVar58 ^ 8);
            uVar115 = *(uint *)(lVar80 + (ulong)(uVar86 + 8));
            unaff_x24 = (long **)(ulong)uVar115;
            *(uint *)(lVar91 + 0x14) = uVar58;
            uVar86 = uVar111 + 4;
            uVar113 = uVar113 ^ uVar112 ^ 0xffffffff;
            pplVar82 = *(long ***)(lVar80 + (ulong)uVar58);
            *(uint *)(lVar91 + 0x14) = uVar111;
            uVar111 = *(uint *)(lVar80 + (ulong)uVar111);
            *(uint *)(lVar91 + 0x14) = uVar86;
            sVar17 = *(short *)(lVar80 + (ulong)uVar86);
            uVar94 = 0;
            if (uVar112 != 0) {
              uVar94 = uVar113 / uVar112;
            }
            iVar31 = (uVar86 ^ 0xfffffffd) + (uVar86 * 2 | 4);
            *(uint *)(lVar91 + 0x14) = iVar31 + 1U;
            uVar58 = *(uint *)(lVar80 + (ulong)(iVar31 + 1U));
            *(uint *)(lVar91 + 0x14) = iVar31 + 5U;
            uVar85 = *(uint *)(lVar80 + (ulong)(iVar31 + 5U));
            *(uint *)(lVar91 + 0x14) = iVar31 + 9U;
            uVar86 = *(uint *)(lVar80 + (ulong)(iVar31 + 9U));
            *(uint *)(lVar91 + 0x14) = iVar31 + 0xdU;
            uVar101 = *(uint *)(lVar80 + (ulong)(iVar31 + 0xdU));
            *(uint *)(lVar91 + 0x14) = iVar31 + 0x11U;
            uVar86 = uVar86 ^ uVar112 ^ 0xffffffff;
            uVar22 = 0;
            if (uVar112 != 0) {
              uVar22 = uVar86 / uVar112;
            }
            uVar101 = uVar101 ^ uVar112 ^ 0xffffffff;
            uVar7 = *(uint *)(lVar80 + (ulong)(iVar31 + 0x11U)) ^ uVar112 ^ 0xffffffff;
            *(int *)(lVar91 + 0x14) = iVar31 + 0x15;
            uVar20 = 0;
            if (uVar112 != 0) {
              uVar20 = uVar101 / uVar112;
            }
            uVar86 = *(uint *)(lVar80 + (ulong)(uVar86 - uVar22 * uVar112));
            pplVar88 = (long **)(long)(int)uVar86;
            uVar22 = 0;
            if (uVar112 != 0) {
              uVar22 = uVar7 / uVar112;
            }
            unaff_x27 = *(long ***)(lVar80 + (ulong)(uVar101 - uVar20 * uVar112));
            local_464 = uVar44;
            FUN_00149a84_XOR((astruct_3 *)local_320,*(char **)(lVar91 + 8),uVar112,
                             uVar7 - uVar22 * uVar112,uVar113 - uVar94 * uVar112);
            if (((ulong)local_320 & 1) == 0) {
              uStack_198 = (long **)pcStack_318;
              _local_1a0 = (long *)local_320;
              local_190 = (byte)local_310;
              uStack_18f = (undefined)((ulong)local_310 >> 8);
              uStack_18e = (undefined)((ulong)local_310 >> 0x10);
              uStack_18d = (undefined)((ulong)local_310 >> 0x18);
              bStack_18c = (byte)((ulong)local_310 >> 0x20);
              uStack_18b = (undefined)((ulong)local_310 >> 0x28);
              uStack_18a = (undefined)((ulong)local_310 >> 0x30);
              uStack_189 = (undefined)((ulong)local_310 >> 0x38);
              pplVar100 = (long **)auStack_180;
            }
            else {
              FUN_0012ae34(&local_1a0,local_310,pcStack_318);
              pplVar100 = (long **)auStack_180;
            }
            auStack_180._4_4_ = (undefined4)((ulong)pplVar100 >> 0x20);
            uVar96 = uVar96 ^ uVar112 ^ 0xffffffff;
            uVar44 = 0;
            if (uVar112 != 0) {
              uVar44 = uVar96 / uVar112;
            }
            uVar49 = *(undefined8 *)(*(long *)(lVar91 + 8) + (ulong)(uVar96 - uVar44 * uVar112));
            uStack_188 = (undefined)uVar49;
            uStack_187 = (undefined)((ulong)uVar49 >> 8);
            uStack_186 = (undefined)((ulong)uVar49 >> 0x10);
            uStack_185 = (undefined)((ulong)uVar49 >> 0x18);
            uStack_184 = (undefined)((ulong)uVar49 >> 0x20);
            uStack_183 = (undefined)((ulong)uVar49 >> 0x28);
            uStack_182 = (undefined)((ulong)uVar49 >> 0x30);
            uStack_181 = (undefined)((ulong)uVar49 >> 0x38);
            if (0xffffffef < uVar86) goto LAB_001424ac;
            if (uVar86 < 0x17) {
              auStack_180._1_3_ = (undefined3)((ulong)pplVar100 >> 8);
              auStack_180._0_4_ = CONCAT31(auStack_180._1_3_,(char)(uVar86 << 1));
              puVar97 = local_818;
              if (uVar86 != 0) goto LAB_0013b214;
            }
            else {
              local_490 = (long **)CONCAT44(local_490._4_4_,uVar58);
              lVar80 = ((ulong)pplVar88 & 0xfffffffffffffff0) + 0x10;
              local_498 = pplVar82;
              auStack_180 = (undefined  [8])pplVar100;
              puVar97 = (undefined *)malloc(lVar80);
              auStack_180 = (undefined  [8])
                            ((lVar80 * 2 - ((ulong)pplVar88 & 0xfffffffffffffff0)) + -0xf);
              pplVar82 = local_498;
              uVar58 = (uint)local_490;
              auStack_178 = (undefined  [8])pplVar88;
              local_170 = puVar97;
LAB_0013b214:
              func_0x0016a0c0(puVar97,unaff_x27,pplVar88);
            }
            puVar97[(long)pplVar88] = 0;
            if ((DAT_00174980 & 1) == 0) {
              iVar31 = FUN_0011b428(&DAT_00174980);
              if (iVar31 != 0) {
                puVar91 = (undefined8 *)malloc(0x30);
                _DAT_00174988 = puVar91;
                puVar91[1] = 0;
                *puVar91 = 0;
                puVar91[3] = 0;
                puVar91[2] = 0;
                puVar91[5] = 0;
                puVar91[4] = 0;
                FUN_0011b54c(&DAT_00174980);
              }
            }
            puVar91 = _DAT_00174988;
            if (((ulong)_local_1a0 & 1) == 0) {
              uStack_2ce._1_1_ = uStack_18d;
              uStack_2ce._0_1_ = uStack_18e;
              bStack_2d0 = local_190;
              uStack_2cf = uStack_18f;
              iStack_2cc = (int)(CONCAT15(uStack_189,
                                          CONCAT14(uStack_18a,
                                                   CONCAT13(uStack_18b,
                                                            CONCAT12(bStack_18c,uStack_2ce)))) >>
                                0x10);
              bStack_2d8 = (byte)uStack_198;
              uStack_2d7 = (undefined)((ulong)uStack_198 >> 8);
              uStack_2d6 = (undefined2)((ulong)uStack_198 >> 0x10);
              iStack_2d4 = (int)((ulong)uStack_198 >> 0x20);
              local_2e0 = _local_1a0;
            }
            else {
              FUN_0012ae34(&local_2e0,
                           CONCAT17(uStack_189,
                                    CONCAT16(uStack_18a,
                                             CONCAT15(uStack_18b,
                                                      CONCAT14(bStack_18c,
                                                               CONCAT13(uStack_18d,
                                                                        CONCAT12(uStack_18e,
                                                                                 CONCAT11(uStack_18f
                                                                                          ,local_190
                                                                                         ))))))),
                           uStack_198);
            }
            local_2c8 = (long **)CONCAT17(uStack_181,
                                          CONCAT16(uStack_182,
                                                   CONCAT15(uStack_183,
                                                            CONCAT14(uStack_184,
                                                                     CONCAT13(uStack_185,
                                                                              CONCAT12(uStack_186,
                                                                                       CONCAT11(
                                                  uStack_187,uStack_188)))))));
            if ((byte)((auStack_180[0] ^ 0xfe) + 1) == (byte)(~auStack_180[0] | 1)) {
              uStack_2b8 = (long **)auStack_178;
              local_2b0 = local_170;
              local_2c0 = (long **)auStack_180;
            }
            else {
              FUN_0012ae34(&local_2c0,local_170,auStack_178);
            }
            local_2a8 = CONCAT44(local_2a8._4_4_,1);
            FUN_00144dfc(puVar91,&local_2e0);
            if ((int)local_2a8 != -1) {
              local_360[0] = 0x88;
              local_360._1_5_ = 0x12d7;
              uStack_35a = 0;
              auStack_358 = (undefined  [6])0x12e0d0;
              uStack_352 = 0;
              local_350 = FUN_0012e0cc;
              (**(code **)(local_360 + (local_2a8 & 0xffffffff) * 8))(&local_390,&local_2e0);
            }
            local_2a8 = CONCAT44(local_2a8._4_4_,0xffffffff);
            uVar87 = 0xcbf29ce484222325;
            if (sVar17 != 0) {
              uVar111 = uVar111 ^ uVar112 ^ 0xffffffff;
              lVar80 = 0;
              iVar31 = 0;
              uVar86 = 0;
              if (uVar112 != 0) {
                uVar86 = uVar111 / uVar112;
              }
              uVar87 = 0xcbf29ce484222325;
              do {
                pcVar42 = (char *)(*(long *)(lVar91 + 8) + (ulong)(uVar111 - uVar86 * uVar112) +
                                  lVar80);
                iVar31 = iVar31 + 1;
                lVar80 = (long)iVar31;
                uVar87 = uVar87 * 0x100000001b3 ^ (long)*pcVar42;
              } while (sVar17 != iVar31);
            }
            uVar115 = uVar115 ^ uVar112 ^ 0xffffffff;
            uVar86 = 0;
            if (uVar112 != 0) {
              uVar86 = uVar115 / uVar112;
            }
            uVar81 = (ulong)*(int *)(*(long *)(lVar91 + 8) + (ulong)(uVar115 - uVar86 * uVar112));
            if ((long **)((uVar81 - uVar87) + (uVar87 & (uVar81 ^ 0xffffffffffffffff)) * 2) !=
                pplVar82) {
              uVar58 = uVar85;
            }
            if ((byte)((auStack_180[0] ^ 0xfe) + 1) != (byte)(~auStack_180[0] | 1)) {
              free(local_170);
            }
            pplVar82 = local_310;
            if (((ulong)_local_1a0 & 1) != 0) {
              free(CONCAT17(uStack_189,
                            CONCAT16(uStack_18a,
                                     CONCAT15(uStack_18b,
                                              CONCAT14(bStack_18c,
                                                       CONCAT13(uStack_18d,
                                                                CONCAT12(uStack_18e,
                                                                         CONCAT11(uStack_18f,
                                                                                  local_190))))))));
              pplVar82 = local_310;
            }
            local_310 = pplVar82;
            if (((ulong)local_320 & 1) == 0) goto LAB_0013c354;
LAB_0013c350:
            free(pplVar82);
            goto LAB_0013c354;
          }
        }
        goto LAB_0012ed04;
      }
      if ((int)uVar86 < -0x35ea5685) {
        if ((int)uVar86 < -0x3d76e2f1) {
          if (uVar86 == 0xc0a855fb) {
            unaff_x24 = *(long ***)(local_470 + 8);
            uVar112 = *(uint *)(unaff_x24 + 2);
            uVar111 = *(uint *)((long)unaff_x24 + 0x14);
            plVar48 = unaff_x24[1];
            uVar113 = *(uint *)((long)plVar48 + (ulong)uVar111);
            uVar58 = uVar111 + 0xc;
            *(uint *)((long)unaff_x24 + 0x14) = uVar111 + 4;
            uVar86 = *(uint *)((long)plVar48 + (ulong)(uVar111 + 4));
            *(uint *)((long)unaff_x24 + 0x14) = uVar111 + 8;
            uVar111 = *(uint *)((long)plVar48 + (ulong)(uVar111 + 8));
            *(uint *)((long)unaff_x24 + 0x14) = uVar58;
            pplVar88 = *(long ***)((long)plVar48 + (ulong)uVar58);
            uVar86 = uVar86 ^ uVar112 ^ 0xffffffff;
            uVar111 = uVar111 ^ uVar112 ^ 0xffffffff;
            iVar31 = (uVar58 * 2 | 0x10) + (uVar58 ^ 8) + (uVar58 * 2 ^ 0xffffffee);
            uVar58 = 0;
            if (uVar112 != 0) {
              uVar58 = uVar86 / uVar112;
            }
            uVar96 = iVar31 + 2;
            uVar115 = iVar31 + 6;
            *(uint *)((long)unaff_x24 + 0x14) = uVar96;
            uVar96 = *(uint *)((long)plVar48 + (ulong)uVar96);
            *(uint *)((long)unaff_x24 + 0x14) = uVar115;
            sVar17 = *(short *)((long)plVar48 + (ulong)uVar115);
            uVar96 = uVar96 ^ uVar112 ^ 0xffffffff;
            iVar31 = (uVar115 ^ 0xfffffffd) + (uVar115 * 2 | 4);
            *(uint *)((long)unaff_x24 + 0x14) = iVar31 + 1U;
            uVar115 = 0;
            if (uVar112 != 0) {
              uVar115 = uVar111 / uVar112;
            }
            uVar94 = *(uint *)((long)plVar48 + (ulong)(iVar31 + 1U));
            *(uint *)((long)unaff_x24 + 0x14) = iVar31 + 5U;
            uVar101 = *(uint *)((long)plVar48 + (ulong)(iVar31 + 5U));
            *(uint *)((long)unaff_x24 + 0x14) = iVar31 + 9U;
            uVar85 = *(uint *)((long)plVar48 + (ulong)(iVar31 + 9U));
            uVar94 = uVar94 ^ uVar112 ^ 0xffffffff;
            *(int *)((long)unaff_x24 + 0x14) = iVar31 + 0xd;
            uVar101 = uVar101 ^ uVar112 ^ 0xffffffff;
            uVar85 = uVar85 ^ uVar112 ^ 0xffffffff;
            uVar22 = 0;
            if (uVar112 != 0) {
              uVar22 = uVar85 / uVar112;
            }
            uVar111 = uVar111 - uVar115 * uVar112;
            uVar115 = 0;
            if (uVar112 != 0) {
              uVar115 = uVar96 / uVar112;
            }
            uVar85 = uVar85 - uVar22 * uVar112;
            plVar39 = (long *)(ulong)uVar85;
            *(undefined8 *)((long)plVar48 + (long)plVar39) = 0xffffffffffffffff;
            plVar48 = unaff_x24[1];
            uVar87 = *(ulong *)((long)plVar48 + (ulong)(uVar86 - uVar58 * uVar112));
            uVar58 = 0;
            if (uVar112 != 0) {
              uVar58 = uVar94 / uVar112;
            }
            uVar96 = uVar96 - uVar115 * uVar112;
            uVar86 = 0;
            if (uVar112 != 0) {
              uVar86 = uVar101 / uVar112;
            }
            uVar94 = uVar94 - uVar58 * uVar112;
            uVar101 = uVar101 - uVar86 * uVar112;
            if (-1 < (int)uVar87) {
              uVar113 = uVar113 ^ uVar112 ^ 0xffffffff;
              uVar58 = 0;
              if (uVar112 != 0) {
                uVar58 = uVar113 / uVar112;
              }
              pplVar82 = *(long ***)((long)plVar48 + (ulong)(uVar113 - uVar58 * uVar112));
              if (-1 < (long)pplVar82) {
                local_4f0 = (long *)CONCAT44(local_4f0._4_4_,uVar96);
                local_4b0 = (long **)CONCAT44(local_4b0._4_4_,uVar101);
                local_498 = (long **)CONCAT44(local_498._4_4_,uVar94);
                local_464 = uVar44;
                uVar81 = syscall(0x3e,(long)(int)uVar87,0,1);
                local_4d0 = (long **)CONCAT44(local_4d0._4_4_,uVar111);
                local_508 = (undefined *)CONCAT44(local_508._4_4_,uVar85);
                if (0xfffffffffffff000 < uVar81) {
                  iVar31 = (int)uVar81;
                  uVar81 = 0xffffffffffffffff;
                  *local_4b8 = -iVar31;
                }
                local_2e0 = (long *)&DAT_0016f6a0;
                uVar99 = 0;
                bVar28 = false;
                bVar29 = false;
                uVar47 = 0;
                bStack_2d8 = (byte)uVar87;
                uStack_2d7 = (undefined)(uVar87 >> 8);
                uStack_2d6 = (undefined2)(uVar87 >> 0x10);
                bStack_2d0 = (byte)uVar81;
                uStack_2cf = (undefined)(uVar81 >> 8);
                uStack_2ce = (undefined2)(uVar81 >> 0x10);
                iStack_2cc = (int)(uVar81 >> 0x20);
                local_490 = pplVar88;
                local_2c8 = pplVar82;
                uVar58 = 0x1d8474b2;
LAB_001374c0:
                uVar86 = uVar58;
                uVar58 = (uint)(local_478 >> 0x20);
                if (-0x963ec2c < (int)uVar86) {
                  if (0x21d23543 < (int)uVar86) {
                    if (0x64db2d41 < (int)uVar86) goto LAB_001376e0;
                    if (uVar86 == 0x21d23544) {
                      uVar86 = (uint)local_360[0];
                      uVar58 = 0x64db2d42;
                      if ((uVar86 | 0xfffffffe) +
                          (((local_360[0] | 1) - (local_360[0] & 0xfe)) +
                           (uVar86 ^ 1) + (uVar86 ^ 0xfe) + 2 & 0xff) != 0) {
                        free(local_350);
                        uVar58 = 0x64db2d42;
                      }
                    }
                    else if (uVar86 == 0x4aa2c3b0) {
                      bVar29 = false;
                      uVar47 = 0;
                      uVar58 = 0x21d23544;
                    }
                    else {
                      if (uVar86 != 0x598043a6) goto LAB_00137ca0;
                      if (!bVar28) goto LAB_001424a8;
                      uVar58 = 0x76edb2e;
                      if (plVar95 != plVar39) {
                        uVar58 = 0x15bfc039;
                      }
                    }
                    goto LAB_001374c0;
                  }
                  if ((int)uVar86 < 0x44ad530) {
                    if (uVar86 == 0xf69c13d5) {
                      (*(code *)local_2e0[2])(&local_1a0,&local_2e0,8);
                      uVar58 = ~(uint)local_1a0;
                      uVar44 = (uint)local_1a0;
                      uVar86 = uVar58 | 1;
                      uVar58 = (((local_1a0 | 1) + uVar44 * -2 + uVar58 * -3 +
                                (uVar44 & 0xfe ^ 0xfffffffe)) - (uVar44 & 0xfe)) +
                               (uVar44 ^ 1) + (uVar44 | 0xfffffffe);
                      if (uVar86 + (uVar58 & 0xff) == 0) {
                        pplVar82 = (long **)(ulong)(local_1a0 >> 1);
                        if (pplVar82 != (long **)0x0) goto LAB_001379d0;
LAB_00137b64:
                        bVar28 = false;
                        unaff_x27 = (long **)0x0;
                        uVar81 = 0;
                        if (-uVar86 != (uVar58 & 0xff)) goto LAB_00137c2c;
                      }
                      else {
                        pplVar82 = uStack_198;
                        if (uStack_198 == (long **)0x0) goto LAB_00137b64;
LAB_001379d0:
                        if (-uVar86 == (uVar58 & 0xff)) {
                          puVar63 = (ulong *)((ulong)&local_1a0 | 1);
                        }
                        else {
                          puVar63 = (ulong *)CONCAT17(uStack_189,
                                                      CONCAT16(uStack_18a,
                                                               CONCAT15(uStack_18b,
                                                                        CONCAT14(bStack_18c,
                                                                                 CONCAT13(uStack_18d
                                                                                          ,CONCAT12(
                                                  uStack_18e,CONCAT11(uStack_18f,local_190)))))));
                        }
                        uVar64 = *puVar63;
                        bVar28 = true;
                        uVar83 = uVar64 << 1;
                        uVar44 = ~(uint)uVar64;
                        uVar81 = (((ulong)((uint)uVar64 << 2) | 0xfffffffffffffc00) - uVar64) +
                                 (ulong)(byte)uVar44 +
                                 (uVar64 ^ 0xff) + (uVar64 | 0xff) +
                                 ((ulong)uVar44 | 0xffffffffffffff00) + 0x104;
                        unaff_x27 = (long **)((uVar64 | 0xff) * 3 +
                                              ((uVar83 ^ 0xffffffffffffffff) & 0xfffffffffffffe00) +
                                              (uVar64 ^ 0xff) + (uVar83 ^ 0xfffffffffffffe00) +
                                              ((ulong)~(uint)uVar83 & 0x1fe) +
                                              (uVar83 | 0xfffffffffffffe00) + 6);
                        if (-uVar86 != (uVar58 & 0xff)) {
LAB_00137c2c:
                          free(CONCAT17(uStack_189,
                                        CONCAT16(uStack_18a,
                                                 CONCAT15(uStack_18b,
                                                          CONCAT14(bStack_18c,
                                                                   CONCAT13(uStack_18d,
                                                                            CONCAT12(uStack_18e,
                                                                                     CONCAT11(
                                                  uStack_18f,local_190))))))));
                        }
                      }
                      plVar39 = (long *)((~(uVar81 & (ulong)unaff_x27) * -3 - (long)unaff_x27) +
                                         ((ulong)unaff_x27 | uVar81 ^ 0xffffffffffffffff) * 2 +
                                         uVar81 + (uVar81 ^ (ulong)unaff_x27) * 4 +
                                                  ~(uVar81 | (ulong)unaff_x27) * 2 + 1);
                      uVar58 = 0xb0a23815;
                      if (pplVar82 != (long **)0x0) {
                        uVar58 = 0x598043a6;
                      }
                    }
                    else if (uVar86 == 0xfc90aaaa) {
LAB_001374b0:
                      bVar29 = false;
                      uVar47 = 0;
                      uVar58 = 0xa5824081;
                    }
                    else {
                      uVar58 = 0xc47208ac;
                      if (uVar86 != 0xfdb2acbe) goto LAB_00137ca0;
                    }
                    goto LAB_001374c0;
                  }
                  if (uVar86 == 0x44ad530) {
                    uVar86 = (uint)plVar95;
                    iVar31 = (uVar58 | uVar86 ^ 0xffffffff) +
                             (uVar58 & (uVar86 ^ 0xffffffff)) +
                             (uVar58 & uVar86) * -3 + ~(uVar58 & uVar86) * -3;
                    uVar58 = iVar31 * 2 - 4;
                    uVar87 = (ulong)(((uVar58 & 0xfffffff0) +
                                      (uVar58 | 0xe) + ((uVar58 ^ 0xffffffff) & 0xe) +
                                     (uVar58 ^ 0xfffffff0) + (iVar31 * -2 + 2U & 0xfffffff0) +
                                     iVar31) - 6);
                    uVar58 = 0xa2e4c1d9;
                    goto LAB_001374c0;
                  }
                  if (uVar86 == 0x76edb2e) {
                    uVar99 = uVar87 >> 8;
                    uVar47 = uVar87 & 0xff;
                    bVar29 = true;
                    uVar58 = 0xfdb2acbe;
                    goto LAB_001374c0;
                  }
                  if (uVar86 == 0x15bfc039) goto LAB_001376cc;
                  goto LAB_00137ca0;
                }
                if (-0x4f5dc7ec < (int)uVar86) {
                  if ((int)uVar86 < -0x3ed864a2) {
                    if (uVar86 == 0xb0a23815) {
LAB_001376cc:
                      bVar29 = false;
                      uVar47 = 0;
                      uVar58 = 0xfdb2acbe;
                      goto LAB_001374c0;
                    }
                    if (uVar86 == 0xb6925cf2) {
                      bVar29 = false;
                      uVar47 = 0;
                      uVar58 = 0x64db2d42;
                      goto LAB_001374c0;
                    }
                    if (uVar86 == 0xbeb3fc2c) goto LAB_001374b0;
                  }
                  else {
                    if (uVar86 == 0xc1279b5e) {
                      if (local_4a0 < 0x10) goto LAB_0014249c;
                      uVar58 = 0x72126bb7;
                      if (local_480[2] != (long *)0x3234206b636f6c42) {
                        uVar58 = 0x4aa2c3b0;
                      }
                      goto LAB_001374c0;
                    }
                    uVar58 = 0x8cb077c2;
                    if (uVar86 == 0xc47208ac) goto LAB_001374c0;
                    if (uVar86 == 0xe45080e2) {
                      bVar29 = false;
                      uVar47 = 0;
                      uVar58 = 0x8cb077c2;
                      goto LAB_001374c0;
                    }
                  }
                  goto LAB_00137ca0;
                }
                if ((int)uVar86 < -0x6541ff6e) {
                  if (uVar86 == 0x86a19ad9) {
                    bVar29 = false;
                    uVar47 = 0;
                    uVar58 = 0xc47208ac;
                    goto LAB_001374c0;
                  }
                  if (uVar86 == 0x8b3e0439) {
                    uVar58 = 0xe45080e2;
                    if ((long)plVar95 < 0x7ffffff8) {
                      uVar58 = 0x44ad530;
                    }
                    goto LAB_001374c0;
                  }
                  uVar58 = 0x21d23544;
                  if (uVar86 == 0x8cb077c2) goto LAB_001374c0;
                  goto LAB_00137ca0;
                }
                if ((int)uVar86 < -0x5a7dbf7f) {
                  if (uVar86 == 0x9abe0092) {
                    (*(code *)local_2e0[2])(local_360,&local_2e0,0x18);
                    uVar58 = (uint)local_360[0];
                    uVar86 = ~uVar58 | 1;
                    uVar58 = uVar58 * 3 + ~uVar58 + ((uVar58 ^ 0xffffffff) & 0xfffffffe) +
                             (local_360[0] ^ 1) + (local_360[0] ^ 0xfffffffe) +
                             ((local_360[0] ^ 0xffffffff) & 1) + 4;
                    if (uVar86 + (uVar58 & 0xff) == 0) {
                      uVar81 = (ulong)(local_360[0] >> 1);
                    }
                    else {
                      uVar81 = CONCAT26(uStack_352,auStack_358);
                    }
                    if (uVar81 < 8) goto LAB_0014249c;
                    uVar86 = -uVar86;
                    local_480 = (long **)local_350;
                    if (uVar86 == (uVar58 & 0xff)) {
                      local_480 = (long **)((ulong)local_360 | 1);
                    }
                    if (uVar86 == (uVar58 & 0xff)) {
                      pplVar82 = (long **)(auStack_358 + 1);
                    }
                    else {
                      pplVar82 = (long **)((long)local_350 + 8);
                    }
                    local_4a0 = uVar81;
                    uVar58 = 0xc1279b5e;
                    if (*pplVar82 != (long *)0x20676953204b5041) {
                      uVar58 = 0x4aa2c3b0;
                    }
                    goto LAB_001374c0;
                  }
                  if (uVar86 == 0xa2e4c1d9) {
                    uVar81 = (*(code *)local_2e0[3])(&local_2e0,uVar87);
                    uVar58 = 0xf69c13d5;
                    if ((uVar81 & 1) == 0) {
                      uVar58 = 0x86a19ad9;
                    }
                    goto LAB_001374c0;
                  }
                  goto LAB_00137ca0;
                }
                if (uVar86 == 0xa9a08da4) {
                  uVar81 = (*(code *)local_2e0[3])
                                     (&local_2e0,
                                      (uVar58 | 0xffffffe8) * 3 + (uVar58 & 0xffffffe8) * -3 +
                                      (uVar58 & 0x3fffffe8) * 4 + ~uVar58 + (uVar58 & 0x17) +
                                      (uVar58 ^ 0x17) + (uVar58 ^ 0xffffffff | 0xffffffe8) + 0x1b);
                  uVar58 = 0x9abe0092;
                  if ((uVar81 & 1) == 0) {
                    uVar58 = 0xb6925cf2;
                  }
                  goto LAB_001374c0;
                }
                if (uVar86 != 0xa5824081) goto LAB_00137ca0;
                if (bVar29) {
                  *(ulong *)((long)unaff_x24[1] + ((ulong)local_508 & 0xffffffff)) =
                       ~(uVar99 * 0x100) + uVar47 * 2 + (uVar99 * 0x300 - (uVar99 * 0x100 | uVar47))
                       + 1;
                }
                uVar87 = 0xcbf29ce484222325;
                if (sVar17 != 0) {
                  lVar80 = 0;
                  iVar31 = 0;
                  do {
                    lVar91 = lVar80 + ((ulong)local_4f0 & 0xffffffff);
                    iVar31 = iVar31 + 1;
                    lVar80 = (long)iVar31;
                    uVar87 = uVar87 * 0x100000001b3 ^ (long)*(char *)((long)unaff_x24[1] + lVar91);
                  } while (sVar17 != iVar31);
                }
                uVar81 = (ulong)*(int *)((long)unaff_x24[1] + ((ulong)local_4d0 & 0xffffffff));
                pplVar82 = (long **)(ulong)local_464;
                uVar58 = (uint)local_498;
                if ((long **)(((uVar87 | uVar81) + ~uVar87) - (uVar81 | uVar87 ^ 0xffffffffffffffff)
                             ) != local_490) {
                  uVar58 = (uint)local_4b0;
                }
                puVar91 = (undefined8 *)(ulong)uVar58;
                goto LAB_0012ecfc;
              }
            }
            uVar87 = 0xcbf29ce484222325;
            if (sVar17 != 0) {
              lVar80 = 0;
              iVar31 = 0;
              do {
                lVar91 = lVar80 + (ulong)uVar96;
                iVar31 = iVar31 + 1;
                lVar80 = (long)iVar31;
                uVar87 = uVar87 * 0x100000001b3 ^ (long)*(char *)((long)plVar48 + lVar91);
              } while (sVar17 != iVar31);
            }
            uVar81 = (ulong)*(int *)((long)plVar48 + (ulong)uVar111);
            pplVar82 = (long **)((ulong)pplVar100 & 0xffffffff);
            if ((long **)(-2 - ((uVar87 | uVar81 ^ 0xffffffffffffffff) +
                               (uVar81 | uVar87 ^ 0xffffffffffffffff))) != pplVar88) {
              uVar94 = uVar101;
            }
            puVar91 = (undefined8 *)(ulong)uVar94;
            local_464 = uVar44;
            goto LAB_0012ecfc;
          }
          uVar58 = local_800;
          if (uVar86 == 0xc1279b5e) goto LAB_0012ed04;
        }
        else {
          if (uVar86 == 0xc2891d0f) {
            lVar91 = *(long *)(local_470 + 8);
            uVar111 = *(uint *)(lVar91 + 0x10);
            uVar113 = *(uint *)(lVar91 + 0x14);
            lVar80 = *(long *)(lVar91 + 8);
            uVar86 = *(uint *)(lVar80 + (ulong)uVar113);
            uVar58 = uVar113 + 8;
            *(uint *)(lVar91 + 0x14) = uVar113 + 4;
            uVar86 = uVar86 ^ uVar111 ^ 0xffffffff;
            uVar113 = *(uint *)(lVar80 + (ulong)(uVar113 + 4));
            uVar112 = 0;
            if (uVar111 != 0) {
              uVar112 = uVar86 / uVar111;
            }
            *(uint *)(lVar91 + 0x14) = uVar58;
            uVar81 = *(ulong *)(lVar80 + (ulong)uVar58);
            uVar96 = ((uVar58 & 8 | ((uVar58 & 8) >> 3) << 4) - (uVar58 | 8)) + (uVar58 * 2 ^ 0x10);
            uVar58 = uVar96 + 4;
            *(uint *)(lVar91 + 0x14) = uVar96;
            uVar115 = *(uint *)(lVar80 + (ulong)uVar96);
            unaff_x27 = (long **)(ulong)uVar115;
            *(uint *)(lVar91 + 0x14) = uVar58;
            sVar17 = *(short *)(lVar80 + (ulong)uVar58);
            uVar86 = uVar86 - uVar112 * uVar111;
            uVar87 = (ulong)(uVar96 & 2 | (uVar96 * 2 & 4) + (uVar58 & 0xfffffffd)) ^ 2;
            iVar31 = (int)uVar87;
            *(int *)(lVar91 + 0x14) = iVar31;
            uVar58 = *(uint *)(lVar80 + uVar87);
            unaff_x24 = (long **)(ulong)uVar58;
            *(uint *)(lVar91 + 0x14) = iVar31 + 4U;
            uVar112 = *(uint *)(lVar80 + (ulong)(iVar31 + 4U));
            *(int *)(lVar91 + 0x14) = iVar31 + 8;
            pplVar82 = *(long ***)(lVar80 + (ulong)uVar86);
            local_464 = uVar44;
            if (pplVar82 != (long **)0x0) {
              pplVar100 = (long **)*pplVar82;
              if (pplVar100 != (long **)0x0) {
                local_490 = (long **)CONCAT44(local_490._4_4_,uVar113);
                pplVar77 = (long **)pplVar82[1];
                pplVar88 = pplVar100;
                if (pplVar77 != pplVar100) {
                  do {
                    pplVar77 = pplVar77 + -1;
                    plVar95 = *pplVar77;
                    *pplVar77 = (long *)0x0;
                    if (plVar95 != (long *)0x0) {
                      (**(code **)(*plVar95 + 0x18))();
                    }
                  } while (pplVar77 != pplVar100);
                  pplVar88 = (long **)*pplVar82;
                }
                pplVar82[1] = (long *)pplVar100;
                free(pplVar88);
                uVar113 = (uint)local_490;
              }
              free(pplVar82);
              lVar80 = *(long *)(lVar91 + 8);
            }
            *(undefined8 *)(lVar80 + (ulong)uVar86) = 0;
            uVar87 = 0xcbf29ce484222325;
            if (sVar17 != 0) {
              uVar115 = uVar115 ^ uVar111 ^ 0xffffffff;
              lVar80 = 0;
              iVar31 = 0;
              uVar86 = 0;
              if (uVar111 != 0) {
                uVar86 = uVar115 / uVar111;
              }
              uVar87 = 0xcbf29ce484222325;
              do {
                pcVar42 = (char *)(*(long *)(lVar91 + 8) + (ulong)(uVar115 - uVar86 * uVar111) +
                                  lVar80);
                iVar31 = iVar31 + 1;
                lVar80 = (long)iVar31;
                uVar87 = uVar87 * 0x100000001b3 ^ (long)*pcVar42;
              } while (sVar17 != iVar31);
            }
            uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
            uVar86 = 0;
            if (uVar111 != 0) {
              uVar86 = uVar113 / uVar111;
            }
            if ((uVar87 ^ (long)*(int *)(*(long *)(lVar91 + 8) + (ulong)(uVar113 - uVar86 * uVar111)
                                        )) != uVar81) {
              uVar58 = uVar112;
            }
            goto LAB_001395a8;
          }
          pplVar82 = (long **)((ulong)pplVar100 & 0xffffffff);
          uVar58 = local_648;
          if ((uVar86 == 0xc47208ac) ||
             (pplVar82 = (long **)((ulong)pplVar100 & 0xffffffff), uVar58 = local_7ac,
             uVar86 == 0xc9d98bc1)) goto LAB_0012ed04;
        }
      }
      else {
        if (-0x32b9b6e2 < (int)uVar86) {
          pplVar82 = (long **)((ulong)pplVar100 & 0xffffffff);
          uVar58 = local_5a8;
          if ((uVar86 != 0xcd46491f) &&
             (pplVar82 = (long **)((ulong)pplVar100 & 0xffffffff), uVar58 = local_5fc,
             uVar86 != 0xcde1a92a)) {
            if (uVar86 == 0xd02b01b7) {
              lVar91 = *(long *)(local_470 + 8);
              uVar111 = *(uint *)(lVar91 + 0x10);
              uVar113 = *(uint *)(lVar91 + 0x14);
              lVar80 = *(long *)(lVar91 + 8);
              uVar86 = *(uint *)(lVar80 + (ulong)uVar113);
              uVar58 = uVar113 + 8;
              *(uint *)(lVar91 + 0x14) = uVar113 + 4;
              uVar86 = uVar86 ^ uVar111 ^ 0xffffffff;
              uVar113 = *(uint *)(lVar80 + (ulong)(uVar113 + 4));
              uVar112 = 0;
              if (uVar111 != 0) {
                uVar112 = uVar86 / uVar111;
              }
              *(uint *)(lVar91 + 0x14) = uVar58;
              iVar31 = (uVar58 ^ 8) * 3 + (uVar58 * 2 & 0x10) + (uVar58 * 2 ^ 0xffffffee);
              uVar87 = *(ulong *)(lVar80 + (ulong)uVar58);
              *(uint *)(lVar91 + 0x14) = iVar31 + 2U;
              uVar96 = *(uint *)(lVar80 + (ulong)(iVar31 + 2U));
              unaff_x27 = (long **)(ulong)uVar96;
              *(uint *)(lVar91 + 0x14) = iVar31 + 6U;
              sVar17 = *(short *)(lVar80 + (ulong)(iVar31 + 6U));
              *(uint *)(lVar91 + 0x14) = iVar31 + 8U;
              uVar58 = *(uint *)(lVar80 + (ulong)(iVar31 + 8U));
              unaff_x24 = (long **)(ulong)uVar58;
              uVar86 = uVar86 - uVar112 * uVar111;
              *(uint *)(lVar91 + 0x14) = iVar31 + 0xcU;
              uVar112 = *(uint *)(lVar80 + (ulong)(iVar31 + 0xcU));
              *(int *)(lVar91 + 0x14) = iVar31 + 0x10;
              plVar95 = *(long **)(lVar80 + (ulong)uVar86);
              local_464 = uVar44;
              if (plVar95 != (long *)0x0) {
                if (*plVar95 != 0) {
                  plVar95[1] = *plVar95;
                  free();
                }
                free(plVar95);
                lVar80 = *(long *)(lVar91 + 8);
              }
              *(undefined8 *)(lVar80 + (ulong)uVar86) = 0;
              uVar81 = 0xcbf29ce484222325;
              iVar31 = (int)sVar17;
              if (iVar31 != 0) {
                uVar96 = uVar96 ^ uVar111 ^ 0xffffffff;
                lVar80 = 0;
                iVar32 = 0;
                uVar86 = 0;
                if (uVar111 != 0) {
                  uVar86 = uVar96 / uVar111;
                }
                uVar81 = 0xcbf29ce484222325;
                do {
                  pcVar42 = (char *)(*(long *)(lVar91 + 8) + (ulong)(uVar96 - uVar86 * uVar111) +
                                    lVar80);
                  iVar32 = iVar32 + 1;
                  lVar80 = (long)iVar32;
                  uVar81 = uVar81 * 0x100000001b3 ^ (long)*pcVar42;
                } while (iVar31 != iVar32);
              }
              uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
              uVar86 = 0;
              if (uVar111 != 0) {
                uVar86 = uVar113 / uVar111;
              }
              if ((uVar81 ^ (long)*(int *)(*(long *)(lVar91 + 8) +
                                          (ulong)(uVar113 - uVar86 * uVar111))) != uVar87) {
                uVar58 = uVar112;
              }
              goto LAB_001395a8;
            }
            goto LAB_0013267c;
          }
          goto LAB_0012ed04;
        }
        pplVar82 = (long **)((ulong)pplVar100 & 0xffffffff);
        uVar58 = local_63c;
        if ((uVar86 == 0xca15a97b) ||
           (pplVar82 = (long **)((ulong)pplVar100 & 0xffffffff), uVar58 = local_7e8,
           uVar86 == 0xcc203915)) goto LAB_0012ed04;
      }
    }
    else if ((int)uVar86 < -0xa02ab65) {
      if ((int)uVar86 < -0xf2bddb4) {
        if ((int)uVar86 < -0x12bd0887) {
          if (uVar86 == 0xed105b11) {
            lVar91 = *(long *)(local_470 + 8);
            uVar111 = *(uint *)(lVar91 + 0x10);
            uVar44 = *(uint *)(lVar91 + 0x14);
            lVar80 = *(long *)(lVar91 + 8);
            uVar58 = uVar44 + 0xc;
            uVar86 = *(uint *)(lVar80 + (ulong)uVar44) ^ uVar111 ^ 0xffffffff;
            *(uint *)(lVar91 + 0x14) = uVar44 + 4;
            uVar113 = 0;
            if (uVar111 != 0) {
              uVar113 = uVar86 / uVar111;
            }
            uVar115 = *(uint *)(lVar80 + (ulong)(uVar44 + 4));
            *(uint *)(lVar91 + 0x14) = uVar44 + 8;
            iVar31 = (uVar58 ^ 8) * 3 + (uVar58 * 2 & 0x10) + (uVar58 * 2 ^ 0xffffffee);
            uVar94 = *(uint *)(lVar80 + (ulong)(uVar44 + 8));
            uVar44 = iVar31 + 2;
            *(uint *)(lVar91 + 0x14) = uVar58;
            uVar96 = iVar31 + 6;
            uVar87 = *(ulong *)(lVar80 + (ulong)uVar58);
            *(uint *)(lVar91 + 0x14) = uVar44;
            uVar112 = *(uint *)(lVar80 + (ulong)uVar44);
            *(uint *)(lVar91 + 0x14) = uVar96;
            iVar31 = (uVar96 ^ 2) + (uVar44 * 2 | 0xfffffffa);
            sVar17 = *(short *)(lVar80 + (ulong)uVar96);
            *(uint *)(lVar91 + 0x14) = iVar31 + 6U;
            uVar58 = *(uint *)(lVar80 + (ulong)(iVar31 + 6U));
            *(uint *)(lVar91 + 0x14) = iVar31 + 10U;
            uVar96 = *(uint *)(lVar80 + (ulong)(iVar31 + 10U));
            *(int *)(lVar91 + 0x14) = iVar31 + 0xe;
            iVar31 = **(int **)(lVar80 + (ulong)(uVar86 - uVar113 * uVar111));
            if (iVar31 == -1) {
LAB_0013d284:
              puVar97 = (undefined *)0xffffffffffffffff;
            }
            else {
              if (iVar31 < 0) {
                iVar31 = 9;
LAB_0013d27c:
                *local_4b8 = iVar31;
                goto LAB_0013d284;
              }
              uVar81 = syscall(0x50,iVar31,&local_2e0);
              if (0xfffffffffffff000 < uVar81) {
                iVar31 = -(int)uVar81;
                goto LAB_0013d27c;
              }
              puVar97 = local_2b0;
              if ((int)uVar81 != 0) {
                puVar97 = (undefined *)0xffffffffffffffff;
              }
            }
            uVar115 = uVar115 ^ uVar111 ^ 0xffffffff;
            uVar86 = 0;
            if (uVar111 != 0) {
              uVar86 = uVar115 / uVar111;
            }
            uVar81 = 0xcbf29ce484222325;
            *(undefined **)(*(long *)(lVar91 + 8) + (ulong)(uVar115 - uVar86 * uVar111)) = puVar97;
            if (sVar17 != 0) {
              uVar86 = uVar112 ^ uVar111 ^ 0xffffffff;
              lVar80 = 0;
              iVar31 = 0;
              uVar44 = 0;
              if (uVar111 != 0) {
                uVar44 = uVar86 / uVar111;
              }
              uVar81 = 0xcbf29ce484222325;
              do {
                pcVar42 = (char *)(*(long *)(lVar91 + 8) + (ulong)(uVar86 - uVar44 * uVar111) +
                                  lVar80);
                iVar31 = iVar31 + 1;
                lVar80 = (long)iVar31;
                uVar81 = uVar81 * 0x100000001b3 ^ (long)*pcVar42;
              } while (sVar17 != iVar31);
            }
            uVar94 = uVar94 ^ uVar111 ^ 0xffffffff;
            uVar86 = 0;
            if (uVar111 != 0) {
              uVar86 = uVar94 / uVar111;
            }
            uVar47 = (ulong)*(int *)(*(long *)(lVar91 + 8) + (ulong)(uVar94 - uVar86 * uVar111));
            uVar81 = (uVar81 | uVar47) * 2 - (uVar81 + uVar47);
            goto LAB_0013d318;
          }
          uVar58 = local_7b8;
          if (uVar86 == 0xed22b893) goto LAB_0012ed04;
        }
        else {
          if (uVar86 == 0xed42f779) {
            lVar91 = *(long *)(local_470 + 8);
            uVar111 = *(uint *)(lVar91 + 0x10);
            uVar86 = *(uint *)(lVar91 + 0x14);
            lVar80 = *(long *)(lVar91 + 8);
            uVar58 = uVar86 + 0xc;
            uVar112 = *(uint *)(lVar80 + (ulong)uVar86);
            *(uint *)(lVar91 + 0x14) = uVar86 + 4;
            uVar96 = *(uint *)(lVar80 + (ulong)(uVar86 + 4));
            *(uint *)(lVar91 + 0x14) = uVar86 + 8;
            uVar112 = uVar112 ^ uVar111 ^ 0xffffffff;
            iVar31 = (uVar58 ^ 8) + uVar58 * 2 + (uVar86 * -2 - 0x1a | 0x10);
            uVar115 = *(uint *)(lVar80 + (ulong)(uVar86 + 8));
            *(uint *)(lVar91 + 0x14) = uVar58;
            uVar86 = iVar31 + 6;
            uVar113 = iVar31 + 2;
            local_490 = *(long ***)(lVar80 + (ulong)uVar58);
            uVar96 = uVar96 ^ uVar111 ^ 0xffffffff;
            *(uint *)(lVar91 + 0x14) = uVar113;
            uVar58 = 0;
            if (uVar111 != 0) {
              uVar58 = uVar112 / uVar111;
            }
            iVar31 = ((uVar86 ^ 0xffffffff) & 0xfffffffd) + (uVar113 & 2) + (uVar86 * 2 | 4);
            uVar113 = *(uint *)(lVar80 + (ulong)uVar113);
            *(uint *)(lVar91 + 0x14) = uVar86;
            sVar17 = *(short *)(lVar80 + (ulong)uVar86);
            *(uint *)(lVar91 + 0x14) = iVar31 + 1U;
            uVar115 = uVar115 ^ uVar111 ^ 0xffffffff;
            uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
            uVar33 = *(undefined4 *)(lVar80 + (ulong)(iVar31 + 1U));
            *(uint *)(lVar91 + 0x14) = iVar31 + 5U;
            uVar30 = *(undefined4 *)(lVar80 + (ulong)(iVar31 + 5U));
            local_498 = (long **)CONCAT44(local_498._4_4_,uVar33);
            *(uint *)(lVar91 + 0x14) = iVar31 + 9U;
            local_4b0 = (long **)CONCAT44(local_4b0._4_4_,uVar30);
            uVar86 = *(uint *)(lVar80 + (ulong)(iVar31 + 9U));
            uVar94 = 0;
            if (uVar111 != 0) {
              uVar94 = uVar96 / uVar111;
            }
            *(int *)(lVar91 + 0x14) = iVar31 + 0xd;
            uVar86 = uVar86 ^ uVar111 ^ 0xffffffff;
            uVar101 = 0;
            if (uVar111 != 0) {
              uVar101 = uVar86 / uVar111;
            }
            uVar85 = 0;
            if (uVar111 != 0) {
              uVar85 = uVar115 / uVar111;
            }
            paVar89 = *(astruct_1 **)(lVar80 + (ulong)(uVar86 - uVar101 * uVar111));
            local_4f0 = *(long **)(lVar80 + (ulong)(uVar96 - uVar94 * uVar111));
            plVar95 = (long *)paVar89->field11_0x20;
            uVar86 = 0;
            if (uVar111 != 0) {
              uVar86 = uVar113 / uVar111;
            }
            local_4d0 = (long **)CONCAT44(local_4d0._4_4_,uVar115 - uVar85 * uVar111);
            local_508 = (undefined *)CONCAT44(local_508._4_4_,uVar113 - uVar86 * uVar111);
            uVar87 = *(long *)(lVar80 + (ulong)(uVar112 - uVar58 * uVar111)) << 3 | 1;
            local_464 = uVar44;
            do {
              plVar48 = paVar89->field10_0x18;
              plVar39 = (long *)((long)plVar95 - (long)plVar48);
              uVar47 = paVar89->field1_0x8 - paVar89->pStart;
              uVar81 = 0;
              if (uVar47 != 0) {
                uVar81 = (ulong)plVar39 / uVar47;
              }
              bVar102 = *(byte *)((long)plVar39 + (paVar89->pStart - uVar81 * uVar47)) ^
                        ((byte)uVar87 & 0x7f | (0x7f < uVar87) << 7);
              if (plVar95 < paVar89->field12_0x28) {
                *(byte *)plVar95 = bVar102;
                plVar79 = (long *)((long)plVar95 + 1);
              }
              else {
                pbVar98 = (byte *)((long)plVar39 + 1);
                if ((long)pbVar98 < 0) goto LAB_00142498;
                uVar81 = (long)paVar89->field12_0x28 - (long)plVar48;
                pbVar66 = (byte *)(uVar81 * 2);
                if (pbVar66 < pbVar98 || (long)pbVar66 - (long)pbVar98 == 0) {
                  pbVar66 = pbVar98;
                }
                if (0x3ffffffffffffffe < uVar81) {
                  pbVar66 = (byte *)0x7fffffffffffffff;
                }
                if (pbVar66 == (byte *)0x0) {
                  plVar38 = (long *)0x0;
                  *(byte *)plVar39 = bVar102;
                  plVar56 = plVar39;
                }
                else {
                  plVar38 = (long *)malloc(pbVar66);
                  plVar56 = (long *)((long)plVar38 + (long)plVar39);
                  *(byte *)plVar56 = bVar102;
                }
                plVar79 = (long *)((long)plVar56 + 1);
                if (plVar95 != plVar48) {
                  if ((plVar39 < (long *)0x8) || ((ulong)((long)plVar48 - (long)plVar38) < 0x20)) {
LAB_00138430:
                    do {
                      plVar56 = (long *)((long)plVar56 + -1);
                      plVar95 = (long *)((long)plVar95 + -1);
                      *(byte *)plVar56 = *(byte *)plVar95;
                    } while (plVar95 != plVar48);
                  }
                  else if (plVar39 < (long *)0x20) {
                    plVar55 = (long *)0x0;
LAB_001383e0:
                    puVar84 = (undefined8 *)((long)plVar95 - (long)plVar55);
                    plVar76 = (long *)((ulong)plVar39 & 0xfffffffffffffff8);
                    plVar95 = (long *)((long)plVar95 - (long)plVar76);
                    puVar91 = (undefined8 *)((long)plVar38 + ((long)puVar84 - (long)plVar48));
                    lVar80 = (long)plVar55 - (long)plVar76;
                    do {
                      puVar84 = puVar84 + -1;
                      puVar91 = puVar91 + -1;
                      lVar80 = lVar80 + 8;
                      *puVar91 = *puVar84;
                    } while (lVar80 != 0);
                    if (plVar39 != plVar76) {
                      plVar56 = (long *)((long)plVar56 - (long)plVar76);
                      goto LAB_00138430;
                    }
                  }
                  else {
                    plVar55 = (long *)((ulong)plVar39 & 0xffffffffffffffe0);
                    plVar65 = plVar95 + -2;
                    plVar75 = (long *)((byte *)((long)plVar38 + (long)plVar39) + -0x10);
                    plVar76 = plVar55;
                    do {
                      plVar23 = plVar65 + -1;
                      lVar60 = plVar65[-2];
                      lVar54 = plVar65[1];
                      lVar80 = *plVar65;
                      plVar76 = plVar76 + -4;
                      plVar65 = plVar65 + -4;
                      plVar75[-1] = *plVar23;
                      plVar75[-2] = lVar60;
                      plVar75[1] = lVar54;
                      *plVar75 = lVar80;
                      plVar75 = plVar75 + -4;
                    } while (plVar76 != (long *)0x0);
                    if (plVar39 != plVar55) {
                      if (((ulong)plVar39 & 0x18) == 0) {
                        plVar56 = (long *)((long)plVar56 - (long)plVar55);
                        plVar95 = (long *)((long)plVar95 - (long)plVar55);
                        goto LAB_00138430;
                      }
                      goto LAB_001383e0;
                    }
                  }
                  plVar95 = paVar89->field10_0x18;
                  plVar56 = plVar38;
                }
                paVar89->field10_0x18 = plVar56;
                paVar89->field11_0x20 = (char *)plVar79;
                paVar89->field12_0x28 = (char *)((long)plVar38 + (long)pbVar66);
                if (plVar95 != (long *)0x0) {
                  free(plVar95);
                }
              }
              plVar95 = plVar79;
              plVar48 = local_4f0;
              paVar89->field11_0x20 = (char *)plVar95;
              bVar28 = 0x7f < uVar87;
              uVar87 = uVar87 >> 7;
            } while (bVar28);
            unaff_x24 = (long **)((ulong)local_4f0 >> 0x18);
            unaff_x27 = (long **)((ulong)local_4f0 >> 0x30);
            vector_append_value(paVar89,(uint)local_4f0);
            vector_append_value(paVar89,(uint)((ulong)plVar48 >> 8));
            vector_append_value(paVar89,(uint)((ulong)plVar48 >> 0x10));
            vector_append_value(paVar89,(uint)((ulong)plVar48 >> 0x18));
            uVar58 = (uint)((ulong)plVar48 >> 0x20);
            vector_append_value(paVar89,uVar58);
            vector_append_value(paVar89,uVar58 >> 8);
            vector_append_value(paVar89,(uint)(ushort)((ulong)plVar48 >> 0x30));
            vector_append_value(paVar89,(uint)(byte)((ulong)plVar48 >> 0x38));
            lVar80 = *(long *)(lVar91 + 8);
            uVar87 = 0xcbf29ce484222325;
            if (sVar17 != 0) {
              lVar91 = 0;
              iVar31 = 0;
              do {
                pcVar42 = (char *)(lVar80 + ((ulong)local_508 & 0xffffffff) + lVar91);
                iVar31 = iVar31 + 1;
                lVar91 = (long)iVar31;
                uVar87 = uVar87 * 0x100000001b3 ^ (long)*pcVar42;
              } while (sVar17 != iVar31);
            }
            goto LAB_00139344;
          }
          uVar58 = local_634;
          if ((uVar86 == 0xede2c098) || (uVar58 = local_7a4, uVar86 == 0xee7f9ab3))
          goto LAB_0012ed04;
        }
      }
      else if ((int)uVar86 < -0xcbdb730) {
        pplVar82 = (long **)((ulong)pplVar100 & 0xffffffff);
        uVar58 = local_638;
        if (uVar86 == 0xf0d4224c) goto LAB_0012ed04;
        if (uVar86 == 0xf1fd9f01) {
          lVar91 = *(long *)(local_470 + 8);
          uVar111 = *(uint *)(lVar91 + 0x10);
          uVar44 = *(uint *)(lVar91 + 0x14);
          uVar58 = uVar44 + 8;
          lVar80 = *(long *)(lVar91 + 8);
          uVar87 = (ulong)(uVar58 & 8 | (uVar58 * 2 & 0x10) + (uVar58 & 0xfffffff7)) ^ 8;
          uVar113 = *(uint *)(lVar80 + (ulong)uVar44);
          *(uint *)(lVar91 + 0x14) = uVar44 + 4;
          iVar31 = (int)uVar87;
          uVar86 = iVar31 + 4;
          uVar115 = *(uint *)(lVar80 + (ulong)(uVar44 + 4));
          *(uint *)(lVar91 + 0x14) = uVar58;
          uVar81 = *(ulong *)(lVar80 + (ulong)uVar58);
          *(int *)(lVar91 + 0x14) = iVar31;
          uVar112 = *(uint *)(lVar80 + uVar87);
          *(uint *)(lVar91 + 0x14) = uVar86;
          uVar44 = ((uVar86 ^ 0xffffffff) & 0xfffffffd) * -3 +
                   (~uVar44 | 0xfffffffd) + (uVar86 * 2 ^ 0xfffffffa);
          sVar17 = *(short *)(lVar80 + (ulong)uVar86);
          uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
          *(uint *)(lVar91 + 0x14) = uVar44;
          uVar58 = *(uint *)(lVar80 + (ulong)uVar44);
          *(uint *)(lVar91 + 0x14) = uVar44 + 4;
          uVar86 = 0;
          if (uVar111 != 0) {
            uVar86 = uVar113 / uVar111;
          }
          uVar96 = *(uint *)(lVar80 + (ulong)(uVar44 + 4));
          *(uint *)(lVar91 + 0x14) = uVar44 + 8;
          uVar94 = *(uint *)(lVar80 + (ulong)(uVar44 + 8));
          *(uint *)(lVar91 + 0x14) = uVar44 + 0xc;
          uVar94 = uVar94 ^ uVar111 ^ 0xffffffff;
          uVar44 = 0;
          if (uVar111 != 0) {
            uVar44 = uVar94 / uVar111;
          }
          unaff_x27 = (long **)(ulong)(uVar113 - uVar86 * uVar111);
          uVar33 = func_0x00169f40(*(undefined8 *)(lVar80 + (ulong)(uVar94 - uVar44 * uVar111)));
          *(undefined4 *)(*(long *)(lVar91 + 8) + (long)unaff_x27) = uVar33;
          uVar87 = 0xcbf29ce484222325;
          if (sVar17 != 0) {
            uVar112 = uVar112 ^ uVar111 ^ 0xffffffff;
            lVar80 = 0;
            iVar31 = 0;
            uVar86 = 0;
            if (uVar111 != 0) {
              uVar86 = uVar112 / uVar111;
            }
            uVar87 = 0xcbf29ce484222325;
            do {
              pcVar42 = (char *)(*(long *)(lVar91 + 8) + (ulong)(uVar112 - uVar86 * uVar111) +
                                lVar80);
              iVar31 = iVar31 + 1;
              lVar80 = (long)iVar31;
              uVar87 = uVar87 * 0x100000001b3 ^ (long)*pcVar42;
            } while (sVar17 != iVar31);
          }
          uVar115 = uVar115 ^ uVar111 ^ 0xffffffff;
          uVar86 = 0;
          if (uVar111 != 0) {
            uVar86 = uVar115 / uVar111;
          }
          bVar28 = (uVar87 ^ (long)*(int *)(*(long *)(lVar91 + 8) +
                                           (ulong)(uVar115 - uVar86 * uVar111))) == uVar81;
          goto LAB_0013d31c;
        }
      }
      else {
        pplVar82 = (long **)0x0;
        uVar58 = 0xfacb36c3;
        if (((uVar86 == 0xf34248d0) ||
            (pplVar82 = (long **)((ulong)pplVar100 & 0xffffffff), uVar58 = local_624,
            uVar86 == 0xf550c5ab)) ||
           (pplVar82 = (long **)((ulong)pplVar100 & 0xffffffff), uVar58 = local_808,
           uVar86 == 0xf5a4b13e)) goto LAB_0012ed04;
      }
    }
    else if ((int)uVar86 < -0x61a922c) {
      if ((int)uVar86 < -0x963ec2b) {
        uVar58 = local_62c;
        if ((uVar86 == 0xf5fd549b) || (uVar58 = local_7c4, uVar86 == 0xf6001153)) goto LAB_0012ed04;
      }
      else {
        uVar58 = local_5d0;
        if ((uVar86 == 0xf69c13d5) ||
           ((pplVar82 = (long **)((ulong)pplVar100 & 0xffffffff), uVar58 = local_614,
            uVar86 == 0xf83504c1 ||
            (pplVar82 = (long **)((ulong)pplVar100 & 0xffffffff), uVar58 = local_7ec,
            uVar86 == 0xf8421b97)))) goto LAB_0012ed04;
      }
    }
    else {
      if ((int)uVar86 < -0x534c93d) {
        if (uVar86 == 0xf9e56dd4) {
          unaff_x24 = *(long ***)(local_470 + 8);
          uVar44 = *(uint *)(unaff_x24 + 2);
          uVar111 = *(uint *)((long)unaff_x24 + 0x14);
          plVar95 = unaff_x24[1];
          uVar58 = uVar111 + 4;
          uVar86 = *(uint *)((long)plVar95 + (ulong)uVar111);
          *(uint *)((long)unaff_x24 + 0x14) = uVar58;
          uVar87 = *(ulong *)((long)plVar95 + (ulong)uVar58);
          uVar86 = uVar86 ^ uVar44 ^ 0xffffffff;
          iVar31 = (uVar58 ^ 8) + uVar58 * 2 + (uVar111 * -2 - 10 | 0x10);
          uVar58 = 0;
          if (uVar44 != 0) {
            uVar58 = uVar86 / uVar44;
          }
          *(uint *)((long)unaff_x24 + 0x14) = iVar31 + 2U;
          uVar111 = *(uint *)((long)plVar95 + (ulong)(iVar31 + 2U)) ^ uVar44 ^ 0xffffffff;
          *(uint *)((long)unaff_x24 + 0x14) = iVar31 + 6U;
          sVar17 = *(short *)((long)plVar95 + (ulong)(iVar31 + 6U));
          *(uint *)((long)unaff_x24 + 0x14) = iVar31 + 8U;
          uVar113 = 0;
          if (uVar44 != 0) {
            uVar113 = uVar111 / uVar44;
          }
          uVar112 = *(uint *)((long)plVar95 + (ulong)(iVar31 + 8U)) ^ uVar44 ^ 0xffffffff;
          *(uint *)((long)unaff_x24 + 0x14) = iVar31 + 0xcU;
          uVar96 = *(uint *)((long)plVar95 + (ulong)(iVar31 + 0xcU));
          *(int *)((long)unaff_x24 + 0x14) = iVar31 + 0x10;
          *(uint *)((long)unaff_x24 + 0x14) = iVar31 + 0x14U;
          uVar115 = *(uint *)((long)plVar95 + (ulong)(iVar31 + 0x14U));
          uVar96 = uVar96 ^ uVar44 ^ 0xffffffff;
          *(int *)((long)unaff_x24 + 0x14) = iVar31 + 0x18;
          uVar115 = uVar115 ^ uVar44 ^ 0xffffffff;
          uVar94 = 0;
          if (uVar44 != 0) {
            uVar94 = uVar112 / uVar44;
          }
          uVar101 = 0;
          if (uVar44 != 0) {
            uVar101 = uVar115 / uVar44;
          }
          uVar85 = 0;
          if (uVar44 != 0) {
            uVar85 = uVar96 / uVar44;
          }
          uVar115 = *(uint *)((long)plVar95 + (ulong)(uVar115 - uVar101 * uVar44));
          if (uVar115 < 0x37) {
                    /* WARNING: Could not recover jumptable at 0x00138ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar87 = (*(code *)(&UNK_00138cec +
                               (ulong)*(ushort *)(&DAT_0010eb80 + (ulong)uVar115 * 2) * 4))();
            return uVar87;
          }
          uVar81 = 0xcbf29ce484222325;
          iVar31 = (int)sVar17;
          if (iVar31 != 0) {
            lVar80 = 0;
            iVar32 = 0;
            do {
              lVar91 = lVar80 + (ulong)(uVar111 - uVar113 * uVar44);
              iVar32 = iVar32 + 1;
              lVar80 = (long)iVar32;
              uVar81 = uVar81 * 0x100000001b3 ^ (long)*(char *)((long)unaff_x24[1] + lVar91);
            } while (iVar31 != iVar32);
          }
          uVar111 = uVar112 - uVar94 * uVar44;
          if ((uVar81 ^ (long)*(int *)((long)unaff_x24[1] + (ulong)(uVar86 - uVar58 * uVar44))) !=
              uVar87) {
            uVar111 = uVar96 - uVar85 * uVar44;
          }
          puVar91 = (undefined8 *)(ulong)uVar111;
          goto LAB_0012ecfc;
        }
        uVar58 = local_618;
        if ((uVar86 != 0xfa452fd1) && (uVar58 = local_7c0, uVar86 != 0xfa85355f)) goto LAB_0013267c;
        goto LAB_0012ed04;
      }
      if (uVar86 == 0xfbc79c53) {
        lVar91 = *(long *)(local_470 + 8);
        uVar111 = *(uint *)(lVar91 + 0x10);
        uVar86 = *(uint *)(lVar91 + 0x14);
        lVar80 = *(long *)(lVar91 + 8);
        uVar113 = *(uint *)(lVar80 + (ulong)uVar86);
        uVar58 = uVar86 + 8;
        *(uint *)(lVar91 + 0x14) = uVar86 + 4;
        uVar112 = *(uint *)(lVar80 + (ulong)(uVar86 + 4));
        *(uint *)(lVar91 + 0x14) = uVar58;
        uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
        uVar86 = (uVar58 * 2 | 0x11) + (uVar58 ^ 0xfffffff7);
        local_490 = *(long ***)(lVar80 + (ulong)uVar58);
        uVar58 = 0;
        if (uVar111 != 0) {
          uVar58 = uVar113 / uVar111;
        }
        uVar96 = uVar86 + 4;
        *(uint *)(lVar91 + 0x14) = uVar86;
        uVar112 = uVar112 ^ uVar111 ^ 0xffffffff;
        uVar115 = *(uint *)(lVar80 + (ulong)uVar86);
        *(uint *)(lVar91 + 0x14) = uVar96;
        uVar86 = (uVar96 * 2 | 5) + (uVar96 ^ 0xfffffffd);
        sVar17 = *(short *)(lVar80 + (ulong)uVar96);
        *(uint *)(lVar91 + 0x14) = uVar86;
        uVar33 = *(undefined4 *)(lVar80 + (ulong)uVar86);
        *(uint *)(lVar91 + 0x14) = uVar86 + 4;
        uVar115 = uVar115 ^ uVar111 ^ 0xffffffff;
        uVar30 = *(undefined4 *)(lVar80 + (ulong)(uVar86 + 4));
        local_498 = (long **)CONCAT44(local_498._4_4_,uVar33);
        uVar96 = 0;
        if (uVar111 != 0) {
          uVar96 = uVar112 / uVar111;
        }
        *(uint *)(lVar91 + 0x14) = uVar86 + 8;
        local_4b0 = (long **)CONCAT44(local_4b0._4_4_,uVar30);
        uVar94 = *(uint *)(lVar80 + (ulong)(uVar86 + 8));
        *(uint *)(lVar91 + 0x14) = uVar86 + 0xc;
        uVar101 = *(uint *)(lVar80 + (ulong)(uVar86 + 0xc));
        uVar94 = uVar94 ^ uVar111 ^ 0xffffffff;
        *(uint *)(lVar91 + 0x14) = uVar86 + 0x10;
        paVar89 = *(astruct_1 **)(lVar80 + (ulong)(uVar113 - uVar58 * uVar111));
        uVar101 = uVar101 ^ uVar111 ^ 0xffffffff;
        unaff_x24 = (long **)paVar89->field11_0x20;
        uVar58 = 0;
        if (uVar111 != 0) {
          uVar58 = uVar94 / uVar111;
        }
        local_4d0 = (long **)CONCAT44(local_4d0._4_4_,uVar112 - uVar96 * uVar111);
        uVar86 = 0;
        if (uVar111 != 0) {
          uVar86 = uVar101 / uVar111;
        }
        uVar113 = 0;
        if (uVar111 != 0) {
          uVar113 = uVar115 / uVar111;
        }
        local_4f0 = *(long **)(lVar80 + (ulong)(uVar94 - uVar58 * uVar111));
        local_508 = (undefined *)CONCAT44(local_508._4_4_,uVar115 - uVar113 * uVar111);
        uVar87 = *(long *)(lVar80 + (ulong)(uVar101 - uVar86 * uVar111)) << 3 | 1;
        local_464 = uVar44;
        do {
          pplVar82 = (long **)paVar89->field10_0x18;
          plVar95 = (long *)((long)unaff_x24 - (long)pplVar82);
          uVar47 = paVar89->field1_0x8 - paVar89->pStart;
          uVar81 = 0;
          if (uVar47 != 0) {
            uVar81 = (ulong)plVar95 / uVar47;
          }
          bVar102 = *(byte *)((long)plVar95 + (paVar89->pStart - uVar81 * uVar47)) ^
                    ((byte)uVar87 & 0x7f | (0x7f < uVar87) << 7);
          if (unaff_x24 < paVar89->field12_0x28) {
            *(byte *)unaff_x24 = bVar102;
            pplVar100 = (long **)((long)unaff_x24 + 1);
          }
          else {
            pbVar98 = (byte *)((long)plVar95 + 1);
            if ((long)pbVar98 < 0) goto LAB_00142498;
            uVar81 = (long)paVar89->field12_0x28 - (long)pplVar82;
            pbVar66 = (byte *)(uVar81 * 2);
            if (pbVar66 < pbVar98 || (long)pbVar66 - (long)pbVar98 == 0) {
              pbVar66 = pbVar98;
            }
            if (0x3ffffffffffffffe < uVar81) {
              pbVar66 = (byte *)0x7fffffffffffffff;
            }
            if (pbVar66 == (byte *)0x0) {
              plVar39 = (long *)0x0;
              *(byte *)plVar95 = bVar102;
              plVar48 = plVar95;
            }
            else {
              plVar39 = (long *)malloc(pbVar66);
              plVar48 = (long *)((long)plVar39 + (long)plVar95);
              *(byte *)plVar48 = bVar102;
            }
            pplVar100 = (long **)((long)plVar48 + 1);
            if (unaff_x24 != pplVar82) {
              if ((plVar95 < (long *)0x8) || ((ulong)((long)pplVar82 - (long)plVar39) < 0x20)) {
LAB_00138f8c:
                do {
                  plVar48 = (long *)((long)plVar48 + -1);
                  unaff_x24 = (long **)((long)unaff_x24 + -1);
                  *(byte *)plVar48 = *(byte *)unaff_x24;
                } while (unaff_x24 != pplVar82);
              }
              else if (plVar95 < (long *)0x20) {
                plVar56 = (long *)0x0;
LAB_00138f3c:
                puVar84 = (undefined8 *)((long)unaff_x24 - (long)plVar56);
                plVar79 = (long *)((ulong)plVar95 & 0xfffffffffffffff8);
                unaff_x24 = (long **)((long)unaff_x24 - (long)plVar79);
                puVar91 = (undefined8 *)((long)plVar39 + ((long)puVar84 - (long)pplVar82));
                lVar80 = (long)plVar56 - (long)plVar79;
                do {
                  puVar84 = puVar84 + -1;
                  puVar91 = puVar91 + -1;
                  lVar80 = lVar80 + 8;
                  *puVar91 = *puVar84;
                } while (lVar80 != 0);
                if (plVar95 != plVar79) {
                  plVar48 = (long *)((long)plVar48 - (long)plVar79);
                  goto LAB_00138f8c;
                }
              }
              else {
                plVar56 = (long *)((ulong)plVar95 & 0xffffffffffffffe0);
                pplVar88 = unaff_x24 + -2;
                pplVar77 = (long **)((byte *)((long)plVar39 + (long)plVar95) + -0x10);
                plVar79 = plVar56;
                do {
                  pplVar71 = pplVar88 + -1;
                  plVar55 = pplVar88[-2];
                  plVar76 = pplVar88[1];
                  plVar38 = *pplVar88;
                  plVar79 = plVar79 + -4;
                  pplVar88 = pplVar88 + -4;
                  pplVar77[-1] = *pplVar71;
                  pplVar77[-2] = plVar55;
                  pplVar77[1] = plVar76;
                  *pplVar77 = plVar38;
                  pplVar77 = pplVar77 + -4;
                } while (plVar79 != (long *)0x0);
                if (plVar95 != plVar56) {
                  if (((ulong)plVar95 & 0x18) == 0) {
                    plVar48 = (long *)((long)plVar48 - (long)plVar56);
                    unaff_x24 = (long **)((long)unaff_x24 - (long)plVar56);
                    goto LAB_00138f8c;
                  }
                  goto LAB_00138f3c;
                }
              }
              unaff_x24 = (long **)paVar89->field10_0x18;
              plVar48 = plVar39;
            }
            paVar89->field10_0x18 = plVar48;
            paVar89->field11_0x20 = (char *)pplVar100;
            paVar89->field12_0x28 = (char *)((long)plVar39 + (long)pbVar66);
            if (unaff_x24 != (long **)0x0) {
              free(unaff_x24);
            }
          }
          unaff_x24 = pplVar100;
          plVar95 = local_4f0;
          paVar89->field11_0x20 = (char *)unaff_x24;
          bVar28 = 0x7f < uVar87;
          uVar87 = uVar87 >> 7;
        } while (bVar28);
        vector_append_value(paVar89,(uint)local_4f0);
        vector_append_value(paVar89,(uint)((ulong)plVar95 >> 8));
        vector_append_value(paVar89,(uint)((ulong)plVar95 >> 0x10));
        vector_append_value(paVar89,(uint)((ulong)plVar95 >> 0x18));
        uVar58 = (uint)((ulong)plVar95 >> 0x20);
        vector_append_value(paVar89,uVar58);
        vector_append_value(paVar89,uVar58 >> 8);
        vector_append_value(paVar89,(uint)(ushort)((ulong)plVar95 >> 0x30));
        vector_append_value(paVar89,(uint)(byte)((ulong)plVar95 >> 0x38));
        uVar87 = 0xcbf29ce484222325;
        if (sVar17 != 0) {
          lVar80 = 0;
          iVar31 = 0;
          do {
            pcVar42 = (char *)(*(long *)(lVar91 + 8) + ((ulong)local_508 & 0xffffffff) + lVar80);
            iVar31 = iVar31 + 1;
            lVar80 = (long)iVar31;
            uVar87 = uVar87 * 0x100000001b3 ^ (long)*pcVar42;
          } while (sVar17 != iVar31);
        }
        uVar81 = (ulong)*(int *)(*(long *)(lVar91 + 8) + ((ulong)local_4d0 & 0xffffffff));
        pplVar82 = (long **)((uVar87 ^ uVar81) + (uVar81 & (uVar87 ^ 0xffffffffffffffff)) +
                             (uVar87 | uVar81 ^ 0xffffffffffffffff) + 1);
        unaff_x27 = unaff_x24;
        goto LAB_00139350;
      }
      uVar58 = local_76c;
      if (uVar86 == 0xfc90aaaa) goto LAB_0012ed04;
      if (uVar86 == 0xfacb36c3) {
        if (*(long *)(local_960 + 0x28) == local_78) {
          return (ulong)(uVar44 & 1);
        }
LAB_001424c4:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
  }
  else if ((int)uVar86 < 0x3f44a7f1) {
    if ((int)uVar86 < 0x188af6da) {
      if ((int)uVar86 < 0xb53c541) {
        if ((int)uVar86 < 0x44ad530) {
          if (0x20be221 < (int)uVar86) {
            if (uVar86 == 0x20be222) {
              lVar91 = *(long *)(local_470 + 8);
              uVar111 = *(uint *)(lVar91 + 0x10);
              uVar112 = *(uint *)(lVar91 + 0x14);
              lVar80 = *(long *)(lVar91 + 8);
              uVar86 = *(uint *)(lVar80 + (ulong)uVar112);
              *(uint *)(lVar91 + 0x14) = uVar112 + 4;
              uVar113 = *(uint *)(lVar80 + (ulong)(uVar112 + 4));
              *(uint *)(lVar91 + 0x14) = uVar112 + 8;
              uVar86 = uVar86 ^ uVar111 ^ 0xffffffff;
              uVar58 = uVar112 + 0x10;
              uVar96 = 0;
              if (uVar111 != 0) {
                uVar96 = uVar86 / uVar111;
              }
              uVar115 = *(uint *)(lVar80 + (ulong)(uVar112 + 8)) ^ uVar111 ^ 0xffffffff;
              *(uint *)(lVar91 + 0x14) = uVar112 + 0xc;
              uVar94 = *(uint *)(lVar80 + (ulong)(uVar112 + 0xc));
              *(uint *)(lVar91 + 0x14) = uVar58;
              lVar54 = *(long *)(lVar80 + (ulong)uVar58);
              iVar31 = (uVar58 * 2 | 0x10) + (uVar58 ^ 8) + (uVar58 * 2 ^ 0xffffffee);
              uVar58 = iVar31 + 2;
              uVar112 = iVar31 + 6;
              uVar101 = 0;
              if (uVar111 != 0) {
                uVar101 = uVar115 / uVar111;
              }
              *(uint *)(lVar91 + 0x14) = uVar58;
              uVar22 = *(uint *)(lVar80 + (ulong)uVar58);
              *(uint *)(lVar91 + 0x14) = uVar112;
              uVar85 = (uVar58 * 2 & 4) + (uVar112 ^ 2);
              sVar17 = *(short *)(lVar80 + (ulong)uVar112);
              *(uint *)(lVar91 + 0x14) = uVar85;
              uVar58 = *(uint *)(lVar80 + (ulong)uVar85);
              *(uint *)(lVar91 + 0x14) = uVar85 + 4;
              uVar112 = *(uint *)(lVar80 + (ulong)(uVar85 + 4));
              *(uint *)(lVar91 + 0x14) = uVar85 + 8;
              plVar95 = *(long **)(lVar80 + (ulong)(uVar86 - uVar96 * uVar111));
              _local_1a0 = (long *)CONCAT44(uStack_19c,
                                            *(undefined4 *)
                                             (lVar80 + (ulong)(uVar115 - uVar101 * uVar111)));
              pplVar100 = (long **)plVar95[1];
              local_464 = uVar44;
              for (pplVar82 = (long **)*plVar95; pplVar82 != pplVar100; pplVar82 = pplVar82 + 1) {
                (**(code **)(**pplVar82 + 8))(&local_2e0,*pplVar82,&local_1a0);
                if ((uint)local_2e0 != 0) {
                  uVar33 = 0;
                  goto LAB_0013c08c;
                }
              }
              uVar33 = 1;
              local_2e0 = (long *)((ulong)local_2e0 & 0xffffffff00000000);
LAB_0013c08c:
              uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
              uVar86 = 0;
              if (uVar111 != 0) {
                uVar86 = uVar113 / uVar111;
              }
              uVar87 = 0xcbf29ce484222325;
              *(undefined4 *)(*(long *)(lVar91 + 8) + (ulong)(uVar113 - uVar86 * uVar111)) = uVar33;
              lVar80 = *(long *)(lVar91 + 8);
              if (sVar17 != 0) {
                uVar86 = uVar22 ^ uVar111 ^ 0xffffffff;
                lVar91 = 0;
                iVar31 = 0;
                uVar44 = 0;
                if (uVar111 != 0) {
                  uVar44 = uVar86 / uVar111;
                }
                uVar87 = 0xcbf29ce484222325;
                do {
                  pcVar42 = (char *)(lVar80 + (ulong)(uVar86 - uVar44 * uVar111) + lVar91);
                  iVar31 = iVar31 + 1;
                  lVar91 = (long)iVar31;
                  uVar87 = uVar87 * 0x100000001b3 ^ (long)*pcVar42;
                } while (sVar17 != iVar31);
              }
              uVar94 = uVar94 ^ uVar111 ^ 0xffffffff;
              goto LAB_0013c108;
            }
            uVar58 = local_5f4;
            if ((uVar86 != 0x28fcb0f) && (uVar58 = local_7bc, uVar86 != 0x402d7eb))
            goto LAB_0013267c;
            goto LAB_0012ed04;
          }
          uVar58 = local_654;
          if ((uVar86 == 0xfdb2acbe) || (uVar58 = local_7d8, uVar86 == 0xfeac16f4))
          goto LAB_0012ed04;
        }
        else if ((int)uVar86 < 0x7088655) {
          uVar58 = local_664;
          if (uVar86 == 0x44ad530) goto LAB_0012ed04;
          if (uVar86 == 0x59cf1e1) {
            unaff_x27 = *(long ***)(local_470 + 8);
            uVar111 = *(uint *)(unaff_x27 + 2);
            uVar112 = *(uint *)((long)unaff_x27 + 0x14);
            plVar95 = unaff_x27[1];
            uVar113 = *(uint *)((long)plVar95 + (ulong)uVar112);
            uVar58 = uVar112 + 8;
            uVar86 = uVar58 & 8;
            *(uint *)((long)unaff_x27 + 0x14) = uVar112 + 4;
            uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
            uVar96 = 0;
            if (uVar111 != 0) {
              uVar96 = uVar113 / uVar111;
            }
            uVar94 = *(uint *)((long)plVar95 + (ulong)(uVar112 + 4));
            *(uint *)((long)unaff_x27 + 0x14) = uVar58;
            lVar80 = *(long *)((long)plVar95 + (ulong)uVar58);
            iVar31 = (uVar58 ^ 8) + ~uVar86 + (uVar86 | (uVar86 >> 3) << 4);
            uVar58 = iVar31 + 1;
            uVar86 = iVar31 + 5;
            *(uint *)((long)unaff_x27 + 0x14) = uVar58;
            uVar115 = *(uint *)((long)plVar95 + (ulong)uVar58);
            *(uint *)((long)unaff_x27 + 0x14) = uVar86;
            uVar112 = (uVar86 | 2) + (uVar58 & 2);
            sVar17 = *(short *)((long)plVar95 + (ulong)uVar86);
            *(uint *)((long)unaff_x27 + 0x14) = uVar112;
            uVar58 = *(uint *)((long)plVar95 + (ulong)uVar112);
            unaff_x24 = (long **)(ulong)uVar58;
            *(uint *)((long)unaff_x27 + 0x14) = uVar112 + 4;
            uVar86 = *(uint *)((long)plVar95 + (ulong)(uVar112 + 4));
            *(uint *)((long)unaff_x27 + 0x14) = uVar112 + 8;
            plVar48 = *(long **)((long)plVar95 + (ulong)(uVar113 - uVar96 * uVar111));
            local_464 = uVar44;
            if (plVar48 != (long *)0x0) {
              plVar95 = (long *)plVar48[2];
              while (plVar95 != (long *)0x0) {
                lVar91 = *plVar95;
                if ((*(byte *)(plVar95 + 2) & 1) != 0) {
                  free(plVar95[4]);
                }
                free(plVar95);
                plVar95 = (long *)lVar91;
              }
              lVar91 = *plVar48;
              *plVar48 = 0;
              if (lVar91 != 0) {
                free();
              }
              free(plVar48);
              plVar95 = unaff_x27[1];
            }
            uVar87 = 0xcbf29ce484222325;
            if (sVar17 != 0) {
              uVar115 = uVar115 ^ uVar111 ^ 0xffffffff;
              lVar91 = 0;
              iVar31 = 0;
              uVar44 = 0;
              if (uVar111 != 0) {
                uVar44 = uVar115 / uVar111;
              }
              uVar87 = 0xcbf29ce484222325;
              do {
                lVar54 = lVar91 + (ulong)(uVar115 - uVar44 * uVar111);
                iVar31 = iVar31 + 1;
                lVar91 = (long)iVar31;
                uVar87 = uVar87 * 0x100000001b3 ^ (long)*(char *)((long)plVar95 + lVar54);
              } while (sVar17 != iVar31);
            }
            uVar94 = uVar94 ^ uVar111 ^ 0xffffffff;
            uVar44 = 0;
            if (uVar111 != 0) {
              uVar44 = uVar94 / uVar111;
            }
            uVar81 = (ulong)*(int *)((long)plVar95 + (ulong)(uVar94 - uVar44 * uVar111));
            if ((uVar87 + ~(uVar87 & uVar81)) - (uVar87 | uVar81 ^ 0xffffffffffffffff) != lVar80) {
              uVar58 = uVar86;
            }
            goto LAB_001395a8;
          }
        }
        else {
          uVar58 = local_5bc;
          if ((uVar86 == 0x7088655) || (uVar58 = local_64c, uVar86 == 0x76edb2e)) goto LAB_0012ed04;
          if (uVar86 == 0xa515824) {
            lVar91 = *(long *)(local_470 + 8);
            uVar111 = *(uint *)(lVar91 + 0x10);
            uVar112 = *(uint *)(lVar91 + 0x14);
            lVar80 = *(long *)(lVar91 + 8);
            uVar86 = *(uint *)(lVar80 + (ulong)uVar112);
            *(uint *)(lVar91 + 0x14) = uVar112 + 4;
            uVar58 = uVar112 + 0x10;
            uVar113 = *(uint *)(lVar80 + (ulong)(uVar112 + 4));
            uVar86 = uVar86 ^ uVar111 ^ 0xffffffff;
            *(uint *)(lVar91 + 0x14) = uVar112 + 8;
            uVar96 = 0;
            if (uVar111 != 0) {
              uVar96 = uVar86 / uVar111;
            }
            uVar115 = *(uint *)(lVar80 + (ulong)(uVar112 + 8));
            *(uint *)(lVar91 + 0x14) = uVar112 + 0xc;
            uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
            uVar94 = *(uint *)(lVar80 + (ulong)(uVar112 + 0xc));
            uVar115 = uVar115 ^ uVar111 ^ 0xffffffff;
            *(uint *)(lVar91 + 0x14) = uVar58;
            uVar94 = uVar94 ^ uVar111 ^ 0xffffffff;
            uVar112 = (uVar58 | 8) + (uVar112 & 8);
            local_490 = *(long ***)(lVar80 + (ulong)uVar58);
            uVar58 = uVar112 + 4;
            *(uint *)(lVar91 + 0x14) = uVar112;
            uVar101 = *(uint *)(lVar80 + (ulong)uVar112);
            *(uint *)(lVar91 + 0x14) = uVar58;
            iVar31 = uVar112 + (uVar58 | 2) + (-uVar112 - 5 | 2);
            uVar101 = uVar101 ^ uVar111 ^ 0xffffffff;
            sVar17 = *(short *)(lVar80 + (ulong)uVar58);
            unaff_x27 = (long **)(long)sVar17;
            uVar58 = 0;
            if (uVar111 != 0) {
              uVar58 = uVar113 / uVar111;
            }
            uVar112 = 0;
            if (uVar111 != 0) {
              uVar112 = uVar115 / uVar111;
            }
            *(uint *)(lVar91 + 0x14) = iVar31 + 5U;
            uVar33 = *(undefined4 *)(lVar80 + (ulong)(iVar31 + 5U));
            *(uint *)(lVar91 + 0x14) = iVar31 + 9U;
            uVar30 = *(undefined4 *)(lVar80 + (ulong)(iVar31 + 9U));
            *(int *)(lVar91 + 0x14) = iVar31 + 0xd;
            local_498 = (long **)CONCAT44(local_498._4_4_,uVar33);
            paVar89 = *(astruct_1 **)(lVar80 + (ulong)(uVar113 - uVar58 * uVar111));
            local_4b0 = (long **)CONCAT44(local_4b0._4_4_,uVar30);
            unaff_x24 = (long **)paVar89->field11_0x20;
            uVar58 = 0;
            if (uVar111 != 0) {
              uVar58 = uVar94 / uVar111;
            }
            uVar113 = 0;
            if (uVar111 != 0) {
              uVar113 = uVar101 / uVar111;
            }
            local_4d0 = (long **)CONCAT44(local_4d0._4_4_,uVar94 - uVar58 * uVar111);
            local_4f0 = (long *)CONCAT44(local_4f0._4_4_,
                                         *(undefined4 *)
                                          (lVar80 + (ulong)(uVar115 - uVar112 * uVar111)));
            local_508 = (undefined *)CONCAT44(local_508._4_4_,uVar101 - uVar113 * uVar111);
            uVar87 = *(long *)(lVar80 + (ulong)(uVar86 - uVar96 * uVar111)) << 3 | 5;
            local_464 = uVar44;
            do {
              pplVar82 = (long **)paVar89->field10_0x18;
              plVar95 = (long *)((long)unaff_x24 - (long)pplVar82);
              uVar47 = paVar89->field1_0x8 - paVar89->pStart;
              uVar81 = 0;
              if (uVar47 != 0) {
                uVar81 = (ulong)plVar95 / uVar47;
              }
              bVar102 = *(byte *)((long)plVar95 + (paVar89->pStart - uVar81 * uVar47)) ^
                        ((byte)uVar87 & 0x7f | (0x7f < uVar87) << 7);
              if (unaff_x24 < paVar89->field12_0x28) {
                *(byte *)unaff_x24 = bVar102;
                pplVar100 = (long **)((long)unaff_x24 + 1);
              }
              else {
                pbVar98 = (byte *)((long)plVar95 + 1);
                if ((long)pbVar98 < 0) goto LAB_00142498;
                uVar81 = (long)paVar89->field12_0x28 - (long)pplVar82;
                pbVar66 = (byte *)(uVar81 * 2);
                if (pbVar66 < pbVar98 || (long)pbVar66 - (long)pbVar98 == 0) {
                  pbVar66 = pbVar98;
                }
                if (0x3ffffffffffffffe < uVar81) {
                  pbVar66 = (byte *)0x7fffffffffffffff;
                }
                if (pbVar66 == (byte *)0x0) {
                  plVar39 = (long *)0x0;
                  *(byte *)plVar95 = bVar102;
                  plVar48 = plVar95;
                }
                else {
                  plVar39 = (long *)malloc(pbVar66);
                  plVar48 = (long *)((long)plVar39 + (long)plVar95);
                  *(byte *)plVar48 = bVar102;
                }
                pplVar100 = (long **)((long)plVar48 + 1);
                if (unaff_x24 != pplVar82) {
                  if ((plVar95 < (long *)0x8) || ((ulong)((long)pplVar82 - (long)plVar39) < 0x20)) {
LAB_00130150:
                    do {
                      plVar48 = (long *)((long)plVar48 + -1);
                      unaff_x24 = (long **)((long)unaff_x24 + -1);
                      *(byte *)plVar48 = *(byte *)unaff_x24;
                    } while (unaff_x24 != pplVar82);
                  }
                  else if (plVar95 < (long *)0x20) {
                    plVar56 = (long *)0x0;
LAB_00130100:
                    puVar84 = (undefined8 *)((long)unaff_x24 - (long)plVar56);
                    plVar79 = (long *)((ulong)plVar95 & 0xfffffffffffffff8);
                    unaff_x24 = (long **)((long)unaff_x24 - (long)plVar79);
                    puVar91 = (undefined8 *)((long)plVar39 + ((long)puVar84 - (long)pplVar82));
                    lVar80 = (long)plVar56 - (long)plVar79;
                    do {
                      puVar84 = puVar84 + -1;
                      puVar91 = puVar91 + -1;
                      lVar80 = lVar80 + 8;
                      *puVar91 = *puVar84;
                    } while (lVar80 != 0);
                    if (plVar95 != plVar79) {
                      plVar48 = (long *)((long)plVar48 - (long)plVar79);
                      goto LAB_00130150;
                    }
                  }
                  else {
                    plVar56 = (long *)((ulong)plVar95 & 0xffffffffffffffe0);
                    pplVar88 = unaff_x24 + -2;
                    pplVar77 = (long **)((byte *)((long)plVar39 + (long)plVar95) + -0x10);
                    plVar79 = plVar56;
                    do {
                      pplVar71 = pplVar88 + -1;
                      plVar55 = pplVar88[-2];
                      plVar76 = pplVar88[1];
                      plVar38 = *pplVar88;
                      plVar79 = plVar79 + -4;
                      pplVar88 = pplVar88 + -4;
                      pplVar77[-1] = *pplVar71;
                      pplVar77[-2] = plVar55;
                      pplVar77[1] = plVar76;
                      *pplVar77 = plVar38;
                      pplVar77 = pplVar77 + -4;
                    } while (plVar79 != (long *)0x0);
                    if (plVar95 != plVar56) {
                      if (((ulong)plVar95 & 0x18) == 0) {
                        plVar48 = (long *)((long)plVar48 - (long)plVar56);
                        unaff_x24 = (long **)((long)unaff_x24 - (long)plVar56);
                        goto LAB_00130150;
                      }
                      goto LAB_00130100;
                    }
                  }
                  unaff_x24 = (long **)paVar89->field10_0x18;
                  plVar48 = plVar39;
                }
                paVar89->field10_0x18 = plVar48;
                paVar89->field11_0x20 = (char *)pplVar100;
                paVar89->field12_0x28 = (char *)((long)plVar39 + (long)pbVar66);
                if (unaff_x24 != (long **)0x0) {
                  free(unaff_x24);
                }
              }
              unaff_x24 = pplVar100;
              paVar89->field11_0x20 = (char *)unaff_x24;
              bVar28 = 0x7f < uVar87;
              uVar87 = uVar87 >> 7;
            } while (bVar28);
            uVar58 = (uint)local_4f0;
            vector_append_value(paVar89,(uint)local_4f0);
            vector_append_value(paVar89,uVar58 >> 8);
            vector_append_value(paVar89,uVar58 >> 0x10);
            vector_append_value(paVar89,uVar58 >> 0x18);
            lVar80 = *(long *)(lVar91 + 8);
            uVar87 = 0xcbf29ce484222325;
            if (sVar17 != 0) {
              lVar91 = 0;
              iVar31 = 0;
              do {
                pcVar42 = (char *)(lVar80 + ((ulong)local_508 & 0xffffffff) + lVar91);
                iVar31 = iVar31 + 1;
                lVar91 = (long)iVar31;
                uVar87 = uVar87 * 0x100000001b3 ^ (long)*pcVar42;
              } while (sVar17 != iVar31);
            }
            goto LAB_00139344;
          }
        }
      }
      else {
        if ((int)uVar86 < 0xf61ba08) {
          if ((int)uVar86 < 0xd24157f) {
            if (uVar86 == 0xb53c541) {
              lVar91 = *(long *)(local_470 + 8);
              uVar111 = *(uint *)(lVar91 + 0x10);
              uVar86 = *(uint *)(lVar91 + 0x14);
              lVar80 = *(long *)(lVar91 + 8);
              uVar58 = uVar86 + 8;
              uVar112 = *(uint *)(lVar80 + (ulong)uVar86);
              *(uint *)(lVar91 + 0x14) = uVar86 + 4;
              uVar96 = *(uint *)(lVar80 + (ulong)(uVar86 + 4));
              *(uint *)(lVar91 + 0x14) = uVar58;
              iVar31 = (uVar58 ^ 8) + (uVar58 * 2 | 0xffffffee);
              uVar87 = *(ulong *)(lVar80 + (ulong)uVar58);
              uVar58 = iVar31 + 0x16;
              uVar86 = iVar31 + 0x12;
              *(uint *)(lVar91 + 0x14) = uVar86;
              uVar94 = *(uint *)(lVar80 + (ulong)uVar86);
              *(uint *)(lVar91 + 0x14) = uVar58;
              uVar86 = (uVar58 * 2 | 5) + (uVar58 ^ 0xfffffffd);
              sVar17 = *(short *)(lVar80 + (ulong)uVar58);
              *(uint *)(lVar91 + 0x14) = uVar86;
              uVar58 = *(uint *)(lVar80 + (ulong)uVar86);
              *(uint *)(lVar91 + 0x14) = uVar86 + 4;
              uVar115 = *(uint *)(lVar80 + (ulong)(uVar86 + 4));
              *(uint *)(lVar91 + 0x14) = uVar86 + 8;
              uVar113 = *(uint *)(lVar80 + (ulong)(uVar86 + 8));
              *(uint *)(lVar91 + 0x14) = uVar86 + 0xc;
              local_464 = uVar44;
              plVar95 = (long *)malloc(0x30);
              uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
              uVar112 = uVar112 ^ uVar111 ^ 0xffffffff;
              uVar86 = 0;
              if (uVar111 != 0) {
                uVar86 = uVar113 / uVar111;
              }
              uVar44 = 0;
              if (uVar111 != 0) {
                uVar44 = uVar112 / uVar111;
              }
              puVar91 = (undefined8 *)(*(long *)(lVar91 + 8) + (ulong)(uVar113 - uVar86 * uVar111));
              puVar84 = (undefined8 *)malloc(0x100);
              uVar114 = puVar91[0xd];
              uVar109 = puVar91[0xc];
              uVar108 = puVar91[0xf];
              uVar49 = puVar91[0xe];
              uVar122 = puVar91[9];
              uVar120 = puVar91[8];
              uVar118 = puVar91[0xb];
              uVar116 = puVar91[10];
              *plVar95 = (long)puVar84;
              puVar84[0xd] = uVar114;
              puVar84[0xc] = uVar109;
              puVar84[0xf] = uVar108;
              puVar84[0xe] = uVar49;
              puVar84[9] = uVar122;
              puVar84[8] = uVar120;
              puVar84[0xb] = uVar118;
              puVar84[10] = uVar116;
              uVar81 = 0xcbf29ce484222325;
              uVar114 = puVar91[0x15];
              uVar109 = puVar91[0x14];
              uVar108 = puVar91[0x17];
              uVar49 = puVar91[0x16];
              plVar95[2] = (long)(puVar84 + 0x20);
              uVar122 = puVar91[0x11];
              uVar120 = puVar91[0x10];
              uVar118 = puVar91[0x13];
              uVar116 = puVar91[0x12];
              puVar84[0x15] = uVar114;
              puVar84[0x14] = uVar109;
              puVar84[0x17] = uVar108;
              puVar84[0x16] = uVar49;
              puVar84[0x11] = uVar122;
              puVar84[0x10] = uVar120;
              puVar84[0x13] = uVar118;
              puVar84[0x12] = uVar116;
              uVar109 = puVar91[0x1c];
              uVar108 = puVar91[0x1f];
              uVar49 = puVar91[0x1e];
              uVar120 = puVar91[0x19];
              uVar118 = puVar91[0x18];
              uVar116 = puVar91[0x1b];
              uVar114 = puVar91[0x1a];
              puVar84[0x1d] = puVar91[0x1d];
              puVar84[0x1c] = uVar109;
              puVar84[0x1f] = uVar108;
              puVar84[0x1e] = uVar49;
              puVar84[0x19] = uVar120;
              puVar84[0x18] = uVar118;
              puVar84[0x1b] = uVar116;
              puVar84[0x1a] = uVar114;
              uVar114 = puVar91[5];
              uVar109 = puVar91[4];
              uVar108 = puVar91[7];
              uVar49 = puVar91[6];
              uVar122 = puVar91[1];
              uVar120 = *puVar91;
              uVar118 = puVar91[3];
              uVar116 = puVar91[2];
              plVar95[1] = (long)(puVar84 + 0x20);
              plVar95[4] = 0;
              plVar95[5] = 0;
              puVar84[5] = uVar114;
              puVar84[4] = uVar109;
              puVar84[7] = uVar108;
              puVar84[6] = uVar49;
              puVar84[1] = uVar122;
              *puVar84 = uVar120;
              puVar84[3] = uVar118;
              puVar84[2] = uVar116;
              plVar95[3] = 0;
              *(long **)(*(long *)(lVar91 + 8) + (ulong)(uVar112 - uVar44 * uVar111)) = plVar95;
              if (sVar17 != 0) {
                uVar86 = uVar94 ^ uVar111 ^ 0xffffffff;
                lVar80 = 0;
                iVar31 = 0;
                uVar44 = 0;
                if (uVar111 != 0) {
                  uVar44 = uVar86 / uVar111;
                }
                uVar81 = 0xcbf29ce484222325;
                do {
                  pcVar42 = (char *)(*(long *)(lVar91 + 8) + (ulong)(uVar86 - uVar44 * uVar111) +
                                    lVar80);
                  iVar31 = iVar31 + 1;
                  lVar80 = (long)iVar31;
                  uVar81 = uVar81 * 0x100000001b3 ^ (long)*pcVar42;
                } while (sVar17 != iVar31);
              }
              uVar96 = uVar96 ^ uVar111 ^ 0xffffffff;
              uVar86 = 0;
              if (uVar111 != 0) {
                uVar86 = uVar96 / uVar111;
              }
              uVar47 = (ulong)*(int *)(*(long *)(lVar91 + 8) + (ulong)(uVar96 - uVar86 * uVar111));
              uVar81 = ((uVar81 | uVar47) + ~uVar81) - (uVar47 | uVar81 ^ 0xffffffffffffffff);
              goto LAB_0013d898;
            }
            local_464 = uVar44;
            if (uVar86 != 0xc66ceda) goto LAB_0013267c;
            pplVar82 = *(long ***)(local_470 + 8);
            uVar112 = *(uint *)(pplVar82 + 2);
            uVar115 = *(uint *)((long)pplVar82 + 0x14);
            plVar95 = pplVar82[1];
            uVar86 = *(uint *)((long)plVar95 + (ulong)uVar115);
            *(uint *)((long)pplVar82 + 0x14) = uVar115 + 4;
            uVar111 = *(uint *)((long)plVar95 + (ulong)(uVar115 + 4));
            *(uint *)((long)pplVar82 + 0x14) = uVar115 + 8;
            uVar58 = uVar115 + 0x14;
            uVar96 = *(uint *)((long)plVar95 + (ulong)(uVar115 + 8));
            *(uint *)((long)pplVar82 + 0x14) = uVar115 + 0xc;
            uVar86 = uVar86 ^ uVar112 ^ 0xffffffff;
            uVar113 = *(uint *)((long)plVar95 + (ulong)(uVar115 + 0xc));
            *(uint *)((long)pplVar82 + 0x14) = uVar115 + 0x10;
            uVar94 = 0;
            if (uVar112 != 0) {
              uVar94 = uVar86 / uVar112;
            }
            uVar111 = uVar111 ^ uVar112 ^ 0xffffffff;
            uVar101 = *(uint *)((long)plVar95 + (ulong)(uVar115 + 0x10));
            *(uint *)((long)pplVar82 + 0x14) = uVar58;
            uVar115 = ((uVar58 ^ 0xffffffff) & 0xfffffff7) * -3 +
                      (~uVar58 | 0xfffffff7) + (uVar58 * 2 ^ 0xffffffee);
            local_4b0 = *(long ***)((long)plVar95 + (ulong)uVar58);
            uVar113 = uVar113 ^ uVar112 ^ 0xffffffff;
            uVar101 = uVar101 ^ uVar112 ^ 0xffffffff;
            *(uint *)((long)pplVar82 + 0x14) = uVar115;
            uVar58 = uVar115 + 4;
            uVar85 = *(uint *)((long)plVar95 + (ulong)uVar115);
            uVar96 = uVar96 ^ uVar112 ^ 0xffffffff;
            *(uint *)((long)pplVar82 + 0x14) = uVar58;
            uVar85 = uVar85 ^ uVar112 ^ 0xffffffff;
            sVar17 = *(short *)((long)plVar95 + (ulong)uVar58);
            unaff_x27 = (long **)(long)sVar17;
            uVar22 = 0;
            if (uVar112 != 0) {
              uVar22 = uVar111 / uVar112;
            }
            uVar7 = 0;
            if (uVar112 != 0) {
              uVar7 = uVar101 / uVar112;
            }
            iVar31 = (uVar58 * 2 | 4) + (uVar115 | 0xfffffffd) + (-uVar115 - 5 | 2);
            uVar58 = 0;
            if (uVar112 != 0) {
              uVar58 = uVar85 / uVar112;
            }
            local_4f0 = (long *)CONCAT44(local_4f0._4_4_,uVar101 - uVar7 * uVar112);
            *(uint *)((long)pplVar82 + 0x14) = iVar31 + 2U;
            uVar33 = *(undefined4 *)((long)plVar95 + (ulong)(iVar31 + 2U));
            *(uint *)((long)pplVar82 + 0x14) = iVar31 + 6U;
            local_4d0 = (long **)CONCAT44(local_4d0._4_4_,uVar33);
            uVar115 = 0;
            if (uVar112 != 0) {
              uVar115 = uVar113 / uVar112;
            }
            local_530 = (long **)CONCAT44(local_530._4_4_,uVar85 - uVar58 * uVar112);
            uVar33 = *(undefined4 *)((long)plVar95 + (ulong)(iVar31 + 6U));
            *(int *)((long)pplVar82 + 0x14) = iVar31 + 10;
            lVar80 = *(long *)((long)plVar95 + (ulong)(uVar86 - uVar94 * uVar112));
            local_508 = (undefined *)CONCAT44(local_508._4_4_,uVar33);
            uVar58 = 0;
            if (uVar112 != 0) {
              uVar58 = uVar96 / uVar112;
            }
            FUN_00149a84_XOR((astruct_3 *)&local_2e0,(char *)plVar95,uVar112,
                             uVar113 - uVar115 * uVar112,uVar111 - uVar22 * uVar112);
            plVar95 = *(long **)((long)pplVar82[1] + (ulong)(uVar96 - uVar58 * uVar112));
            uVar87 = lVar80 << 3 | 2;
            pplVar100 = (long **)plVar95[4];
            local_498 = pplVar82;
            local_490 = (long **)((ulong)local_2e0 >> 1 & 0x7f);
            pplVar82 = local_570;
            if (((ulong)local_2e0 & 1) != 0) {
              local_490 = (long **)CONCAT44(iStack_2d4,
                                            CONCAT22(uStack_2d6,CONCAT11(uStack_2d7,bStack_2d8)));
              pplVar82 = (long **)CONCAT44(iStack_2cc,
                                           CONCAT22(uStack_2ce,CONCAT11(uStack_2cf,bStack_2d0)));
            }
            do {
              while( true ) {
                pplVar88 = (long **)plVar95[3];
                pbVar98 = (byte *)((long)pplVar100 - (long)pplVar88);
                uVar47 = plVar95[1] - *plVar95;
                uVar81 = 0;
                if (uVar47 != 0) {
                  uVar81 = (ulong)pbVar98 / uVar47;
                }
                bVar102 = pbVar98[*plVar95 - uVar81 * uVar47] ^
                          ((byte)uVar87 & 0x7f | (0x7f < uVar87) << 7);
                if (pplVar100 < (long **)plVar95[5]) break;
                pbVar66 = pbVar98 + 1;
                if ((long)pbVar66 < 0) goto LAB_00142498;
                uVar81 = (long)(long **)plVar95[5] - (long)pplVar88;
                pbVar61 = (byte *)(uVar81 * 2);
                if (pbVar61 < pbVar66 || (long)pbVar61 - (long)pbVar66 == 0) {
                  pbVar61 = pbVar66;
                }
                if (0x3ffffffffffffffe < uVar81) {
                  pbVar61 = (byte *)0x7fffffffffffffff;
                }
                if (pbVar61 == (byte *)0x0) {
                  pbVar36 = (byte *)0x0;
                  *pbVar98 = bVar102;
                  pbVar66 = pbVar98;
                }
                else {
                  pbVar36 = (byte *)malloc(pbVar61);
                  pbVar66 = pbVar36 + (long)pbVar98;
                  *pbVar66 = bVar102;
                }
                pplVar77 = (long **)(pbVar66 + 1);
                if (pplVar100 != pplVar88) {
                  if ((pbVar98 < (byte *)0x8) || ((ulong)((long)pplVar88 - (long)pbVar36) < 0x20)) {
LAB_00131048:
                    do {
                      pbVar66 = pbVar66 + -1;
                      pplVar100 = (long **)((long)pplVar100 + -1);
                      *pbVar66 = *(byte *)pplVar100;
                    } while (pplVar100 != pplVar88);
                  }
                  else if (pbVar98 < (byte *)0x20) {
                    pbVar52 = (byte *)0x0;
LAB_00130ff8:
                    puVar84 = (undefined8 *)((long)pplVar100 - (long)pbVar52);
                    pbVar72 = (byte *)((ulong)pbVar98 & 0xfffffffffffffff8);
                    pplVar100 = (long **)((long)pplVar100 - (long)pbVar72);
                    puVar91 = (undefined8 *)(pbVar36 + ((long)puVar84 - (long)pplVar88));
                    lVar80 = (long)pbVar52 - (long)pbVar72;
                    do {
                      puVar84 = puVar84 + -1;
                      puVar91 = puVar91 + -1;
                      lVar80 = lVar80 + 8;
                      *puVar91 = *puVar84;
                    } while (lVar80 != 0);
                    if (pbVar98 != pbVar72) {
                      pbVar66 = pbVar66 + -(long)pbVar72;
                      goto LAB_00131048;
                    }
                  }
                  else {
                    pbVar52 = (byte *)((ulong)pbVar98 & 0xffffffffffffffe0);
                    pplVar71 = pplVar100 + -2;
                    pplVar70 = (long **)(pbVar36 + (long)pbVar98 + -0x10);
                    pbVar72 = pbVar52;
                    do {
                      pplVar69 = pplVar71 + -1;
                      plVar79 = pplVar71[-2];
                      plVar39 = pplVar71[1];
                      plVar48 = *pplVar71;
                      pbVar72 = pbVar72 + -0x20;
                      pplVar71 = pplVar71 + -4;
                      pplVar70[-1] = *pplVar69;
                      pplVar70[-2] = plVar79;
                      pplVar70[1] = plVar39;
                      *pplVar70 = plVar48;
                      pplVar70 = pplVar70 + -4;
                    } while (pbVar72 != (byte *)0x0);
                    if (pbVar98 != pbVar52) {
                      if (((ulong)pbVar98 & 0x18) == 0) {
                        pbVar66 = pbVar66 + -(long)pbVar52;
                        pplVar100 = (long **)((long)pplVar100 - (long)pbVar52);
                        goto LAB_00131048;
                      }
                      goto LAB_00130ff8;
                    }
                  }
                  pplVar100 = (long **)plVar95[3];
                  pbVar66 = pbVar36;
                }
                plVar95[3] = (long)pbVar66;
                plVar95[4] = (long)pplVar77;
                plVar95[5] = (long)(pbVar36 + (long)pbVar61);
                if (pplVar100 != (long **)0x0) {
                  free(pplVar100);
                }
                plVar95[4] = (long)pplVar77;
                bVar28 = uVar87 < 0x80;
                pplVar100 = pplVar77;
                pplVar88 = local_490;
                uVar87 = uVar87 >> 7;
                if (bVar28) goto LAB_001310b0;
              }
              pplVar77 = (long **)((long)pplVar100 + 1);
              *(byte *)pplVar100 = bVar102;
              plVar95[4] = (long)pplVar77;
              bVar28 = 0x7f < uVar87;
              pplVar100 = pplVar77;
              pplVar88 = local_490;
              uVar87 = uVar87 >> 7;
            } while (bVar28);
LAB_001310b0:
            do {
              pplVar100 = pplVar88;
              pplVar88 = (long **)plVar95[3];
              pbVar98 = (byte *)((long)pplVar77 - (long)pplVar88);
              uVar81 = plVar95[1] - *plVar95;
              uVar87 = 0;
              if (uVar81 != 0) {
                uVar87 = (ulong)pbVar98 / uVar81;
              }
              bVar102 = pbVar98[*plVar95 - uVar87 * uVar81] ^
                        ((byte)pplVar100 & 0x7f | ((long **)0x7f < pplVar100) << 7);
              if (pplVar77 < (long **)plVar95[5]) {
                pplVar71 = (long **)((long)pplVar77 + 1);
                *(byte *)pplVar77 = bVar102;
                plVar95[4] = (long)pplVar71;
                pplVar77 = pplVar71;
                pplVar88 = (long **)((ulong)pplVar100 >> 7);
                if (pplVar100 < (long **)0x80) break;
                goto LAB_001310b0;
              }
              pbVar66 = pbVar98 + 1;
              if ((long)pbVar66 < 0) goto LAB_00142498;
              uVar87 = (long)(long **)plVar95[5] - (long)pplVar88;
              pbVar61 = (byte *)(uVar87 * 2);
              if (pbVar61 < pbVar66 || (long)pbVar61 - (long)pbVar66 == 0) {
                pbVar61 = pbVar66;
              }
              if (0x3ffffffffffffffe < uVar87) {
                pbVar61 = (byte *)0x7fffffffffffffff;
              }
              if (pbVar61 == (byte *)0x0) {
                pbVar36 = (byte *)0x0;
                *pbVar98 = bVar102;
                pbVar66 = pbVar98;
              }
              else {
                pbVar36 = (byte *)malloc(pbVar61);
                pbVar66 = pbVar36 + (long)pbVar98;
                *pbVar66 = bVar102;
              }
              pplVar71 = (long **)(pbVar66 + 1);
              if (pplVar77 != pplVar88) {
                if ((pbVar98 < (byte *)0x8) || ((ulong)((long)pplVar88 - (long)pbVar36) < 0x20)) {
LAB_00131200:
                  do {
                    pbVar66 = pbVar66 + -1;
                    pplVar77 = (long **)((long)pplVar77 + -1);
                    *pbVar66 = *(byte *)pplVar77;
                  } while (pplVar77 != pplVar88);
                }
                else if (pbVar98 < (byte *)0x20) {
                  pbVar52 = (byte *)0x0;
LAB_001311b0:
                  puVar84 = (undefined8 *)((long)pplVar77 - (long)pbVar52);
                  pbVar72 = (byte *)((ulong)pbVar98 & 0xfffffffffffffff8);
                  pplVar77 = (long **)((long)pplVar77 - (long)pbVar72);
                  puVar91 = (undefined8 *)(pbVar36 + ((long)puVar84 - (long)pplVar88));
                  lVar80 = (long)pbVar52 - (long)pbVar72;
                  do {
                    puVar84 = puVar84 + -1;
                    puVar91 = puVar91 + -1;
                    lVar80 = lVar80 + 8;
                    *puVar91 = *puVar84;
                  } while (lVar80 != 0);
                  if (pbVar98 != pbVar72) {
                    pbVar66 = pbVar66 + -(long)pbVar72;
                    goto LAB_00131200;
                  }
                }
                else {
                  pbVar52 = (byte *)((ulong)pbVar98 & 0xffffffffffffffe0);
                  pplVar70 = pplVar77 + -2;
                  pplVar69 = (long **)(pbVar36 + (long)pbVar98 + -0x10);
                  pbVar72 = pbVar52;
                  do {
                    pplVar50 = pplVar70 + -1;
                    plVar79 = pplVar70[-2];
                    plVar39 = pplVar70[1];
                    plVar48 = *pplVar70;
                    pbVar72 = pbVar72 + -0x20;
                    pplVar70 = pplVar70 + -4;
                    pplVar69[-1] = *pplVar50;
                    pplVar69[-2] = plVar79;
                    pplVar69[1] = plVar39;
                    *pplVar69 = plVar48;
                    pplVar69 = pplVar69 + -4;
                  } while (pbVar72 != (byte *)0x0);
                  if (pbVar98 != pbVar52) {
                    if (((ulong)pbVar98 & 0x18) == 0) {
                      pbVar66 = pbVar66 + -(long)pbVar52;
                      pplVar77 = (long **)((long)pplVar77 - (long)pbVar52);
                      goto LAB_00131200;
                    }
                    goto LAB_001311b0;
                  }
                }
                pplVar77 = (long **)plVar95[3];
                pbVar66 = pbVar36;
              }
              plVar95[3] = (long)pbVar66;
              plVar95[4] = (long)pplVar71;
              plVar95[5] = (long)(pbVar36 + (long)pbVar61);
              if (pplVar77 != (long **)0x0) {
                free(pplVar77);
              }
              plVar95[4] = (long)pplVar71;
              pplVar77 = pplVar71;
              pplVar88 = (long **)((ulong)pplVar100 >> 7);
            } while ((long **)0x7f < pplVar100);
            unaff_x24 = (long **)((ulong)pplVar100 >> 7);
            if (local_490 != (long **)0x0) {
              pplVar100 = (long **)((long)pplVar82 + (long)local_490);
              do {
                unaff_x24 = (long **)plVar95[3];
                pbVar98 = (byte *)((long)pplVar71 - (long)unaff_x24);
                uVar81 = plVar95[1] - *plVar95;
                uVar87 = 0;
                if (uVar81 != 0) {
                  uVar87 = (ulong)pbVar98 / uVar81;
                }
                bVar102 = pbVar98[*plVar95 - uVar87 * uVar81] ^ *(byte *)pplVar82;
                if (pplVar71 < (long **)plVar95[5]) {
                  *(byte *)pplVar71 = bVar102;
                  pplVar88 = (long **)((long)pplVar71 + 1);
                }
                else {
                  pbVar66 = pbVar98 + 1;
                  if ((long)pbVar66 < 0) goto LAB_00142498;
                  uVar87 = (long)(long **)plVar95[5] - (long)unaff_x24;
                  pbVar61 = (byte *)(uVar87 * 2);
                  if (pbVar61 < pbVar66 || (long)pbVar61 - (long)pbVar66 == 0) {
                    pbVar61 = pbVar66;
                  }
                  if (0x3ffffffffffffffe < uVar87) {
                    pbVar61 = (byte *)0x7fffffffffffffff;
                  }
                  if (pbVar61 == (byte *)0x0) {
                    pbVar36 = (byte *)0x0;
                    *pbVar98 = bVar102;
                    pbVar66 = pbVar98;
                  }
                  else {
                    pbVar36 = (byte *)malloc(pbVar61);
                    pbVar66 = pbVar36 + (long)pbVar98;
                    *pbVar66 = bVar102;
                  }
                  pplVar88 = (long **)(pbVar66 + 1);
                  if (pplVar71 != unaff_x24) {
                    if ((pbVar98 < (byte *)0x8) || ((ulong)((long)unaff_x24 - (long)pbVar36) < 0x20)
                       ) {
LAB_001313b8:
                      do {
                        pbVar66 = pbVar66 + -1;
                        pplVar71 = (long **)((long)pplVar71 + -1);
                        *pbVar66 = *(byte *)pplVar71;
                      } while (pplVar71 != unaff_x24);
                    }
                    else if (pbVar98 < (byte *)0x20) {
                      pbVar52 = (byte *)0x0;
LAB_00131368:
                      puVar84 = (undefined8 *)((long)pplVar71 - (long)pbVar52);
                      pbVar72 = (byte *)((ulong)pbVar98 & 0xfffffffffffffff8);
                      pplVar71 = (long **)((long)pplVar71 - (long)pbVar72);
                      puVar91 = (undefined8 *)(pbVar36 + ((long)puVar84 - (long)unaff_x24));
                      lVar80 = (long)pbVar52 - (long)pbVar72;
                      do {
                        puVar84 = puVar84 + -1;
                        puVar91 = puVar91 + -1;
                        lVar80 = lVar80 + 8;
                        *puVar91 = *puVar84;
                      } while (lVar80 != 0);
                      if (pbVar98 != pbVar72) {
                        pbVar66 = pbVar66 + -(long)pbVar72;
                        goto LAB_001313b8;
                      }
                    }
                    else {
                      pbVar52 = (byte *)((ulong)pbVar98 & 0xffffffffffffffe0);
                      pplVar77 = pplVar71 + -2;
                      pplVar70 = (long **)(pbVar36 + (long)pbVar98 + -0x10);
                      pbVar72 = pbVar52;
                      do {
                        pplVar69 = pplVar77 + -1;
                        plVar79 = pplVar77[-2];
                        plVar39 = pplVar77[1];
                        plVar48 = *pplVar77;
                        pbVar72 = pbVar72 + -0x20;
                        pplVar77 = pplVar77 + -4;
                        pplVar70[-1] = *pplVar69;
                        pplVar70[-2] = plVar79;
                        pplVar70[1] = plVar39;
                        *pplVar70 = plVar48;
                        pplVar70 = pplVar70 + -4;
                      } while (pbVar72 != (byte *)0x0);
                      if (pbVar98 != pbVar52) {
                        if (((ulong)pbVar98 & 0x18) == 0) {
                          pbVar66 = pbVar66 + -(long)pbVar52;
                          pplVar71 = (long **)((long)pplVar71 - (long)pbVar52);
                          goto LAB_001313b8;
                        }
                        goto LAB_00131368;
                      }
                    }
                    pplVar71 = (long **)plVar95[3];
                    pbVar66 = pbVar36;
                  }
                  plVar95[3] = (long)pbVar66;
                  plVar95[4] = (long)pplVar88;
                  plVar95[5] = (long)(pbVar36 + (long)pbVar61);
                  if (pplVar71 != (long **)0x0) {
                    free(pplVar71);
                  }
                }
                pplVar71 = pplVar88;
                pplVar82 = (long **)((long)pplVar82 + 1);
                plVar95[4] = (long)pplVar71;
              } while (pplVar82 != pplVar100);
            }
            uVar87 = 0xcbf29ce484222325;
            if (sVar17 != 0) {
              lVar80 = 0;
              iVar31 = 0;
              do {
                lVar91 = lVar80 + ((ulong)local_530 & 0xffffffff);
                iVar31 = iVar31 + 1;
                lVar80 = (long)iVar31;
                uVar87 = uVar87 * 0x100000001b3 ^ (long)*(char *)((long)local_498[1] + lVar91);
              } while (sVar17 != iVar31);
            }
            uVar81 = (ulong)*(int *)((long)local_498[1] + ((ulong)local_4f0 & 0xffffffff));
            uVar58 = (uint)local_4d0;
            if ((long **)((uVar87 - uVar81) + (uVar81 & (uVar87 ^ 0xffffffffffffffff)) * 2) !=
                local_4b0) {
              uVar58 = (uint)local_508;
            }
            if (((ulong)local_2e0 & 1) != 0) goto LAB_0013c34c;
LAB_0013c354:
            uVar58 = uVar58 ^ uVar112 ^ 0xffffffff;
            pplVar82 = (long **)(ulong)local_464;
            uVar86 = 0;
            if (uVar112 != 0) {
              uVar86 = uVar58 / uVar112;
            }
            puVar91 = (undefined8 *)(ulong)(uVar58 - uVar86 * uVar112);
            goto LAB_0012ecfc;
          }
          if (uVar86 == 0xd24157f) {
            lVar91 = *(long *)(local_470 + 8);
            uVar111 = *(uint *)(lVar91 + 0x10);
            uVar113 = *(uint *)(lVar91 + 0x14);
            lVar80 = *(long *)(lVar91 + 8);
            uVar86 = *(uint *)(lVar80 + (ulong)uVar113);
            *(uint *)(lVar91 + 0x14) = uVar113 + 4;
            uVar58 = uVar113 + 0x10;
            uVar44 = *(uint *)(lVar80 + (ulong)(uVar113 + 4));
            uVar86 = uVar86 ^ uVar111 ^ 0xffffffff;
            *(uint *)(lVar91 + 0x14) = uVar113 + 8;
            uVar112 = 0;
            if (uVar111 != 0) {
              uVar112 = uVar86 / uVar111;
            }
            uVar44 = uVar44 ^ uVar111 ^ 0xffffffff;
            uVar96 = *(uint *)(lVar80 + (ulong)(uVar113 + 8)) ^ uVar111 ^ 0xffffffff;
            iVar31 = (uVar58 | 8) + (~uVar113 | 0xfffffff7) + (uVar113 & 8) * 2;
            *(uint *)(lVar91 + 0x14) = uVar113 + 0xc;
            uVar94 = *(uint *)(lVar80 + (ulong)(uVar113 + 0xc));
            uVar113 = iVar31 + 1;
            *(uint *)(lVar91 + 0x14) = uVar58;
            lVar54 = *(long *)(lVar80 + (ulong)uVar58);
            *(uint *)(lVar91 + 0x14) = uVar113;
            uVar115 = *(uint *)(lVar80 + (ulong)uVar113);
            uVar101 = 0;
            if (uVar111 != 0) {
              uVar101 = uVar44 / uVar111;
            }
            uVar58 = iVar31 + 5;
            *(uint *)(lVar91 + 0x14) = uVar58;
            sVar17 = *(short *)(lVar80 + (ulong)uVar58);
            uVar85 = 0;
            if (uVar111 != 0) {
              uVar85 = uVar96 / uVar111;
            }
            iVar31 = (uVar113 | 0xfffffffd) + ((uVar58 * 2 | 4) - (uVar58 & 0xfffffffd));
            *(uint *)(lVar91 + 0x14) = iVar31 + 1U;
            uVar58 = *(uint *)(lVar80 + (ulong)(iVar31 + 1U));
            *(uint *)(lVar91 + 0x14) = iVar31 + 5U;
            uVar113 = *(uint *)(lVar80 + (ulong)(iVar31 + 5U));
            unaff_x24 = (long **)(ulong)uVar113;
            *(int *)(lVar91 + 0x14) = iVar31 + 9;
            FUN_VMExecMain(*(long *)(lVar80 + (ulong)(uVar96 - uVar85 * uVar111)),
                           *(astruct **)(lVar80 + (ulong)(uVar44 - uVar101 * uVar111)),
                           *(long *)(lVar80 + (ulong)(uVar86 - uVar112 * uVar111)));
            uVar87 = 0xcbf29ce484222325;
            if (sVar17 != 0) {
              uVar115 = uVar115 ^ uVar111 ^ 0xffffffff;
              lVar80 = 0;
              iVar31 = 0;
              uVar86 = 0;
              if (uVar111 != 0) {
                uVar86 = uVar115 / uVar111;
              }
              uVar87 = 0xcbf29ce484222325;
              do {
                pcVar42 = (char *)(*(long *)(lVar91 + 8) + (ulong)(uVar115 - uVar86 * uVar111) +
                                  lVar80);
                iVar31 = iVar31 + 1;
                lVar80 = (long)iVar31;
                uVar87 = uVar87 * 0x100000001b3 ^ (long)*pcVar42;
              } while (sVar17 != iVar31);
            }
            uVar94 = uVar94 ^ uVar111 ^ 0xffffffff;
            uVar86 = 0;
            if (uVar111 != 0) {
              uVar86 = uVar94 / uVar111;
            }
            uVar81 = (ulong)*(int *)(*(long *)(lVar91 + 8) + (ulong)(uVar94 - uVar86 * uVar111));
            if (uVar87 + uVar81 + (uVar87 & uVar81) * -2 != lVar54) {
              uVar58 = uVar113;
            }
            goto LAB_00138770;
          }
          if (uVar86 == 0xd8f11d2) {
            lVar91 = *(long *)(local_470 + 8);
            uVar111 = *(uint *)(lVar91 + 0x10);
            uVar86 = *(uint *)(lVar91 + 0x14);
            lVar80 = *(long *)(lVar91 + 8);
            uVar58 = uVar86 + 4;
            uVar33 = *(undefined4 *)(lVar80 + (ulong)uVar86);
            *(uint *)(lVar91 + 0x14) = uVar58;
            pplVar82 = *(long ***)(lVar80 + (ulong)uVar58);
            iVar31 = uVar86 + (uVar58 | 8) + (-uVar86 - 5 | 8);
            uVar58 = iVar31 + 5;
            uVar86 = iVar31 + 9;
            *(uint *)(lVar91 + 0x14) = uVar58;
            uVar30 = *(undefined4 *)(lVar80 + (ulong)uVar58);
            *(uint *)(lVar91 + 0x14) = uVar86;
            sVar17 = *(short *)(lVar80 + (ulong)uVar86);
            uVar58 = (uVar58 * 2 & 4) + (uVar86 ^ 2);
            *(uint *)(lVar91 + 0x14) = uVar58;
            uVar10 = *(undefined4 *)(lVar80 + (ulong)uVar58);
            *(uint *)(lVar91 + 0x14) = uVar58 + 4;
            uVar11 = *(undefined4 *)(lVar80 + (ulong)(uVar58 + 4));
            *(uint *)(lVar91 + 0x14) = uVar58 + 8;
            uVar12 = *(undefined4 *)(lVar80 + (ulong)(uVar58 + 8));
            *(uint *)(lVar91 + 0x14) = uVar58 + 0xc;
            uVar113 = *(uint *)(lVar80 + (ulong)(uVar58 + 0xc));
            local_498 = (long **)CONCAT44(local_498._4_4_,uVar12);
            *(uint *)(lVar91 + 0x14) = uVar58 + 0x10;
            uVar86 = *(uint *)(lVar80 + (ulong)(uVar58 + 0x10));
            *(uint *)(lVar91 + 0x14) = uVar58 + 0x14;
            uVar86 = uVar86 ^ uVar111 ^ 0xffffffff;
            uVar58 = 0;
            if (uVar111 != 0) {
              uVar58 = uVar86 / uVar111;
            }
            uVar49 = *(undefined8 *)(lVar80 + (ulong)(uVar86 - uVar58 * uVar111));
            local_464 = uVar44;
            uVar87 = func_0x0016a1a0(uVar49);
            pplVar100 = (long **)auStack_180;
            if (0xffffffffffffffef < uVar87) goto LAB_001424ac;
            local_4b0 = (long **)CONCAT44(local_4b0._4_4_,uVar11);
            local_508 = (undefined *)CONCAT44(local_508._4_4_,uVar30);
            if (uVar87 < 0x17) {
              local_2e0 = (long *)CONCAT71(local_2e0._1_7_,(char)((uint)uVar87 << 1));
              pplVar100 = local_570;
              if (uVar87 != 0) goto LAB_0013b158;
            }
            else {
              uVar47 = uVar87 + ((ulong)~(uint)uVar87 | 0xfffffffffffffff0);
              uVar81 = (uVar47 & 0xfffffffffffffffe) + (uVar47 & 1) * 2 + 0x10;
              pplVar100 = (long **)malloc(uVar81 | (ulong)(1 - (int)uVar47) & 1);
              bStack_2d0 = (byte)pplVar100;
              uStack_2cf = (undefined)((ulong)pplVar100 >> 8);
              uStack_2ce = (undefined2)((ulong)pplVar100 >> 0x10);
              iStack_2cc = (int)((ulong)pplVar100 >> 0x20);
              bStack_2d8 = (byte)uVar87;
              uStack_2d7 = (undefined)(uVar87 >> 8);
              uStack_2d6 = (undefined2)(uVar87 >> 0x10);
              iStack_2d4 = (int)(uVar87 >> 0x20);
              local_2e0 = (long *)(~uVar81 + uVar81 * 2 + 2);
LAB_0013b158:
              func_0x0016a0c0(pplVar100,uVar49,uVar87);
            }
            uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
            *(byte *)((long)pplVar100 + uVar87) = 0;
            uVar58 = 0;
            if (uVar111 != 0) {
              uVar58 = uVar113 / uVar111;
            }
            uVar49 = *(undefined8 *)(*(long *)(lVar91 + 8) + (ulong)(uVar113 - uVar58 * uVar111));
            pplVar88 = (long **)func_0x0016a1a0(uVar49);
            pplVar100 = (long **)auStack_180;
            if (pplVar88 < (long **)0xfffffffffffffff0) {
              local_4d0 = (long **)CONCAT44(local_4d0._4_4_,uVar33);
              local_4f0 = (long *)CONCAT44(local_4f0._4_4_,uVar10);
              if (pplVar88 < (long **)0x17) {
                _local_1a0 = (long *)CONCAT71(_auStack_19f,(char)((int)pplVar88 << 1));
                uVar87 = local_580;
                if (pplVar88 != (long **)0x0) goto LAB_0013b710;
              }
              else {
                uVar87 = malloc(((ulong)pplVar88 | 0xf) + 1);
                _local_1a0 = (long *)(((ulong)pplVar88 | 0xf) + 2);
                local_190 = (byte)uVar87;
                uStack_18f = (undefined)(uVar87 >> 8);
                uStack_18e = (undefined)(uVar87 >> 0x10);
                uStack_18d = (undefined)(uVar87 >> 0x18);
                bStack_18c = (byte)(uVar87 >> 0x20);
                uStack_18b = (undefined)(uVar87 >> 0x28);
                uStack_18a = (undefined)(uVar87 >> 0x30);
                uStack_189 = (undefined)(uVar87 >> 0x38);
                uStack_198 = pplVar88;
LAB_0013b710:
                func_0x0016a0c0(uVar87,uVar49,pplVar88);
              }
              plVar95 = _local_1a0;
              *(undefined *)(uVar87 + (long)pplVar88) = 0;
              local_490 = (long **)((ulong)local_2e0 & 0xff);
              unaff_x24 = (long **)((ulong)_local_1a0 & 0xff);
              uVar87 = (ulong)local_2e0 >> 1 & 0x7f;
              if (((ulong)local_2e0 & 1) != 0) {
                uVar87 = CONCAT44(iStack_2d4,CONCAT22(uStack_2d6,CONCAT11(uStack_2d7,bStack_2d8)));
              }
              pplVar88 = (long **)((ulong)_local_1a0 >> 1 & 0x7f);
              if (((ulong)_local_1a0 & 1) != 0) {
                pplVar88 = uStack_198;
              }
              puVar97 = (undefined *)((long)pplVar88 + uVar87);
              unaff_x27 = (long **)(((ulong)puVar97 & 1) * 2 + ((ulong)puVar97 & 0xfffffffffffffffe)
                                   | (ulong)puVar97 & 1);
              uVar49 = func_0x0016a110((ulong)unaff_x27 ^ 1);
              pplVar100 = (long **)auStack_180;
              if (puVar97 < (undefined *)0xfffffffffffffff0) {
                if (puVar97 < (undefined *)0x17) {
                  uVar58 = (int)puVar97 << 1;
                  uVar81 = (ulong)uVar58;
                  local_360._1_5_ = 0;
                  uStack_35a = 0;
                  auStack_358 = (undefined  [6])0x0;
                  uStack_352 = 0;
                  local_350 = (code *)0x0;
                  local_360[0] = (byte)uVar58;
                }
                else {
                  uVar81 = ((ulong)puVar97 ^ 0xf) + ((ulong)puVar97 | 0xfffffffffffffff0) + 0x10;
                  uVar47 = uVar81 * 2;
                  uVar81 = uVar81 ^ 1;
                  uVar47 = (uVar47 | 2) + uVar81 + (uVar47 ^ 0xfffffffffffffffc) + 2;
                  local_530 = pplVar82;
                  local_350 = (code *)malloc(uVar47);
                  auStack_358 = SUB86(puVar97,0);
                  uStack_352 = (undefined2)((ulong)puVar97 >> 0x30);
                  uVar81 = (uVar47 * 2 | 2) + ~uVar47 + (uVar81 | 0xfffffffffffffffe) + 2;
                  local_360[0] = (byte)uVar81;
                  local_360._1_5_ = (undefined5)(uVar81 >> 8);
                  uStack_35a = (undefined2)(uVar81 >> 0x30);
                  pplVar82 = local_530;
                }
                uVar86 = (uint)uVar81;
                uVar58 = (uint)local_4d0;
                pplVar100 = local_560;
                if ((uVar86 + (uVar86 ^ 0xfe) & 0xff) != (uVar86 & 0xff | 0xfe)) {
                  pplVar100 = (long **)local_350;
                }
                if (uVar87 != 0) {
                  pplVar77 = local_570;
                  if (((ulong)local_490 & 1) != 0) {
                    pplVar77 = (long **)CONCAT44(iStack_2cc,
                                                 CONCAT22(uStack_2ce,CONCAT11(uStack_2cf,bStack_2d0)
                                                         ));
                  }
                  func_0x0016a0c0(pplVar100,pplVar77,uVar87);
                }
                if (pplVar88 != (long **)0x0) {
                  uVar81 = local_580;
                  if (((ulong)plVar95 & 1) != 0) {
                    uVar81 = CONCAT17(uStack_189,
                                      CONCAT16(uStack_18a,
                                               CONCAT15(uStack_18b,
                                                        CONCAT14(bStack_18c,
                                                                 CONCAT13(uStack_18d,
                                                                          CONCAT12(uStack_18e,
                                                                                   CONCAT11(
                                                  uStack_18f,local_190)))))));
                  }
                  func_0x0016a0c0((long)pplVar100 + uVar87,uVar81,pplVar88);
                }
                pplVar77 = (long **)local_350;
                *(undefined *)((long)pplVar100 + uVar87 + (long)pplVar88) = 0;
                bVar102 = local_360[0] & 1 ^ (local_360[0] | 1) - (local_360[0] & 0xfe);
                pplVar100 = local_560;
                if (bVar102 != 1) {
                  pplVar100 = (long **)local_350;
                }
                func_0x0016a170(uVar49,pplVar100,(ulong)unaff_x27 ^ 1);
                if (bVar102 != 1) {
                  free(pplVar77);
                }
                uVar86 = (uint)local_498 ^ uVar111 ^ 0xffffffff;
                uVar44 = 0;
                if (uVar111 != 0) {
                  uVar44 = uVar86 / uVar111;
                }
                uVar87 = 0xcbf29ce484222325;
                *(undefined8 *)(*(long *)(lVar91 + 8) + (ulong)(uVar86 - uVar44 * uVar111)) = uVar49
                ;
                if (sVar17 != 0) {
                  lVar80 = 0;
                  iVar31 = 0;
                  uVar86 = (uint)local_508 ^ uVar111 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar111 != 0) {
                    uVar44 = uVar86 / uVar111;
                  }
                  uVar87 = 0xcbf29ce484222325;
                  do {
                    pcVar42 = (char *)(*(long *)(lVar91 + 8) + (ulong)(uVar86 - uVar44 * uVar111) +
                                      lVar80);
                    iVar31 = iVar31 + 1;
                    lVar80 = (long)iVar31;
                    uVar87 = uVar87 * 0x100000001b3 ^ (long)*pcVar42;
                  } while (sVar17 != iVar31);
                }
                uVar58 = uVar58 ^ uVar111 ^ 0xffffffff;
                uVar86 = 0;
                if (uVar111 != 0) {
                  uVar86 = uVar58 / uVar111;
                }
                uVar81 = (ulong)*(int *)(*(long *)(lVar91 + 8) + (ulong)(uVar58 - uVar86 * uVar111))
                ;
                uVar58 = (uint)local_4f0;
                if ((long **)(((uVar87 | uVar81) + ~uVar81) - (uVar87 | uVar81 ^ 0xffffffffffffffff)
                             ) != pplVar82) {
                  uVar58 = (uint)local_4b0;
                }
                if (((ulong)plVar95 & 1) != 0) {
                  free(CONCAT17(uStack_189,
                                CONCAT16(uStack_18a,
                                         CONCAT15(uStack_18b,
                                                  CONCAT14(bStack_18c,
                                                           CONCAT13(uStack_18d,
                                                                    CONCAT12(uStack_18e,
                                                                             CONCAT11(uStack_18f,
                                                                                      local_190)))))
                                        )));
                }
                if (((ulong)local_490 & 1) != 0) {
                  plVar95 = (long *)CONCAT44(iStack_2cc,
                                             CONCAT22(uStack_2ce,CONCAT11(uStack_2cf,bStack_2d0)));
                  goto LAB_00141b00;
                }
                goto LAB_00141b04;
              }
            }
LAB_001424ac:
            auStack_180 = (undefined  [8])pplVar100;
            auVar124 = FUN_00129300();
LAB_001424b0:
            FUN_00142a44(auVar124._0_8_,auVar124._8_8_);
LAB_001424b4:
            vector_error();
LAB_001424b8:
                    /* WARNING: Subroutine does not return */
            FUN_001291a0();
          }
          uVar58 = local_7e0;
          if (uVar86 != 0xdec3fa5) goto LAB_0013267c;
          goto LAB_0012ed04;
        }
        if ((int)uVar86 < 0x158bcc02) {
          if (uVar86 == 0xf61ba08) {
            local_530 = *(long ***)(local_470 + 8);
            uVar86 = *(uint *)(local_530 + 2);
            uVar111 = *(uint *)((long)local_530 + 0x14);
            plVar95 = local_530[1];
            uVar58 = uVar111 + 0x10;
            local_490 = (long **)CONCAT44(local_490._4_4_,uVar86);
            local_4b0 = (long **)CONCAT44(local_4b0._4_4_,
                                          *(undefined4 *)((long)plVar95 + (ulong)uVar111));
            *(uint *)((long)local_530 + 0x14) = uVar111 + 4;
            local_4d0 = *(long ***)((long)plVar95 + (ulong)(uVar111 + 4));
            *(uint *)((long)local_530 + 0x14) = uVar111 + 0xc;
            iVar31 = uVar111 + (uVar58 | 2) + (-uVar111 - 0x11 | 2);
            uVar33 = *(undefined4 *)((long)plVar95 + (ulong)(uVar111 + 0xc));
            *(uint *)((long)local_530 + 0x14) = uVar58;
            local_540 = (long **)CONCAT44(local_540._4_4_,uVar33);
            sVar17 = *(short *)((long)plVar95 + (ulong)uVar58);
            *(uint *)((long)local_530 + 0x14) = iVar31 + 0x11U;
            local_498 = (long **)CONCAT44(local_498._4_4_,(int)sVar17);
            uVar33 = *(undefined4 *)((long)plVar95 + (ulong)(iVar31 + 0x11U));
            *(uint *)((long)local_530 + 0x14) = iVar31 + 0x15U;
            local_4f0 = (long *)CONCAT44(local_4f0._4_4_,uVar33);
            uVar33 = *(undefined4 *)((long)plVar95 + (ulong)(iVar31 + 0x15U));
            *(uint *)((long)local_530 + 0x14) = iVar31 + 0x19U;
            local_508 = (undefined *)CONCAT44(local_508._4_4_,uVar33);
            uVar58 = *(uint *)((long)plVar95 + (ulong)(iVar31 + 0x19U));
            *(uint *)((long)local_530 + 0x14) = iVar31 + 0x1dU;
            uVar33 = *(undefined4 *)((long)plVar95 + (ulong)(iVar31 + 0x1dU));
            *(uint *)((long)local_530 + 0x14) = iVar31 + 0x21U;
            uVar58 = uVar58 ^ uVar86 ^ 0xffffffff;
            uVar111 = 0;
            if (uVar86 != 0) {
              uVar111 = uVar58 / uVar86;
            }
            local_538 = (undefined *)CONCAT44(local_538._4_4_,uVar33);
            uVar113 = *(uint *)((long)plVar95 + (ulong)(iVar31 + 0x21U));
            *(int *)((long)local_530 + 0x14) = iVar31 + 0x25;
            uVar113 = uVar113 ^ uVar86 ^ 0xffffffff;
            uVar112 = 0;
            if (uVar86 != 0) {
              uVar112 = uVar113 / uVar86;
            }
            local_440 = *(ulong *)((long)plVar95 + (ulong)(uVar58 - uVar111 * uVar86));
            local_448 = *(undefined8 **)((long)plVar95 + (ulong)(uVar113 - uVar112 * uVar86));
            local_458 = &DAT_0016f650;
            _local_450 = 0;
            pcStack_318 = (code *)0x0;
            local_320 = (undefined  [8])0x0;
            local_308 = (long **)0x0;
            local_310 = (long **)0x0;
            local_300 = 1.0;
            local_464 = uVar44;
            lVar80 = func_0x0016997c(&local_458);
            lVar91 = func_0x00169984(&local_458);
            pplVar82 = local_578;
            if (lVar80 != lVar91) {
LAB_00139824:
              pplVar88 = (long **)0x100000001b3;
              (**(code **)(local_458 + 0x10))(&local_3c0,&local_458,0x2e);
              pplVar100 = (long **)((ulong)local_3c0 >> 1 & 0x7f);
              if (((ulong)local_3c0 & 1) != 0) {
                pplVar100 = pplStack_3b8;
              }
              if ((pplVar100 == (long **)0x0) || (pplVar100 < (long **)0x4)) {
LAB_00139880:
                bVar28 = false;
                _local_1a0 = (long *)((ulong)_local_1a0 & 0xffffffffffffff00);
                auStack_180._0_4_ = auStack_180._0_4_ & 0xffffff00;
                unaff_x24 = pplVar82;
              }
              else {
                pplVar77 = local_588;
                if (((ulong)local_3c0 & 1) != 0) {
                  pplVar77 = (long **)local_3b0._0_8_;
                }
                if (*(int *)pplVar77 != 0x2014b50) goto LAB_00139880;
                if (pplVar100 < (long **)0x10) goto LAB_0014249c;
                pplVar82 = local_860;
                if (((ulong)local_3c0 & 1) != 0) {
                  pplVar82 = (long **)(local_3b0._0_8_ + 0x10);
                }
                if (pplVar100 < (long **)0x1c) goto LAB_0014249c;
                puVar3 = local_868;
                if (((ulong)local_3c0 & 1) != 0) {
                  puVar3 = (ushort *)(local_3b0._0_8_ + 0x1c);
                }
                if ((pplVar100 < (long **)0x1e) || (pplVar100 < (long **)0x20)) goto LAB_0014249c;
                bVar28 = ((ulong)local_3c0 & 1) != 0;
                uVar16 = *puVar3;
                pplVar100 = (long **)(ulong)uVar16;
                puVar3 = puStack_870;
                if (bVar28) {
                  puVar3 = (ushort *)(local_3b0._0_8_ + 0x1e);
                }
                uVar33 = *(undefined4 *)pplVar82;
                uVar14 = *puVar3;
                pplVar82 = local_878;
                if (bVar28) {
                  pplVar82 = (long **)(local_3b0._0_8_ + 0x20);
                }
                uVar15 = *(ushort *)pplVar82;
                (**(code **)(local_458 + 0x10))
                          (local_3d8,&local_458,
                           (undefined *)((ulong)uVar14 + (long)pplVar100) + uVar15);
                pplVar82 = (long **)((ulong)local_3d8 >> 1 & 0x7f);
                if (((ulong)local_3d8 & 1) != 0) {
                  pplVar82 = _local_3d0;
                }
                if (pplVar82 == (long **)0x0) {
                  bVar28 = false;
                  _local_1a0 = (long *)((ulong)_local_1a0 & 0xffffffffffffff00);
                  auStack_180._0_4_ = auStack_180._0_4_ & 0xffffff00;
                  unaff_x24 = local_578;
                }
                else {
                  pplVar77 = local_4d8;
                  if (((ulong)local_3d8 & 1) != 0) {
                    pplVar77 = local_3c8;
                  }
                  if (pplVar100 <= pplVar82) {
                    pplVar82 = pplVar100;
                  }
                  if (pplVar82 < (long **)0x17) {
                    local_390 = (long *)CONCAT71(local_390._1_7_,(char)((int)pplVar82 << 1));
                    pplVar71 = local_578;
                    pplVar70 = (long **)auStack_180;
                    if (uVar16 != 0) goto LAB_00139eb8;
                  }
                  else {
                    pplVar71 = (long **)malloc(((ulong)pplVar82 | 0xf) + 1);
                    local_390 = (long *)(((ulong)pplVar82 | 0xf) + 2);
                    _auStack_388 = pplVar82;
                    local_380 = pplVar71;
LAB_00139eb8:
                    func_0x0016a0c0(pplVar71,pplVar77,pplVar82);
                    pplVar70 = (long **)auStack_180;
                  }
                  auStack_180._4_4_ = (undefined4)((ulong)pplVar70 >> 0x20);
                  *(undefined *)((long)pplVar71 + (long)pplVar82) = 0;
                  iVar31 = (int)(undefined *)((ulong)uVar14 + (long)pplVar100) + (uint)uVar15 + 0x2e
                  ;
                  local_378 = CONCAT44(iVar31,uVar33);
                  local_190 = (byte)local_380;
                  uStack_18f = (undefined)((ulong)local_380 >> 8);
                  uStack_18e = (undefined)((ulong)local_380 >> 0x10);
                  uStack_18d = (undefined)((ulong)local_380 >> 0x18);
                  bStack_18c = (byte)((ulong)local_380 >> 0x20);
                  uStack_18b = (undefined)((ulong)local_380 >> 0x28);
                  uStack_18a = (undefined)((ulong)local_380 >> 0x30);
                  uStack_189 = (undefined)((ulong)local_380 >> 0x38);
                  bVar28 = true;
                  uStack_188 = (undefined)uVar33;
                  uStack_187 = (undefined)((uint)uVar33 >> 8);
                  uStack_186 = (undefined)((uint)uVar33 >> 0x10);
                  uStack_185 = (undefined)((uint)uVar33 >> 0x18);
                  uStack_184 = (undefined)iVar31;
                  uStack_183 = (undefined)((uint)iVar31 >> 8);
                  uStack_182 = (undefined)((uint)iVar31 >> 0x10);
                  uStack_181 = 0;
                  auStack_180._1_3_ = (undefined3)((ulong)pplVar70 >> 8);
                  auStack_180._0_4_ = CONCAT31(auStack_180._1_3_,1);
                  unaff_x24 = local_578;
                  _local_1a0 = local_390;
                  uStack_198 = _auStack_388;
                }
                local_578 = unaff_x24;
                if (((ulong)local_3d8 & 1) != 0) {
                  free(local_3c8);
                }
              }
              if (((ulong)local_3c0 & 1) != 0) {
                free(local_3b0._0_8_);
              }
              if (bVar28) {
                uVar87 = local_580;
                pplVar82 = (long **)((ulong)_local_1a0 >> 1 & 0x7f);
                if (((ulong)_local_1a0 & 1) != 0) {
                  uVar87 = CONCAT17(uStack_189,
                                    CONCAT16(uStack_18a,
                                             CONCAT15(uStack_18b,
                                                      CONCAT14(bStack_18c,
                                                               CONCAT13(uStack_18d,
                                                                        CONCAT12(uStack_18e,
                                                                                 CONCAT11(uStack_18f
                                                                                          ,local_190
                                                                                         )))))));
                  pplVar82 = uStack_198;
                }
                pplVar100 = (long **)CONCAT44(auStack_180._4_4_,auStack_180._0_4_);
                if (pplVar82 < (long **)0xfffffffffffffff0) {
                  if (pplVar82 < (long **)0x17) {
                    local_3c0 = (long *)CONCAT71(local_3c0._1_7_,(char)((int)pplVar82 << 1));
                    pplVar100 = local_588;
                    if (pplVar82 != (long **)0x0) goto LAB_00139900;
                  }
                  else {
                    pplVar100 = (long **)malloc(((ulong)pplVar82 | 0xf) + 1);
                    local_3c0 = (long *)(((ulong)pplVar82 | 0xf) + 2);
                    pplStack_3b8 = pplVar82;
                    local_3b0._0_8_ = pplVar100;
LAB_00139900:
                    func_0x0016a0c0(pplVar100,uVar87,pplVar82);
                  }
                  pplVar71 = (long **)local_3b0._0_8_;
                  pplVar77 = pplStack_3b8;
                  plVar95 = local_3c0;
                  *(undefined *)((long)pplVar100 + (long)pplVar82) = 0;
                  uVar58 = CONCAT13(uStack_185,CONCAT12(uStack_186,CONCAT11(uStack_187,uStack_188)))
                  ;
                  unaff_x27 = (long **)(ulong)uVar58;
                  local_378 = CONCAT44(local_378._4_4_,uVar58);
                  _auStack_388 = pplStack_3b8;
                  local_390 = local_3c0;
                  local_380 = (long **)local_3b0._0_8_;
                  pplVar82 = (long **)((ulong)local_3c0 >> 1 & 0x7f);
                  if (((ulong)local_3c0 & 1) != 0) {
                    pplVar82 = pplStack_3b8;
                    unaff_x24 = (long **)local_3b0._0_8_;
                  }
                  pplVar100 = (long **)FUN_0012d188(unaff_x24,pplVar82);
                  pplVar70 = (long **)pcStack_318;
                  if ((long **)pcStack_318 != (long **)0x0) {
                    uVar49 = NEON_cnt(pcStack_318,1);
                    uVar103 = NEON_uaddlv(uVar49,1);
                    uVar87 = CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar103) & 0xffffffff;
                    if (uVar87 < 2) {
                      pplVar88 = (long **)((ulong)((long)pcStack_318 + -1) & (ulong)pplVar100);
                    }
                    else {
                      pplVar88 = pplVar100;
                      if (pcStack_318 <= pplVar100) {
                        uVar81 = 0;
                        if ((long **)pcStack_318 != (long **)0x0) {
                          uVar81 = (ulong)pplVar100 / (ulong)pcStack_318;
                        }
                        pplVar88 = (long **)((long)pplVar100 - uVar81 * (long)pcStack_318);
                      }
                    }
                    if ((*(long ***)((long)local_320 + pplVar88 * 8) != (long **)0x0) &&
                       (pplVar69 = (long **)**(long ***)((long)local_320 + pplVar88 * 8),
                       pplVar69 != (long **)0x0)) {
                      if (uVar87 < 2) {
                        puVar97 = (undefined *)((long)pcStack_318 + -1);
                        do {
                          if ((long **)pplVar69[1] == pplVar100) {
                            bVar102 = *(byte *)(pplVar69 + 2);
                            pplVar51 = (long **)(ulong)(bVar102 >> 1);
                            pplVar50 = pplVar51;
                            if ((bVar102 & 1) != 0) {
                              pplVar50 = (long **)pplVar69[3];
                            }
                            if (pplVar50 == pplVar82) {
                              if ((bVar102 & 1) == 0) {
                                if (bVar102 < 2) goto LAB_00139ad8;
                                pcVar42 = (char *)((long)pplVar69 + 0x11);
                                pplVar50 = unaff_x24;
                                while (*pcVar42 == *(char *)pplVar50) {
                                  pplVar51 = (long **)((long)pplVar51 + -1);
                                  pcVar42 = pcVar42 + 1;
                                  pplVar50 = (long **)((long)pplVar50 + 1);
                                  if (pplVar51 == (long **)0x0) goto LAB_00139ad8;
                                }
                              }
                              else {
                                iVar31 = func_0x0016a2e0(pplVar69[4],unaff_x24);
                                if (iVar31 == 0) goto LAB_00139ad8;
                              }
                            }
                          }
                          else if ((long **)((ulong)pplVar69[1] & (ulong)puVar97) != pplVar88)
                          break;
                          pplVar69 = (long **)*pplVar69;
                        } while (pplVar69 != (long **)0x0);
                      }
                      else {
                        do {
                          pplVar50 = (long **)pplVar69[1];
                          if (pplVar50 == pplVar100) {
                            bVar102 = *(byte *)(pplVar69 + 2);
                            pplVar51 = (long **)(ulong)(bVar102 >> 1);
                            pplVar50 = pplVar51;
                            if ((bVar102 & 1) != 0) {
                              pplVar50 = (long **)pplVar69[3];
                            }
                            if (pplVar50 == pplVar82) {
                              if ((bVar102 & 1) == 0) {
                                if (bVar102 < 2) goto LAB_00139ad8;
                                pcVar42 = (char *)((long)pplVar69 + 0x11);
                                pplVar50 = unaff_x24;
                                while (*pcVar42 == *(char *)pplVar50) {
                                  pplVar51 = (long **)((long)pplVar51 + -1);
                                  pcVar42 = pcVar42 + 1;
                                  pplVar50 = (long **)((long)pplVar50 + 1);
                                  if (pplVar51 == (long **)0x0) goto LAB_00139ad8;
                                }
                              }
                              else {
                                iVar31 = func_0x0016a2e0(pplVar69[4],unaff_x24);
                                if (iVar31 == 0) goto LAB_00139ad8;
                              }
                            }
                          }
                          else {
                            if (pplVar70 <= pplVar50) {
                              uVar87 = 0;
                              if (pplVar70 != (long **)0x0) {
                                uVar87 = (ulong)pplVar50 / (ulong)pplVar70;
                              }
                              pplVar50 = (long **)((long)pplVar50 - uVar87 * (long)pplVar70);
                            }
                            if (pplVar50 != pplVar88) break;
                          }
                          pplVar69 = (long **)*pplVar69;
                        } while (pplVar69 != (long **)0x0);
                      }
                    }
                  }
                  pplVar82 = (long **)malloc(0x30);
                  *pplVar82 = (long *)0x0;
                  pplVar82[1] = (long *)pplVar100;
                  if (((ulong)plVar95 & 1) == 0) {
                    pplVar82[3] = (long *)pplStack_3b8;
                    pplVar82[2] = local_3c0;
                    pplVar82[4] = (long *)local_3b0._0_8_;
                    *(uint *)(pplVar82 + 5) = uVar58;
                    fVar107 = (float)ZEXT89((undefined *)((long)local_308 + 1));
                    if (pplVar70 == (long **)0x0) goto LAB_00139b8c;
LAB_00139b5c:
                    if (local_300 * (float)ZEXT89(pplVar70) < fVar107) goto LAB_00139b8c;
                    pplVar77 = *(long ***)((long)local_320 + pplVar88 * 8);
                    pplVar100 = pplVar88;
joined_r0x00139dd8:
                    if (pplVar77 == (long **)0x0) goto LAB_00139d70;
LAB_00139b78:
                    *pplVar82 = *pplVar77;
LAB_00139df8:
                    *pplVar77 = (long *)pplVar82;
                  }
                  else {
                    FUN_0012ae34(pplVar82 + 2,pplVar71,pplVar77);
                    *(uint *)(pplVar82 + 5) = uVar58;
                    fVar107 = (float)ZEXT89((undefined *)((long)local_308 + 1));
                    if (pplVar70 != (long **)0x0) goto LAB_00139b5c;
LAB_00139b8c:
                    if (pplVar70 < (long **)0x3) {
                      uVar87 = 1;
                    }
                    else {
                      uVar87 = (ulong)(((ulong)pplVar70 & (ulong)((long)pplVar70 + -1)) != 0);
                    }
                    pplVar88 = (long **)(uVar87 | (long)pplVar70 << 1);
                    if (pplVar88 <= (long **)(long)(fVar107 / local_300)) {
                      pplVar88 = (long **)(long)(fVar107 / local_300);
                    }
                    if ((undefined *)((long)pplVar88 + -1) == (undefined *)0x0) {
                      pplVar88 = (long **)0x2;
                    }
                    else if (((ulong)pplVar88 & (ulong)(undefined *)((long)pplVar88 + -1)) != 0) {
                      pplVar88 = (long **)FUN_00115418(pplVar88);
                    }
                    pplVar77 = (long **)pcStack_318;
                    if (pcStack_318 < pplVar88) {
LAB_00139bf0:
                      FUN_0012d5e0(local_320);
                    }
                    else if (pplVar88 < pcStack_318) {
                      pplVar70 = (long **)(long)((float)ZEXT89(local_308) / local_300);
                      if (pcStack_318 < (long **)0x3) {
LAB_00139d34:
                        pplVar70 = (long **)FUN_00115418();
                        if (pplVar88 <= pplVar70) {
                          pplVar88 = pplVar70;
                        }
                      }
                      else {
                        uVar49 = NEON_cnt(pcStack_318,1);
                        uVar103 = NEON_uaddlv(uVar49,1);
                        if (1 < (CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar103) & 0xffffffff))
                        goto LAB_00139d34;
                        if ((long **)0x1 < pplVar70) {
                          pplVar70 = (long **)(1L << (-LZCOUNT((undefined *)((long)pplVar70 + -1)) &
                                                     0x3fU));
                        }
                        if (pplVar88 <= pplVar70) {
                          pplVar88 = pplVar70;
                        }
                      }
                      if (pplVar88 < pplVar77) goto LAB_00139bf0;
                    }
                    pplVar70 = (long **)pcStack_318;
                    if (((ulong)pcStack_318 & (ulong)(undefined *)((long)pcStack_318 + -1)) == 0) {
                      pplVar100 = (long **)((ulong)(undefined *)((long)pcStack_318 + -1) &
                                           (ulong)pplVar100);
                      pplVar77 = *(long ***)((long)local_320 + pplVar100 * 8);
                      goto joined_r0x00139dd8;
                    }
                    if (pcStack_318 <= pplVar100) {
                      uVar87 = 0;
                      if ((long **)pcStack_318 != (long **)0x0) {
                        uVar87 = (ulong)pplVar100 / (ulong)pcStack_318;
                      }
                      pplVar100 = (long **)((long)pplVar100 - uVar87 * (long)pcStack_318);
                      pplVar77 = *(long ***)((long)local_320 + pplVar100 * 8);
                      goto joined_r0x00139dd8;
                    }
                    pplVar77 = *(long ***)((long)local_320 + pplVar100 * 8);
                    if (pplVar77 != (long **)0x0) goto LAB_00139b78;
LAB_00139d70:
                    *pplVar82 = (long *)local_310;
                    *(long ****)((long)local_320 + pplVar100 * 8) = local_5e8;
                    local_310 = pplVar82;
                    if (*pplVar82 != (long *)0x0) {
                      pplVar77 = *(long ***)((long)*pplVar82 + 8);
                      if (((ulong)pplVar70 & (ulong)(undefined *)((long)pplVar70 + -1)) == 0) {
                        pplVar77 = (long **)((ulong)pplVar77 &
                                            (ulong)(undefined *)((long)pplVar70 + -1));
                      }
                      else if (pplVar70 <= pplVar77) {
                        uVar87 = 0;
                        if (pplVar70 != (long **)0x0) {
                          uVar87 = (ulong)pplVar77 / (ulong)pplVar70;
                        }
                        pplVar77 = (long **)((long)pplVar77 - uVar87 * (long)pplVar70);
                      }
                      pplVar77 = (long **)((long)local_320 + pplVar77 * 8);
                      goto LAB_00139df8;
                    }
                  }
                  bVar28 = false;
                  local_308 = (long **)((long)local_308 + 1);
                  unaff_x24 = local_578;
                  goto joined_r0x00139ae8;
                }
                goto LAB_001424ac;
              }
              local_2e0 = (long *)((ulong)local_2e0 & 0xffffffffffffff00);
              uStack_2b8 = (long **)((ulong)uStack_2b8 & 0xffffffffffffff00);
              goto LAB_0013dbb0;
            }
            plVar95 = (long *)0x0;
            pplVar88 = (long **)0x0;
            pplVar77 = (long **)0x0;
            pplVar100 = (long **)0x0;
            fVar107 = 1.0;
LAB_0013da1c:
            pcStack_318 = (code *)0x0;
            local_320 = (undefined  [8])0x0;
            local_340 = (long *)CONCAT44(local_340._4_4_,fVar107);
            if (pplVar77 != (long **)0x0) {
              pplVar82 = (long **)pplVar100[1];
              if (((ulong)pplVar88 & (ulong)(undefined *)((long)pplVar88 + -1)) == 0) {
                pplVar82 = (long **)((ulong)pplVar82 & (ulong)(undefined *)((long)pplVar88 + -1));
              }
              else if (pplVar88 <= pplVar82) {
                uVar87 = 0;
                if (pplVar88 != (long **)0x0) {
                  uVar87 = (ulong)pplVar82 / (ulong)pplVar88;
                }
                pplVar82 = (long **)((long)pplVar82 - uVar87 * (long)pplVar88);
              }
              plVar95[(long)pplVar82] = (long)local_768;
              *local_5e8 = (long **)0x0;
              local_5e8[1] = (long **)0x0;
            }
            auStack_358 = (undefined  [6])0x0;
            uStack_352 = 0;
            local_360[0] = 0;
            local_360._1_5_ = 0;
            uStack_35a = 0;
            local_190 = (byte)pplVar100;
            bVar102 = local_190;
            uStack_18f = (undefined)((ulong)pplVar100 >> 8);
            uVar13 = uStack_18f;
            uStack_18e = (undefined)((ulong)pplVar100 >> 0x10);
            uStack_18d = (undefined)((ulong)pplVar100 >> 0x18);
            bStack_18c = (byte)((ulong)pplVar100 >> 0x20);
            uStack_18b = (undefined)((ulong)pplVar100 >> 0x28);
            uStack_18a = (undefined)((ulong)pplVar100 >> 0x30);
            uStack_189 = (undefined)((ulong)pplVar100 >> 0x38);
            uStack_188 = SUB81(pplVar77,0);
            uStack_187 = (undefined)((ulong)pplVar77 >> 8);
            uStack_186 = (undefined)((ulong)pplVar77 >> 0x10);
            uStack_185 = (undefined)((ulong)pplVar77 >> 0x18);
            uStack_184 = (undefined)((ulong)pplVar77 >> 0x20);
            uStack_183 = (undefined)((ulong)pplVar77 >> 0x28);
            uStack_182 = (undefined)((ulong)pplVar77 >> 0x30);
            uStack_181 = (undefined)((ulong)pplVar77 >> 0x38);
            local_350 = (code *)pplVar100;
            uStack_348 = pplVar77;
            auStack_180._0_4_ = fVar107;
            if (pplVar77 != (long **)0x0) {
              pplVar82 = (long **)pplVar100[1];
              if (((ulong)pplVar88 & (ulong)(undefined *)((long)pplVar88 + -1)) == 0) {
                pplVar82 = (long **)((ulong)pplVar82 & (ulong)(undefined *)((long)pplVar88 + -1));
              }
              else if (pplVar88 <= pplVar82) {
                uVar87 = 0;
                if (pplVar88 != (long **)0x0) {
                  uVar87 = (ulong)pplVar82 / (ulong)pplVar88;
                }
                pplVar82 = (long **)((long)pplVar82 - uVar87 * (long)pplVar88);
              }
              plVar95[(long)pplVar82] = (long)local_828;
              *local_768 = (long *)0x0;
              local_768[1] = (long *)0x0;
            }
            uStack_198 = (long **)0x0;
            _local_1a0 = (long *)0x0;
            bStack_2d8 = (byte)pplVar88;
            uStack_2d7 = (undefined)((ulong)pplVar88 >> 8);
            uStack_2d6 = (undefined2)((ulong)pplVar88 >> 0x10);
            iStack_2d4 = (int)((ulong)pplVar88 >> 0x20);
            uStack_2ce = (undefined2)((ulong)pplVar100 >> 0x10);
            iStack_2cc = (int)((ulong)pplVar100 >> 0x20);
            local_2c0 = (long **)CONCAT44(local_2c0._4_4_,fVar107);
            local_2c8 = pplVar77;
            local_2e0 = plVar95;
            bStack_2d0 = bVar102;
            uStack_2cf = uVar13;
            if (pplVar77 == (long **)0x0) {
              uStack_2b8 = (long **)CONCAT71(uStack_2b8._1_7_,1);
              while (pplVar100 != (long **)0x0) {
                pplVar82 = (long **)*pplVar100;
                if ((*(byte *)(pplVar100 + 2) & 1) != 0) {
                  free(pplVar100[4]);
                }
                free(pplVar100);
                pplVar100 = pplVar82;
              }
            }
            else {
              pplVar82 = (long **)pplVar100[1];
              if (((ulong)pplVar88 & (ulong)(undefined *)((long)pplVar88 + -1)) == 0) {
                pplVar82 = (long **)((ulong)pplVar82 & (ulong)(undefined *)((long)pplVar88 + -1));
              }
              else if (pplVar88 <= pplVar82) {
                uVar87 = 0;
                if (pplVar88 != (long **)0x0) {
                  uVar87 = (ulong)pplVar82 / (ulong)pplVar88;
                }
                pplVar82 = (long **)((long)pplVar82 - uVar87 * (long)pplVar88);
              }
              plVar95[(long)pplVar82] = local_8b0;
              *local_828 = 0;
              local_828[1] = 0;
              uStack_2b8 = (long **)CONCAT71(uStack_2b8._1_7_,1);
            }
            plVar95 = _local_1a0;
            _local_1a0 = (long *)0x0;
            pplVar82 = (long **)local_350;
            if (plVar95 != (long *)0x0) {
              free();
              pplVar82 = (long **)local_350;
            }
            while (pplVar82 != (long **)0x0) {
              pplVar100 = (long **)*pplVar82;
              if ((*(byte *)(pplVar82 + 2) & 1) != 0) {
                free(pplVar82[4]);
              }
              free(pplVar82);
              pplVar82 = pplVar100;
            }
            lVar80 = CONCAT26(uStack_35a,CONCAT51(local_360._1_5_,local_360[0]));
            local_360[0] = 0;
            local_360._1_5_ = 0;
            uStack_35a = 0;
            if (lVar80 != 0) {
              free();
            }
LAB_0013dbb0:
            uVar58 = (uint)local_490;
            plVar95 = (long *)local_320;
            pplVar82 = local_310;
            while (pplVar82 != (long **)0x0) {
              pplVar100 = (long **)*pplVar82;
              local_320 = (undefined  [8])plVar95;
              if ((*(byte *)(pplVar82 + 2) & 1) != 0) {
                free(pplVar82[4]);
              }
              free(pplVar82);
              plVar95 = (long *)local_320;
              pplVar82 = pplVar100;
            }
            local_320 = (undefined  [8])0x0;
            if (plVar95 != (long *)0x0) {
              free();
            }
            if ((char)uStack_2b8 == '\0') {
              plVar95 = (long *)0x0;
            }
            else {
              plVar95 = (long *)malloc(0x28);
              uVar87 = CONCAT44(iStack_2d4,CONCAT22(uStack_2d6,CONCAT11(uStack_2d7,bStack_2d8)));
              *(undefined4 *)(plVar95 + 4) = (undefined4)local_2c0;
              plVar95[1] = 0;
              *plVar95 = 0;
              plVar95[3] = 0;
              plVar95[2] = 0;
              if (uVar87 - 1 == 0) {
                uVar87 = 2;
LAB_0013dc00:
                FUN_0012d5e0(plVar95,uVar87);
              }
              else {
                if ((uVar87 & uVar87 - 1) != 0) {
                  uVar87 = FUN_00115418(uVar87);
                  uVar81 = plVar95[1];
                  bVar28 = uVar81 <= uVar87;
                  if (uVar87 <= uVar81) goto LAB_0013e778;
                  goto LAB_0013dc00;
                }
                uVar81 = 0;
                bVar28 = true;
                if (uVar87 != 0) goto LAB_0013dc00;
LAB_0013e778:
                if (!bVar28) {
                  uVar47 = (ulong)((float)(unkuint9)(ulong)plVar95[3] / *(float *)(plVar95 + 4));
                  if (uVar81 < 3) {
LAB_0014033c:
                    uVar47 = FUN_00115418();
                    if (uVar87 <= uVar47) {
                      uVar87 = uVar47;
                    }
                  }
                  else {
                    uVar49 = NEON_cnt(uVar81,1);
                    uVar103 = NEON_uaddlv(uVar49,1);
                    if (1 < (CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar103) & 0xffffffff))
                    goto LAB_0014033c;
                    if (1 < uVar47) {
                      uVar47 = 1L << (-LZCOUNT(uVar47 - 1) & 0x3fU);
                    }
                    if (uVar87 <= uVar47) {
                      uVar87 = uVar47;
                    }
                  }
                  if (uVar87 < uVar81) goto LAB_0013dc00;
                }
              }
              plVar78 = (std::vector *)
                        CONCAT44(iStack_2cc,CONCAT22(uStack_2ce,CONCAT11(uStack_2cf,bStack_2d0)));
              if (plVar78 != (std::vector *)0x0) {
                plVar48 = plVar95 + 2;
                do {
                  plVar39 = &plVar78->__end_cap_;
                  unaff_x24 = (long **)plVar78[1].__begin_;
                  pcVar42 = (char *)plVar78[1].__end_;
                  if ((*(byte *)plVar39 & 1) == 0) {
                    pcVar42 = (char *)((long)&plVar78->__end_cap_ + 1);
                    unaff_x24 = (long **)(ulong)(*(byte *)plVar39 >> 1);
                  }
                  pplVar82 = (long **)FUN_0012d188(pcVar42,unaff_x24);
                  pplVar100 = (long **)plVar95[1];
                  if (pplVar100 != (long **)0x0) {
                    uVar49 = NEON_cnt(pplVar100,1);
                    uVar103 = NEON_uaddlv(uVar49,1);
                    uVar87 = CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar103) & 0xffffffff;
                    if (uVar87 < 2) {
                      unaff_x27 = (long **)((ulong)((long)pplVar100 + -1) & (ulong)pplVar82);
                    }
                    else {
                      unaff_x27 = pplVar82;
                      if (pplVar100 <= pplVar82) {
                        uVar81 = 0;
                        if (pplVar100 != (long **)0x0) {
                          uVar81 = (ulong)pplVar82 / (ulong)pplVar100;
                        }
                        unaff_x27 = (long **)((long)pplVar82 - uVar81 * (long)pplVar100);
                      }
                    }
                    pplVar88 = *(long ***)(*plVar95 + (long)unaff_x27 * 8);
                    if ((pplVar88 != (long **)0x0) &&
                       (pplVar88 = (long **)*pplVar88, pplVar88 != (long **)0x0)) {
                      if (uVar87 < 2) {
                        do {
                          if ((long **)pplVar88[1] == pplVar82) {
                            bVar102 = *(byte *)(pplVar88 + 2);
                            pplVar71 = (long **)(ulong)(bVar102 >> 1);
                            pplVar77 = pplVar71;
                            if ((bVar102 & 1) != 0) {
                              pplVar77 = (long **)pplVar88[3];
                            }
                            if (pplVar77 == unaff_x24) {
                              if ((bVar102 & 1) == 0) {
                                if (bVar102 < 2) goto LAB_0013dc90;
                                pcVar57 = (char *)((long)pplVar88 + 0x11);
                                pcVar68 = pcVar42;
                                while (*pcVar57 == *pcVar68) {
                                  pplVar71 = (long **)((long)pplVar71 + -1);
                                  pcVar57 = pcVar57 + 1;
                                  pcVar68 = pcVar68 + 1;
                                  if (pplVar71 == (long **)0x0) goto LAB_0013dc90;
                                }
                              }
                              else {
                                iVar31 = func_0x0016a2e0(pplVar88[4],pcVar42);
                                if (iVar31 == 0) goto LAB_0013dc90;
                              }
                            }
                          }
                          else if ((long **)((ulong)pplVar88[1] & (ulong)((long)pplVar100 + -1)) !=
                                   unaff_x27) break;
                          pplVar88 = (long **)*pplVar88;
                        } while (pplVar88 != (long **)0x0);
                      }
                      else {
                        do {
                          pplVar77 = (long **)pplVar88[1];
                          if (pplVar77 == pplVar82) {
                            bVar102 = *(byte *)(pplVar88 + 2);
                            pplVar71 = (long **)(ulong)(bVar102 >> 1);
                            pplVar77 = pplVar71;
                            if ((bVar102 & 1) != 0) {
                              pplVar77 = (long **)pplVar88[3];
                            }
                            if (pplVar77 == unaff_x24) {
                              if ((bVar102 & 1) == 0) {
                                if (bVar102 < 2) goto LAB_0013dc90;
                                pcVar57 = (char *)((long)pplVar88 + 0x11);
                                pcVar68 = pcVar42;
                                while (*pcVar57 == *pcVar68) {
                                  pplVar71 = (long **)((long)pplVar71 + -1);
                                  pcVar57 = pcVar57 + 1;
                                  pcVar68 = pcVar68 + 1;
                                  if (pplVar71 == (long **)0x0) goto LAB_0013dc90;
                                }
                              }
                              else {
                                iVar31 = func_0x0016a2e0(pplVar88[4],pcVar42);
                                if (iVar31 == 0) goto LAB_0013dc90;
                              }
                            }
                          }
                          else {
                            if (pplVar100 <= pplVar77) {
                              uVar87 = 0;
                              if (pplVar100 != (long **)0x0) {
                                uVar87 = (ulong)pplVar77 / (ulong)pplVar100;
                              }
                              pplVar77 = (long **)((long)pplVar77 - uVar87 * (long)pplVar100);
                            }
                            if (pplVar77 != unaff_x27) break;
                          }
                          pplVar88 = (long **)*pplVar88;
                        } while (pplVar88 != (long **)0x0);
                      }
                    }
                  }
                  pplVar88 = (long **)malloc(0x30);
                  *pplVar88 = (long *)0x0;
                  pplVar88[1] = (long *)pplVar82;
                  if ((*(byte *)plVar39 & 1) == 0) {
                    plVar79 = (long *)plVar78[1].__begin_;
                    plVar39 = (long *)*plVar39;
                    pplVar88[4] = (long *)plVar78[1].__end_;
                    pplVar88[3] = plVar79;
                    pplVar88[2] = plVar39;
                  }
                  else {
                    FUN_0012ae34(pplVar88 + 2,plVar78[1].__end_,plVar78[1].__begin_);
                  }
                  lVar80 = plVar95[3];
                  fVar107 = *(float *)(plVar95 + 4);
                  *(undefined4 *)(pplVar88 + 5) = *(undefined4 *)&plVar78[1].__end_cap_;
                  if ((pplVar100 == (long **)0x0) ||
                     (fVar107 * (float)ZEXT89(pplVar100) < (float)(unkuint9)(lVar80 + 1))) {
                    if (pplVar100 < (long **)0x3) {
                      uVar87 = 1;
                    }
                    else {
                      uVar87 = (ulong)(((ulong)pplVar100 & (ulong)((long)pplVar100 + -1)) != 0);
                    }
                    pplVar100 = (long **)(uVar87 | (long)pplVar100 << 1);
                    pplVar77 = (long **)(long)((float)(unkuint9)(lVar80 + 1) / fVar107);
                    if (pplVar100 <= pplVar77) {
                      pplVar100 = pplVar77;
                    }
                    if ((undefined *)((long)pplVar100 + -1) == (undefined *)0x0) {
                      pplVar100 = (long **)0x2;
                    }
                    else if (((ulong)pplVar100 & (ulong)(undefined *)((long)pplVar100 + -1)) != 0) {
                      pplVar100 = (long **)FUN_00115418(pplVar100);
                    }
                    unaff_x24 = (long **)plVar95[1];
                    if (unaff_x24 < pplVar100) {
LAB_0013df40:
                      FUN_0012d5e0(plVar95);
                    }
                    else if (pplVar100 < unaff_x24) {
                      pplVar77 = (long **)(long)((float)(unkuint9)(ulong)plVar95[3] /
                                                *(float *)(plVar95 + 4));
                      if (unaff_x24 < (long **)0x3) {
LAB_0013dfd0:
                        pplVar77 = (long **)FUN_00115418();
                        if (pplVar100 <= pplVar77) {
                          pplVar100 = pplVar77;
                        }
                      }
                      else {
                        uVar49 = NEON_cnt(unaff_x24,1);
                        uVar103 = NEON_uaddlv(uVar49,1);
                        if (1 < (CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar103) & 0xffffffff))
                        goto LAB_0013dfd0;
                        if ((long **)0x1 < pplVar77) {
                          pplVar77 = (long **)(1L << (-LZCOUNT((undefined *)((long)pplVar77 + -1)) &
                                                     0x3fU));
                        }
                        if (pplVar100 <= pplVar77) {
                          pplVar100 = pplVar77;
                        }
                      }
                      if (pplVar100 < unaff_x24) goto LAB_0013df40;
                    }
                    pplVar100 = (long **)plVar95[1];
                    if (((ulong)pplVar100 & (ulong)(undefined *)((long)pplVar100 + -1)) == 0) {
                      unaff_x27 = (long **)((ulong)(undefined *)((long)pplVar100 + -1) &
                                           (ulong)pplVar82);
                    }
                    else {
                      unaff_x27 = pplVar82;
                      if (pplVar100 <= pplVar82) {
                        uVar87 = 0;
                        if (pplVar100 != (long **)0x0) {
                          uVar87 = (ulong)pplVar82 / (ulong)pplVar100;
                        }
                        unaff_x27 = (long **)((long)pplVar82 - uVar87 * (long)pplVar100);
                      }
                    }
                  }
                  lVar80 = *plVar95;
                  pplVar82 = *(long ***)(lVar80 + (long)unaff_x27 * 8);
                  if (pplVar82 == (long **)0x0) {
                    lVar91 = *plVar48;
                    *plVar48 = (long)pplVar88;
                    *pplVar88 = (long *)lVar91;
                    *(long **)(lVar80 + (long)unaff_x27 * 8) = plVar48;
                    if (*pplVar88 != (long *)0x0) {
                      pplVar82 = *(long ***)((long)*pplVar88 + 8);
                      if (((ulong)pplVar100 & (ulong)(undefined *)((long)pplVar100 + -1)) == 0) {
                        pplVar82 = (long **)((ulong)pplVar82 &
                                            (ulong)(undefined *)((long)pplVar100 + -1));
                      }
                      else if (pplVar100 <= pplVar82) {
                        uVar87 = 0;
                        if (pplVar100 != (long **)0x0) {
                          uVar87 = (ulong)pplVar82 / (ulong)pplVar100;
                        }
                        pplVar82 = (long **)((long)pplVar82 - uVar87 * (long)pplVar100);
                      }
                      pplVar82 = (long **)(*plVar95 + (long)pplVar82 * 8);
                      goto LAB_0013dc80;
                    }
                  }
                  else {
                    *pplVar88 = *pplVar82;
LAB_0013dc80:
                    *pplVar82 = (long *)pplVar88;
                  }
                  plVar95[3] = plVar95[3] + 1;
LAB_0013dc90:
                  plVar78 = (std::vector *)plVar78->__begin_;
                } while (plVar78 != (std::vector *)0x0);
              }
              uVar58 = (uint)local_490;
            }
            uVar86 = (uint)local_538 ^ uVar58 ^ 0xffffffff;
            uVar44 = 0;
            if (uVar58 != 0) {
              uVar44 = uVar86 / uVar58;
            }
            uVar87 = 0xcbf29ce484222325;
            *(long **)((long)local_530[1] + (ulong)(uVar86 - uVar44 * uVar58)) = plVar95;
            if ((uint)local_498 != 0) {
              lVar80 = 0;
              iVar31 = 0;
              uVar86 = (uint)local_540 ^ uVar58 ^ 0xffffffff;
              uVar44 = 0;
              if (uVar58 != 0) {
                uVar44 = uVar86 / uVar58;
              }
              uVar87 = 0xcbf29ce484222325;
              do {
                lVar91 = lVar80 + (ulong)(uVar86 - uVar44 * uVar58);
                iVar31 = iVar31 + 1;
                lVar80 = (long)iVar31;
                uVar87 = uVar87 * 0x100000001b3 ^ (long)*(char *)((long)local_530[1] + lVar91);
              } while ((uint)local_498 != iVar31);
            }
            uVar86 = (uint)local_4b0 ^ uVar58 ^ 0xffffffff;
            uVar44 = 0;
            if (uVar58 != 0) {
              uVar44 = uVar86 / uVar58;
            }
            uVar111 = (uint)local_4f0;
            if ((long **)(uVar87 ^ (long)*(int *)((long)local_530[1] +
                                                 (ulong)(uVar86 - uVar44 * uVar58))) != local_4d0) {
              uVar111 = (uint)local_508;
            }
            if ((char)uStack_2b8 != '\0') {
              plVar95 = local_2e0;
              plVar48 = (long *)CONCAT44(iStack_2cc,
                                         CONCAT22(uStack_2ce,CONCAT11(uStack_2cf,bStack_2d0)));
              while (plVar48 != (long *)0x0) {
                lVar80 = *plVar48;
                local_2e0 = plVar95;
                if ((*(byte *)(plVar48 + 2) & 1) != 0) {
                  free(plVar48[4]);
                }
                free(plVar48);
                plVar95 = local_2e0;
                plVar48 = (long *)lVar80;
              }
              local_2e0 = (long *)0x0;
              if (plVar95 != (long *)0x0) {
                free();
              }
            }
            uVar111 = uVar111 ^ uVar58 ^ 0xffffffff;
            pplVar82 = (long **)(ulong)local_464;
            uVar86 = 0;
            if (uVar58 != 0) {
              uVar86 = uVar111 / uVar58;
            }
            puVar91 = (undefined8 *)(ulong)(uVar111 - uVar86 * uVar58);
            goto LAB_0012ecfc;
          }
          uVar58 = local_790;
          if (uVar86 != 0x151c9725) goto LAB_0013267c;
          goto LAB_0012ed04;
        }
        uVar58 = local_5b0;
        if (((uVar86 == 0x158bcc02) || (uVar58 = local_650, uVar86 == 0x15bfc039)) ||
           (uVar58 = local_7c8, uVar86 == 0x17ff3bf1)) goto LAB_0012ed04;
      }
    }
    else if ((int)uVar86 < 0x2fadc029) {
      if ((int)uVar86 < 0x250ff82c) {
        if ((int)uVar86 < 0x216ab904) {
          uVar58 = local_5ec;
          if ((uVar86 != 0x188af6da) && (uVar58 = local_784, uVar86 != 0x1f27c6e7))
          goto LAB_0013267c;
        }
        else {
          uVar58 = local_590;
          if (uVar86 != 0x216ab904) {
            if (uVar86 == 0x2198d070) {
              lVar91 = *(long *)(local_470 + 8);
              pplVar100 = (long **)(lVar91 + 0x14);
              puVar92 = (uint *)(lVar91 + 0x10);
              uVar96 = *puVar92;
              uVar58 = *(uint *)pplVar100 + 4;
              uVar111 = ((uVar58 ^ 0xffffffff) & 0xfffffff7) * -3 +
                        (~uVar58 | 0xfffffff7) + (uVar58 * 2 ^ 0xffffffee);
              lVar80 = *(long *)(lVar91 + 8);
              uVar113 = *(uint *)(lVar80 + (ulong)*(uint *)pplVar100);
              uVar86 = uVar111 + 4;
              *(uint *)pplVar100 = uVar58;
              pplVar82 = *(long ***)(lVar80 + (ulong)uVar58);
              *(uint *)pplVar100 = uVar111;
              uVar112 = *(uint *)(lVar80 + (ulong)uVar111);
              *(uint *)pplVar100 = uVar86;
              uVar111 = ((uVar111 & 2 | ((uVar111 & 2) >> 1) << 2) - (uVar86 | 2)) +
                        (uVar86 * 2 ^ 4);
              sVar17 = *(short *)(lVar80 + (ulong)uVar86);
              unaff_x27 = (long **)(long)sVar17;
              *(uint *)pplVar100 = uVar111;
              uVar58 = *(uint *)(lVar80 + (ulong)uVar111);
              *(uint *)pplVar100 = uVar111 + 4;
              uVar33 = *(undefined4 *)(lVar80 + (ulong)(uVar111 + 4));
              *(uint *)pplVar100 = uVar111 + 8;
              local_490 = (long **)CONCAT44(local_490._4_4_,uVar58);
              local_498 = (long **)CONCAT44(local_498._4_4_,uVar33);
              uVar86 = ~(*(uint *)(lVar80 + (ulong)(uVar111 + 8)) ^ uVar96);
              *(uint *)pplVar100 = uVar111 + 0xc;
              uVar115 = 0;
              if (uVar96 != 0) {
                uVar115 = uVar86 / uVar96;
              }
              uVar101 = *(uint *)(lVar80 + (ulong)(uVar111 + 0xc));
              *(uint *)pplVar100 = uVar111 + 0x10;
              uVar94 = *(uint *)(lVar80 + (ulong)(uVar111 + 0x10));
              *(uint *)pplVar100 = uVar111 + 0x14;
              uVar85 = *(uint *)(lVar80 + (ulong)(uVar111 + 0x14));
              *(uint *)pplVar100 = uVar111 + 0x18;
              uVar94 = uVar94 ^ uVar96 ^ 0xffffffff;
              uVar111 = 0;
              if (uVar96 != 0) {
                uVar111 = uVar94 / uVar96;
              }
              uVar7 = uVar86 - uVar115 * uVar96;
              uVar22 = *(ushort *)(lVar80 + (ulong)uVar7) ^ uVar7;
              plVar95 = *(long **)(lVar80 + (ulong)(uVar94 - uVar111 * uVar96));
              if (((uVar22 ^ 0xffffffff) & 0xffff) == 0) {
                lVar80 = *(long *)(lVar91 + 8);
                pplVar100 = (long **)0x0;
                puStack_488 = (undefined *)0x0;
                local_464 = uVar44;
              }
              else {
                local_568 = CONCAT44(local_568._4_4_,uVar86);
                local_4b0 = (long **)CONCAT44(local_4b0._4_4_,uVar85);
                local_530 = (long **)CONCAT44(local_530._4_4_,uVar101);
                local_508 = (undefined *)CONCAT44(local_508._4_4_,uVar112);
                local_538 = (undefined *)CONCAT44(local_538._4_4_,uVar113);
                local_540 = pplVar82;
                local_4f0 = plVar95;
                local_464 = uVar44;
                if ((uVar22 >> 0xf & 1) == 0) goto LAB_001424b4;
                uVar16 = *(ushort *)(lVar80 + (ulong)uVar7) ^ (ushort)uVar7 ^ 0xffff;
                puVar97 = (undefined *)((long)(short)uVar16 << 2);
                local_4d0 = (long **)malloc(puVar97);
                local_548 = puVar97;
                func_0x0016a0f0(local_4d0,0,puVar97);
                lVar80 = *(long *)(lVar91 + 8);
                uVar87 = (ulong)uVar16;
                if ((uVar22 & 0xffff) < 0xffec) {
                  uVar81 = 0;
                  if ((uVar115 * uVar96 - (uint)local_568) - 3 < (uint)((int)(uVar87 - 1) << 2))
                  goto LAB_00132948;
                  if (uVar87 - 1 >> 0x1e != 0) goto LAB_00132968;
                  puVar1 = (uint *)(lVar80 + (ulong)(uVar7 + 2));
                  puVar2 = (uint *)((long)local_4d0 + uVar87 * 4);
                  uVar81 = 0;
                  if ((puVar92 < puVar2 && local_4d0 < pplVar100) ||
                     (local_4d0 < puVar1 + uVar87 && puVar1 < puVar2)) goto LAB_00132968;
                  uVar58 = *puVar92;
                  uVar81 = uVar87 & 0x7ffc;
                  iVar31 = 0;
                  uVar47 = uVar81;
                  pplVar82 = local_4d0;
                  do {
                    iVar32 = iVar31 * 4;
                    uVar47 = uVar47 - 4;
                    iVar31 = iVar31 + 4;
                    puVar91 = (undefined8 *)(lVar80 + (ulong)(uVar7 + 2 + iVar32));
                    uVar108 = puVar91[1];
                    uVar49 = *puVar91;
                    bVar102 = (byte)uVar58;
                    bVar104 = (byte)(uVar58 >> 8);
                    bVar105 = (byte)(uVar58 >> 0x10);
                    bVar106 = (byte)(uVar58 >> 0x18);
                    uVar44 = CONCAT13(~((byte)((ulong)uVar49 >> 0x18) ^ bVar106),
                                      CONCAT12(~((byte)((ulong)uVar49 >> 0x10) ^ bVar105),
                                               CONCAT11(~((byte)((ulong)uVar49 >> 8) ^ bVar104),
                                                        ~((byte)uVar49 ^ bVar102))));
                    uVar113 = CONCAT13(~((byte)((ulong)uVar108 >> 0x18) ^ bVar106),
                                       CONCAT12(~((byte)((ulong)uVar108 >> 0x10) ^ bVar105),
                                                CONCAT11(~((byte)((ulong)uVar108 >> 8) ^ bVar104),
                                                         ~((byte)uVar108 ^ bVar102))));
                    uVar111 = (uint)(CONCAT17(~((byte)((ulong)uVar49 >> 0x38) ^ bVar106),
                                              CONCAT16(~((byte)((ulong)uVar49 >> 0x30) ^ bVar105),
                                                       CONCAT15(~((byte)((ulong)uVar49 >> 0x28) ^
                                                                 bVar104),
                                                                CONCAT14(~((byte)((ulong)uVar49 >>
                                                                                 0x20) ^ bVar102),
                                                                         uVar44)))) >> 0x20);
                    uVar112 = (uint)(CONCAT17(~((byte)((ulong)uVar108 >> 0x38) ^ bVar106),
                                              CONCAT16(~((byte)((ulong)uVar108 >> 0x30) ^ bVar105),
                                                       CONCAT15(~((byte)((ulong)uVar108 >> 0x28) ^
                                                                 bVar104),
                                                                CONCAT14(~((byte)((ulong)uVar108 >>
                                                                                 0x20) ^ bVar102),
                                                                         uVar113)))) >> 0x20);
                    uVar86 = 0;
                    if (uVar58 != 0) {
                      uVar86 = uVar44 / uVar58;
                    }
                    uVar115 = 0;
                    if (uVar58 != 0) {
                      uVar115 = uVar111 / uVar58;
                    }
                    uVar94 = 0;
                    if (uVar58 != 0) {
                      uVar94 = uVar113 / uVar58;
                    }
                    uVar101 = 0;
                    if (uVar58 != 0) {
                      uVar101 = uVar112 / uVar58;
                    }
                    pplVar82[1] = (long *)CONCAT44(uVar112 - uVar101 * uVar58,
                                                   uVar113 - uVar94 * uVar58);
                    *pplVar82 = (long *)CONCAT44(uVar111 - uVar115 * uVar58,uVar44 - uVar86 * uVar58
                                                );
                    pplVar82 = pplVar82 + 2;
                  } while (uVar47 != 0);
                  if (uVar81 != uVar87) goto LAB_00132968;
                }
                else {
LAB_00132948:
                  uVar81 = 0;
LAB_00132968:
                  lVar54 = uVar87 - uVar81;
                  piVar34 = (int *)((long)local_4d0 + uVar81 * 4);
                  do {
                    iVar31 = (int)uVar81;
                    uVar86 = *puVar92;
                    lVar54 = lVar54 + -1;
                    uVar81 = uVar81 + 1;
                    uVar58 = *(uint *)(lVar80 + (ulong)(uVar7 + 2 + iVar31 * 4)) ^
                             uVar86 ^ 0xffffffff;
                    uVar44 = 0;
                    if (uVar86 != 0) {
                      uVar44 = uVar58 / uVar86;
                    }
                    *piVar34 = uVar58 - uVar44 * uVar86;
                    piVar34 = piVar34 + 1;
                  } while (lVar54 != 0);
                }
                puStack_488 = (undefined *)((long)local_4d0 + (long)local_548);
                plVar95 = local_4f0;
                pplVar82 = local_540;
                pplVar100 = local_4d0;
                uVar112 = (uint)local_508;
                uVar101 = (uint)local_530;
                uVar85 = (uint)local_4b0;
                uVar58 = (uint)local_490;
                uVar113 = (uint)local_538;
              }
              unaff_x24 = (long **)(ulong)uVar58;
              uVar113 = uVar113 ^ uVar96 ^ 0xffffffff;
              uVar112 = uVar112 ^ uVar96 ^ 0xffffffff;
              uVar101 = uVar101 ^ uVar96 ^ 0xffffffff;
              uVar86 = 0;
              if (uVar96 != 0) {
                uVar86 = uVar113 / uVar96;
              }
              uVar85 = uVar85 ^ uVar96 ^ 0xffffffff;
              uVar87 = 0;
              uVar44 = 0;
              if (uVar96 != 0) {
                uVar44 = uVar112 / uVar96;
              }
              uVar111 = 0;
              if (uVar96 != 0) {
                uVar111 = uVar101 / uVar96;
              }
              uVar115 = 0;
              uVar94 = 0;
              if (uVar96 != 0) {
                uVar94 = uVar85 / uVar96;
              }
              do {
                uVar115 = (uVar115 & 1) * 2 + (uVar115 ^ 1);
                (&local_2e0)[uVar87] =
                     *(long **)(lVar80 + (ulong)*(uint *)((long)pplVar100 + uVar87 * 4));
                uVar87 = (ulong)(int)uVar115;
              } while (uVar87 < (ulong)((long)(((ulong)puStack_488 ^ (ulong)pplVar100) +
                                              ((ulong)pplVar100 &
                                              ((ulong)puStack_488 ^ 0xffffffffffffffff)) * -2) >> 2)
                      );
              local_490 = pplVar100;
              uVar87 = syscall(plVar95,local_2e0,
                               CONCAT44(iStack_2d4,
                                        CONCAT22(uStack_2d6,CONCAT11(uStack_2d7,bStack_2d8))),
                               CONCAT44(iStack_2cc,
                                        CONCAT22(uStack_2ce,CONCAT11(uStack_2cf,bStack_2d0))),
                               local_2c8,local_2c0,uStack_2b8);
              if (uVar87 < 0xfffffffffffff001) {
                iVar31 = *local_4b8;
              }
              else {
                iVar31 = -(int)uVar87;
                uVar87 = 0xffffffffffffffff;
                *local_4b8 = iVar31;
              }
              *(int *)(*(long *)(lVar91 + 8) + (ulong)(uVar101 - uVar111 * uVar96)) = iVar31;
              uVar81 = 0xcbf29ce484222325;
              *(ulong *)(*(long *)(lVar91 + 8) + (ulong)(uVar85 - uVar94 * uVar96)) = uVar87;
              if (sVar17 != 0) {
                lVar80 = 0;
                iVar31 = 0;
                do {
                  pcVar42 = (char *)(*(long *)(lVar91 + 8) + (ulong)(uVar112 - uVar44 * uVar96) +
                                    lVar80);
                  iVar31 = iVar31 + 1;
                  lVar80 = (long)iVar31;
                  uVar81 = uVar81 * 0x100000001b3 ^ (long)*pcVar42;
                } while (sVar17 != iVar31);
              }
              uVar87 = (ulong)*(int *)(*(long *)(lVar91 + 8) + (ulong)(uVar113 - uVar86 * uVar96));
              if ((long **)(((uVar81 | uVar87) + ~uVar87) - (uVar81 | uVar87 ^ 0xffffffffffffffff))
                  != pplVar82) {
                uVar58 = (uint)local_498;
              }
              uVar58 = uVar58 ^ uVar96 ^ 0xffffffff;
              uVar86 = 0;
              if (uVar96 != 0) {
                uVar86 = uVar58 / uVar96;
              }
              uVar58 = uVar58 - uVar86 * uVar96;
              pplVar100 = local_490;
              goto joined_r0x00142090;
            }
            uVar58 = local_7f4;
            if (uVar86 != 0x21d23544) goto LAB_0013267c;
          }
        }
        goto LAB_0012ed04;
      }
      if (0x263dc604 < (int)uVar86) {
        uVar58 = local_5a0;
        if (uVar86 != 0x263dc605) {
          if (uVar86 == 0x2a839ade) {
            lVar80 = *(long *)(local_470 + 8);
            uVar44 = *(uint *)(lVar80 + 0x10);
            uVar86 = *(uint *)(lVar80 + 0x14);
            lVar91 = *(long *)(lVar80 + 8);
            uVar58 = *(uint *)(lVar91 + (ulong)uVar86) ^ uVar44 ^ 0xffffffff;
            *(uint *)(lVar80 + 0x14) = uVar86 + 4;
            uVar111 = 0;
            if (uVar44 != 0) {
              uVar111 = uVar58 / uVar44;
            }
            uVar112 = *(uint *)(lVar91 + (ulong)(uVar86 + 4)) ^ uVar44 ^ 0xffffffff;
            uVar113 = uVar86 + 0xc;
            *(uint *)(lVar80 + 0x14) = uVar86 + 8;
            uVar86 = *(uint *)(lVar91 + (ulong)(uVar86 + 8));
            *(uint *)(lVar80 + 0x14) = uVar113;
            uVar86 = uVar86 ^ uVar44 ^ 0xffffffff;
            lVar54 = *(long *)(lVar91 + (ulong)uVar113);
            uVar87 = (ulong)(uVar113 & 8 | (uVar113 * 2 & 0x10) + (uVar113 & 0xfffffff7)) ^ 8;
            uVar115 = 0;
            if (uVar44 != 0) {
              uVar115 = uVar112 / uVar44;
            }
            iVar31 = (int)uVar87;
            uVar96 = iVar31 + 4;
            *(int *)(lVar80 + 0x14) = iVar31;
            uVar94 = *(uint *)(lVar91 + uVar87);
            *(uint *)(lVar80 + 0x14) = uVar96;
            uVar113 = (uVar113 * 2 & 4) + (uVar96 ^ 2);
            sVar17 = *(short *)(lVar91 + (ulong)uVar96);
            *(uint *)(lVar80 + 0x14) = uVar113;
            uVar96 = *(uint *)(lVar91 + (ulong)uVar113);
            *(uint *)(lVar80 + 0x14) = uVar113 + 4;
            uVar94 = uVar94 ^ uVar44 ^ 0xffffffff;
            uVar85 = *(uint *)(lVar91 + (ulong)(uVar113 + 4));
            *(uint *)(lVar80 + 0x14) = uVar113 + 8;
            uVar101 = *(uint *)(lVar91 + (ulong)(uVar113 + 8));
            *(uint *)(lVar80 + 0x14) = uVar113 + 0xc;
            uVar113 = 0;
            if (uVar44 != 0) {
              uVar113 = uVar86 / uVar44;
            }
            uVar101 = uVar101 ^ uVar44 ^ 0xffffffff;
            uVar22 = 0;
            if (uVar44 != 0) {
              uVar22 = uVar101 / uVar44;
            }
            ppiVar43 = *(int ***)(lVar91 + (ulong)(uVar58 - uVar111 * uVar44));
            uVar58 = 0;
            if (uVar44 != 0) {
              uVar58 = uVar94 / uVar44;
            }
            piVar34 = ppiVar43[1];
            do {
              piVar90 = piVar34;
              if (piVar90 == *ppiVar43) {
                uVar49 = 0xffffffffffffffff;
                goto LAB_00139640;
              }
              piVar34 = piVar90 + -4;
            } while (piVar90[-4] != *(int *)(lVar91 + (ulong)(uVar101 - uVar22 * uVar44)));
            uVar49 = *(undefined8 *)(piVar90 + -2);
LAB_00139640:
            *(undefined8 *)(lVar91 + (ulong)(uVar112 - uVar115 * uVar44)) = uVar49;
            uVar87 = 0xcbf29ce484222325;
            if (sVar17 != 0) {
              lVar91 = 0;
              iVar31 = 0;
              do {
                pcVar42 = (char *)(*(long *)(lVar80 + 8) + (ulong)(uVar94 - uVar58 * uVar44) +
                                  lVar91);
                iVar31 = iVar31 + 1;
                lVar91 = (long)iVar31;
                uVar87 = uVar87 * 0x100000001b3 ^ (long)*pcVar42;
              } while (sVar17 != iVar31);
            }
            uVar81 = (ulong)*(int *)(*(long *)(lVar80 + 8) + (ulong)(uVar86 - uVar113 * uVar44));
            if ((uVar87 | uVar81 ^ 0xffffffffffffffff) + (uVar87 ^ uVar81) * 2 +
                (uVar81 | uVar87 ^ 0xffffffffffffffff) + 2 != lVar54) {
              uVar96 = uVar85;
            }
            goto LAB_001396a8;
          }
          if (uVar86 != 0x2f41c21d) goto LAB_0013267c;
          lVar91 = *(long *)(local_470 + 8);
          uVar111 = *(uint *)(lVar91 + 0x10);
          uVar96 = *(uint *)(lVar91 + 0x14);
          lVar80 = *(long *)(lVar91 + 8);
          uVar58 = uVar96 + 8;
          iVar31 = uVar96 + (uVar58 | 8) + (-uVar96 - 9 | 8);
          uVar112 = *(uint *)(lVar80 + (ulong)uVar96);
          uVar86 = iVar31 + 9;
          uVar113 = iVar31 + 0xd;
          *(uint *)(lVar91 + 0x14) = uVar96 + 4;
          uVar115 = *(uint *)(lVar80 + (ulong)(uVar96 + 4));
          unaff_x24 = (long **)(ulong)uVar115;
          *(uint *)(lVar91 + 0x14) = uVar58;
          unaff_x27 = *(long ***)(lVar80 + (ulong)uVar58);
          *(uint *)(lVar91 + 0x14) = uVar86;
          uVar96 = *(uint *)(lVar80 + (ulong)uVar86);
          *(uint *)(lVar91 + 0x14) = uVar113;
          iVar31 = (uVar113 ^ 2) * 3 + (uVar86 * 2 & 4) + (uVar113 * 2 ^ 0xfffffffa);
          sVar17 = *(short *)(lVar80 + (ulong)uVar113);
          uVar112 = uVar112 ^ uVar111 ^ 0xffffffff;
          uVar86 = 0;
          if (uVar111 != 0) {
            uVar86 = uVar112 / uVar111;
          }
          *(uint *)(lVar91 + 0x14) = iVar31 + 2U;
          uVar58 = *(uint *)(lVar80 + (ulong)(iVar31 + 2U));
          *(uint *)(lVar91 + 0x14) = iVar31 + 6U;
          uVar94 = *(uint *)(lVar80 + (ulong)(iVar31 + 6U));
          *(uint *)(lVar91 + 0x14) = iVar31 + 10U;
          uVar113 = *(uint *)(lVar80 + (ulong)(iVar31 + 10U));
          *(int *)(lVar91 + 0x14) = iVar31 + 0xe;
          uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
          uVar101 = 0;
          if (uVar111 != 0) {
            uVar101 = uVar113 / uVar111;
          }
          plVar100 = *(std::vector **)(lVar80 + (ulong)(uVar112 - uVar86 * uVar111));
          lVar80 = *(long *)(lVar80 + (ulong)(uVar113 - uVar101 * uVar111));
          local_464 = uVar44;
          plVar95 = (long *)malloc(0x38);
          *plVar95 = (long)&DAT_0016ef08;
          *(undefined4 *)(plVar95 + 5) = 0x3f800000;
          plVar95[6] = lVar80;
          plVar95[4] = 0;
          plVar95[3] = 0;
          plVar95[2] = 0;
          plVar95[1] = 0;
          ppaVar55 = (long **)plVar100->__end_;
          if (ppaVar55 < (long **)plVar100->__end_cap_) {
            pplVar77 = ppaVar55 + 1;
            *ppaVar55 = plVar95;
          }
          else {
            local_490 = (long **)CONCAT44(local_490._4_4_,uVar94);
            lVar80 = (long)ppaVar55 - plVar100->__begin_ >> 3;
            uVar87 = lVar80 + 1;
            if (uVar87 >> 0x3d != 0) {
              FUN_00145320();
LAB_001424c0:
              FUN_0012ae28();
              goto LAB_001424c4;
            }
            uVar47 = (long)(long **)plVar100->__end_cap_ - plVar100->__begin_;
            uVar81 = (long)uVar47 >> 2;
            if (uVar81 <= uVar87) {
              uVar81 = uVar87;
            }
            if (0x7ffffffffffffff7 < uVar47) {
              uVar81 = 0x1fffffffffffffff;
            }
            if (uVar81 == 0) {
              lVar54 = 0;
            }
            else {
              if (uVar81 >> 0x3d != 0) goto LAB_001424b8;
              lVar54 = malloc(uVar81 << 3);
            }
            pplVar82 = (long **)(lVar54 + lVar80 * 8);
            lVar54 = lVar54 + uVar81 * 8;
            pplVar77 = pplVar82 + 1;
            *pplVar82 = plVar95;
            pplVar100 = (long **)plVar100->__begin_;
            pplVar88 = (long **)plVar100->__end_;
            if (pplVar88 == pplVar100) {
              plVar100->__begin_ = (long)pplVar82;
              plVar100->__end_ = (long)pplVar77;
              plVar100->__end_cap_ = lVar54;
            }
            else {
              do {
                pplVar88 = pplVar88 + -1;
                plVar95 = *pplVar88;
                *pplVar88 = (long *)0x0;
                pplVar82 = pplVar82 + -1;
                *pplVar82 = plVar95;
              } while (pplVar88 != pplVar100);
              pplVar88 = (long **)plVar100->__begin_;
              pplVar100 = (long **)plVar100->__end_;
              plVar100->__begin_ = (long)pplVar82;
              plVar100->__end_ = (long)pplVar77;
              plVar100->__end_cap_ = lVar54;
              while (pplVar100 != pplVar88) {
                pplVar100 = pplVar100 + -1;
                plVar95 = *pplVar100;
                *pplVar100 = (long *)0x0;
                if (plVar95 != (long *)0x0) {
                  (**(code **)(*plVar95 + 0x18))();
                }
              }
            }
            if (pplVar88 != (long **)0x0) {
              free(pplVar88);
            }
            uVar94 = (uint)local_490;
          }
          plVar100->__end_ = (long)pplVar77;
          uVar87 = 0xcbf29ce484222325;
          if (sVar17 != 0) {
            uVar96 = uVar96 ^ uVar111 ^ 0xffffffff;
            lVar80 = 0;
            iVar31 = 0;
            uVar86 = 0;
            if (uVar111 != 0) {
              uVar86 = uVar96 / uVar111;
            }
            uVar87 = 0xcbf29ce484222325;
            do {
              pcVar42 = (char *)(*(long *)(lVar91 + 8) + (ulong)(uVar96 - uVar86 * uVar111) + lVar80
                                );
              iVar31 = iVar31 + 1;
              lVar80 = (long)iVar31;
              uVar87 = uVar87 * 0x100000001b3 ^ (long)*pcVar42;
            } while (sVar17 != iVar31);
          }
          uVar115 = uVar115 ^ uVar111 ^ 0xffffffff;
          uVar86 = 0;
          if (uVar111 != 0) {
            uVar86 = uVar115 / uVar111;
          }
          uVar81 = (ulong)*(int *)(*(long *)(lVar91 + 8) + (ulong)(uVar115 - uVar86 * uVar111));
          if ((long **)((uVar87 - uVar81) + (uVar81 & (uVar87 ^ 0xffffffffffffffff)) * 2) !=
              unaff_x27) {
            uVar58 = uVar94;
          }
          goto LAB_001395a8;
        }
        goto LAB_0012ed04;
      }
      uVar58 = local_630;
      if (uVar86 == 0x250ff82c) goto LAB_0012ed04;
      if (uVar86 == 0x26338b61) {
        lVar91 = *(long *)(local_470 + 8);
        uVar86 = *(uint *)(lVar91 + 0x10);
        uVar111 = *(uint *)(lVar91 + 0x14);
        lVar80 = *(long *)(lVar91 + 8);
        uVar113 = *(uint *)(lVar91 + 0x10);
        uVar58 = *(uint *)(lVar80 + (ulong)uVar111) ^ uVar86 ^ 0xffffffff;
        *(uint *)(lVar91 + 0x14) = uVar111 + 4;
        uVar112 = 0;
        if (uVar86 != 0) {
          uVar112 = uVar58 / uVar86;
        }
        uVar101 = *(uint *)(lVar80 + (ulong)(uVar111 + 4));
        *(uint *)(lVar91 + 0x14) = uVar111 + 8;
        uVar115 = *(uint *)(lVar80 + (ulong)(uVar111 + 8)) ^ uVar86 ^ 0xffffffff;
        uVar96 = uVar111 + 0x10;
        *(uint *)(lVar91 + 0x14) = uVar111 + 0xc;
        uVar94 = *(uint *)(lVar80 + (ulong)(uVar111 + 0xc));
        *(uint *)(lVar91 + 0x14) = uVar96;
        uVar87 = *(ulong *)(lVar80 + (ulong)uVar96);
        uVar94 = uVar94 ^ uVar86 ^ 0xffffffff;
        uVar85 = 0;
        if (uVar86 != 0) {
          uVar85 = uVar115 / uVar86;
        }
        uVar111 = ((uVar96 ^ 0xffffffff) & 0xfffffff7) * -3 +
                  (~uVar111 | 0xfffffff7) + (uVar96 * 2 ^ 0xffffffee);
        *(uint *)(lVar91 + 0x14) = uVar111;
        uVar96 = *(uint *)(lVar80 + (ulong)uVar111);
        uVar111 = uVar111 + 4;
        *(uint *)(lVar91 + 0x14) = uVar111;
        uVar96 = uVar96 ^ uVar86 ^ 0xffffffff;
        sVar17 = *(short *)(lVar80 + (ulong)uVar111);
        unaff_x24 = (long **)(long)sVar17;
        uVar111 = (uVar111 * 2 | 5) + (uVar111 ^ 0xfffffffd);
        uVar22 = 0;
        if (uVar86 != 0) {
          uVar22 = uVar94 / uVar86;
        }
        uVar115 = uVar115 - uVar85 * uVar86;
        *(uint *)(lVar91 + 0x14) = uVar111;
        uVar85 = *(uint *)(lVar80 + (ulong)uVar111);
        *(uint *)(lVar91 + 0x14) = uVar111 + 4;
        uVar7 = *(uint *)(lVar80 + (ulong)(uVar111 + 4));
        *(uint *)(lVar91 + 0x14) = uVar111 + 8;
        uVar9 = *(uint *)(lVar80 + (ulong)(uVar111 + 8));
        *(uint *)(lVar91 + 0x14) = uVar111 + 0xc;
        uVar19 = *(uint *)(lVar80 + (ulong)(uVar111 + 0xc));
        *(uint *)(lVar91 + 0x14) = uVar111 + 0x10;
        lVar54 = *(long *)(lVar91 + 8);
        uVar18 = *(uint *)(lVar80 + (ulong)(uVar111 + 0x10));
        *(uint *)(lVar91 + 0x14) = uVar111 + 0x14;
        uVar20 = *(uint *)(lVar54 + (ulong)(uVar111 + 0x14));
        *(uint *)(lVar91 + 0x14) = uVar111 + 0x18;
        uVar85 = uVar85 ^ uVar86 ^ 0xffffffff;
        uVar7 = uVar7 ^ uVar86 ^ 0xffffffff;
        uVar111 = 0;
        if (uVar86 != 0) {
          uVar111 = uVar96 / uVar86;
        }
        uVar94 = uVar94 - uVar22 * uVar86;
        uVar20 = uVar20 ^ uVar113 ^ 0xffffffff;
        uVar22 = 0;
        if (uVar113 != 0) {
          uVar22 = uVar20 / uVar113;
        }
        uVar21 = 0;
        if (uVar86 != 0) {
          uVar21 = uVar85 / uVar86;
        }
        uVar22 = *(uint *)(lVar54 + (ulong)(uVar20 - uVar22 * uVar113)) ^ uVar113 ^ 0xffffffff;
        uVar20 = 0;
        if (uVar113 != 0) {
          uVar20 = uVar22 / uVar113;
        }
        uVar85 = uVar85 - uVar21 * uVar86;
        uVar21 = 0;
        if (uVar86 != 0) {
          uVar21 = uVar7 / uVar86;
        }
        uVar22 = uVar22 - uVar20 * uVar113;
        uVar58 = uVar58 - uVar112 * uVar86;
        uVar96 = uVar96 - uVar111 * uVar86;
        uVar7 = uVar7 - uVar21 * uVar86;
        if (((*(ushort *)(lVar54 + (ulong)uVar22) ^ uVar22) & 0xffff) == 0xffef) {
          uVar18 = uVar18 ^ uVar86 ^ 0xffffffff;
          local_858 = (long *)CONCAT44(local_858._4_4_,uVar96);
          uVar9 = uVar9 ^ uVar86 ^ 0xffffffff;
          uVar111 = 0;
          if (uVar86 != 0) {
            uVar111 = uVar18 / uVar86;
          }
          uVar113 = 0;
          if (uVar86 != 0) {
            uVar113 = uVar9 / uVar86;
          }
          puVar91 = (undefined8 *)(lVar54 + (ulong)(uVar18 - uVar111 * uVar86));
          uVar81 = (ulong)(uVar9 - uVar113 * uVar86);
          puVar84 = (undefined8 *)(lVar54 + uVar81);
          if (((ulong)((long)&local_2f8 - (long)puVar91) < 0x20) ||
             ((ulong)((long)&local_2f8 - (long)puVar84) < 0x20)) {
            local_2f8 = (long **)CONCAT17(*(byte *)((long)puVar91 + 7) ^
                                          *(byte *)((long)puVar84 + 7),
                                          CONCAT16(*(byte *)((long)puVar91 + 6) ^
                                                   *(byte *)((long)puVar84 + 6),
                                                   CONCAT15(*(byte *)((long)puVar91 + 5) ^
                                                            *(byte *)((long)puVar84 + 5),
                                                            CONCAT14(*(byte *)((long)puVar91 + 4) ^
                                                                     *(byte *)((long)puVar84 + 4),
                                                                     CONCAT13(*(byte *)((long)
                                                  puVar91 + 3) ^ *(byte *)((long)puVar84 + 3),
                                                  CONCAT12(*(byte *)((long)puVar91 + 2) ^
                                                           *(byte *)((long)puVar84 + 2),
                                                           CONCAT11(*(byte *)((long)puVar91 + 1) ^
                                                                    *(byte *)((long)puVar84 + 1),
                                                                    *(byte *)puVar91 ^
                                                                    *(byte *)puVar84)))))));
            pplStack_2f0 = (long **)CONCAT17(*(byte *)((long)puVar91 + 0xf) ^
                                             *(byte *)((long)puVar84 + 0xf),
                                             CONCAT16(*(byte *)((long)puVar91 + 0xe) ^
                                                      *(byte *)((long)puVar84 + 0xe),
                                                      CONCAT15(*(byte *)((long)puVar91 + 0xd) ^
                                                               *(byte *)((long)puVar84 + 0xd),
                                                               CONCAT14(*(byte *)((long)puVar91 +
                                                                                 0xc) ^
                                                                        *(byte *)((long)puVar84 +
                                                                                 0xc),
                                                                        CONCAT13(*(byte *)((long)
                                                  puVar91 + 0xb) ^ *(byte *)((long)puVar84 + 0xb),
                                                  CONCAT12(*(byte *)((long)puVar91 + 10) ^
                                                           *(byte *)((long)puVar84 + 10),
                                                           CONCAT11(*(byte *)((long)puVar91 + 9) ^
                                                                    *(byte *)((long)puVar84 + 9),
                                                                    *(byte *)(puVar91 + 1) ^
                                                                    *(byte *)(puVar84 + 1))))))));
          }
          else {
            uVar49 = *puVar84;
            uVar108 = *puVar91;
            local_2f8 = (long **)CONCAT17((byte)((ulong)uVar108 >> 0x38) ^
                                          (byte)((ulong)uVar49 >> 0x38),
                                          CONCAT16((byte)((ulong)uVar108 >> 0x30) ^
                                                   (byte)((ulong)uVar49 >> 0x30),
                                                   CONCAT15((byte)((ulong)uVar108 >> 0x28) ^
                                                            (byte)((ulong)uVar49 >> 0x28),
                                                            CONCAT14((byte)((ulong)uVar108 >> 0x20)
                                                                     ^ (byte)((ulong)uVar49 >> 0x20)
                                                                     ,CONCAT13((byte)((ulong)uVar108
                                                                                     >> 0x18) ^
                                                                               (byte)((ulong)uVar49
                                                                                     >> 0x18),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar108 >> 0x10) ^
                                                  (byte)((ulong)uVar49 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar108 >> 8) ^
                                                           (byte)((ulong)uVar49 >> 8),
                                                           (byte)uVar108 ^ (byte)uVar49)))))));
            uVar49 = puVar84[1];
            uVar108 = puVar91[1];
            pplStack_2f0 = (long **)CONCAT17((byte)((ulong)uVar108 >> 0x38) ^
                                             (byte)((ulong)uVar49 >> 0x38),
                                             CONCAT16((byte)((ulong)uVar108 >> 0x30) ^
                                                      (byte)((ulong)uVar49 >> 0x30),
                                                      CONCAT15((byte)((ulong)uVar108 >> 0x28) ^
                                                               (byte)((ulong)uVar49 >> 0x28),
                                                               CONCAT14((byte)((ulong)uVar108 >>
                                                                              0x20) ^
                                                                        (byte)((ulong)uVar49 >> 0x20
                                                                              ),CONCAT13((byte)((
                                                  ulong)uVar108 >> 0x18) ^
                                                  (byte)((ulong)uVar49 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar108 >> 0x10) ^
                                                           (byte)((ulong)uVar49 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar108 >> 8) ^
                                                                    (byte)((ulong)uVar49 >> 8),
                                                                    (byte)uVar108 ^ (byte)uVar49))))
                                                  )));
          }
          uVar19 = uVar19 ^ uVar86 ^ 0xffffffff;
          local_688 = CONCAT44(local_688._4_4_,uVar85);
          uVar111 = 0;
          if (uVar86 != 0) {
            uVar111 = uVar19 / uVar86;
          }
          puVar84 = (undefined8 *)(*(long *)(lVar91 + 8) + uVar81);
          puVar91 = (undefined8 *)(*(long *)(lVar91 + 8) + (ulong)(uVar19 - uVar111 * uVar86));
          if ((local_320 + -(long)puVar91 < (undefined *)0x20) ||
             (local_320 + -(long)puVar84 < (undefined *)0x20)) {
            local_320 = (undefined  [8])
                        CONCAT17(*(byte *)((long)puVar91 + 7) ^ *(byte *)((long)puVar84 + 7),
                                 CONCAT16(*(byte *)((long)puVar91 + 6) ^
                                          *(byte *)((long)puVar84 + 6),
                                          CONCAT15(*(byte *)((long)puVar91 + 5) ^
                                                   *(byte *)((long)puVar84 + 5),
                                                   CONCAT14(*(byte *)((long)puVar91 + 4) ^
                                                            *(byte *)((long)puVar84 + 4),
                                                            CONCAT13(*(byte *)((long)puVar91 + 3) ^
                                                                     *(byte *)((long)puVar84 + 3),
                                                                     CONCAT12(*(byte *)((long)
                                                  puVar91 + 2) ^ *(byte *)((long)puVar84 + 2),
                                                  CONCAT11(*(byte *)((long)puVar91 + 1) ^
                                                           *(byte *)((long)puVar84 + 1),
                                                           *(byte *)puVar91 ^ *(byte *)puVar84))))))
                                );
            pcStack_318 = (code *)CONCAT17(*(byte *)((long)puVar91 + 0xf) ^
                                           *(byte *)((long)puVar84 + 0xf),
                                           CONCAT16(*(byte *)((long)puVar91 + 0xe) ^
                                                    *(byte *)((long)puVar84 + 0xe),
                                                    CONCAT15(*(byte *)((long)puVar91 + 0xd) ^
                                                             *(byte *)((long)puVar84 + 0xd),
                                                             CONCAT14(*(byte *)((long)puVar91 + 0xc)
                                                                      ^ *(byte *)((long)puVar84 +
                                                                                 0xc),
                                                                      CONCAT13(*(byte *)((long)
                                                  puVar91 + 0xb) ^ *(byte *)((long)puVar84 + 0xb),
                                                  CONCAT12(*(byte *)((long)puVar91 + 10) ^
                                                           *(byte *)((long)puVar84 + 10),
                                                           CONCAT11(*(byte *)((long)puVar91 + 9) ^
                                                                    *(byte *)((long)puVar84 + 9),
                                                                    *(byte *)(puVar91 + 1) ^
                                                                    *(byte *)(puVar84 + 1))))))));
            local_310 = (long **)CONCAT17(*(byte *)((long)puVar91 + 0x17) ^
                                          *(byte *)((long)puVar84 + 0x17),
                                          CONCAT16(*(byte *)((long)puVar91 + 0x16) ^
                                                   *(byte *)((long)puVar84 + 0x16),
                                                   CONCAT15(*(byte *)((long)puVar91 + 0x15) ^
                                                            *(byte *)((long)puVar84 + 0x15),
                                                            CONCAT14(*(byte *)((long)puVar91 + 0x14)
                                                                     ^ *(byte *)((long)puVar84 +
                                                                                0x14),
                                                                     CONCAT13(*(byte *)((long)
                                                  puVar91 + 0x13) ^ *(byte *)((long)puVar84 + 0x13),
                                                  CONCAT12(*(byte *)((long)puVar91 + 0x12) ^
                                                           *(byte *)((long)puVar84 + 0x12),
                                                           CONCAT11(*(byte *)((long)puVar91 + 0x11)
                                                                    ^ *(byte *)((long)puVar84 + 0x11
                                                                               ),
                                                                    *(byte *)(puVar91 + 2) ^
                                                                    *(byte *)(puVar84 + 2))))))));
            local_308 = (long **)CONCAT17(*(byte *)((long)puVar91 + 0x1f) ^
                                          *(byte *)((long)puVar84 + 0x1f),
                                          CONCAT16(*(byte *)((long)puVar91 + 0x1e) ^
                                                   *(byte *)((long)puVar84 + 0x1e),
                                                   CONCAT15(*(byte *)((long)puVar91 + 0x1d) ^
                                                            *(byte *)((long)puVar84 + 0x1d),
                                                            CONCAT14(*(byte *)((long)puVar91 + 0x1c)
                                                                     ^ *(byte *)((long)puVar84 +
                                                                                0x1c),
                                                                     CONCAT13(*(byte *)((long)
                                                  puVar91 + 0x1b) ^ *(byte *)((long)puVar84 + 0x1b),
                                                  CONCAT12(*(byte *)((long)puVar91 + 0x1a) ^
                                                           *(byte *)((long)puVar84 + 0x1a),
                                                           CONCAT11(*(byte *)((long)puVar91 + 0x19)
                                                                    ^ *(byte *)((long)puVar84 + 0x19
                                                                               ),
                                                                    *(byte *)(puVar91 + 3) ^
                                                                    *(byte *)(puVar84 + 3))))))));
          }
          else {
            uVar108 = puVar91[1];
            uVar49 = *puVar91;
            uVar122 = puVar91[3];
            uVar120 = puVar91[2];
            uVar114 = puVar84[1];
            uVar109 = *puVar84;
            uVar118 = puVar84[3];
            uVar116 = puVar84[2];
            local_320 = (undefined  [8])
                        CONCAT17((byte)((ulong)uVar49 >> 0x38) ^ (byte)((ulong)uVar109 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar49 >> 0x30) ^
                                          (byte)((ulong)uVar109 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar49 >> 0x28) ^
                                                   (byte)((ulong)uVar109 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar49 >> 0x20) ^
                                                            (byte)((ulong)uVar109 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar49 >> 0x18) ^
                                                                     (byte)((ulong)uVar109 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar49
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar109
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar49 >> 8) ^ (byte)((ulong)uVar109 >> 8),
                                                  (byte)uVar49 ^ (byte)uVar109)))))));
            pcStack_318 = (code *)CONCAT17((byte)((ulong)uVar108 >> 0x38) ^
                                           (byte)((ulong)uVar114 >> 0x38),
                                           CONCAT16((byte)((ulong)uVar108 >> 0x30) ^
                                                    (byte)((ulong)uVar114 >> 0x30),
                                                    CONCAT15((byte)((ulong)uVar108 >> 0x28) ^
                                                             (byte)((ulong)uVar114 >> 0x28),
                                                             CONCAT14((byte)((ulong)uVar108 >> 0x20)
                                                                      ^ (byte)((ulong)uVar114 >>
                                                                              0x20),
                                                                      CONCAT13((byte)((ulong)uVar108
                                                                                     >> 0x18) ^
                                                                               (byte)((ulong)uVar114
                                                                                     >> 0x18),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar108 >> 0x10) ^
                                                  (byte)((ulong)uVar114 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar108 >> 8) ^
                                                           (byte)((ulong)uVar114 >> 8),
                                                           (byte)uVar108 ^ (byte)uVar114)))))));
            local_310 = (long **)CONCAT17((byte)((ulong)uVar120 >> 0x38) ^
                                          (byte)((ulong)uVar116 >> 0x38),
                                          CONCAT16((byte)((ulong)uVar120 >> 0x30) ^
                                                   (byte)((ulong)uVar116 >> 0x30),
                                                   CONCAT15((byte)((ulong)uVar120 >> 0x28) ^
                                                            (byte)((ulong)uVar116 >> 0x28),
                                                            CONCAT14((byte)((ulong)uVar120 >> 0x20)
                                                                     ^ (byte)((ulong)uVar116 >> 0x20
                                                                             ),
                                                                     CONCAT13((byte)((ulong)uVar120
                                                                                    >> 0x18) ^
                                                                              (byte)((ulong)uVar116
                                                                                    >> 0x18),
                                                                              CONCAT12((byte)((ulong
                                                  )uVar120 >> 0x10) ^ (byte)((ulong)uVar116 >> 0x10)
                                                  ,CONCAT11((byte)((ulong)uVar120 >> 8) ^
                                                            (byte)((ulong)uVar116 >> 8),
                                                            (byte)uVar120 ^ (byte)uVar116)))))));
            local_308 = (long **)CONCAT17((byte)((ulong)uVar122 >> 0x38) ^
                                          (byte)((ulong)uVar118 >> 0x38),
                                          CONCAT16((byte)((ulong)uVar122 >> 0x30) ^
                                                   (byte)((ulong)uVar118 >> 0x30),
                                                   CONCAT15((byte)((ulong)uVar122 >> 0x28) ^
                                                            (byte)((ulong)uVar118 >> 0x28),
                                                            CONCAT14((byte)((ulong)uVar122 >> 0x20)
                                                                     ^ (byte)((ulong)uVar118 >> 0x20
                                                                             ),
                                                                     CONCAT13((byte)((ulong)uVar122
                                                                                    >> 0x18) ^
                                                                              (byte)((ulong)uVar118
                                                                                    >> 0x18),
                                                                              CONCAT12((byte)((ulong
                                                  )uVar122 >> 0x10) ^ (byte)((ulong)uVar118 >> 0x10)
                                                  ,CONCAT11((byte)((ulong)uVar122 >> 8) ^
                                                            (byte)((ulong)uVar118 >> 8),
                                                            (byte)uVar122 ^ (byte)uVar118)))))));
          }
          auStack_358 = SUB86(pplStack_2f0,0);
          uStack_352 = (undefined2)((ulong)pplStack_2f0 >> 0x30);
          local_360[0] = (byte)local_2f8;
          local_360._1_5_ = (undefined5)((ulong)local_2f8 >> 8);
          uStack_35a = (undefined2)((ulong)local_2f8 >> 0x30);
          lVar80 = *(long *)(lVar91 + 8);
          uVar111 = (uint)*(ushort *)(lVar80 + (ulong)uVar22) ^ uVar22 & 0xffff;
          local_350 = (code *)local_2f8;
          uStack_348 = pplStack_2f0;
          if ((short)uVar111 < -1) {
            uVar113 = *(uint *)(lVar91 + 0x10);
            uVar81 = 0;
            do {
              uVar112 = *(uint *)(lVar80 + (ulong)(uVar22 + 2 + (((int)uVar81 << 0x10) >> 0xe))) ^
                        uVar113 ^ 0xffffffff;
              uVar96 = 0;
              if (uVar113 != 0) {
                uVar96 = uVar112 / uVar113;
              }
              *(undefined *)((long)&local_2e0 + uVar81) =
                   *(undefined *)(lVar80 + (ulong)(uVar112 - uVar96 * uVar113));
              uVar81 = (uVar81 | 0xfffffffffffffffe) +
                       ((uVar81 << 1 | 2) - (uVar81 & 0xfffffffffffffffe)) + 1;
            } while (uVar81 != (uVar111 ^ 0xffff));
            uStack_348 = (long **)CONCAT44(iStack_2d4,
                                           CONCAT22(uStack_2d6,CONCAT11(uStack_2d7,bStack_2d8)));
            local_350 = (code *)local_2e0;
          }
          uVar101 = uVar101 ^ uVar86 ^ 0xffffffff;
          uVar111 = 0;
          if (uVar86 != 0) {
            uVar111 = uVar101 / uVar86;
          }
          local_758 = (long **)CONCAT44(local_758._4_4_,uVar115);
          local_820 = (long **)CONCAT44(local_820._4_4_,uVar58);
          pplStack_338 = (long **)pcStack_318;
          local_340 = (long *)local_320;
          pplStack_328 = local_308;
          pplStack_330 = local_310;
          plVar95 = *(long **)(*(long *)(lVar91 + 8) + (ulong)(uVar101 - uVar111 * uVar86));
          local_3e8 = 0;
          local_3f0 = (undefined  [8])0x0;
          local_3e0 = (long **)0x0;
          local_464 = uVar44;
          basic_string::new((basic_string *)local_3f0,(plVar95[4] - plVar95[3]) + 0x30);
          bVar28 = ((ulong)local_3f0 & 1) != 0;
          uVar81 = (ulong)local_3f0 >> 1 & 0x7f;
          if (bVar28) {
            uVar81 = local_3e8;
          }
          lVar80 = 0x16;
          if (bVar28) {
            lVar80 = ((ulong)local_3f0 & 0xfffffffffffffffe) - 1;
          }
          uVar58 = SUB84(local_3f0,0);
          pplVar82 = local_5e0;
          uVar47 = (ulong)local_3f0 >> 1 & 0x7f;
          if (((ulong)local_3f0 & 1) != 0) {
            pplVar82 = local_3e0;
            uVar47 = local_3e8;
          }
          if ((local_768 < pplVar82) || ((long **)((long)pplVar82 + uVar47 + 1) <= local_768)) {
            if (lVar80 - uVar81 < 0x10) {
              FUN_0011a228((basic_string *)local_3f0,lVar80,(uVar81 - lVar80) + 0x10,uVar81,uVar81,0
                           ,0);
              uVar58 = (uint)local_3f0[0];
              local_3e8 = uVar81;
            }
            pplVar82 = local_5e0;
            if ((uVar58 & 1) != 0) {
              pplVar82 = local_3e0;
            }
            puVar97 = (undefined *)((long)pplVar82 + uVar81);
            *puVar97 = (undefined)local_350;
            puVar97[1] = local_350._1_1_;
            puVar97[2] = local_350._2_1_;
            puVar97[3] = local_350._3_1_;
            puVar97[4] = local_350._4_1_;
            puVar97[5] = local_350._5_1_;
            puVar97[6] = local_350._6_1_;
            puVar97[7] = local_350._7_1_;
            puVar97[8] = (byte)uStack_348;
            puVar97[9] = uStack_348._1_1_;
            puVar97[10] = uStack_348._2_1_;
            puVar97[0xb] = uStack_348._3_1_;
            puVar97[0xc] = uStack_348._4_1_;
            puVar97[0xd] = uStack_348._5_1_;
            puVar97[0xe] = uStack_348._6_1_;
            puVar97[0x10] = 0;
            puVar97[0xf] = uStack_348._7_1_;
            uVar47 = uVar81 + 0x10;
            if (((ulong)local_3f0 & 1) == 0) {
              local_3f0 = (undefined  [8])
                          CONCAT71(local_3f0._1_7_,(char)((int)(uVar81 + 0x10) << 1));
              uVar47 = local_3e8;
            }
          }
          else {
            plVar48 = *local_768;
            local_2e0 = (long *)CONCAT71(local_2e0._1_7_,0x20);
            local_570[1] = local_768[1];
            *local_570 = plVar48;
            uStack_2cf = 0;
            FUN_0011a144(local_3f0,local_570,0x10);
            if (((ulong)local_2e0 & 1) != 0) {
              free(CONCAT44(iStack_2cc,CONCAT22(uStack_2ce,CONCAT11(uStack_2cf,bStack_2d0))));
            }
            uVar47 = local_3e8;
          }
          local_3e8 = uVar47;
          uStack_198 = (long **)CONCAT26(uStack_352,auStack_358);
          _local_1a0 = (long *)CONCAT26(uStack_35a,CONCAT51(local_360._1_5_,local_360[0]));
          local_750 = (byte *)CONCAT44(local_750._4_4_,uVar94);
          local_190 = 1;
          lVar80 = 0x24;
          local_6d0 = (byte *)CONCAT44(local_6d0._4_4_,uVar7);
          uStack_184 = SUB61(auStack_358,0);
          uStack_183 = (undefined)((uint6)auStack_358 >> 8);
          uStack_182 = (undefined)((uint6)auStack_358 >> 0x10);
          uStack_181 = (undefined)((uint6)auStack_358 >> 0x18);
          auStack_180._0_4_ = (undefined4)((ulong)uStack_198 >> 0x20);
          bStack_18c = local_360[0];
          uStack_18b = (undefined)local_360._1_5_;
          uStack_18a = (undefined)((uint5)local_360._1_5_ >> 8);
          uStack_189 = (undefined)((uint5)local_360._1_5_ >> 0x10);
          uStack_188 = (undefined)((uint5)local_360._1_5_ >> 0x18);
          uStack_187 = (undefined)((uint5)local_360._1_5_ >> 0x20);
          uStack_186 = (undefined)uStack_35a;
          uStack_185 = (undefined)((ushort)uStack_35a >> 8);
          do {
            plVar48 = _local_1a0;
            _local_1a0 = CONCAT11(auStack_19f[0] ^
                                  *(byte *)(((ulong)uStack_198 >> 0x30 & 0xff) + 0x174bb8),
                                  *(byte *)(((ulong)uStack_198 >> 0x28 & 0xff) + 0x174bb8) ^
                                  local_1a0 ^ local_190);
            _local_1a0 = CONCAT12(auStack_19f[1] ^ *(byte *)(((ulong)uStack_198 >> 0x38) + 0x174bb8)
                                  ,_local_1a0);
            uStack_19c = SUB84(plVar48,4);
            _local_1a0 = CONCAT13(bStack_19d ^
                                  *(byte *)(((ulong)uStack_198 >> 0x20 & 0xff) + 0x174bb8),
                                  _local_1a0);
            uStack_198._0_4_ = (uint)uStack_198 ^ _local_1a0 ^ uStack_19c;
            _local_1a0 = (long *)CONCAT44(_local_1a0 ^ uStack_19c,_local_1a0);
            local_190 = (byte)((uint)(int)(char)local_190 >> 7) & 0x1b ^
                        (byte)((int)(char)local_190 << 1);
            uStack_198 = (long **)CONCAT44(uStack_198._4_4_ ^ (uint)uStack_198,(uint)uStack_198);
            *(long ***)((long)&uStack_198 + lVar80) = uStack_198;
            *(long **)(&local_1a0 + lVar80) = _local_1a0;
            lVar80 = lVar80 + 0x10;
          } while ((int)lVar80 != 0xc4);
          local_568 = uVar87;
          func_0x0016a080(&local_2e0,&local_1a0,0x124);
          local_498 = (long **)((ulong)uStack_348 >> 0x30 & 0xff);
          bVar102 = (byte)uStack_348;
          bVar104 = uStack_348._1_1_;
          *local_880 = local_350;
          bVar105 = uStack_348._2_1_;
          bVar106 = uStack_348._3_1_;
          uVar47 = (ulong)uStack_348._3_1_;
          local_4d0 = (long **)local_350;
          bVar25 = uStack_348._4_1_;
          uVar87 = (ulong)uStack_348._4_1_;
          bVar26 = uStack_348._5_1_;
          uVar81 = (ulong)uStack_348._5_1_;
          local_4b0 = (long **)((ulong)uStack_348 >> 0x38);
          _local_3d0 = (long **)0x0;
          local_3d8 = (undefined  [8])0x0;
          local_3c8 = (long **)0x0;
          auVar124 = basic_string::new((basic_string *)local_3d8,plVar95[4] - plVar95[3]);
          lVar80 = plVar95[3];
          lVar54 = plVar95[4];
          if (lVar54 != lVar80) {
            uVar99 = 0;
            do {
              if ((ulong)(plVar95[4] - plVar95[3]) <= uVar99) goto LAB_001424b0;
              string = (basic_string *)local_3d8;
              uVar83 = plVar95[1] - *plVar95;
              uVar64 = 0;
              if (uVar83 != 0) {
                uVar64 = uVar99 / uVar83;
              }
              value = *(byte *)(*plVar95 + (uVar99 - uVar64 * uVar83)) ^
                      *(byte *)(plVar95[3] + uVar99);
              uVar64 = (ulong)value;
              basic_string::append(string,value);
              auVar124._8_8_ = uVar64;
              auVar124._0_8_ = string;
              uVar99 = uVar99 + 1;
            } while (lVar54 - lVar80 != uVar99);
          }
          pplVar77 = local_3c8;
          uVar99 = (ulong)local_3d8;
          pplVar88 = local_498;
          pplVar100 = local_4b0;
          bVar28 = ((ulong)local_3d8 & 1) != 0;
          pplVar82 = (long **)((ulong)local_3d8 >> 1 & 0x7f);
          if (bVar28) {
            pplVar82 = _local_3d0;
          }
          local_490 = local_4d8;
          if (bVar28) {
            local_490 = local_3c8;
          }
          if (CARRY8((ulong)local_4b0 |
                     (uVar81 << 8 |
                      ((ulong)((uint)bVar104 << 8 | (uint)bVar102 << 0x10 | (uint)bVar105) << 0x10 |
                       uVar47 << 8 | uVar87) << 0x10 | (ulong)local_498) << 8,
                     (ulong)((long)pplVar82 + 0xf) >> 4 & 0xffffffff)) {
            unaff_x27 = (long **)((ulong)local_6d0 & 0xffffffff);
            uVar86 = 0;
            local_3c0 = (long *)((ulong)local_3c0 & 0xffffffffffff0000);
            uVar81 = local_568;
            uVar58 = (uint)local_750;
          }
          else {
            _local_450 = 0;
            uVar87 = (ulong)pplVar82 >> 4;
            local_458 = (undefined *)0x0;
            local_448 = (undefined8 *)0x0;
            local_4f0 = (long *)CONCAT44(local_4f0._4_4_,(uint)bVar102);
            local_508 = (undefined *)CONCAT44(local_508._4_4_,(uint)bVar104);
            local_890 = pplVar82;
            FUN_0011a52c(&local_458,0x10,0);
            uStack_198 = (long **)0x0;
            _local_1a0 = (long *)0x0;
            local_190 = 0;
            uStack_18f = 0;
            uStack_18e = 0;
            uStack_18d = 0;
            bStack_18c = 0;
            uStack_18b = 0;
            uStack_18a = 0;
            uStack_189 = 0;
            puVar91 = local_5d8;
            if (((ulong)local_458 & 1) != 0) {
              puVar91 = local_448;
            }
            *puVar91 = local_4d0;
            ppuVar5 = local_690;
            if (((ulong)local_458 & 1) != 0) {
              ppuVar5 = (undefined8 **)((long)local_448 + 0xf);
            }
            *(byte *)ppuVar5 = (byte)pplVar100;
            pbVar98 = local_698;
            if (((ulong)local_458 & 1) != 0) {
              pbVar98 = (byte *)((long)local_448 + 0xe);
            }
            *pbVar98 = (byte)pplVar88;
            pbVar98 = local_6a0;
            if (((ulong)local_458 & 1) != 0) {
              pbVar98 = (byte *)((long)local_448 + 0xd);
            }
            *pbVar98 = bVar26;
            lVar80 = 0;
            pbVar98 = local_6a8;
            if (((ulong)local_458 & 1) != 0) {
              pbVar98 = (byte *)((long)local_448 + 0xc);
            }
            *pbVar98 = bVar25;
            pbVar98 = local_6b0;
            if (((ulong)local_458 & 1) != 0) {
              pbVar98 = (byte *)((long)local_448 + 0xb);
            }
            *pbVar98 = bVar106;
            pbVar98 = local_6b8;
            if (((ulong)local_458 & 1) != 0) {
              pbVar98 = (byte *)((long)local_448 + 10);
            }
            *pbVar98 = bVar105;
            pbVar98 = local_6c0;
            if (((ulong)local_458 & 1) != 0) {
              pbVar98 = (byte *)((long)local_448 + 9);
            }
            *pbVar98 = (byte)local_508;
            puVar91 = local_6c8;
            if (((ulong)local_458 & 1) != 0) {
              puVar91 = local_448 + 1;
            }
            *(char *)puVar91 = (char)local_4f0;
            local_1b0 = 0;
            if ((int)uVar87 != 0) {
              bVar28 = (uVar99 & 1) != 0;
              local_4b0 = local_8d8;
              local_498 = local_8d0;
              if (bVar28) {
                local_498 = (long **)((long)pplVar77 + 1);
                local_4b0 = (long **)((long)pplVar77 + 2);
              }
              local_4d0 = local_8e0;
              if (bVar28) {
                local_4d0 = (long **)((long)pplVar77 + 3);
              }
              local_508 = local_8f0;
              local_4f0 = local_8e8;
              if (bVar28) {
                local_508 = (undefined *)((long)pplVar77 + 5);
                local_4f0 = (long *)((long)pplVar77 + 4);
              }
              local_530 = local_8f8;
              if (bVar28) {
                local_530 = (long **)((long)pplVar77 + 6);
              }
              local_540 = local_908;
              local_538 = local_900;
              if (bVar28) {
                local_540 = pplVar77 + 1;
                local_538 = (undefined *)((long)pplVar77 + 7);
              }
              local_548 = puStack_910;
              if (bVar28) {
                local_548 = (undefined *)((long)pplVar77 + 9);
              }
              puVar97 = local_928;
              puVar46 = local_918;
              puVar62 = puStack_920;
              if (bVar28) {
                puVar97 = (undefined *)((long)pplVar77 + 0xc);
                puVar46 = (undefined *)((long)pplVar77 + 10);
                puVar62 = (undefined *)((long)pplVar77 + 0xb);
              }
              puVar73 = local_930;
              puVar37 = local_938;
              ppplVar4 = local_940;
              if (bVar28) {
                puVar73 = (undefined *)((long)pplVar77 + 0xd);
                puVar37 = (undefined *)((long)pplVar77 + 0xe);
                ppplVar4 = (long ***)((long)pplVar77 + 0xf);
              }
              do {
                uVar81 = (ulong)local_458 >> 1 & 0x7f;
                puVar91 = local_5d8;
                if (((ulong)local_458 & 1) != 0) {
                  uVar81 = _local_450;
                  puVar91 = local_448;
                }
                FUN_0012953c(&local_390,&local_2e0,puVar91,uVar81);
                pplVar82 = (long **)((ulong)local_390 >> 1 & 0x7f);
                if (((ulong)local_390 & 1) != 0) {
                  pplVar82 = _auStack_388;
                }
                if (pplVar82 == (long **)0x0) {
                  local_3c0 = (long *)((ulong)local_3c0 & 0xffffffffffff0000);
                }
                else {
                  ppuVar5 = local_690;
                  if (((ulong)local_458 & 1) != 0) {
                    ppuVar5 = (undefined8 **)((long)local_448 + 0xf);
                  }
                  bVar102 = *(byte *)ppuVar5;
                  *(byte *)ppuVar5 = (byte)(bVar102 + 1);
                  pbVar98 = local_698;
                  if (((ulong)local_458 & 1) != 0) {
                    pbVar98 = (byte *)((long)local_448 + 0xe);
                  }
                  uVar58 = (uint)*pbVar98 + (bVar102 + 1 >> 8);
                  *pbVar98 = (byte)uVar58;
                  pbVar98 = local_6a0;
                  if (((ulong)local_458 & 1) != 0) {
                    pbVar98 = (byte *)((long)local_448 + 0xd);
                  }
                  uVar58 = (uint)*pbVar98 + (uVar58 >> 8);
                  *pbVar98 = (byte)uVar58;
                  pbVar98 = local_6a8;
                  if (((ulong)local_458 & 1) != 0) {
                    pbVar98 = (byte *)((long)local_448 + 0xc);
                  }
                  uVar58 = (uint)*pbVar98 + (uVar58 >> 8);
                  *pbVar98 = (byte)uVar58;
                  pbVar98 = local_6b0;
                  if (((ulong)local_458 & 1) != 0) {
                    pbVar98 = (byte *)((long)local_448 + 0xb);
                  }
                  uVar58 = (uint)*pbVar98 + (uVar58 >> 8);
                  *pbVar98 = (byte)uVar58;
                  pbVar98 = local_6b8;
                  if (((ulong)local_458 & 1) != 0) {
                    pbVar98 = (byte *)((long)local_448 + 10);
                  }
                  uVar58 = (uint)*pbVar98 + (uVar58 >> 8);
                  *pbVar98 = (byte)uVar58;
                  pbVar98 = local_6c0;
                  if (((ulong)local_458 & 1) != 0) {
                    pbVar98 = (byte *)((long)local_448 + 9);
                  }
                  iVar31 = (uint)*pbVar98 + (uVar58 >> 8);
                  *pbVar98 = (byte)iVar31;
                  puVar91 = local_6c8;
                  if (((ulong)local_458 & 1) != 0) {
                    puVar91 = local_448 + 1;
                  }
                  *(char *)puVar91 = *(char *)puVar91 + (char)((uint)iVar31 >> 8);
                  pplVar100 = local_578;
                  if (((ulong)local_390 & 1) != 0) {
                    pplVar100 = local_380;
                  }
                  basic_string::append
                            ((basic_string *)&local_1a0,
                             *(byte *)((long)local_490 + lVar80) ^ *(byte *)pplVar100);
                  pbVar98 = local_6e8;
                  if (((ulong)local_390 & 1) != 0) {
                    pbVar98 = (byte *)((long)local_380 + 1);
                  }
                  basic_string::append
                            ((basic_string *)&local_1a0,
                             *(byte *)((long)local_498 + lVar80) ^ *pbVar98);
                  pbVar98 = local_6f0;
                  if (((ulong)local_390 & 1) != 0) {
                    pbVar98 = (byte *)((long)local_380 + 2);
                  }
                  basic_string::append
                            ((basic_string *)&local_1a0,
                             *(byte *)((long)local_4b0 + lVar80) ^ *pbVar98);
                  pbVar98 = local_6f8;
                  if (((ulong)local_390 & 1) != 0) {
                    pbVar98 = (byte *)((long)local_380 + 3);
                  }
                  basic_string::append
                            ((basic_string *)&local_1a0,
                             *(byte *)((long)local_4d0 + lVar80) ^ *pbVar98);
                  pbVar98 = local_700;
                  if (((ulong)local_390 & 1) != 0) {
                    pbVar98 = (byte *)((long)local_380 + 4);
                  }
                  basic_string::append
                            ((basic_string *)&local_1a0,
                             *(byte *)((long)local_4f0 + lVar80) ^ *pbVar98);
                  pbVar98 = local_708;
                  if (((ulong)local_390 & 1) != 0) {
                    pbVar98 = (byte *)((long)local_380 + 5);
                  }
                  basic_string::append((basic_string *)&local_1a0,local_508[lVar80] ^ *pbVar98);
                  pbVar98 = local_710;
                  if (((ulong)local_390 & 1) != 0) {
                    pbVar98 = (byte *)((long)local_380 + 6);
                  }
                  basic_string::append
                            ((basic_string *)&local_1a0,
                             *(byte *)((long)local_530 + lVar80) ^ *pbVar98);
                  pbVar98 = local_6d8;
                  if (((ulong)local_390 & 1) != 0) {
                    pbVar98 = (byte *)((long)local_380 + 7);
                  }
                  basic_string::append((basic_string *)&local_1a0,local_538[lVar80] ^ *pbVar98);
                  pplVar100 = local_718;
                  if (((ulong)local_390 & 1) != 0) {
                    pplVar100 = local_380 + 1;
                  }
                  basic_string::append
                            ((basic_string *)&local_1a0,
                             *(byte *)((long)local_540 + lVar80) ^ *(byte *)pplVar100);
                  pbVar98 = local_720;
                  if (((ulong)local_390 & 1) != 0) {
                    pbVar98 = (byte *)((long)local_380 + 9);
                  }
                  basic_string::append((basic_string *)&local_1a0,local_548[lVar80] ^ *pbVar98);
                  pbVar98 = local_728;
                  if (((ulong)local_390 & 1) != 0) {
                    pbVar98 = (byte *)((long)local_380 + 10);
                  }
                  basic_string::append((basic_string *)&local_1a0,puVar46[lVar80] ^ *pbVar98);
                  pbVar98 = local_730;
                  if (((ulong)local_390 & 1) != 0) {
                    pbVar98 = (byte *)((long)local_380 + 0xb);
                  }
                  basic_string::append((basic_string *)&local_1a0,puVar62[lVar80] ^ *pbVar98);
                  pbVar98 = local_738;
                  if (((ulong)local_390 & 1) != 0) {
                    pbVar98 = (byte *)((long)local_380 + 0xc);
                  }
                  basic_string::append((basic_string *)&local_1a0,puVar97[lVar80] ^ *pbVar98);
                  pbVar98 = local_740;
                  if (((ulong)local_390 & 1) != 0) {
                    pbVar98 = (byte *)((long)local_380 + 0xd);
                  }
                  basic_string::append((basic_string *)&local_1a0,puVar73[lVar80] ^ *pbVar98);
                  pbVar98 = local_748;
                  if (((ulong)local_390 & 1) != 0) {
                    pbVar98 = (byte *)((long)local_380 + 0xe);
                  }
                  basic_string::append((basic_string *)&local_1a0,puVar37[lVar80] ^ *pbVar98);
                  ppplVar6 = local_6e0;
                  if (((ulong)local_390 & 1) != 0) {
                    ppplVar6 = (long ***)((long)local_380 + 0xf);
                  }
                  pbVar98 = (byte *)((long)ppplVar4 + lVar80);
                  lVar80 = lVar80 + 0x10;
                  basic_string::append((basic_string *)&local_1a0,*pbVar98 ^ *(byte *)ppplVar6);
                }
                if (((ulong)local_390 & 1) != 0) {
                  free(local_380);
                }
                uVar81 = local_568;
                if (pplVar82 == (long **)0x0) {
                  unaff_x27 = (long **)((ulong)local_6d0 & 0xffffffff);
                  uVar58 = (uint)local_750;
                  if (((ulong)_local_1a0 & 1) != 0) {
                    free(CONCAT17(uStack_189,
                                  CONCAT16(uStack_18a,
                                           CONCAT15(uStack_18b,
                                                    CONCAT14(bStack_18c,
                                                             CONCAT13(uStack_18d,
                                                                      CONCAT12(uStack_18e,
                                                                               CONCAT11(uStack_18f,
                                                                                        local_190)))
                                                            )))));
                  }
                  goto LAB_0013f12c;
                }
                uVar58 = (int)uVar87 - 1;
                uVar87 = (ulong)uVar58;
              } while (uVar58 != 0);
            }
            uVar81 = local_568;
            unaff_x27 = (long **)((ulong)local_6d0 & 0xffffffff);
            uVar58 = (uint)local_750;
            uVar87 = (ulong)local_890 & 0xf;
            if (uVar87 != 0) {
              uVar47 = (ulong)local_458 >> 1 & 0x7f;
              puVar91 = local_5d8;
              if (((ulong)local_458 & 1) != 0) {
                uVar47 = _local_450;
                puVar91 = local_448;
              }
              FUN_0012953c(&local_390,&local_2e0,puVar91,uVar47);
              pplVar100 = local_490;
              pplVar82 = local_578;
              uVar47 = 0;
              do {
                pplVar88 = pplVar82;
                if (((ulong)local_390 & 1) != 0) {
                  pplVar88 = local_380;
                }
                basic_string::append
                          ((basic_string *)&local_1a0,
                           *(byte *)((long)pplVar100 + uVar47 + lVar80) ^
                           *(byte *)((long)pplVar88 + uVar47));
                uVar47 = uVar47 + 1;
              } while (uVar87 != uVar47);
              if (((ulong)local_390 & 1) != 0) {
                free(local_380);
              }
            }
            local_3b0._0_8_ =
                 CONCAT17(uStack_189,
                          CONCAT16(uStack_18a,
                                   CONCAT15(uStack_18b,
                                            CONCAT14(bStack_18c,
                                                     CONCAT13(uStack_18d,
                                                              CONCAT12(uStack_18e,
                                                                       CONCAT11(uStack_18f,local_190
                                                                               )))))));
            pplStack_3b8 = uStack_198;
            local_3c0 = _local_1a0;
LAB_0013f12c:
            if (((ulong)local_458 & 1) != 0) {
              free(local_448);
            }
            uVar86 = (uint)(byte)local_3c0;
          }
          pplVar82 = local_588;
          pplVar100 = (long **)(ulong)(uVar86 >> 1);
          if ((uVar86 & 1) != 0) {
            pplVar82 = (long **)local_3b0._0_8_;
            pplVar100 = pplStack_3b8;
          }
          FUN_0011a144(local_3f0,pplVar82,pplVar100);
          if (((ulong)local_3c0 & 1) != 0) {
            free(local_3b0._0_8_);
          }
          if (((ulong)local_3d8 & 1) != 0) {
            free(local_3c8);
          }
          pplVar82 = local_3e0;
          uVar99 = local_3e8;
          uVar47 = (ulong)local_3f0;
          local_390 = (long *)&local_1a0;
          local_2a0 = 0;
          uVar87 = (ulong)local_3f0 >> 1;
          bStack_2d8 = 0;
          uStack_2d7 = 0;
          uStack_2d6 = 0;
          iStack_2d4 = 0;
          local_2e0 = (long *)0x0;
          local_2c8 = (long **)0x0;
          bStack_2d0 = 0;
          uStack_2cf = 0;
          uStack_2ce = 0;
          iStack_2cc = 0;
          uStack_2b8 = (long **)0x0;
          local_2c0 = (long **)0x0;
          local_2a8 = 0;
          local_2b0 = (undefined *)0x0;
          auStack_180._0_4_ = 0xa6bfec1c;
          auStack_180._4_4_ = 0xdd0cdf35;
          _auStack_388 = local_830;
          uStack_198 = pplStack_838;
          _local_1a0 = local_840;
          uStack_188 = (undefined)uStack_848;
          uStack_187 = (undefined)((ulong)uStack_848 >> 8);
          uStack_186 = (undefined)((ulong)uStack_848 >> 0x10);
          uStack_185 = (undefined)((ulong)uStack_848 >> 0x18);
          uStack_184 = (undefined)((ulong)uStack_848 >> 0x20);
          uStack_183 = (undefined)((ulong)uStack_848 >> 0x28);
          uStack_182 = (undefined)((ulong)uStack_848 >> 0x30);
          uStack_181 = (undefined)((ulong)uStack_848 >> 0x38);
          local_190 = (byte)local_850;
          uStack_18f = (undefined)((ulong)local_850 >> 8);
          uStack_18e = (undefined)((ulong)local_850 >> 0x10);
          uStack_18d = (undefined)((ulong)local_850 >> 0x18);
          bStack_18c = (byte)((ulong)local_850 >> 0x20);
          uStack_18b = (undefined)((ulong)local_850 >> 0x28);
          uStack_18a = (undefined)((ulong)local_850 >> 0x30);
          uStack_189 = (undefined)((ulong)local_850 >> 0x38);
          FUN_00129fb0(auStack_298,&local_390);
          lVar80 = 0x68;
          uVar64 = (ulong)local_2e0 & 0x3f;
          uStack_250 = 0x3636363636363636;
          local_258 = 0x3636363636363636;
          uStack_240 = 0x3636363636363636;
          local_248 = 0x3636363636363636;
          local_2e0 = local_2e0 + 8;
          uStack_270 = (ulong)pplStack_338 ^ 0x3636363636363636;
          local_278 = (ulong)local_340 ^ 0x3636363636363636;
          uStack_260 = (ulong)pplStack_328 ^ 0x3636363636363636;
          local_268 = (ulong)pplStack_330 ^ 0x3636363636363636;
          pbVar98 = local_558;
          do {
            uVar83 = uVar64 + 1;
            pbVar98[uVar64] = *(byte *)((long)&local_2e0 + lVar80);
            uVar64 = uVar83;
            if (uVar83 == 0x40) {
              FUN_0012a370(&local_2e0);
              uVar64 = 0;
              pbVar98 = local_558;
            }
            lVar80 = lVar80 + 1;
          } while (lVar80 != 0xa8);
          uVar87 = uVar87 & 0x7f;
          if ((uVar47 & 1) != 0) {
            uVar87 = uVar99;
          }
          local_278 = local_278 ^ 0x6a6a6a6a6a6a6a6a;
          uStack_270 = uStack_270 ^ 0x6a6a6a6a6a6a6a6a;
          local_268 = local_268 ^ 0x6a6a6a6a6a6a6a6a;
          uStack_260 = uStack_260 ^ 0x6a6a6a6a6a6a6a6a;
          local_258 = local_258 ^ 0x6a6a6a6a6a6a6a6a;
          uStack_250 = uStack_250 ^ 0x6a6a6a6a6a6a6a6a;
          plVar95 = (long *)((long)local_2e0 + uVar87);
          local_248 = local_248 ^ 0x6a6a6a6a6a6a6a6a;
          uStack_240 = uStack_240 ^ 0x6a6a6a6a6a6a6a6a;
          if (uVar87 != 0) {
            uVar99 = (ulong)local_2e0 & 0x3f;
            pplVar100 = local_5e0;
            local_2e0 = plVar95;
            if ((uVar47 & 1) != 0) {
              pplVar100 = pplVar82;
            }
            do {
              uVar47 = uVar99 + 1;
              pbVar98[uVar99] = *(byte *)pplVar100;
              uVar99 = uVar47;
              if (uVar47 == 0x40) {
                FUN_0012a370(&local_2e0);
                uVar99 = 0;
                pbVar98 = local_558;
              }
              uVar87 = uVar87 - 1;
              pplVar100 = (long **)((long)pplVar100 + 1);
              plVar95 = local_2e0;
            } while (uVar87 != 0);
          }
          local_2e0 = plVar95;
          FUN_001298b4(&local_1a0,&local_2e0);
          bVar28 = ((ulong)local_3f0 & 1) != 0;
          uVar87 = (ulong)local_3f0 >> 1 & 0x7f;
          if (bVar28) {
            uVar87 = local_3e8;
          }
          lVar80 = 0x16;
          if (bVar28) {
            lVar80 = ((ulong)local_3f0 & 0xfffffffffffffffe) - 1;
          }
          uVar86 = SUB84(local_3f0,0);
          uVar47 = (ulong)local_3f0 >> 1 & 0x7f;
          pplVar82 = local_5e0;
          if (((ulong)local_3f0 & 1) != 0) {
            uVar47 = local_3e8;
            pplVar82 = local_3e0;
          }
          if ((&local_1a0 < pplVar82) || ((long **)((long)pplVar82 + uVar47 + 1) <= &local_1a0)) {
            if (lVar80 - uVar87 < 0x20) {
              FUN_0011a228((basic_string *)local_3f0,lVar80,(uVar87 - lVar80) + 0x20,uVar87,uVar87,0
                           ,0);
              uVar86 = (uint)local_3f0[0];
              local_3e8 = uVar87;
            }
            pplVar82 = local_5e0;
            if ((uVar86 & 1) != 0) {
              pplVar82 = local_3e0;
            }
            pplVar82 = (long **)((long)pplVar82 + uVar87);
            if ((ulong)((long)pplVar82 - (long)&local_1a0) < 0x20) {
              *(byte *)pplVar82 = local_1a0;
              *(byte *)((long)pplVar82 + 1) = auStack_19f[0];
              *(byte *)((long)pplVar82 + 2) = auStack_19f[1];
              *(byte *)((long)pplVar82 + 3) = bStack_19d;
              *(undefined *)((long)pplVar82 + 4) = (undefined)uStack_19c;
              *(undefined *)((long)pplVar82 + 5) = uStack_19c._1_1_;
              *(undefined *)((long)pplVar82 + 6) = uStack_19c._2_1_;
              *(undefined *)((long)pplVar82 + 7) = uStack_19c._3_1_;
              *(undefined *)(pplVar82 + 1) = (undefined)uStack_198;
              *(undefined *)((long)pplVar82 + 9) = uStack_198._1_1_;
              *(undefined *)((long)pplVar82 + 10) = uStack_198._2_1_;
              *(undefined *)((long)pplVar82 + 0xb) = uStack_198._3_1_;
              *(undefined *)((long)pplVar82 + 0xc) = uStack_198._4_1_;
              *(undefined *)((long)pplVar82 + 0xd) = uStack_198._5_1_;
              *(undefined *)((long)pplVar82 + 0xe) = uStack_198._6_1_;
              *(undefined *)((long)pplVar82 + 0xf) = uStack_198._7_1_;
              *(byte *)(pplVar82 + 2) = local_190;
              *(undefined *)((long)pplVar82 + 0x11) = uStack_18f;
              *(undefined *)((long)pplVar82 + 0x12) = uStack_18e;
              *(undefined *)((long)pplVar82 + 0x13) = uStack_18d;
              *(byte *)((long)pplVar82 + 0x14) = bStack_18c;
              *(undefined *)((long)pplVar82 + 0x15) = uStack_18b;
              *(undefined *)((long)pplVar82 + 0x16) = uStack_18a;
              *(undefined *)((long)pplVar82 + 0x17) = uStack_189;
              *(undefined *)(pplVar82 + 3) = uStack_188;
              *(undefined *)((long)pplVar82 + 0x19) = uStack_187;
              *(undefined *)((long)pplVar82 + 0x1a) = uStack_186;
              *(undefined *)((long)pplVar82 + 0x1b) = uStack_185;
              *(undefined *)((long)pplVar82 + 0x1c) = uStack_184;
              *(undefined *)((long)pplVar82 + 0x1d) = uStack_183;
              *(undefined *)((long)pplVar82 + 0x1e) = uStack_182;
              *(undefined *)((long)pplVar82 + 0x1f) = uStack_181;
              *(undefined *)(pplVar82 + 4) = 0;
            }
            else {
              pplVar82[1] = (long *)uStack_198;
              *pplVar82 = _local_1a0;
              pplVar82[3] = (long *)CONCAT17(uStack_181,
                                             CONCAT16(uStack_182,
                                                      CONCAT15(uStack_183,
                                                               CONCAT14(uStack_184,
                                                                        CONCAT13(uStack_185,
                                                                                 CONCAT12(uStack_186
                                                                                          ,CONCAT11(
                                                  uStack_187,uStack_188)))))));
              pplVar82[2] = (long *)CONCAT17(uStack_189,
                                             CONCAT16(uStack_18a,
                                                      CONCAT15(uStack_18b,
                                                               CONCAT14(bStack_18c,
                                                                        CONCAT13(uStack_18d,
                                                                                 CONCAT12(uStack_18e
                                                                                          ,CONCAT11(
                                                  uStack_18f,local_190)))))));
              *(undefined *)(pplVar82 + 4) = 0;
            }
            if (((ulong)local_3f0 & 1) == 0) {
              uVar86 = ((int)uVar87 + 0x20) * 2;
              local_3f0 = (undefined  [8])CONCAT71(local_3f0._1_7_,(char)uVar86);
            }
            else {
              uVar86 = (uint)local_3f0[0];
              local_3e8 = uVar87 + 0x20;
            }
          }
          else {
            pplVar82 = (long **)malloc(0x30);
            *(undefined *)(pplVar82 + 4) = 0;
            pplVar82[1] = (long *)uStack_198;
            *pplVar82 = _local_1a0;
            pplVar82[3] = (long *)CONCAT17(uStack_181,
                                           CONCAT16(uStack_182,
                                                    CONCAT15(uStack_183,
                                                             CONCAT14(uStack_184,
                                                                      CONCAT13(uStack_185,
                                                                               CONCAT12(uStack_186,
                                                                                        CONCAT11(
                                                  uStack_187,uStack_188)))))));
            pplVar82[2] = (long *)CONCAT17(uStack_189,
                                           CONCAT16(uStack_18a,
                                                    CONCAT15(uStack_18b,
                                                             CONCAT14(bStack_18c,
                                                                      CONCAT13(uStack_18d,
                                                                               CONCAT12(uStack_18e,
                                                                                        CONCAT11(
                                                  uStack_18f,local_190)))))));
            FUN_0011a144(local_3f0,pplVar82,0x20);
            free(pplVar82);
            uVar86 = (uint)local_3f0[0];
          }
          uVar87 = (ulong)(uVar86 >> 1 & 0x7f);
          if ((uVar86 & 1) != 0) {
            uVar87 = local_3e8;
          }
          uVar49 = func_0x0016a110(uVar87);
          pplVar82 = local_5e0;
          if ((uVar86 & 1) != 0) {
            pplVar82 = local_3e0;
          }
          func_0x0016a080(uVar49,pplVar82,uVar87);
          *(int *)(*(long *)(lVar91 + 8) + ((ulong)local_820 & 0xffffffff)) = (int)uVar87;
          uVar87 = 0xcbf29ce484222325;
          *(undefined8 *)(*(long *)(lVar91 + 8) + ((ulong)local_758 & 0xffffffff)) = uVar49;
          if (sVar17 != 0) {
            lVar80 = 0;
            iVar31 = 0;
            do {
              pcVar42 = (char *)(*(long *)(lVar91 + 8) + ((ulong)local_858 & 0xffffffff) + lVar80);
              iVar31 = iVar31 + 1;
              lVar80 = (long)iVar31;
              uVar87 = uVar87 * 0x100000001b3 ^ (long)*pcVar42;
            } while (sVar17 != iVar31);
          }
          uVar86 = (uint)local_688;
          if ((uVar87 ^ (long)*(int *)(*(long *)(lVar91 + 8) + (ulong)uVar58)) != uVar81) {
            uVar86 = (uint)unaff_x27;
          }
          puVar91 = (undefined8 *)(ulong)uVar86;
          uVar99 = extraout_x1_18;
          pplVar82 = local_3e0;
          uVar87 = (ulong)local_3f0;
joined_r0x0013e754:
          if ((uVar87 & 1) != 0) {
            free(pplVar82,uVar99);
          }
LAB_0013f5ec:
          pplVar82 = (long **)(ulong)local_464;
        }
        else {
          *(undefined4 *)(lVar54 + (ulong)uVar58) = 0;
          *(undefined8 *)(*(long *)(lVar91 + 8) + (ulong)uVar115) = 0;
          uVar81 = 0xcbf29ce484222325;
          if (sVar17 != 0) {
            lVar80 = 0;
            iVar31 = 0;
            do {
              pcVar42 = (char *)(*(long *)(lVar91 + 8) + (ulong)uVar96 + lVar80);
              iVar31 = iVar31 + 1;
              lVar80 = (long)iVar31;
              uVar81 = uVar81 * 0x100000001b3 ^ (long)*pcVar42;
            } while (sVar17 != iVar31);
          }
          pplVar82 = (long **)((ulong)pplVar100 & 0xffffffff);
          if ((uVar81 ^ (long)*(int *)(*(long *)(lVar91 + 8) + (ulong)uVar94)) != uVar87) {
            uVar85 = uVar7;
          }
          puVar91 = (undefined8 *)(ulong)uVar85;
          local_464 = uVar44;
        }
        goto LAB_0012ecfc;
      }
    }
    else if ((int)uVar86 < 0x376470be) {
      if ((int)uVar86 < 0x32dccf2b) {
        if (uVar86 != 0x2fadc029) {
          local_464 = uVar44;
          if (uVar86 == 0x305a4622) {
            local_490 = *(long ***)(local_470 + 8);
            uVar111 = *(uint *)(local_490 + 2);
            uVar112 = *(uint *)((long)local_490 + 0x14);
            plVar95 = local_490[1];
            uVar58 = uVar112 + 0xc;
            uVar86 = *(uint *)((long)plVar95 + (ulong)uVar112);
            *(uint *)((long)local_490 + 0x14) = uVar112 + 4;
            uVar113 = *(uint *)((long)plVar95 + (ulong)(uVar112 + 4));
            uVar86 = uVar86 ^ uVar111 ^ 0xffffffff;
            *(uint *)((long)local_490 + 0x14) = uVar112 + 8;
            uVar96 = 0;
            if (uVar111 != 0) {
              uVar96 = uVar86 / uVar111;
            }
            uVar94 = *(uint *)((long)plVar95 + (ulong)(uVar112 + 8));
            iVar31 = (uVar58 | 0xfffffff7) + ((uVar58 * 2 | 0x10) - (uVar58 & 0xfffffff7));
            *(uint *)((long)local_490 + 0x14) = uVar58;
            uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
            uVar112 = iVar31 + 5;
            uVar115 = iVar31 + 1;
            local_498 = *(long ***)((long)plVar95 + (ulong)uVar58);
            *(uint *)((long)local_490 + 0x14) = uVar115;
            uVar94 = uVar94 ^ uVar111 ^ 0xffffffff;
            iVar31 = uVar115 + (uVar112 | 2) + (-iVar31 - 6U | 2);
            uVar58 = *(uint *)((long)plVar95 + (ulong)uVar115);
            *(uint *)((long)local_490 + 0x14) = uVar112;
            sVar17 = *(short *)((long)plVar95 + (ulong)uVar112);
            *(uint *)((long)local_490 + 0x14) = iVar31 + 5U;
            uVar33 = *(undefined4 *)((long)plVar95 + (ulong)(iVar31 + 5U));
            *(uint *)((long)local_490 + 0x14) = iVar31 + 9U;
            uVar112 = 0;
            if (uVar111 != 0) {
              uVar112 = uVar113 / uVar111;
            }
            uVar30 = *(undefined4 *)((long)plVar95 + (ulong)(iVar31 + 9U));
            uVar58 = uVar58 ^ uVar111 ^ 0xffffffff;
            local_4b0 = (long **)CONCAT44(local_4b0._4_4_,uVar33);
            *(uint *)((long)local_490 + 0x14) = iVar31 + 0xdU;
            local_4d0 = (long **)CONCAT44(local_4d0._4_4_,uVar30);
            uVar115 = *(uint *)((long)plVar95 + (ulong)(iVar31 + 0xdU));
            *(int *)((long)local_490 + 0x14) = iVar31 + 0x11;
            uVar115 = uVar115 ^ uVar111 ^ 0xffffffff;
            uVar101 = 0;
            if (uVar111 != 0) {
              uVar101 = uVar115 / uVar111;
            }
            uVar87 = (ulong)*(int *)((long)plVar95 + (ulong)(uVar113 - uVar112 * uVar111));
            uVar113 = 0;
            if (uVar111 != 0) {
              uVar113 = uVar94 / uVar111;
            }
            plVar48 = *(long **)((long)plVar95 + (ulong)(uVar115 - uVar101 * uVar111));
            uVar112 = 0;
            if (uVar111 != 0) {
              uVar112 = uVar58 / uVar111;
            }
            local_4f0 = (long *)CONCAT44(local_4f0._4_4_,uVar94 - uVar113 * uVar111);
            local_508 = (undefined *)CONCAT44(local_508._4_4_,uVar58 - uVar112 * uVar111);
            pplVar82 = (long **)plVar48[4];
            uVar81 = *(long *)((long)plVar95 + (ulong)(uVar86 - uVar96 * uVar111)) << 3;
            do {
              while( true ) {
                pplVar100 = (long **)plVar48[3];
                unaff_x27 = (long **)((long)pplVar82 - (long)pplVar100);
                uVar99 = plVar48[1] - *plVar48;
                uVar47 = 0;
                if (uVar99 != 0) {
                  uVar47 = (ulong)unaff_x27 / uVar99;
                }
                bVar102 = *(byte *)((long)unaff_x27 + (*plVar48 - uVar47 * uVar99)) ^
                          ((byte)uVar81 & 0x7f | (0x7f < uVar81) << 7);
                if (pplVar82 < (long **)plVar48[5]) break;
                puVar97 = (undefined *)((long)unaff_x27 + 1);
                if ((long)puVar97 < 0) goto LAB_00142498;
                uVar47 = (long)(long **)plVar48[5] - (long)pplVar100;
                puVar46 = (undefined *)(uVar47 * 2);
                if (puVar46 < puVar97 || (long)puVar46 - (long)puVar97 == 0) {
                  puVar46 = puVar97;
                }
                if (0x3ffffffffffffffe < uVar47) {
                  puVar46 = (undefined *)0x7fffffffffffffff;
                }
                if (puVar46 == (undefined *)0x0) {
                  pplVar77 = (long **)0x0;
                  *(byte *)unaff_x27 = bVar102;
                  pplVar88 = unaff_x27;
                }
                else {
                  pplVar77 = (long **)malloc(puVar46);
                  pplVar88 = (long **)((long)pplVar77 + (long)unaff_x27);
                  *(byte *)pplVar88 = bVar102;
                }
                unaff_x24 = (long **)((long)pplVar88 + 1);
                if (pplVar82 != pplVar100) {
                  if ((unaff_x27 < (long **)0x8) ||
                     ((ulong)((long)pplVar100 - (long)pplVar77) < 0x20)) {
LAB_001317ec:
                    do {
                      pplVar88 = (long **)((long)pplVar88 + -1);
                      pplVar82 = (long **)((long)pplVar82 + -1);
                      *(undefined *)pplVar88 = *(undefined *)pplVar82;
                    } while (pplVar82 != pplVar100);
                  }
                  else if (unaff_x27 < (long **)0x20) {
                    pplVar70 = (long **)0x0;
LAB_0013179c:
                    puVar84 = (undefined8 *)((long)pplVar82 - (long)pplVar70);
                    pplVar71 = (long **)((ulong)unaff_x27 & 0xfffffffffffffff8);
                    pplVar82 = (long **)((long)pplVar82 - (long)pplVar71);
                    puVar91 = (undefined8 *)((long)pplVar77 + ((long)puVar84 - (long)pplVar100));
                    lVar80 = (long)pplVar70 - (long)pplVar71;
                    do {
                      puVar84 = puVar84 + -1;
                      puVar91 = puVar91 + -1;
                      lVar80 = lVar80 + 8;
                      *puVar91 = *puVar84;
                    } while (lVar80 != 0);
                    if (unaff_x27 != pplVar71) {
                      pplVar88 = (long **)((long)pplVar88 - (long)pplVar71);
                      goto LAB_001317ec;
                    }
                  }
                  else {
                    pplVar70 = (long **)((ulong)unaff_x27 & 0xffffffffffffffe0);
                    pplVar69 = pplVar82 + -2;
                    pplVar50 = (long **)((undefined *)((long)pplVar77 + (long)unaff_x27) + -0x10);
                    pplVar71 = pplVar70;
                    do {
                      pplVar51 = pplVar69 + -1;
                      plVar79 = pplVar69[-2];
                      plVar39 = pplVar69[1];
                      plVar95 = *pplVar69;
                      pplVar71 = pplVar71 + -4;
                      pplVar69 = pplVar69 + -4;
                      pplVar50[-1] = *pplVar51;
                      pplVar50[-2] = plVar79;
                      pplVar50[1] = plVar39;
                      *pplVar50 = plVar95;
                      pplVar50 = pplVar50 + -4;
                    } while (pplVar71 != (long **)0x0);
                    if (unaff_x27 != pplVar70) {
                      if (((ulong)unaff_x27 & 0x18) == 0) {
                        pplVar88 = (long **)((long)pplVar88 - (long)pplVar70);
                        pplVar82 = (long **)((long)pplVar82 - (long)pplVar70);
                        goto LAB_001317ec;
                      }
                      goto LAB_0013179c;
                    }
                  }
                  pplVar82 = (long **)plVar48[3];
                  pplVar88 = pplVar77;
                }
                plVar48[3] = (long)pplVar88;
                plVar48[4] = (long)unaff_x24;
                plVar48[5] = (long)((long)pplVar77 + (long)puVar46);
                if (pplVar82 != (long **)0x0) {
                  free(pplVar82);
                }
                plVar48[4] = (long)unaff_x24;
                bVar28 = uVar81 < 0x80;
                pplVar82 = unaff_x24;
                uVar81 = uVar81 >> 7;
                if (bVar28) goto LAB_00131858;
              }
              unaff_x24 = (long **)((long)pplVar82 + 1);
              *(byte *)pplVar82 = bVar102;
              plVar48[4] = (long)unaff_x24;
              bVar28 = 0x7f < uVar81;
              pplVar82 = unaff_x24;
              uVar81 = uVar81 >> 7;
            } while (bVar28);
LAB_00131858:
            do {
              pplVar82 = (long **)plVar48[3];
              pbVar98 = (byte *)((long)unaff_x24 - (long)pplVar82);
              uVar47 = plVar48[1] - *plVar48;
              uVar81 = 0;
              if (uVar47 != 0) {
                uVar81 = (ulong)pbVar98 / uVar47;
              }
              bVar102 = pbVar98[*plVar48 - uVar81 * uVar47] ^
                        ((byte)uVar87 & 0x7f | (0x7f < uVar87) << 7);
              if (unaff_x24 < (long **)plVar48[5]) {
                *(byte *)unaff_x24 = bVar102;
                pplVar100 = (long **)((long)unaff_x24 + 1);
              }
              else {
                pbVar66 = pbVar98 + 1;
                if ((long)pbVar66 < 0) goto LAB_00142498;
                uVar81 = (long)(long **)plVar48[5] - (long)pplVar82;
                pbVar61 = (byte *)(uVar81 * 2);
                if (pbVar61 < pbVar66 || (long)pbVar61 - (long)pbVar66 == 0) {
                  pbVar61 = pbVar66;
                }
                if (0x3ffffffffffffffe < uVar81) {
                  pbVar61 = (byte *)0x7fffffffffffffff;
                }
                if (pbVar61 == (byte *)0x0) {
                  pbVar36 = (byte *)0x0;
                  *pbVar98 = bVar102;
                  pbVar66 = pbVar98;
                }
                else {
                  pbVar36 = (byte *)malloc(pbVar61);
                  pbVar66 = pbVar36 + (long)pbVar98;
                  *pbVar66 = bVar102;
                }
                pplVar100 = (long **)(pbVar66 + 1);
                if (unaff_x24 != pplVar82) {
                  if ((pbVar98 < (byte *)0x8) || ((ulong)((long)pplVar82 - (long)pbVar36) < 0x20)) {
LAB_001319a8:
                    do {
                      pbVar66 = pbVar66 + -1;
                      unaff_x24 = (long **)((long)unaff_x24 + -1);
                      *pbVar66 = *(byte *)unaff_x24;
                    } while (unaff_x24 != pplVar82);
                  }
                  else if (pbVar98 < (byte *)0x20) {
                    pbVar52 = (byte *)0x0;
LAB_00131958:
                    puVar84 = (undefined8 *)((long)unaff_x24 - (long)pbVar52);
                    pbVar72 = (byte *)((ulong)pbVar98 & 0xfffffffffffffff8);
                    unaff_x24 = (long **)((long)unaff_x24 - (long)pbVar72);
                    puVar91 = (undefined8 *)(pbVar36 + ((long)puVar84 - (long)pplVar82));
                    lVar80 = (long)pbVar52 - (long)pbVar72;
                    do {
                      puVar84 = puVar84 + -1;
                      puVar91 = puVar91 + -1;
                      lVar80 = lVar80 + 8;
                      *puVar91 = *puVar84;
                    } while (lVar80 != 0);
                    if (pbVar98 != pbVar72) {
                      pbVar66 = pbVar66 + -(long)pbVar72;
                      goto LAB_001319a8;
                    }
                  }
                  else {
                    pbVar52 = (byte *)((ulong)pbVar98 & 0xffffffffffffffe0);
                    pplVar88 = unaff_x24 + -2;
                    pplVar77 = (long **)(pbVar36 + (long)pbVar98 + -0x10);
                    pbVar72 = pbVar52;
                    do {
                      pplVar71 = pplVar88 + -1;
                      plVar79 = pplVar88[-2];
                      plVar39 = pplVar88[1];
                      plVar95 = *pplVar88;
                      pbVar72 = pbVar72 + -0x20;
                      pplVar88 = pplVar88 + -4;
                      pplVar77[-1] = *pplVar71;
                      pplVar77[-2] = plVar79;
                      pplVar77[1] = plVar39;
                      *pplVar77 = plVar95;
                      pplVar77 = pplVar77 + -4;
                    } while (pbVar72 != (byte *)0x0);
                    if (pbVar98 != pbVar52) {
                      if (((ulong)pbVar98 & 0x18) == 0) {
                        pbVar66 = pbVar66 + -(long)pbVar52;
                        unaff_x24 = (long **)((long)unaff_x24 - (long)pbVar52);
                        goto LAB_001319a8;
                      }
                      goto LAB_00131958;
                    }
                  }
                  unaff_x24 = (long **)plVar48[3];
                  pbVar66 = pbVar36;
                }
                plVar48[3] = (long)pbVar66;
                plVar48[4] = (long)pplVar100;
                plVar48[5] = (long)(pbVar36 + (long)pbVar61);
                if (unaff_x24 != (long **)0x0) {
                  free(unaff_x24);
                }
              }
              unaff_x24 = pplVar100;
              plVar48[4] = (long)unaff_x24;
              bVar28 = 0x7f < uVar87;
              uVar87 = uVar87 >> 7;
            } while (bVar28);
            plVar95 = local_490[1];
            uVar87 = 0xcbf29ce484222325;
            if (sVar17 != 0) {
              lVar80 = 0;
              iVar31 = 0;
              do {
                lVar91 = lVar80 + ((ulong)local_508 & 0xffffffff);
                iVar31 = iVar31 + 1;
                lVar80 = (long)iVar31;
                uVar87 = uVar87 * 0x100000001b3 ^ (long)*(char *)((long)plVar95 + lVar91);
              } while (sVar17 != iVar31);
            }
            goto LAB_00139588;
          }
          goto LAB_0013267c;
        }
        lVar91 = *(long *)(local_470 + 8);
        uVar111 = *(uint *)(lVar91 + 0x10);
        uVar112 = *(uint *)(lVar91 + 0x14);
        lVar80 = *(long *)(lVar91 + 8);
        uVar58 = uVar112 + 0x10;
        uVar86 = *(uint *)(lVar80 + (ulong)uVar112);
        *(uint *)(lVar91 + 0x14) = uVar112 + 4;
        uVar86 = uVar86 ^ uVar111 ^ 0xffffffff;
        uVar113 = *(uint *)(lVar80 + (ulong)(uVar112 + 4));
        *(uint *)(lVar91 + 0x14) = uVar112 + 8;
        uVar96 = 0;
        if (uVar111 != 0) {
          uVar96 = uVar86 / uVar111;
        }
        uVar94 = ((uVar58 ^ 0xffffffff) & 0xfffffff7) * -3 +
                 (~uVar112 | 0xfffffff7) + (uVar58 * 2 ^ 0xffffffee);
        uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
        uVar101 = *(uint *)(lVar80 + (ulong)(uVar112 + 8)) ^ uVar111 ^ 0xffffffff;
        uVar115 = uVar94 + 4;
        *(uint *)(lVar91 + 0x14) = uVar112 + 0xc;
        uVar112 = *(uint *)(lVar80 + (ulong)(uVar112 + 0xc));
        *(uint *)(lVar91 + 0x14) = uVar58;
        local_490 = *(long ***)(lVar80 + (ulong)uVar58);
        *(uint *)(lVar91 + 0x14) = uVar94;
        uVar112 = uVar112 ^ uVar111 ^ 0xffffffff;
        uVar58 = *(uint *)(lVar80 + (ulong)uVar94);
        *(uint *)(lVar91 + 0x14) = uVar115;
        uVar87 = (ulong)(uVar94 & 2 | (uVar94 * 2 & 4) + (uVar115 & 0xfffffffd)) ^ 2;
        sVar17 = *(short *)(lVar80 + (ulong)uVar115);
        iVar31 = (int)uVar87;
        *(int *)(lVar91 + 0x14) = iVar31;
        uVar115 = 0;
        if (uVar111 != 0) {
          uVar115 = uVar101 / uVar111;
        }
        uVar33 = *(undefined4 *)(lVar80 + uVar87);
        *(uint *)(lVar91 + 0x14) = iVar31 + 4U;
        uVar30 = *(undefined4 *)(lVar80 + (ulong)(iVar31 + 4U));
        *(uint *)(lVar91 + 0x14) = iVar31 + 8U;
        uVar58 = uVar58 ^ uVar111 ^ 0xffffffff;
        local_498 = (long **)CONCAT44(local_498._4_4_,uVar33);
        local_4b0 = (long **)CONCAT44(local_4b0._4_4_,uVar30);
        uVar94 = *(uint *)(lVar80 + (ulong)(iVar31 + 8U));
        *(int *)(lVar91 + 0x14) = iVar31 + 0xc;
        uVar94 = uVar94 ^ uVar111 ^ 0xffffffff;
        local_508 = *(undefined **)(lVar80 + (ulong)(uVar86 - uVar96 * uVar111));
        uVar86 = 0;
        if (uVar111 != 0) {
          uVar86 = uVar94 / uVar111;
        }
        local_4f0 = *(long **)(lVar80 + (ulong)(uVar101 - uVar115 * uVar111));
        uVar96 = 0;
        if (uVar111 != 0) {
          uVar96 = uVar112 / uVar111;
        }
        lVar54 = *(long *)(lVar80 + (ulong)(uVar94 - uVar86 * uVar111));
        uVar86 = 0;
        if (uVar111 != 0) {
          uVar86 = uVar113 / uVar111;
        }
        local_4d0 = (long **)CONCAT44(local_4d0._4_4_,uVar112 - uVar96 * uVar111);
        paVar72 = lVar54 % 1000000000;
        uVar112 = 0;
        if (uVar111 != 0) {
          uVar112 = uVar58 / uVar111;
        }
        plVar48 = (long *)(lVar80 + (ulong)(uVar113 - uVar86 * uVar111));
        local_530 = (long **)CONCAT44(local_530._4_4_,uVar58 - uVar112 * uVar111);
        local_464 = uVar44;
        local_2e0 = (long *)malloc(0x100);
        plVar95 = local_2e0 + 0x20;
        bStack_2d0 = (byte)plVar95;
        uStack_2cf = (undefined)((ulong)plVar95 >> 8);
        uStack_2ce = (undefined2)((ulong)plVar95 >> 0x10);
        iStack_2cc = (int)((ulong)plVar95 >> 0x20);
        lVar110 = plVar48[4];
        lVar60 = plVar48[7];
        lVar80 = plVar48[6];
        lVar123 = plVar48[1];
        lVar121 = *plVar48;
        lVar119 = plVar48[3];
        lVar117 = plVar48[2];
        local_2e0[5] = plVar48[5];
        local_2e0[4] = lVar110;
        local_2e0[7] = lVar60;
        local_2e0[6] = lVar80;
        local_2e0[1] = lVar123;
        *local_2e0 = lVar121;
        local_2e0[3] = lVar119;
        local_2e0[2] = lVar117;
        lVar110 = plVar48[0xc];
        lVar60 = plVar48[0xf];
        lVar80 = plVar48[0xe];
        lVar123 = plVar48[9];
        lVar121 = plVar48[8];
        lVar119 = plVar48[0xb];
        lVar117 = plVar48[10];
        local_2e0[0xd] = plVar48[0xd];
        local_2e0[0xc] = lVar110;
        local_2e0[0xf] = lVar60;
        local_2e0[0xe] = lVar80;
        local_2e0[9] = lVar123;
        local_2e0[8] = lVar121;
        local_2e0[0xb] = lVar119;
        local_2e0[10] = lVar117;
        lVar110 = plVar48[0x14];
        lVar60 = plVar48[0x17];
        lVar80 = plVar48[0x16];
        lVar123 = plVar48[0x11];
        lVar121 = plVar48[0x10];
        lVar119 = plVar48[0x13];
        lVar117 = plVar48[0x12];
        local_2e0[0x15] = plVar48[0x15];
        local_2e0[0x14] = lVar110;
        local_2e0[0x17] = lVar60;
        local_2e0[0x16] = lVar80;
        local_2e0[0x11] = lVar123;
        local_2e0[0x10] = lVar121;
        local_2e0[0x13] = lVar119;
        local_2e0[0x12] = lVar117;
        lVar110 = plVar48[0x1c];
        lVar60 = plVar48[0x1f];
        lVar80 = plVar48[0x1e];
        lVar123 = plVar48[0x19];
        lVar121 = plVar48[0x18];
        lVar119 = plVar48[0x1b];
        lVar117 = plVar48[0x1a];
        bVar102 = *(byte *)local_2e0;
        local_2c0 = (long **)0x0;
        uStack_2b8 = (long **)0x0;
        local_2e0[0x1d] = plVar48[0x1d];
        local_2e0[0x1c] = lVar110;
        local_2e0[0x1f] = lVar60;
        local_2e0[0x1e] = lVar80;
        local_2e0[0x19] = lVar123;
        local_2e0[0x18] = lVar121;
        local_2e0[0x1b] = lVar119;
        local_2e0[0x1a] = lVar117;
        local_2c8 = (long **)0x0;
        bStack_2d8 = bStack_2d0;
        uStack_2d7 = uStack_2cf;
        uStack_2d6 = uStack_2ce;
        iStack_2d4 = iStack_2cc;
        local_2c8 = (long **)malloc(1);
        uStack_2b8 = (long **)((long)local_2c8 + 1);
        *(byte *)local_2c8 = bVar102 ^ 8;
        uVar87 = lVar54 / 1000000000;
        local_2c0 = uStack_2b8;
        do {
          while( true ) {
            pplVar100 = local_2c0;
            pplVar82 = local_2c8;
            uVar47 = CONCAT44(iStack_2d4,CONCAT22(uStack_2d6,CONCAT11(uStack_2d7,bStack_2d8))) -
                     (long)local_2e0;
            pplVar88 = (long **)((long)local_2c0 - (long)local_2c8);
            uVar81 = 0;
            if (uVar47 != 0) {
              uVar81 = (ulong)pplVar88 / uVar47;
            }
            bVar102 = *(byte *)((long)local_2e0 + ((long)pplVar88 - uVar81 * uVar47)) ^
                      ((byte)uVar87 & 0x7f | (0x7f < uVar87) << 7);
            if (local_2c0 < uStack_2b8) break;
            uVar81 = (long)pplVar88 + 1;
            if ((long)uVar81 < 0) goto LAB_00142498;
            uVar47 = ((long)uStack_2b8 - (long)local_2c8) * 2;
            if (uVar47 < uVar81 || uVar47 - uVar81 == 0) {
              uVar47 = uVar81;
            }
            if (0x3ffffffffffffffe < (ulong)((long)uStack_2b8 - (long)local_2c8)) {
              uVar47 = 0x7fffffffffffffff;
            }
            if (uVar47 == 0) {
              uStack_2b8 = (long **)0x0;
              *(byte *)pplVar88 = bVar102;
              pplVar71 = pplVar88;
              pplVar70 = local_2c8;
            }
            else {
              uStack_2b8 = (long **)malloc(uVar47);
              pplVar71 = (long **)((long)uStack_2b8 + (long)pplVar88);
              *(byte *)pplVar71 = bVar102;
              pplVar70 = local_2c8;
            }
            pplVar77 = (long **)((long)pplVar71 + 1);
            local_2c8 = pplVar71;
            pplVar69 = pplVar100;
            if (pplVar100 != pplVar82) {
              local_2c8 = uStack_2b8;
              if (((long **)0x7 < pplVar88) && (0x1f < (ulong)((long)pplVar82 - (long)uStack_2b8)))
              {
                pplVar69 = pplVar82;
                if (pplVar88 < (long **)0x20) {
                  pplVar51 = (long **)0x0;
                }
                else {
                  pplVar51 = (long **)((ulong)pplVar88 & 0xffffffffffffffe0);
                  pplVar74 = pplVar100 + -2;
                  pplVar67 = (long **)((long)uStack_2b8 + (long)pplVar88 + -0x10);
                  pplVar50 = pplVar51;
                  do {
                    pplVar24 = pplVar74 + -1;
                    plVar39 = pplVar74[-2];
                    plVar48 = pplVar74[1];
                    plVar95 = *pplVar74;
                    pplVar50 = pplVar50 + -4;
                    pplVar74 = pplVar74 + -4;
                    pplVar67[-1] = *pplVar24;
                    pplVar67[-2] = plVar39;
                    pplVar67[1] = plVar48;
                    *pplVar67 = plVar95;
                    pplVar67 = pplVar67 + -4;
                  } while (pplVar50 != (long **)0x0);
                  if (pplVar88 == pplVar51) goto LAB_0013468c;
                  if (((ulong)pplVar88 & 0x18) == 0) {
                    pplVar71 = (long **)((long)pplVar71 - (long)pplVar51);
                    pplVar100 = (long **)((long)pplVar100 - (long)pplVar51);
                    goto LAB_00134674;
                  }
                }
                puVar84 = (undefined8 *)((long)pplVar100 - (long)pplVar51);
                pplVar50 = (long **)((ulong)pplVar88 & 0xfffffffffffffff8);
                pplVar100 = (long **)((long)pplVar100 - (long)pplVar50);
                puVar91 = (undefined8 *)((long)uStack_2b8 + ((long)puVar84 - (long)pplVar82));
                lVar80 = (long)pplVar51 - (long)pplVar50;
                do {
                  puVar84 = puVar84 + -1;
                  puVar91 = puVar91 + -1;
                  lVar80 = lVar80 + 8;
                  *puVar91 = *puVar84;
                } while (lVar80 != 0);
                if (pplVar88 == pplVar50) goto LAB_0013468c;
                pplVar71 = (long **)((long)pplVar71 - (long)pplVar50);
              }
LAB_00134674:
              do {
                pplVar71 = (long **)((long)pplVar71 + -1);
                pplVar100 = (long **)((long)pplVar100 + -1);
                *(undefined *)pplVar71 = *(undefined *)pplVar100;
                pplVar69 = pplVar70;
              } while (pplVar100 != pplVar82);
            }
LAB_0013468c:
            uStack_2b8 = (long **)((long)uStack_2b8 + uVar47);
            if (pplVar69 != (long **)0x0) {
              local_2c0 = pplVar77;
              free(pplVar69);
            }
            bVar28 = uVar87 < 0x80;
            uVar87 = uVar87 >> 7;
            local_2c0 = pplVar77;
            if (bVar28) goto LAB_001346c0;
          }
          pplVar77 = (long **)((long)local_2c0 + 1);
          *(byte *)local_2c0 = bVar102;
          bVar28 = 0x7f < uVar87;
          uVar87 = uVar87 >> 7;
          local_2c0 = pplVar77;
        } while (bVar28);
LAB_001346c0:
        unaff_x24 = local_2c8;
        pplVar82 = (long **)((long)pplVar77 - (long)local_2c8);
        uVar81 = CONCAT44(iStack_2d4,CONCAT22(uStack_2d6,CONCAT11(uStack_2d7,bStack_2d8))) -
                 (long)local_2e0;
        uVar87 = 0;
        if (uVar81 != 0) {
          uVar87 = (ulong)pplVar82 / uVar81;
        }
        bVar102 = *(byte *)((long)local_2e0 + ((long)pplVar82 - uVar87 * uVar81)) ^ 0x10;
        if (pplVar77 < uStack_2b8) {
          pplVar71 = (long **)((long)pplVar77 + 1);
          *(byte *)pplVar77 = bVar102;
        }
        else {
          puVar97 = (undefined *)((long)pplVar82 + 1);
          local_2c0 = pplVar77;
          if ((long)puVar97 < 0) {
LAB_00142498:
            vector_error();
LAB_0014249c:
            FUN_001291bc("string_view::substr");
            goto LAB_001424a8;
          }
          puVar46 = (undefined *)(((long)uStack_2b8 - (long)local_2c8) * 2);
          if (puVar46 < puVar97 || (long)puVar46 - (long)puVar97 == 0) {
            puVar46 = puVar97;
          }
          if (0x3ffffffffffffffe < (ulong)((long)uStack_2b8 - (long)local_2c8)) {
            puVar46 = (undefined *)0x7fffffffffffffff;
          }
          if (puVar46 == (undefined *)0x0) {
            uStack_2b8 = (long **)0x0;
            *(byte *)pplVar82 = bVar102;
            pplVar100 = pplVar82;
            pplVar88 = local_2c8;
          }
          else {
            uStack_2b8 = (long **)malloc(puVar46);
            pplVar100 = (long **)((long)uStack_2b8 + (long)pplVar82);
            *(byte *)pplVar100 = bVar102;
            pplVar88 = local_2c8;
          }
          pplVar71 = (long **)((long)pplVar100 + 1);
          local_2c8 = pplVar100;
          pplVar70 = pplVar77;
          if (pplVar77 != unaff_x24) {
            local_2c8 = uStack_2b8;
            if (((long **)0x7 < pplVar82) && (0x1f < (ulong)((long)unaff_x24 - (long)uStack_2b8))) {
              pplVar70 = unaff_x24;
              if (pplVar82 < (long **)0x20) {
                pplVar67 = (long **)0x0;
              }
              else {
                pplVar67 = (long **)((ulong)pplVar82 & 0xffffffffffffffe0);
                pplVar51 = pplVar77 + -2;
                pplVar69 = (long **)((long)pplVar51 + ((long)uStack_2b8 - (long)unaff_x24));
                pplVar50 = pplVar67;
                do {
                  pplVar74 = pplVar51 + -1;
                  plVar39 = pplVar51[-2];
                  plVar48 = pplVar51[1];
                  plVar95 = *pplVar51;
                  pplVar50 = pplVar50 + -4;
                  pplVar51 = pplVar51 + -4;
                  pplVar69[-1] = *pplVar74;
                  pplVar69[-2] = plVar39;
                  pplVar69[1] = plVar48;
                  *pplVar69 = plVar95;
                  pplVar69 = pplVar69 + -4;
                } while (pplVar50 != (long **)0x0);
                if (pplVar82 == pplVar67) goto LAB_00141898;
                if (((ulong)pplVar82 & 0x18) == 0) {
                  pplVar100 = (long **)((long)pplVar100 - (long)pplVar67);
                  pplVar77 = (long **)((long)pplVar77 - (long)pplVar67);
                  goto LAB_00141880;
                }
              }
              pplVar69 = (long **)((ulong)pplVar82 & 0xfffffffffffffff8);
              puVar84 = (undefined8 *)((long)pplVar77 - (long)pplVar67);
              puVar91 = (undefined8 *)
                        (((long)uStack_2b8 - (long)((long)pplVar67 + (long)unaff_x24)) +
                        (long)pplVar77);
              lVar80 = (long)pplVar67 - (long)pplVar69;
              do {
                puVar84 = puVar84 + -1;
                puVar91 = puVar91 + -1;
                lVar80 = lVar80 + 8;
                *puVar91 = *puVar84;
              } while (lVar80 != 0);
              if (pplVar82 == pplVar69) goto LAB_00141898;
              pplVar100 = (long **)((long)pplVar100 - (long)pplVar69);
              pplVar77 = (long **)((long)pplVar77 - (long)pplVar69);
            }
LAB_00141880:
            do {
              pplVar100 = (long **)((long)pplVar100 + -1);
              pplVar77 = (long **)((long)pplVar77 + -1);
              *(undefined *)pplVar100 = *(undefined *)pplVar77;
              pplVar70 = pplVar88;
            } while (pplVar77 != unaff_x24);
          }
LAB_00141898:
          uStack_2b8 = (long **)((long)uStack_2b8 + (long)puVar46);
          if (pplVar70 != (long **)0x0) {
            local_2c0 = pplVar71;
            free(pplVar70);
          }
        }
        do {
          pplVar82 = local_2c8;
          uVar81 = CONCAT44(iStack_2d4,CONCAT22(uStack_2d6,CONCAT11(uStack_2d7,bStack_2d8))) -
                   (long)local_2e0;
          pplVar100 = (long **)((long)pplVar71 - (long)local_2c8);
          uVar87 = 0;
          if (uVar81 != 0) {
            uVar87 = (ulong)pplVar100 / uVar81;
          }
          bVar102 = *(byte *)((long)local_2e0 + ((long)pplVar100 - uVar87 * uVar81)) ^
                    ((byte)paVar72 & 0x7f | ((long **)0x7f < (ulong)paVar72) << 7);
          if (pplVar71 < uStack_2b8) {
            *(byte *)pplVar71 = bVar102;
            pplVar71 = (long **)((long)pplVar71 + 1);
          }
          else {
            pplVar88 = (long **)((long)pplVar100 + 1);
            local_2c0 = pplVar71;
            if ((long)pplVar88 < 0) goto LAB_00142498;
            unaff_x24 = (long **)(((long)uStack_2b8 - (long)local_2c8) * 2);
            if (unaff_x24 < pplVar88 || (long)unaff_x24 - (long)pplVar88 == 0) {
              unaff_x24 = pplVar88;
            }
            if (0x3ffffffffffffffe < (ulong)((long)uStack_2b8 - (long)local_2c8)) {
              unaff_x24 = (long **)0x7fffffffffffffff;
            }
            if (unaff_x24 == (long **)0x0) {
              uStack_2b8 = (long **)0x0;
              *(byte *)pplVar100 = bVar102;
              pplVar88 = pplVar100;
              pplVar77 = local_2c8;
            }
            else {
              uStack_2b8 = (long **)malloc(unaff_x24);
              pplVar88 = (long **)((long)uStack_2b8 + (long)pplVar100);
              *(byte *)pplVar88 = bVar102;
              pplVar77 = local_2c8;
            }
            local_2c0 = (long **)((long)pplVar88 + 1);
            local_2c8 = pplVar88;
            pplVar70 = pplVar71;
            if (pplVar71 != pplVar82) {
              local_2c8 = uStack_2b8;
              if (((long **)0x7 < pplVar100) && (0x1f < (ulong)((long)pplVar82 - (long)uStack_2b8)))
              {
                pplVar70 = pplVar82;
                if (pplVar100 < (long **)0x20) {
                  pplVar50 = (long **)0x0;
                }
                else {
                  pplVar50 = (long **)((ulong)pplVar100 & 0xffffffffffffffe0);
                  pplVar67 = pplVar71 + -2;
                  pplVar51 = (long **)((undefined *)((long)uStack_2b8 + (long)pplVar100) + -0x10);
                  pplVar69 = pplVar50;
                  do {
                    pplVar74 = pplVar67 + -1;
                    plVar39 = pplVar67[-2];
                    plVar48 = pplVar67[1];
                    plVar95 = *pplVar67;
                    pplVar69 = pplVar69 + -4;
                    pplVar67 = pplVar67 + -4;
                    pplVar51[-1] = *pplVar74;
                    pplVar51[-2] = plVar39;
                    pplVar51[1] = plVar48;
                    *pplVar51 = plVar95;
                    pplVar51 = pplVar51 + -4;
                  } while (pplVar69 != (long **)0x0);
                  if (pplVar100 == pplVar50) goto LAB_00141a58;
                  if (((ulong)pplVar100 & 0x18) == 0) {
                    pplVar88 = (long **)((long)pplVar88 - (long)pplVar50);
                    pplVar71 = (long **)((long)pplVar71 - (long)pplVar50);
                    goto LAB_00141a40;
                  }
                }
                puVar84 = (undefined8 *)((long)pplVar71 - (long)pplVar50);
                pplVar69 = (long **)((ulong)pplVar100 & 0xfffffffffffffff8);
                pplVar71 = (long **)((long)pplVar71 - (long)pplVar69);
                puVar91 = (undefined8 *)((long)uStack_2b8 + ((long)puVar84 - (long)pplVar82));
                lVar80 = (long)pplVar50 - (long)pplVar69;
                do {
                  puVar84 = puVar84 + -1;
                  puVar91 = puVar91 + -1;
                  lVar80 = lVar80 + 8;
                  *puVar91 = *puVar84;
                } while (lVar80 != 0);
                if (pplVar100 == pplVar69) goto LAB_00141a58;
                pplVar88 = (long **)((long)pplVar88 - (long)pplVar69);
              }
LAB_00141a40:
              do {
                pplVar88 = (long **)((long)pplVar88 + -1);
                pplVar71 = (long **)((long)pplVar71 + -1);
                *(undefined *)pplVar88 = *(undefined *)pplVar71;
                pplVar70 = pplVar77;
              } while (pplVar71 != pplVar82);
            }
LAB_00141a58:
            uStack_2b8 = (long **)((long)uStack_2b8 + (long)unaff_x24);
            pplVar71 = local_2c0;
            if (pplVar70 != (long **)0x0) {
              free(pplVar70);
            }
          }
          unaff_x27 = (long **)((ulong)paVar72 >> 7);
          bVar28 = (long **)0x7f < (ulong)paVar72;
          paVar72 = (long)unaff_x27;
        } while (bVar28);
        local_2c0 = pplVar71;
        FUN_VMExecMain((long)local_4f0,(astruct *)&local_2e0,(long)local_508);
        uVar87 = 0xcbf29ce484222325;
        if (sVar17 != 0) {
          lVar80 = 0;
          iVar31 = 0;
          do {
            pcVar42 = (char *)(*(long *)(lVar91 + 8) + ((ulong)local_530 & 0xffffffff) + lVar80);
            iVar31 = iVar31 + 1;
            lVar80 = (long)iVar31;
            uVar87 = uVar87 * 0x100000001b3 ^ (long)*pcVar42;
          } while (sVar17 != iVar31);
        }
        uVar58 = (uint)local_498;
        if ((long **)(uVar87 ^ (long)*(int *)(*(long *)(lVar91 + 8) +
                                             ((ulong)local_4d0 & 0xffffffff))) != local_490) {
          uVar58 = (uint)local_4b0;
        }
        if (local_2c8 != (long **)0x0) {
          free();
        }
        plVar95 = local_2e0;
        if (local_2e0 != (long *)0x0) {
LAB_00141b00:
          free(plVar95);
        }
LAB_00141b04:
        uVar58 = uVar58 ^ uVar111 ^ 0xffffffff;
        goto LAB_001395ac;
      }
      if (uVar86 == 0x32dccf2b) {
        lVar91 = *(long *)(local_470 + 8);
        uVar115 = *(uint *)(lVar91 + 0x10);
        uVar86 = *(uint *)(lVar91 + 0x14);
        lVar80 = *(long *)(lVar91 + 8);
        uVar96 = *(uint *)(lVar80 + (ulong)uVar86);
        unaff_x27 = (long **)(ulong)uVar96;
        uVar58 = uVar86 + 0x10;
        *(uint *)(lVar91 + 0x14) = uVar86 + 4;
        uVar113 = *(uint *)(lVar80 + (ulong)(uVar86 + 4));
        *(uint *)(lVar91 + 0x14) = uVar86 + 0xc;
        iVar31 = (uVar58 | 8) + (~uVar86 | 0xfffffff7) + (uVar86 & 8) * 2;
        uVar112 = *(uint *)(lVar80 + (ulong)(uVar86 + 0xc));
        *(uint *)(lVar91 + 0x14) = uVar58;
        uVar86 = iVar31 + 1;
        uVar111 = iVar31 + 5;
        uVar87 = *(ulong *)(lVar80 + (ulong)uVar58);
        *(uint *)(lVar91 + 0x14) = uVar86;
        uVar58 = *(uint *)(lVar80 + (ulong)uVar86);
        *(uint *)(lVar91 + 0x14) = uVar111;
        iVar31 = uVar86 + (uVar111 | 2) + (-iVar31 - 6U | 2);
        sVar17 = *(short *)(lVar80 + (ulong)uVar111);
        uVar113 = uVar113 ^ uVar115 ^ 0xffffffff;
        uVar86 = 0;
        if (uVar115 != 0) {
          uVar86 = uVar113 / uVar115;
        }
        *(uint *)(lVar91 + 0x14) = iVar31 + 5U;
        uVar112 = uVar112 ^ uVar115 ^ 0xffffffff;
        uVar58 = uVar58 ^ uVar115 ^ 0xffffffff;
        uVar111 = *(uint *)(lVar80 + (ulong)(iVar31 + 5U));
        *(uint *)(lVar91 + 0x14) = iVar31 + 9U;
        uVar94 = *(uint *)(lVar80 + (ulong)(iVar31 + 9U));
        *(int *)(lVar91 + 0x14) = iVar31 + 0xd;
        uVar111 = uVar111 ^ uVar115 ^ 0xffffffff;
        uVar94 = uVar94 ^ uVar115 ^ 0xffffffff;
        uVar101 = 0;
        if (uVar115 != 0) {
          uVar101 = uVar112 / uVar115;
        }
        iVar31 = *(int *)(lVar80 + (ulong)(uVar113 - uVar86 * uVar115));
        uVar86 = 0;
        if (uVar115 != 0) {
          uVar86 = uVar58 / uVar115;
        }
        unaff_x24 = (long **)(ulong)(uVar112 - uVar101 * uVar115);
        uVar113 = 0;
        if (uVar115 != 0) {
          uVar113 = uVar111 / uVar115;
        }
        uVar58 = uVar58 - uVar86 * uVar115;
        uVar86 = 0;
        if (uVar115 != 0) {
          uVar86 = uVar94 / uVar115;
        }
        uVar111 = uVar111 - uVar113 * uVar115;
        uVar94 = uVar94 - uVar86 * uVar115;
        if (iVar31 == -1) {
          iVar31 = 0x16;
          local_464 = uVar44;
        }
        else {
          local_464 = uVar44;
          piVar34 = (int *)func_0x0016a250(1,0x418);
          if (piVar34 != (int *)0x0) {
            uVar96 = uVar96 ^ uVar115 ^ 0xffffffff;
            uVar86 = 0;
            if (uVar115 != 0) {
              uVar86 = uVar96 / uVar115;
            }
            *(int **)(piVar34 + 0x102) = piVar34 + 1;
            *(int **)(piVar34 + 0x104) = piVar34 + 1;
            *piVar34 = iVar31;
            uVar81 = 0xcbf29ce484222325;
            *(int **)(lVar80 + (ulong)(uVar96 - uVar86 * uVar115)) = piVar34;
            if (sVar17 != 0) {
              lVar80 = 0;
              iVar31 = 0;
              do {
                pcVar42 = (char *)(*(long *)(lVar91 + 8) + (ulong)uVar58 + lVar80);
                iVar31 = iVar31 + 1;
                lVar80 = (long)iVar31;
                uVar81 = uVar81 * 0x100000001b3 ^ (long)*pcVar42;
              } while (sVar17 != iVar31);
            }
            uVar47 = (ulong)*(int *)(*(long *)(lVar91 + 8) + (long)unaff_x24);
            if (-((uVar81 | uVar47 ^ 0xffffffffffffffff) + (uVar47 | uVar81 ^ 0xffffffffffffffff)) -
                2 != uVar87) {
              uVar111 = uVar94;
            }
            puVar91 = (undefined8 *)(ulong)uVar111;
            pplVar82 = (long **)(ulong)local_464;
            goto LAB_0012ecfc;
          }
          piVar34 = (int *)func_0x0016a0b0();
          iVar31 = *piVar34;
        }
        *local_4b8 = iVar31;
        uVar81 = 0xcbf29ce484222325;
        if (sVar17 != 0) {
          lVar91 = 0;
          iVar31 = 0;
          do {
            pcVar42 = (char *)(lVar80 + (ulong)uVar58 + lVar91);
            iVar31 = iVar31 + 1;
            lVar91 = (long)iVar31;
            uVar81 = uVar81 * 0x100000001b3 ^ (long)*pcVar42;
          } while (sVar17 != iVar31);
        }
        uVar47 = (ulong)*(int *)(lVar80 + (long)unaff_x24);
        if (((uVar81 | uVar47 ^ 0xffffffffffffffff) + (uVar47 & (uVar81 ^ 0xffffffffffffffff)) * 2)
            - (uVar47 | uVar81 ^ 0xffffffffffffffff) !=
            (uVar87 << 1 | 2) + (uVar87 ^ 1) + (uVar87 << 1 ^ 0xfffffffffffffffc) + 2) {
          uVar111 = uVar94;
        }
        puVar91 = (undefined8 *)(ulong)uVar111;
        pplVar82 = (long **)(ulong)local_464;
        goto LAB_0012ecfc;
      }
      uVar58 = local_604;
      if (uVar86 == 0x35d73ef5) goto LAB_0012ed04;
      if (uVar86 == 0x35e91c8f) {
        lVar91 = *(long *)(local_470 + 8);
        uVar111 = *(uint *)(lVar91 + 0x10);
        uVar58 = *(uint *)(lVar91 + 0x14) + 4;
        uVar86 = uVar58 & 8;
        iVar31 = (uVar58 ^ 8) + ~uVar86 + (uVar86 | (uVar86 >> 3) << 4);
        lVar80 = *(long *)(lVar91 + 8);
        uVar86 = iVar31 + 5;
        uVar44 = iVar31 + 1;
        uVar113 = *(uint *)(lVar80 + (ulong)*(uint *)(lVar91 + 0x14));
        *(uint *)(lVar91 + 0x14) = uVar58;
        uVar87 = *(ulong *)(lVar80 + (ulong)uVar58);
        *(uint *)(lVar91 + 0x14) = uVar44;
        iVar31 = ((uVar86 ^ 0xffffffff) & 0xfffffffd) + (uVar44 & 2) + (uVar86 * 2 | 4);
        uVar44 = *(uint *)(lVar80 + (ulong)uVar44);
        *(uint *)(lVar91 + 0x14) = uVar86;
        sVar17 = *(short *)(lVar80 + (ulong)uVar86);
        *(uint *)(lVar91 + 0x14) = iVar31 + 1U;
        uVar58 = *(uint *)(lVar80 + (ulong)(iVar31 + 1U));
        *(uint *)(lVar91 + 0x14) = iVar31 + 5U;
        uVar96 = *(uint *)(lVar80 + (ulong)(iVar31 + 5U));
        *(uint *)(lVar91 + 0x14) = iVar31 + 9U;
        uVar86 = *(uint *)(lVar80 + (ulong)(iVar31 + 9U));
        *(int *)(lVar91 + 0x14) = iVar31 + 0xd;
        uVar86 = uVar86 ^ uVar111 ^ 0xffffffff;
        uVar112 = 0;
        if (uVar111 != 0) {
          uVar112 = uVar86 / uVar111;
        }
        unaff_x27 = (long **)(ulong)(uVar86 - uVar112 * uVar111);
        func_0x0016a000(*(undefined8 *)(lVar80 + (long)unaff_x27));
        *(undefined8 *)(*(long *)(lVar91 + 8) + (long)unaff_x27) = 0;
        uVar81 = 0xcbf29ce484222325;
        if (sVar17 != 0) {
          uVar44 = uVar44 ^ uVar111 ^ 0xffffffff;
          lVar80 = 0;
          iVar31 = 0;
          uVar86 = 0;
          if (uVar111 != 0) {
            uVar86 = uVar44 / uVar111;
          }
          uVar81 = 0xcbf29ce484222325;
          do {
            pcVar42 = (char *)(*(long *)(lVar91 + 8) + (ulong)(uVar44 - uVar86 * uVar111) + lVar80);
            iVar31 = iVar31 + 1;
            lVar80 = (long)iVar31;
            uVar81 = uVar81 * 0x100000001b3 ^ (long)*pcVar42;
          } while (sVar17 != iVar31);
        }
        uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
        uVar86 = 0;
        if (uVar111 != 0) {
          uVar86 = uVar113 / uVar111;
        }
        uVar47 = (ulong)*(int *)(*(long *)(lVar91 + 8) + (ulong)(uVar113 - uVar86 * uVar111));
        uVar81 = (uVar47 + ~(uVar81 & uVar47)) - (uVar47 | uVar81 ^ 0xffffffffffffffff);
        goto LAB_0012ecdc;
      }
    }
    else {
      if (0x3cc360c2 < (int)uVar86) {
        uVar58 = local_5b8;
        if ((uVar86 != 0x3cc360c3) && (uVar58 = local_600, uVar86 != 0x3d382541)) {
          if (uVar86 == 0x3dafd8cf) {
            lVar91 = *(long *)(local_470 + 8);
            uVar111 = *(uint *)(lVar91 + 0x10);
            lVar80 = *(long *)(lVar91 + 8);
            uVar58 = *(uint *)(lVar91 + 0x14) + 4;
            uVar101 = *(uint *)(lVar80 + (ulong)*(uint *)(lVar91 + 0x14));
            *(uint *)(lVar91 + 0x14) = uVar58;
            iVar31 = (uVar58 | 8) + (uVar58 | 0xfffffff7);
            uVar87 = *(ulong *)(lVar80 + (ulong)uVar58);
            uVar58 = iVar31 + 0xd;
            uVar86 = iVar31 + 9;
            *(uint *)(lVar91 + 0x14) = uVar86;
            uVar94 = *(uint *)(lVar80 + (ulong)uVar86);
            *(uint *)(lVar91 + 0x14) = uVar58;
            uVar86 = (uVar58 * 2 | 5) + (uVar58 ^ 0xfffffffd);
            sVar17 = *(short *)(lVar80 + (ulong)uVar58);
            *(uint *)(lVar91 + 0x14) = uVar86;
            uVar58 = *(uint *)(lVar80 + (ulong)uVar86);
            *(uint *)(lVar91 + 0x14) = uVar86 + 4;
            uVar96 = *(uint *)(lVar80 + (ulong)(uVar86 + 4));
            *(uint *)(lVar91 + 0x14) = uVar86 + 8;
            uVar112 = *(uint *)(lVar80 + (ulong)(uVar86 + 8));
            unaff_x27 = (long **)(ulong)uVar112;
            *(uint *)(lVar91 + 0x14) = uVar86 + 0xc;
            uVar115 = *(uint *)(lVar80 + (ulong)(uVar86 + 0xc));
            *(uint *)(lVar91 + 0x14) = uVar86 + 0x10;
            uVar113 = *(uint *)(lVar80 + (ulong)(uVar86 + 0x10));
            *(uint *)(lVar91 + 0x14) = uVar86 + 0x14;
            uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
            uVar86 = 0;
            if (uVar111 != 0) {
              uVar86 = uVar113 / uVar111;
            }
            _local_1a0 = (long *)0x0;
            local_2e0 = (long *)0x0;
            local_464 = uVar44;
            lVar80 = func_0x0016962c(&local_1a0,&local_2e0,
                                     *(undefined8 *)(lVar80 + (ulong)(uVar113 - uVar86 * uVar111)));
            if ((0 < lVar80) && (*(char *)((long)_local_1a0 + lVar80 + -1) == '\n')) {
              *(undefined *)((long)_local_1a0 + lVar80 + -1) = 0;
              lVar80 = lVar80 + -1;
            }
            uVar112 = uVar112 ^ uVar111 ^ 0xffffffff;
            uVar115 = uVar115 ^ uVar111 ^ 0xffffffff;
            uVar86 = 0;
            if (uVar111 != 0) {
              uVar86 = uVar112 / uVar111;
            }
            uVar44 = 0;
            if (uVar111 != 0) {
              uVar44 = uVar115 / uVar111;
            }
            *(long **)(*(long *)(lVar91 + 8) + (ulong)(uVar112 - uVar86 * uVar111)) = _local_1a0;
            *(int *)(*(long *)(lVar91 + 8) + (ulong)(uVar115 - uVar44 * uVar111)) = (int)lVar80;
            uVar81 = 0xcbf29ce484222325;
            if (sVar17 != 0) {
              uVar94 = uVar94 ^ uVar111 ^ 0xffffffff;
              lVar80 = 0;
              iVar31 = 0;
              uVar86 = 0;
              if (uVar111 != 0) {
                uVar86 = uVar94 / uVar111;
              }
              uVar81 = 0xcbf29ce484222325;
              do {
                pcVar42 = (char *)(*(long *)(lVar91 + 8) + (ulong)(uVar94 - uVar86 * uVar111) +
                                  lVar80);
                iVar31 = iVar31 + 1;
                lVar80 = (long)iVar31;
                uVar81 = uVar81 * 0x100000001b3 ^ (long)*pcVar42;
              } while (sVar17 != iVar31);
            }
            uVar101 = uVar101 ^ uVar111 ^ 0xffffffff;
            uVar86 = 0;
            if (uVar111 != 0) {
              uVar86 = uVar101 / uVar111;
            }
            uVar47 = (ulong)*(int *)(*(long *)(lVar91 + 8) + (ulong)(uVar101 - uVar86 * uVar111));
            uVar81 = (uVar47 - uVar81) + (uVar81 & (uVar47 ^ 0xffffffffffffffff)) * 2;
LAB_00136b94:
            unaff_x24 = (long **)(long)sVar17;
            if (uVar81 != uVar87) {
              uVar58 = uVar96;
            }
            goto LAB_001395a8;
          }
          goto LAB_0013267c;
        }
        goto LAB_0012ed04;
      }
      if (uVar86 == 0x376470be) {
        lVar91 = *(long *)(local_470 + 8);
        uVar111 = *(uint *)(lVar91 + 0x10);
        uVar113 = *(uint *)(lVar91 + 0x14);
        lVar80 = *(long *)(lVar91 + 8);
        uVar58 = uVar113 + 8;
        uVar86 = *(uint *)(lVar80 + (ulong)uVar113);
        *(uint *)(lVar91 + 0x14) = uVar113 + 4;
        uVar33 = *(undefined4 *)(lVar80 + (ulong)(uVar113 + 4));
        *(uint *)(lVar91 + 0x14) = uVar58;
        uVar86 = uVar86 ^ uVar111 ^ 0xffffffff;
        pplVar82 = *(long ***)(lVar80 + (ulong)uVar58);
        uVar58 = ((uVar58 & 8 | ((uVar58 & 8) >> 3) << 4) - (uVar58 | 8)) + (uVar58 * 2 ^ 0x10);
        uVar113 = 0;
        if (uVar111 != 0) {
          uVar113 = uVar86 / uVar111;
        }
        uVar112 = uVar58 + 4;
        *(uint *)(lVar91 + 0x14) = uVar58;
        uVar30 = *(undefined4 *)(lVar80 + (ulong)uVar58);
        *(uint *)(lVar91 + 0x14) = uVar112;
        uVar58 = (uVar112 * 2 | 5) + (uVar112 ^ 0xfffffffd);
        sVar17 = *(short *)(lVar80 + (ulong)uVar112);
        unaff_x24 = (long **)(long)sVar17;
        *(uint *)(lVar91 + 0x14) = uVar58;
        uVar10 = *(undefined4 *)(lVar80 + (ulong)uVar58);
        *(uint *)(lVar91 + 0x14) = uVar58 + 4;
        uVar11 = *(undefined4 *)(lVar80 + (ulong)(uVar58 + 4));
        local_490 = (long **)CONCAT44(local_490._4_4_,uVar10);
        *(uint *)(lVar91 + 0x14) = uVar58 + 8;
        local_498 = (long **)CONCAT44(local_498._4_4_,uVar11);
        uVar112 = *(uint *)(lVar80 + (ulong)(uVar58 + 8));
        *(uint *)(lVar91 + 0x14) = uVar58 + 0xc;
        uVar112 = uVar112 ^ uVar111 ^ 0xffffffff;
        uVar96 = 0;
        if (uVar111 != 0) {
          uVar96 = uVar112 / uVar111;
        }
        local_4b0 = (long **)CONCAT44(local_4b0._4_4_,
                                      *(undefined4 *)(lVar80 + (ulong)(uVar58 + 0xc)));
        *(uint *)(lVar91 + 0x14) = uVar58 + 0x10;
        uVar115 = *(uint *)(lVar80 + (ulong)(uVar58 + 0x10));
        *(uint *)(lVar91 + 0x14) = uVar58 + 0x14;
        uVar49 = *(undefined8 *)(lVar80 + (ulong)(uVar86 - uVar113 * uVar111));
        unaff_x27 = *(long ***)(lVar80 + (ulong)(uVar112 - uVar96 * uVar111));
        local_464 = uVar44;
        uVar87 = func_0x0016a1a0(uVar49);
        pplVar100 = (long **)auStack_180;
        if (0xffffffffffffffef < uVar87) goto LAB_001424ac;
        local_4f0 = (long *)CONCAT44(local_4f0._4_4_,uVar33);
        local_508 = (undefined *)CONCAT44(local_508._4_4_,uVar30);
        local_4d0 = pplVar82;
        if (uVar87 < 0x17) {
          local_2e0 = (long *)CONCAT71(local_2e0._1_7_,(char)((int)uVar87 << 1));
          pplVar82 = local_570;
          if (uVar87 != 0) goto LAB_0013b440;
        }
        else {
          pplVar82 = (long **)malloc((uVar87 | 0xf) + 1);
          local_2e0 = (long *)((uVar87 | 0xf) + 2);
          bStack_2d0 = (byte)pplVar82;
          uStack_2cf = (undefined)((ulong)pplVar82 >> 8);
          uStack_2ce = (undefined2)((ulong)pplVar82 >> 0x10);
          iStack_2cc = (int)((ulong)pplVar82 >> 0x20);
          bStack_2d8 = (byte)uVar87;
          uStack_2d7 = (undefined)(uVar87 >> 8);
          uStack_2d6 = (undefined2)(uVar87 >> 0x10);
          iStack_2d4 = (int)(uVar87 >> 0x20);
LAB_0013b440:
          func_0x0016a0c0(pplVar82,uVar49,uVar87);
        }
        plVar48 = local_2e0;
        *(byte *)((long)pplVar82 + uVar87) = 0;
        local_530 = (long **)CONCAT44(iStack_2cc,
                                      CONCAT22(uStack_2ce,CONCAT11(uStack_2cf,bStack_2d0)));
        plVar95 = (long *)((ulong)local_2e0 >> 1 & 0x7f);
        pplVar82 = local_570;
        if (((ulong)local_2e0 & 1) != 0) {
          plVar95 = (long *)CONCAT44(iStack_2d4,CONCAT22(uStack_2d6,CONCAT11(uStack_2d7,bStack_2d8))
                                    );
          pplVar82 = local_530;
        }
        pplVar100 = (long **)FUN_0012d188(pplVar82,plVar95);
        pplVar88 = (long **)unaff_x27[1];
        if (pplVar88 == (long **)0x0) {
          pplVar77 = (long **)0x0;
          uVar58 = (uint)local_4f0;
          uVar86 = (uint)local_508;
          pplVar82 = local_4d0;
        }
        else {
          uVar49 = NEON_cnt(pplVar88,1);
          uVar103 = NEON_uaddlv(uVar49,1);
          uVar87 = CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar103) & 0xffffffff;
          if (uVar87 < 2) {
            pplVar71 = (long **)((ulong)((long)pplVar88 + -1) & (ulong)pplVar100);
          }
          else {
            pplVar71 = pplVar100;
            if (pplVar88 <= pplVar100) {
              uVar81 = 0;
              if (pplVar88 != (long **)0x0) {
                uVar81 = (ulong)pplVar100 / (ulong)pplVar88;
              }
              pplVar71 = (long **)((long)pplVar100 - uVar81 * (long)pplVar88);
            }
          }
          if ((long **)(*unaff_x27)[(long)pplVar71] == (long **)0x0) {
LAB_0013c824:
            pplVar77 = (long **)0x0;
          }
          else {
            pplVar77 = *(long ***)(long **)(*unaff_x27)[(long)pplVar71];
            if (pplVar77 != (long **)0x0) {
              if (uVar87 < 2) {
                do {
                  if (pplVar100 == (long **)pplVar77[1]) {
                    bVar102 = *(byte *)(pplVar77 + 2);
                    plVar39 = (long *)(ulong)(bVar102 >> 1);
                    if ((bVar102 & 1) != 0) {
                      plVar39 = pplVar77[3];
                    }
                    if (plVar39 == plVar95) {
                      if ((bVar102 & 1) == 0) {
                        if (bVar102 < 2) break;
                        plVar39 = (long *)0x0;
                        while (*(byte *)((long)pplVar77 + (long)plVar39 + 0x11) ==
                               *(byte *)((long)pplVar82 + (long)plVar39)) {
                          plVar39 = (long *)((long)plVar39 + 1);
                          if ((long *)(ulong)(bVar102 >> 1) == plVar39) goto LAB_0013c828;
                        }
                      }
                      else {
                        iVar31 = func_0x0016a2e0(pplVar77[4],pplVar82);
                        unaff_x27 = pplVar100;
                        if (iVar31 == 0) break;
                      }
                    }
                  }
                  else if ((long **)((ulong)pplVar77[1] & (ulong)((long)pplVar88 + -1)) != pplVar71)
                  goto LAB_0013c824;
                  pplVar77 = (long **)*pplVar77;
                } while (pplVar77 != (long **)0x0);
              }
              else {
                do {
                  pplVar70 = (long **)pplVar77[1];
                  if (pplVar100 == pplVar70) {
                    bVar102 = *(byte *)(pplVar77 + 2);
                    plVar39 = (long *)(ulong)(bVar102 >> 1);
                    if ((bVar102 & 1) != 0) {
                      plVar39 = pplVar77[3];
                    }
                    if (plVar39 == plVar95) {
                      if ((bVar102 & 1) == 0) {
                        if (bVar102 < 2) break;
                        plVar39 = (long *)0x0;
                        while (*(byte *)((long)pplVar77 + (long)plVar39 + 0x11) ==
                               *(byte *)((long)pplVar82 + (long)plVar39)) {
                          plVar39 = (long *)((long)plVar39 + 1);
                          if ((long *)(ulong)(bVar102 >> 1) == plVar39) goto LAB_0013c828;
                        }
                      }
                      else {
                        iVar31 = func_0x0016a2e0(pplVar77[4],pplVar82);
                        unaff_x27 = pplVar100;
                        if (iVar31 == 0) break;
                      }
                    }
                  }
                  else {
                    if (pplVar88 <= pplVar70) {
                      uVar87 = 0;
                      if (pplVar88 != (long **)0x0) {
                        uVar87 = (ulong)pplVar70 / (ulong)pplVar88;
                      }
                      pplVar70 = (long **)((long)pplVar70 - uVar87 * (long)pplVar88);
                    }
                    if (pplVar70 != pplVar71) goto LAB_0013c824;
                  }
                  pplVar77 = (long **)*pplVar77;
                } while (pplVar77 != (long **)0x0);
              }
            }
          }
LAB_0013c828:
          uVar58 = (uint)local_4f0;
          uVar86 = (uint)local_508;
          pplVar82 = local_4d0;
        }
        local_4d0 = pplVar82;
        if (((ulong)plVar48 & 1) != 0) {
          free(local_530);
        }
        uVar58 = uVar58 ^ uVar111 ^ 0xffffffff;
        uVar86 = uVar86 ^ uVar111 ^ 0xffffffff;
        uVar115 = uVar115 ^ uVar111 ^ 0xffffffff;
        uVar44 = 0;
        if (uVar111 != 0) {
          uVar44 = uVar58 / uVar111;
        }
        uVar113 = (uint)local_490 ^ uVar111 ^ 0xffffffff;
        uVar112 = (uint)local_498 ^ uVar111 ^ 0xffffffff;
        uVar96 = (uint)local_4b0 ^ uVar111 ^ 0xffffffff;
        uVar94 = 0;
        if (uVar111 != 0) {
          uVar94 = uVar86 / uVar111;
        }
        uVar58 = uVar58 - uVar44 * uVar111;
        uVar44 = 0;
        if (uVar111 != 0) {
          uVar44 = uVar113 / uVar111;
        }
        uVar86 = uVar86 - uVar94 * uVar111;
        uVar94 = 0;
        if (uVar111 != 0) {
          uVar94 = uVar112 / uVar111;
        }
        uVar101 = 0;
        if (uVar111 != 0) {
          uVar101 = uVar96 / uVar111;
        }
        uVar85 = 0;
        if (uVar111 != 0) {
          uVar85 = uVar115 / uVar111;
        }
        uVar96 = uVar96 - uVar101 * uVar111;
        uVar115 = uVar115 - uVar85 * uVar111;
        if (pplVar77 == (long **)0x0) {
          *(undefined4 *)(*(long *)(lVar91 + 8) + (ulong)uVar96) = 0;
          uVar87 = 0xcbf29ce484222325;
          *(undefined4 *)(*(long *)(lVar91 + 8) + (ulong)uVar115) = 0;
          if (sVar17 != 0) {
            lVar80 = 0;
            iVar31 = 0;
            do {
              pcVar42 = (char *)(*(long *)(lVar91 + 8) + (ulong)uVar86 + lVar80);
              iVar31 = iVar31 + 1;
              lVar80 = (long)iVar31;
              uVar87 = uVar87 * 0x100000001b3 ^ (long)*pcVar42;
            } while (sVar17 != iVar31);
          }
          uVar81 = (ulong)*(int *)(*(long *)(lVar91 + 8) + (ulong)uVar58);
          pplVar100 = (long **)((uVar87 ^ uVar81) + (uVar81 & (uVar87 ^ 0xffffffffffffffff)) +
                                (uVar87 | uVar81 ^ 0xffffffffffffffff) + 1);
        }
        else {
          *(undefined4 *)(*(long *)(lVar91 + 8) + (ulong)uVar96) = *(undefined4 *)(pplVar77 + 5);
          *(undefined4 *)(*(long *)(lVar91 + 8) + (ulong)uVar115) = 1;
          uVar87 = 0xcbf29ce484222325;
          if (sVar17 != 0) {
            lVar80 = 0;
            iVar31 = 0;
            do {
              pcVar42 = (char *)(*(long *)(lVar91 + 8) + (ulong)uVar86 + lVar80);
              iVar31 = iVar31 + 1;
              lVar80 = (long)iVar31;
              uVar87 = uVar87 * 0x100000001b3 ^ (long)*pcVar42;
            } while (sVar17 != iVar31);
          }
          pplVar100 = (long **)(uVar87 ^ (long)*(int *)(*(long *)(lVar91 + 8) + (ulong)uVar58));
        }
        pplVar82 = (long **)(ulong)local_464;
        uVar58 = uVar113 - uVar44 * uVar111;
        if (pplVar100 != pplVar82) {
          uVar58 = uVar112 - uVar94 * uVar111;
        }
        puVar91 = (undefined8 *)(ulong)uVar58;
        goto LAB_0012ecfc;
      }
      uVar58 = local_774;
      if (uVar86 == 0x37d5dbc8) goto LAB_0012ed04;
    }
  }
  else if ((int)uVar86 < 0x5f21598f) {
    if ((int)uVar86 < 0x4c6a9874) {
      if ((int)uVar86 < 0x436e5879) {
        if (0x40db31b2 < (int)uVar86) {
          if (uVar86 == 0x40db31b3) {
            lVar91 = *(long *)(local_470 + 8);
            uVar111 = *(uint *)(lVar91 + 0x10);
            uVar113 = *(uint *)(lVar91 + 0x14);
            lVar80 = *(long *)(lVar91 + 8);
            uVar58 = uVar113 + 8;
            uVar86 = *(uint *)(lVar80 + (ulong)uVar113);
            *(uint *)(lVar91 + 0x14) = uVar113 + 4;
            uVar113 = *(uint *)(lVar80 + (ulong)(uVar113 + 4));
            *(uint *)(lVar91 + 0x14) = uVar58;
            uVar86 = uVar86 ^ uVar111 ^ 0xffffffff;
            local_490 = *(long ***)(lVar80 + (ulong)uVar58);
            uVar112 = 0;
            if (uVar111 != 0) {
              uVar112 = uVar86 / uVar111;
            }
            uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
            uVar96 = ((uVar58 & 8 | ((uVar58 & 8) >> 3) << 4) - (uVar58 | 8)) + (uVar58 * 2 ^ 0x10);
            uVar58 = uVar96 + 4;
            *(uint *)(lVar91 + 0x14) = uVar96;
            uVar115 = *(uint *)(lVar80 + (ulong)uVar96);
            *(uint *)(lVar91 + 0x14) = uVar58;
            sVar17 = *(short *)(lVar80 + (ulong)uVar58);
            unaff_x27 = (long **)(long)sVar17;
            uVar115 = uVar115 ^ uVar111 ^ 0xffffffff;
            iVar31 = (uVar58 ^ 2) + uVar58 * 2 + (uVar96 * -2 - 10 | 4);
            *(uint *)(lVar91 + 0x14) = iVar31 + 2U;
            uVar58 = 0;
            if (uVar111 != 0) {
              uVar58 = uVar113 / uVar111;
            }
            uVar33 = *(undefined4 *)(lVar80 + (ulong)(iVar31 + 2U));
            *(uint *)(lVar91 + 0x14) = iVar31 + 6U;
            uVar30 = *(undefined4 *)(lVar80 + (ulong)(iVar31 + 6U));
            *(uint *)(lVar91 + 0x14) = iVar31 + 10U;
            local_498 = (long **)CONCAT44(local_498._4_4_,uVar33);
            local_4b0 = (long **)CONCAT44(local_4b0._4_4_,uVar30);
            uVar96 = *(uint *)(lVar80 + (ulong)(iVar31 + 10U));
            *(uint *)(lVar91 + 0x14) = iVar31 + 0xeU;
            uVar94 = *(uint *)(lVar80 + (ulong)(iVar31 + 0xeU));
            uVar96 = uVar96 ^ uVar111 ^ 0xffffffff;
            *(int *)(lVar91 + 0x14) = iVar31 + 0x12;
            uVar94 = uVar94 ^ uVar111 ^ 0xffffffff;
            uVar101 = 0;
            if (uVar111 != 0) {
              uVar101 = uVar96 / uVar111;
            }
            local_4d0 = (long **)CONCAT44(local_4d0._4_4_,uVar113 - uVar58 * uVar111);
            uVar58 = 0;
            if (uVar111 != 0) {
              uVar58 = uVar94 / uVar111;
            }
            paVar89 = *(astruct_1 **)(lVar80 + (ulong)(uVar96 - uVar101 * uVar111));
            plVar95 = (long *)paVar89->field11_0x20;
            uVar113 = 0;
            if (uVar111 != 0) {
              uVar113 = uVar115 / uVar111;
            }
            local_4f0 = (long *)CONCAT44(local_4f0._4_4_,
                                         *(undefined4 *)
                                          (lVar80 + (ulong)(uVar94 - uVar58 * uVar111)));
            local_508 = (undefined *)CONCAT44(local_508._4_4_,uVar115 - uVar113 * uVar111);
            uVar87 = *(long *)(lVar80 + (ulong)(uVar86 - uVar112 * uVar111)) << 3 | 5;
            local_464 = uVar44;
            do {
              plVar39 = paVar89->field10_0x18;
              plVar48 = (long *)((long)plVar95 - (long)plVar39);
              uVar47 = paVar89->field1_0x8 - paVar89->pStart;
              uVar81 = 0;
              if (uVar47 != 0) {
                uVar81 = (ulong)plVar48 / uVar47;
              }
              bVar102 = *(byte *)((long)plVar48 + (paVar89->pStart - uVar81 * uVar47)) ^
                        ((byte)uVar87 & 0x7f | (0x7f < uVar87) << 7);
              if (plVar95 < paVar89->field12_0x28) {
                *(byte *)plVar95 = bVar102;
                plVar79 = (long *)((long)plVar95 + 1);
              }
              else {
                pbVar98 = (byte *)((long)plVar48 + 1);
                if ((long)pbVar98 < 0) goto LAB_00142498;
                uVar81 = (long)paVar89->field12_0x28 - (long)plVar39;
                pbVar66 = (byte *)(uVar81 * 2);
                if (pbVar66 < pbVar98 || (long)pbVar66 - (long)pbVar98 == 0) {
                  pbVar66 = pbVar98;
                }
                if (0x3ffffffffffffffe < uVar81) {
                  pbVar66 = (byte *)0x7fffffffffffffff;
                }
                if (pbVar66 == (byte *)0x0) {
                  plVar38 = (long *)0x0;
                  *(byte *)plVar48 = bVar102;
                  plVar56 = plVar48;
                }
                else {
                  plVar38 = (long *)malloc(pbVar66);
                  plVar56 = (long *)((long)plVar38 + (long)plVar48);
                  *(byte *)plVar56 = bVar102;
                }
                plVar79 = (long *)((long)plVar56 + 1);
                if (plVar95 != plVar39) {
                  if ((plVar48 < (long *)0x8) || ((ulong)((long)plVar39 - (long)plVar38) < 0x20)) {
LAB_00136a40:
                    do {
                      plVar56 = (long *)((long)plVar56 + -1);
                      plVar95 = (long *)((long)plVar95 + -1);
                      *(byte *)plVar56 = *(byte *)plVar95;
                    } while (plVar95 != plVar39);
                  }
                  else if (plVar48 < (long *)0x20) {
                    plVar55 = (long *)0x0;
LAB_001369f0:
                    puVar84 = (undefined8 *)((long)plVar95 - (long)plVar55);
                    plVar76 = (long *)((ulong)plVar48 & 0xfffffffffffffff8);
                    plVar95 = (long *)((long)plVar95 - (long)plVar76);
                    puVar91 = (undefined8 *)((long)plVar38 + ((long)puVar84 - (long)plVar39));
                    lVar80 = (long)plVar55 - (long)plVar76;
                    do {
                      puVar84 = puVar84 + -1;
                      puVar91 = puVar91 + -1;
                      lVar80 = lVar80 + 8;
                      *puVar91 = *puVar84;
                    } while (lVar80 != 0);
                    if (plVar48 != plVar76) {
                      plVar56 = (long *)((long)plVar56 - (long)plVar76);
                      goto LAB_00136a40;
                    }
                  }
                  else {
                    plVar55 = (long *)((ulong)plVar48 & 0xffffffffffffffe0);
                    plVar65 = plVar95 + -2;
                    plVar75 = (long *)((byte *)((long)plVar38 + (long)plVar48) + -0x10);
                    plVar76 = plVar55;
                    do {
                      plVar23 = plVar65 + -1;
                      lVar60 = plVar65[-2];
                      lVar54 = plVar65[1];
                      lVar80 = *plVar65;
                      plVar76 = plVar76 + -4;
                      plVar65 = plVar65 + -4;
                      plVar75[-1] = *plVar23;
                      plVar75[-2] = lVar60;
                      plVar75[1] = lVar54;
                      *plVar75 = lVar80;
                      plVar75 = plVar75 + -4;
                    } while (plVar76 != (long *)0x0);
                    if (plVar48 != plVar55) {
                      if (((ulong)plVar48 & 0x18) == 0) {
                        plVar56 = (long *)((long)plVar56 - (long)plVar55);
                        plVar95 = (long *)((long)plVar95 - (long)plVar55);
                        goto LAB_00136a40;
                      }
                      goto LAB_001369f0;
                    }
                  }
                  plVar95 = paVar89->field10_0x18;
                  plVar56 = plVar38;
                }
                paVar89->field10_0x18 = plVar56;
                paVar89->field11_0x20 = (char *)plVar79;
                paVar89->field12_0x28 = (char *)((long)plVar38 + (long)pbVar66);
                if (plVar95 != (long *)0x0) {
                  free(plVar95);
                }
              }
              plVar95 = plVar79;
              paVar89->field11_0x20 = (char *)plVar95;
              bVar28 = 0x7f < uVar87;
              uVar87 = uVar87 >> 7;
            } while (bVar28);
            uVar58 = (uint)local_4f0 >> 8;
            uVar86 = (uint)local_4f0 >> 0x10;
            uVar44 = (uint)local_4f0 >> 0x18;
            unaff_x24 = (long **)(ulong)uVar44;
            vector_append_value(paVar89,(uint)local_4f0);
            vector_append_value(paVar89,uVar58);
            vector_append_value(paVar89,uVar86);
            vector_append_value(paVar89,uVar44);
            lVar80 = *(long *)(lVar91 + 8);
            uVar87 = 0xcbf29ce484222325;
            if (sVar17 != 0) {
              lVar91 = 0;
              iVar31 = 0;
              do {
                pcVar42 = (char *)(lVar80 + ((ulong)local_508 & 0xffffffff) + lVar91);
                iVar31 = iVar31 + 1;
                lVar91 = (long)iVar31;
                uVar87 = uVar87 * 0x100000001b3 ^ (long)*pcVar42;
              } while (sVar17 != iVar31);
            }
            goto LAB_00139344;
          }
          if (uVar86 == 0x41dd9710) {
            lVar80 = *(long *)(local_470 + 8);
            uVar44 = *(uint *)(lVar80 + 0x10);
            uVar111 = *(uint *)(lVar80 + 0x14);
            lVar91 = *(long *)(lVar80 + 8);
            uVar58 = uVar111 + 8;
            uVar86 = *(uint *)(lVar91 + (ulong)uVar111) ^ uVar44 ^ 0xffffffff;
            *(uint *)(lVar80 + 0x14) = uVar111 + 4;
            uVar113 = 0;
            if (uVar44 != 0) {
              uVar113 = uVar86 / uVar44;
            }
            iVar31 = ((uVar58 ^ 0xffffffff) & 0xfffffff7) + (uVar58 & 8) + (uVar58 * 2 | 0x10);
            uVar112 = *(uint *)(lVar91 + (ulong)(uVar111 + 4));
            *(uint *)(lVar80 + 0x14) = uVar58;
            uVar87 = *(ulong *)(lVar91 + (ulong)uVar58);
            *(uint *)(lVar80 + 0x14) = iVar31 + 1U;
            uVar111 = *(uint *)(lVar91 + (ulong)(iVar31 + 1U));
            *(uint *)(lVar80 + 0x14) = iVar31 + 5U;
            sVar17 = *(short *)(lVar91 + (ulong)(iVar31 + 5U));
            *(uint *)(lVar80 + 0x14) = iVar31 + 7U;
            uVar96 = *(uint *)(lVar91 + (ulong)(iVar31 + 7U));
            *(uint *)(lVar80 + 0x14) = iVar31 + 0xbU;
            uVar115 = *(uint *)(lVar91 + (ulong)(iVar31 + 0xbU));
            *(uint *)(lVar80 + 0x14) = iVar31 + 0xfU;
            uVar58 = *(uint *)(lVar91 + (ulong)(iVar31 + 0xfU));
            *(int *)(lVar80 + 0x14) = iVar31 + 0x13;
            uVar58 = uVar58 ^ uVar44 ^ 0xffffffff;
            uVar94 = 0;
            if (uVar44 != 0) {
              uVar94 = uVar58 / uVar44;
            }
            *(ulong *)(lVar91 + (ulong)(uVar86 - uVar113 * uVar44)) =
                 lVar91 + (ulong)(uVar58 - uVar94 * uVar44);
            uVar81 = 0xcbf29ce484222325;
            iVar31 = (int)sVar17;
            if (iVar31 != 0) {
              uVar111 = uVar111 ^ uVar44 ^ 0xffffffff;
              lVar91 = 0;
              iVar32 = 0;
              uVar58 = 0;
              if (uVar44 != 0) {
                uVar58 = uVar111 / uVar44;
              }
              uVar81 = 0xcbf29ce484222325;
              do {
                pcVar42 = (char *)(*(long *)(lVar80 + 8) + (ulong)(uVar111 - uVar58 * uVar44) +
                                  lVar91);
                iVar32 = iVar32 + 1;
                lVar91 = (long)iVar32;
                uVar81 = uVar81 * 0x100000001b3 ^ (long)*pcVar42;
              } while (iVar31 != iVar32);
            }
            uVar112 = uVar112 ^ uVar44 ^ 0xffffffff;
            uVar58 = 0;
            if (uVar44 != 0) {
              uVar58 = uVar112 / uVar44;
            }
            uVar81 = uVar81 ^ (long)*(int *)(*(long *)(lVar80 + 8) +
                                            (ulong)(uVar112 - uVar58 * uVar44));
            goto LAB_001385cc;
          }
          if (uVar86 != 0x42dfd966) goto LAB_0013267c;
          lVar91 = *(long *)(local_470 + 8);
          uVar111 = *(uint *)(lVar91 + 0x10);
          lVar80 = *(long *)(lVar91 + 8);
          uVar58 = *(uint *)(lVar91 + 0x14) + 4;
          uVar44 = *(uint *)(lVar80 + (ulong)*(uint *)(lVar91 + 0x14));
          *(uint *)(lVar91 + 0x14) = uVar58;
          uVar87 = *(ulong *)(lVar80 + (ulong)uVar58);
          uVar86 = (uVar58 * 2 | 0x11) + (uVar58 ^ 0xfffffff7);
          *(uint *)(lVar91 + 0x14) = uVar86;
          uVar94 = *(uint *)(lVar80 + (ulong)uVar86);
          *(uint *)(lVar91 + 0x14) = uVar86 + 4;
          sVar17 = *(short *)(lVar80 + (ulong)(uVar86 + 4));
          unaff_x24 = (long **)(long)sVar17;
          *(uint *)(lVar91 + 0x14) = uVar86 + 6;
          uVar58 = *(uint *)(lVar80 + (ulong)(uVar86 + 6));
          *(uint *)(lVar91 + 0x14) = uVar86 + 10;
          uVar96 = *(uint *)(lVar80 + (ulong)(uVar86 + 10));
          *(uint *)(lVar91 + 0x14) = uVar86 + 0xe;
          uVar113 = *(uint *)(lVar80 + (ulong)(uVar86 + 0xe));
          *(uint *)(lVar91 + 0x14) = uVar86 + 0x12;
          uVar112 = *(uint *)(lVar80 + (ulong)(uVar86 + 0x12));
          *(uint *)(lVar91 + 0x14) = uVar86 + 0x16;
          uVar115 = *(uint *)(lVar80 + (ulong)(uVar86 + 0x16));
          uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
          *(uint *)(lVar91 + 0x14) = uVar86 + 0x1a;
          uVar112 = uVar112 ^ uVar111 ^ 0xffffffff;
          uVar86 = 0;
          if (uVar111 != 0) {
            uVar86 = uVar113 / uVar111;
          }
          uVar115 = uVar115 ^ uVar111 ^ 0xffffffff;
          uVar101 = 0;
          if (uVar111 != 0) {
            uVar101 = uVar112 / uVar111;
          }
          uVar85 = 0;
          if (uVar111 != 0) {
            uVar85 = uVar115 / uVar111;
          }
          func_0x0016a080(lVar80 + (ulong)(uVar115 - uVar85 * uVar111),
                          *(undefined8 *)(lVar80 + (ulong)(uVar113 - uVar86 * uVar111)),
                          (long)*(int *)(lVar80 + (ulong)(uVar112 - uVar101 * uVar111)));
          lVar80 = *(long *)(lVar91 + 8);
          uVar81 = 0xcbf29ce484222325;
          if (sVar17 != 0) {
            uVar94 = uVar94 ^ uVar111 ^ 0xffffffff;
            lVar91 = 0;
            iVar31 = 0;
            uVar86 = 0;
            if (uVar111 != 0) {
              uVar86 = uVar94 / uVar111;
            }
            uVar81 = 0xcbf29ce484222325;
            do {
              pcVar42 = (char *)(lVar80 + (ulong)(uVar94 - uVar86 * uVar111) + lVar91);
              iVar31 = iVar31 + 1;
              lVar91 = (long)iVar31;
              uVar81 = uVar81 * 0x100000001b3 ^ (long)*pcVar42;
            } while (sVar17 != iVar31);
          }
          goto LAB_00132d30;
        }
        if (uVar86 == 0x3f44a7f1) {
          lVar91 = *(long *)(local_470 + 8);
          uVar111 = *(uint *)(lVar91 + 0x10);
          uVar113 = *(uint *)(lVar91 + 0x14);
          lVar80 = *(long *)(lVar91 + 8);
          uVar58 = uVar113 + 8;
          uVar86 = *(uint *)(lVar80 + (ulong)uVar113);
          *(uint *)(lVar91 + 0x14) = uVar113 + 4;
          uVar113 = *(uint *)(lVar80 + (ulong)(uVar113 + 4));
          *(uint *)(lVar91 + 0x14) = uVar58;
          uVar86 = uVar86 ^ uVar111 ^ 0xffffffff;
          local_490 = *(long ***)(lVar80 + (ulong)uVar58);
          uVar112 = 0;
          if (uVar111 != 0) {
            uVar112 = uVar86 / uVar111;
          }
          iVar31 = (uVar58 ^ 0xfffffff7) + (uVar58 * 2 | 0x10);
          uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
          uVar58 = iVar31 + 1;
          uVar96 = iVar31 + 5;
          *(uint *)(lVar91 + 0x14) = uVar58;
          uVar115 = *(uint *)(lVar80 + (ulong)uVar58);
          *(uint *)(lVar91 + 0x14) = uVar96;
          sVar17 = *(short *)(lVar80 + (ulong)uVar96);
          iVar31 = (uVar96 ^ 2) + uVar96 * 2 + (uVar58 * -2 - 10 | 4);
          uVar115 = uVar115 ^ uVar111 ^ 0xffffffff;
          *(uint *)(lVar91 + 0x14) = iVar31 + 2U;
          uVar58 = 0;
          if (uVar111 != 0) {
            uVar58 = uVar113 / uVar111;
          }
          uVar33 = *(undefined4 *)(lVar80 + (ulong)(iVar31 + 2U));
          *(uint *)(lVar91 + 0x14) = iVar31 + 6U;
          uVar30 = *(undefined4 *)(lVar80 + (ulong)(iVar31 + 6U));
          *(uint *)(lVar91 + 0x14) = iVar31 + 10U;
          local_498 = (long **)CONCAT44(local_498._4_4_,uVar33);
          local_4b0 = (long **)CONCAT44(local_4b0._4_4_,uVar30);
          uVar96 = *(uint *)(lVar80 + (ulong)(iVar31 + 10U));
          *(uint *)(lVar91 + 0x14) = iVar31 + 0xeU;
          uVar94 = *(uint *)(lVar80 + (ulong)(iVar31 + 0xeU));
          uVar96 = uVar96 ^ uVar111 ^ 0xffffffff;
          *(int *)(lVar91 + 0x14) = iVar31 + 0x12;
          uVar94 = uVar94 ^ uVar111 ^ 0xffffffff;
          uVar101 = 0;
          if (uVar111 != 0) {
            uVar101 = uVar96 / uVar111;
          }
          local_4d0 = (long **)CONCAT44(local_4d0._4_4_,uVar113 - uVar58 * uVar111);
          uVar58 = 0;
          if (uVar111 != 0) {
            uVar58 = uVar94 / uVar111;
          }
          uVar113 = 0;
          if (uVar111 != 0) {
            uVar113 = uVar115 / uVar111;
          }
          paVar89 = *(astruct_1 **)(lVar80 + (ulong)(uVar94 - uVar58 * uVar111));
          local_4f0 = *(long **)(lVar80 + (ulong)(uVar96 - uVar101 * uVar111));
          plVar95 = (long *)paVar89->field11_0x20;
          local_508 = (undefined *)CONCAT44(local_508._4_4_,uVar115 - uVar113 * uVar111);
          uVar87 = *(long *)(lVar80 + (ulong)(uVar86 - uVar112 * uVar111)) << 3 | 1;
          local_464 = uVar44;
          do {
            plVar48 = paVar89->field10_0x18;
            plVar39 = (long *)((long)plVar95 - (long)plVar48);
            uVar47 = paVar89->field1_0x8 - paVar89->pStart;
            uVar81 = 0;
            if (uVar47 != 0) {
              uVar81 = (ulong)plVar39 / uVar47;
            }
            bVar102 = *(byte *)((long)plVar39 + (paVar89->pStart - uVar81 * uVar47)) ^
                      ((byte)uVar87 & 0x7f | (0x7f < uVar87) << 7);
            if (plVar95 < paVar89->field12_0x28) {
              *(byte *)plVar95 = bVar102;
              plVar79 = (long *)((long)plVar95 + 1);
            }
            else {
              pbVar98 = (byte *)((long)plVar39 + 1);
              if ((long)pbVar98 < 0) goto LAB_00142498;
              uVar81 = (long)paVar89->field12_0x28 - (long)plVar48;
              pbVar66 = (byte *)(uVar81 * 2);
              if (pbVar66 < pbVar98 || (long)pbVar66 - (long)pbVar98 == 0) {
                pbVar66 = pbVar98;
              }
              if (0x3ffffffffffffffe < uVar81) {
                pbVar66 = (byte *)0x7fffffffffffffff;
              }
              if (pbVar66 == (byte *)0x0) {
                plVar38 = (long *)0x0;
                *(byte *)plVar39 = bVar102;
                plVar56 = plVar39;
              }
              else {
                plVar38 = (long *)malloc(pbVar66);
                plVar56 = (long *)((long)plVar38 + (long)plVar39);
                *(byte *)plVar56 = bVar102;
              }
              plVar79 = (long *)((long)plVar56 + 1);
              if (plVar95 != plVar48) {
                if ((plVar39 < (long *)0x8) || ((ulong)((long)plVar48 - (long)plVar38) < 0x20)) {
LAB_00133f08:
                  do {
                    plVar56 = (long *)((long)plVar56 + -1);
                    plVar95 = (long *)((long)plVar95 + -1);
                    *(byte *)plVar56 = *(byte *)plVar95;
                  } while (plVar95 != plVar48);
                }
                else if (plVar39 < (long *)0x20) {
                  plVar55 = (long *)0x0;
LAB_00133eb8:
                  puVar84 = (undefined8 *)((long)plVar95 - (long)plVar55);
                  plVar76 = (long *)((ulong)plVar39 & 0xfffffffffffffff8);
                  plVar95 = (long *)((long)plVar95 - (long)plVar76);
                  puVar91 = (undefined8 *)((long)plVar38 + ((long)puVar84 - (long)plVar48));
                  lVar80 = (long)plVar55 - (long)plVar76;
                  do {
                    puVar84 = puVar84 + -1;
                    puVar91 = puVar91 + -1;
                    lVar80 = lVar80 + 8;
                    *puVar91 = *puVar84;
                  } while (lVar80 != 0);
                  if (plVar39 != plVar76) {
                    plVar56 = (long *)((long)plVar56 - (long)plVar76);
                    goto LAB_00133f08;
                  }
                }
                else {
                  plVar55 = (long *)((ulong)plVar39 & 0xffffffffffffffe0);
                  plVar65 = plVar95 + -2;
                  plVar75 = (long *)((byte *)((long)plVar38 + (long)plVar39) + -0x10);
                  plVar76 = plVar55;
                  do {
                    plVar23 = plVar65 + -1;
                    lVar60 = plVar65[-2];
                    lVar54 = plVar65[1];
                    lVar80 = *plVar65;
                    plVar76 = plVar76 + -4;
                    plVar65 = plVar65 + -4;
                    plVar75[-1] = *plVar23;
                    plVar75[-2] = lVar60;
                    plVar75[1] = lVar54;
                    *plVar75 = lVar80;
                    plVar75 = plVar75 + -4;
                  } while (plVar76 != (long *)0x0);
                  if (plVar39 != plVar55) {
                    if (((ulong)plVar39 & 0x18) == 0) {
                      plVar56 = (long *)((long)plVar56 - (long)plVar55);
                      plVar95 = (long *)((long)plVar95 - (long)plVar55);
                      goto LAB_00133f08;
                    }
                    goto LAB_00133eb8;
                  }
                }
                plVar95 = paVar89->field10_0x18;
                plVar56 = plVar38;
              }
              paVar89->field10_0x18 = plVar56;
              paVar89->field11_0x20 = (char *)plVar79;
              paVar89->field12_0x28 = (char *)((long)plVar38 + (long)pbVar66);
              if (plVar95 != (long *)0x0) {
                free(plVar95);
              }
            }
            plVar95 = plVar79;
            plVar48 = local_4f0;
            paVar89->field11_0x20 = (char *)plVar95;
            bVar28 = 0x7f < uVar87;
            uVar87 = uVar87 >> 7;
          } while (bVar28);
          unaff_x24 = (long **)((ulong)local_4f0 >> 0x18);
          unaff_x27 = (long **)((ulong)local_4f0 >> 0x30);
          vector_append_value(paVar89,(uint)local_4f0);
          vector_append_value(paVar89,(uint)((ulong)plVar48 >> 8));
          vector_append_value(paVar89,(uint)((ulong)plVar48 >> 0x10));
          vector_append_value(paVar89,(uint)((ulong)plVar48 >> 0x18));
          uVar58 = (uint)((ulong)plVar48 >> 0x20);
          vector_append_value(paVar89,uVar58);
          vector_append_value(paVar89,uVar58 >> 8);
          vector_append_value(paVar89,(uint)(ushort)((ulong)plVar48 >> 0x30));
          vector_append_value(paVar89,(uint)(byte)((ulong)plVar48 >> 0x38));
          lVar80 = *(long *)(lVar91 + 8);
          uVar87 = 0xcbf29ce484222325;
          if (sVar17 != 0) {
            lVar91 = 0;
            iVar31 = 0;
            do {
              pcVar42 = (char *)(lVar80 + ((ulong)local_508 & 0xffffffff) + lVar91);
              iVar31 = iVar31 + 1;
              lVar91 = (long)iVar31;
              uVar87 = uVar87 * 0x100000001b3 ^ (long)*pcVar42;
            } while (sVar17 != iVar31);
          }
LAB_00139344:
          pplVar82 = (long **)(uVar87 ^ (long)*(int *)(lVar80 + ((ulong)local_4d0 & 0xffffffff)));
LAB_00139350:
          bVar28 = pplVar82 == local_490;
          uVar58 = (uint)local_498;
          uVar86 = (uint)local_4b0;
          goto LAB_001395a4;
        }
        uVar58 = local_7b4;
        if (uVar86 != 0x40c1bcb7) goto LAB_0013267c;
        goto LAB_0012ed04;
      }
      if ((int)uVar86 < 0x456f184e) {
        if (uVar86 == 0x436e5879) {
          unaff_x27 = *(long ***)(local_470 + 8);
          uVar113 = *(uint *)(unaff_x27 + 2);
          uVar111 = *(uint *)((long)unaff_x27 + 0x14);
          plVar95 = unaff_x27[1];
          uVar86 = *(uint *)((long)plVar95 + (ulong)uVar111);
          *(uint *)((long)unaff_x27 + 0x14) = uVar111 + 4;
          uVar58 = uVar111 + 0x10;
          unaff_x24 = *(long ***)((long)plVar95 + (ulong)(uVar111 + 4));
          *(uint *)((long)unaff_x27 + 0x14) = uVar111 + 0xc;
          uVar86 = uVar86 ^ uVar113 ^ 0xffffffff;
          uVar111 = *(uint *)((long)plVar95 + (ulong)(uVar111 + 0xc));
          *(uint *)((long)unaff_x27 + 0x14) = uVar58;
          sVar17 = *(short *)((long)plVar95 + (ulong)uVar58);
          uVar112 = 0;
          if (uVar113 != 0) {
            uVar112 = uVar86 / uVar113;
          }
          uVar111 = uVar111 ^ uVar113 ^ 0xffffffff;
          iVar31 = (uVar58 ^ 0xfffffffd) + (uVar58 * 2 | 4);
          *(uint *)((long)unaff_x27 + 0x14) = iVar31 + 1U;
          uVar58 = *(uint *)((long)plVar95 + (ulong)(iVar31 + 1U)) ^ uVar113 ^ 0xffffffff;
          *(uint *)((long)unaff_x27 + 0x14) = iVar31 + 5U;
          uVar96 = 0;
          if (uVar113 != 0) {
            uVar96 = uVar111 / uVar113;
          }
          uVar86 = uVar86 - uVar112 * uVar113;
          uVar112 = *(uint *)((long)plVar95 + (ulong)(iVar31 + 5U));
          *(uint *)((long)unaff_x27 + 0x14) = iVar31 + 9U;
          uVar112 = uVar112 ^ uVar113 ^ 0xffffffff;
          uVar85 = *(uint *)((long)plVar95 + (ulong)(iVar31 + 9U));
          *(uint *)((long)unaff_x27 + 0x14) = iVar31 + 0xdU;
          uVar115 = *(uint *)((long)plVar95 + (ulong)(iVar31 + 0xdU));
          *(uint *)((long)unaff_x27 + 0x14) = iVar31 + 0x11U;
          uVar22 = *(uint *)((long)plVar95 + (ulong)(iVar31 + 0x11U));
          *(uint *)((long)unaff_x27 + 0x14) = iVar31 + 0x15U;
          uVar115 = uVar115 ^ uVar113 ^ 0xffffffff;
          uVar101 = *(uint *)((long)plVar95 + (ulong)(iVar31 + 0x15U));
          *(uint *)((long)unaff_x27 + 0x14) = iVar31 + 0x19U;
          uVar94 = *(uint *)((long)plVar95 + (ulong)(iVar31 + 0x19U));
          uVar7 = 0;
          if (uVar113 != 0) {
            uVar7 = uVar58 / uVar113;
          }
          uVar111 = uVar111 - uVar96 * uVar113;
          uVar87 = (ulong)uVar111;
          *(int *)((long)unaff_x27 + 0x14) = iVar31 + 0x1d;
          uVar94 = uVar94 ^ uVar113 ^ 0xffffffff;
          uVar96 = 0;
          if (uVar113 != 0) {
            uVar96 = uVar94 / uVar113;
          }
          uVar58 = uVar58 - uVar7 * uVar113;
          uVar7 = 0;
          if (uVar113 != 0) {
            uVar7 = uVar112 / uVar113;
          }
          uVar81 = *(ulong *)((long)plVar95 + (ulong)(uVar94 - uVar96 * uVar113));
          uVar96 = 0;
          if (uVar113 != 0) {
            uVar96 = uVar115 / uVar113;
          }
          uVar112 = uVar112 - uVar7 * uVar113;
          uVar115 = uVar115 - uVar96 * uVar113;
          iVar31 = (int)uVar81;
          if (-1 < iVar31) {
            uVar101 = uVar101 ^ uVar113 ^ 0xffffffff;
            uVar96 = 0;
            if (uVar113 != 0) {
              uVar96 = uVar101 / uVar113;
            }
            uVar47 = *(ulong *)((long)plVar95 + (ulong)(uVar101 - uVar96 * uVar113));
            if (-1 < (long)uVar47) {
              uVar85 = uVar85 ^ uVar113 ^ 0xffffffff;
              uVar96 = 0;
              if (uVar113 != 0) {
                uVar96 = uVar85 / uVar113;
              }
              uVar96 = *(uint *)((long)plVar95 + (ulong)(uVar85 - uVar96 * uVar113));
              local_490 = (long **)(ulong)uVar96;
              if (0 < (int)uVar96) {
                local_530 = (long **)CONCAT44(local_530._4_4_,uVar115);
                local_4d0 = (long **)CONCAT44(local_4d0._4_4_,uVar112);
                local_464 = uVar44;
                auVar124 = syscall(0x3e,(long)iVar31,0,1);
                uVar99 = auVar124._8_8_;
                local_448 = auVar124._0_8_;
                local_4b0 = (long **)CONCAT44(local_4b0._4_4_,uVar58);
                local_4f0 = (long *)CONCAT44(local_4f0._4_4_,uVar86);
                local_508 = (undefined *)CONCAT44(local_508._4_4_,uVar111);
                if ((undefined8 *)0xfffffffffffff000 < local_448) {
                  local_448 = (undefined8 *)0xffffffffffffffff;
                  *local_4b8 = -auVar124._0_4_;
                }
                uVar22 = uVar22 ^ uVar113 ^ 0xffffffff;
                uVar58 = 0;
                if (uVar113 != 0) {
                  uVar58 = uVar22 / uVar113;
                }
                local_458 = &DAT_0016f6a0;
                _local_450 = CONCAT44(uStack_44c,iVar31);
                local_538 = (undefined *)CONCAT44(local_538._4_4_,uVar22 - uVar58 * uVar113);
                local_498 = unaff_x24;
                local_440 = uVar47;
                uVar58 = 0x1d8474b2;
LAB_00134a84:
                uVar86 = uVar58;
                plVar95 = local_4f0;
                puVar97 = local_508;
                if (-0xa5b4ec3 < (int)uVar86) {
                  if ((int)uVar86 < 0x15bfc039) {
                    if ((int)uVar86 < -0x24d5342) {
                      if ((int)uVar86 < -0x7bde469) {
                        uVar58 = 0x7088655;
                        if (uVar86 == 0xf5a4b13e) goto LAB_00134a84;
                        if (uVar86 == 0xf69c13d5) {
                          local_460 = 0;
                          uVar58 = 0x54de58ef;
                          goto LAB_00134a84;
                        }
                      }
                      else {
                        uVar58 = 0xf0d4224c;
                        if (uVar86 == 0xf8421b97) goto LAB_00134a84;
                        if (uVar86 == 0xfc90aaaa) {
                          local_460 = 0;
                          uVar58 = 0xf8421b97;
                          goto LAB_00134a84;
                        }
                      }
                    }
                    else {
                      if ((int)uVar86 < 0x7088655) {
                        if (uVar86 == 0xfdb2acbe) goto LAB_00134a78;
                        if (uVar86 != 0x44ad530) goto LAB_001360d0;
                        uVar58 = (byte)local_420[0] & 1;
                        uVar86 = (uint)(byte)local_420[0];
                        uVar58 = ((~uVar58 * -3 - (uVar86 + ((byte)local_420[0] | 1))) +
                                 (uVar86 & 0xfe) + (uVar86 ^ 1) + (uVar58 ^ 1)) - 2;
                        uVar99 = local_518;
                        if ((uVar86 | 0xfffffffe) + (uVar58 & 0xff) != 0) {
                          uVar99 = local_410;
                        }
                        local_2c8 = local_418;
                        if (-(uVar86 | 0xfffffffe) == (uVar58 & 0xff)) {
                          local_2c8 = (long **)(ulong)((byte)local_420[0] >> 1);
                        }
                        local_2e0 = (long *)&DAT_0016f650;
                        bStack_2d8 = 0;
                        uStack_2d7 = 0;
                        uStack_2d6 = 0;
                        iStack_2d4 = 0;
                        bStack_2d0 = (byte)uVar99;
                        uStack_2cf = (undefined)(uVar99 >> 8);
                        uStack_2ce = (undefined2)(uVar99 >> 0x10);
                        iStack_2cc = (int)(uVar99 >> 0x20);
                        func_0x00169828(&local_3c0,&local_2e0,4);
                        uVar58 = (uint)(byte)local_3c0;
                        uVar86 = ~uVar58 | 1;
                        uVar58 = uVar58 * 3 + ~uVar58 + ((uVar58 ^ 0xffffffff) & 0xfffffffe) +
                                 ((byte)local_3c0 ^ 1) + ((byte)local_3c0 ^ 0xfffffffe) +
                                 (((byte)local_3c0 ^ 0xffffffff) & 1) + 4;
                        if (uVar86 + (uVar58 & 0xff) == 0) {
                          pplVar82 = (long **)(ulong)((byte)local_3c0 >> 1);
                          if (pplVar82 != (long **)0x0) goto LAB_001355b0;
LAB_00135658:
                          uVar111 = 0;
                          uVar44 = 0;
                          if (-uVar86 != (uVar58 & 0xff)) goto LAB_00135af8;
                        }
                        else {
                          pplVar82 = pplStack_3b8;
                          if (pplStack_3b8 == (long **)0x0) goto LAB_00135658;
LAB_001355b0:
                          pplVar100 = (long **)local_3b0._0_8_;
                          if (-uVar86 == (uVar58 & 0xff)) {
                            pplVar100 = (long **)((ulong)&local_3c0 | 1);
                          }
                          uVar111 = *(uint *)pplVar100;
                          uVar113 = uVar111 << 1;
                          uVar44 = uVar111 + ~uVar111 + (uVar111 & 0xff ^ 0xff) +
                                   (uVar113 | 0xfffffe00) +
                                   (uVar111 & 0xff) + (uVar111 ^ 0xff) + (~uVar111 | 0xffffff00) + 4
                          ;
                          uVar111 = (((uVar111 | 0xff) * 3 - uVar111) +
                                     (uVar113 ^ 0xfffffe00) + ((uVar113 ^ 0xffffffff) & 0x1fe) +
                                    (uVar113 | 0xfffffe00)) - 0xfb;
                          if (-uVar86 != (uVar58 & 0xff)) {
LAB_00135af8:
                            free(local_3b0._0_8_);
                          }
                        }
                        uVar86 = uVar111 * 3 + (uVar44 & uVar111) * -5 + ~uVar44 * -5 +
                                 ~(uVar44 | uVar111) * 2 + (uVar44 ^ uVar111) * 2 +
                                 (uVar44 ^ uVar111 ^ 0xffffffff) * 2 +
                                 (uVar111 | uVar44 ^ 0xffffffff) * 2 + 1;
                        uVar99 = (ulong)uVar86;
                        uVar58 = 0xa2e4c1d9;
                        if ((-1 < (int)uVar86) && (pplVar82 != (long **)0x0)) {
                          auVar124 = (*(code *)local_2e0[4])(&local_2e0);
                          uVar99 = auVar124._8_8_;
                          uVar58 = 0x86a19ad9;
                          if ((auVar124 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                            uVar58 = 0xa2e4c1d9;
                          }
                        }
                        goto LAB_00134a84;
                      }
                      if (uVar86 == 0x7088655) {
                        uVar58 = 0xca15a97b;
                        if ((byte)(((byte)local_420[0] | 1) + ((byte)local_420[0] ^ 1) +
                                   ((byte)local_420[0] | 0xfe) + ((byte)local_420[0] ^ 0xfe) +
                                  '\x03') != (byte)-(~(byte)local_420[0] | 1)) {
                          free(local_410,uVar99);
                          uVar99 = extraout_x1_05;
                          uVar58 = 0xca15a97b;
                        }
                        goto LAB_00134a84;
                      }
                      if (uVar86 == 0x76edb2e) {
                        (*(code *)local_2e0[2])(&local_3c0,&local_2e0,4);
                        pplVar82 = (long **)((ulong)local_3c0 >> 1 & 0x7f);
                        if (((ulong)local_3c0 & 1) != 0) {
                          pplVar82 = pplStack_3b8;
                        }
                        if (pplVar82 == (long **)0x0) {
                          uVar64 = 0;
                          uVar83 = 0;
                        }
                        else if (((ulong)local_3c0 & 1) == 0) {
                          uVar83 = (ulong)*(uint *)((ulong)&local_3c0 | 1) & 0xffffff00;
                          uVar64 = (ulong)*(uint *)((ulong)&local_3c0 | 1) & 0xff;
                        }
                        else {
                          uVar83 = (ulong)*(uint *)local_3b0._0_8_ & 0xffffff00;
                          uVar64 = (ulong)*(uint *)local_3b0._0_8_ & 0xff;
                        }
                        if (((ulong)local_3c0 & 1) != 0) {
                          free(local_3b0._0_8_);
                        }
                        (*(code *)local_2e0[2])(&local_3c0,&local_2e0,4);
                        pplVar100 = (long **)((ulong)local_3c0 >> 1 & 0x7f);
                        if (((ulong)local_3c0 & 1) != 0) {
                          pplVar100 = pplStack_3b8;
                        }
                        if (pplVar100 == (long **)0x0) {
                          unaff_x24 = (long **)0x0;
                          uVar86 = 0;
                        }
                        else if (((ulong)local_3c0 & 1) == 0) {
                          uVar86 = *(uint *)((ulong)&local_3c0 | 1) & 0xffffff00;
                          unaff_x24 = (long **)(ulong)(*(uint *)((ulong)&local_3c0 | 1) & 0xff);
                        }
                        else {
                          uVar86 = *(uint *)local_3b0._0_8_ & 0xffffff00;
                          unaff_x24 = (long **)(ulong)(*(uint *)local_3b0._0_8_ & 0xff);
                        }
                        uVar99 = extraout_x1_02;
                        if (((ulong)local_3c0 & 1) != 0) {
                          free(local_3b0._0_8_);
                          uVar99 = extraout_x1_03;
                        }
                        uVar87 = 0;
                        uVar58 = 0xfdb2acbe;
                        if (pplVar100 != (long **)0x0 && pplVar82 != (long **)0x0) {
                          uVar87 = uVar83 | (ulong)(uVar86 | (uint)unaff_x24) << 0x20 | uVar64;
                          uVar58 = 0xc47208ac;
                        }
                        goto LAB_00134a84;
                      }
                    }
                  }
                  else {
                    if (0x598043a5 < (int)uVar86) {
                      if ((int)uVar86 < 0x6dd51d2e) {
                        if (uVar86 == 0x598043a6) {
                          lVar80 = (**(code **)(CONCAT26(uStack_35a,
                                                         CONCAT51(local_360._1_5_,local_360[0])) +
                                               0x30))(local_360);
                          auVar124 = (**(code **)(CONCAT26(uStack_35a,
                                                           CONCAT51(local_360._1_5_,local_360[0])) +
                                                 0x38))(local_360);
                          uVar99 = auVar124._8_8_;
                          uVar58 = 0x76edb2e;
                          if (lVar80 != auVar124._0_8_) {
                            uVar58 = 0x15bfc039;
                          }
                        }
                        else {
                          uVar58 = 0xa5824081;
                          if (uVar86 != 0x64db2d42) goto LAB_001360d0;
                        }
                      }
                      else if (uVar86 == 0x6dd51d2e) {
                        local_378 = local_3e8;
                        local_380 = local_3e0;
                        if ((byte)((local_3f0[0] * '\x05' - (local_3f0[0] * '\x04' | 4)) +
                                   ~local_3f0[0] * '\x02' +
                                   (local_3f0[0] & 0xfe ^ 0xfe) + (local_3f0[0] & 0xfe) +
                                   (local_3f0[0] ^ 1) + '\x06') == (byte)((local_3f0[0] | 0xfe) + 1)
                           ) {
                          local_380 = (long **)((ulong)local_3f0 | 1);
                          local_378 = (ulong)(local_3f0[0] >> 1);
                        }
                        _auStack_388 = (long **)0x0;
                        local_390 = (long *)&DAT_0016f650;
                        uVar58 = 0xfc90aaaa;
                        if (7 < local_378 + 4) {
                          _auStack_388 = (long **)0x4;
                          uVar58 = 0xa9a08da4;
                        }
                      }
                      else {
                        if (uVar86 != 0x72126bb7) goto LAB_001360d0;
                        uVar86 = -(~(uint)(byte)local_408[0] << 1 | 2);
                        uVar58 = (uint)(byte)local_408[0] * -3 +
                                 ((uint)(byte)local_408[0] << 1 | 0xfffffffc) * 2 +
                                 ((byte)local_408[0] | 1) * 5 + 5;
                        uVar81 = local_520;
                        if ((uVar86 & 0xfe) != (uVar58 & 0xff)) {
                          uVar81 = local_3f8;
                        }
                        uVar47 = local_400;
                        if ((uVar58 & 0xff) == (uVar86 & 0xff)) {
                          uVar47 = (ulong)((byte)local_408[0] >> 1);
                        }
                        uStack_188 = (undefined)uVar47;
                        uStack_187 = (undefined)(uVar47 >> 8);
                        uStack_186 = (undefined)(uVar47 >> 0x10);
                        uStack_185 = (undefined)(uVar47 >> 0x18);
                        uStack_184 = (undefined)(uVar47 >> 0x20);
                        uStack_183 = (undefined)(uVar47 >> 0x28);
                        uStack_182 = (undefined)(uVar47 >> 0x30);
                        uStack_181 = (undefined)(uVar47 >> 0x38);
                        _local_1a0 = (long *)&DAT_0016f650;
                        uStack_198 = (long **)0x0;
                        local_190 = (byte)uVar81;
                        uStack_18f = (undefined)(uVar81 >> 8);
                        uStack_18e = (undefined)(uVar81 >> 0x10);
                        uStack_18d = (undefined)(uVar81 >> 0x18);
                        bStack_18c = (byte)(uVar81 >> 0x20);
                        uStack_18b = (undefined)(uVar81 >> 0x28);
                        uStack_18a = (undefined)(uVar81 >> 0x30);
                        uStack_189 = (undefined)(uVar81 >> 0x38);
                        func_0x00169828(&local_3c0,&local_1a0,4);
                        uVar86 = (uint)(byte)local_3c0;
                        uVar58 = (uVar86 - ((byte)local_3c0 | 1)) +
                                 ((byte)local_3c0 & 0xfe) + ((uVar86 ^ 0xffffffff) & 1) +
                                 (uVar86 | 0xfffffffe) + 3;
                        uVar86 = ~uVar86 | 1;
                        if (uVar86 + (uVar58 & 0xff) == 0) {
                          pplVar82 = (long **)(ulong)((byte)local_3c0 >> 1);
                          if (pplVar82 != (long **)0x0) goto LAB_00135638;
LAB_00135678:
                          uVar44 = 0;
                          uVar111 = 0;
                          if (-uVar86 != (uVar58 & 0xff)) goto LAB_00135bf4;
                        }
                        else {
                          pplVar82 = pplStack_3b8;
                          if (pplStack_3b8 == (long **)0x0) goto LAB_00135678;
LAB_00135638:
                          pplVar100 = (long **)local_3b0._0_8_;
                          if (-uVar86 == (uVar58 & 0xff)) {
                            pplVar100 = (long **)((ulong)&local_3c0 | 1);
                          }
                          uVar111 = *(uint *)pplVar100;
                          uVar113 = uVar111 * 2;
                          uVar112 = ~uVar111;
                          uVar44 = (uVar111 ^ 0xffffff00) + uVar112 + (uVar112 & 0xff) +
                                   uVar113 + (uVar111 & 0xffffff00) + (uVar112 | 0xff) + 3;
                          uVar111 = (uVar113 - (uVar111 & 0xffffff00)) + (uVar113 ^ 0xfffffe00) +
                                    (uVar113 ^ 0x1fe) + ((uVar113 ^ 0xffffffff) & 0xfffffe00) +
                                    (uVar113 | 0x1fe) + (uVar112 << 1 | 0xfffffe00) + 6;
                          if (-uVar86 != (uVar58 & 0xff)) {
LAB_00135bf4:
                            free(local_3b0._0_8_);
                          }
                        }
                        iVar31 = ~(uVar111 | uVar44) + (uVar111 & uVar44) * 2 +
                                 (uVar111 & (uVar44 ^ 0xffffffff)) * 2 + (uVar111 ^ uVar44) * 2 +
                                 (uVar44 | uVar111 ^ 0xffffffff) * 2 + 3;
                        if ((iVar31 < 0) || (pplVar82 == (long **)0x0)) {
                          local_420[0] = 0;
                        }
                        else {
                          (*(code *)_local_1a0[2])(local_420,&local_1a0,iVar31);
                        }
                        (*(code *)_local_1a0[2])(&local_3c0,&local_1a0,4);
                        pplVar82 = (long **)((ulong)local_3c0 >> 1 & 0x7f);
                        if (((ulong)local_3c0 & 1) != 0) {
                          pplVar82 = pplStack_3b8;
                        }
                        if (pplVar82 == (long **)0x0) {
                          uVar47 = 0;
                          uVar64 = 0;
                        }
                        else if (((ulong)local_3c0 & 1) == 0) {
                          uVar64 = (ulong)*(uint *)((ulong)&local_3c0 | 1) & 0xffffff00;
                          uVar47 = (ulong)*(uint *)((ulong)&local_3c0 | 1) & 0xff;
                        }
                        else {
                          uVar64 = (ulong)*(uint *)local_3b0._0_8_ & 0xffffff00;
                          uVar47 = (ulong)*(uint *)local_3b0._0_8_ & 0xff;
                        }
                        if (((ulong)local_3c0 & 1) != 0) {
                          free(local_3b0._0_8_);
                        }
                        (*(code *)_local_1a0[2])(&local_3c0,&local_1a0,4);
                        pplVar100 = (long **)((ulong)local_3c0 >> 1 & 0x7f);
                        if (((ulong)local_3c0 & 1) != 0) {
                          pplVar100 = pplStack_3b8;
                        }
                        if (pplVar100 == (long **)0x0) {
                          uVar58 = 0;
                          unaff_x24 = (long **)0x0;
                        }
                        else if (((ulong)local_3c0 & 1) == 0) {
                          unaff_x24 = (long **)(ulong)(*(uint *)((ulong)&local_3c0 | 1) & 0xffffff00
                                                      );
                          uVar58 = *(uint *)((ulong)&local_3c0 | 1) & 0xff;
                        }
                        else {
                          unaff_x24 = (long **)(ulong)(*(uint *)local_3b0._0_8_ & 0xffffff00);
                          uVar58 = *(uint *)local_3b0._0_8_ & 0xff;
                        }
                        uVar99 = extraout_x1_09;
                        if (((ulong)local_3c0 & 1) != 0) {
                          free(local_3b0._0_8_);
                          uVar99 = extraout_x1_10;
                        }
                        uVar81 = (ulong)(pplVar82 != (long **)0x0 && pplVar100 != (long **)0x0);
                        if (pplVar82 == (long **)0x0 || pplVar100 == (long **)0x0) {
                          uVar47 = 0;
                        }
                        else {
                          uVar47 = uVar64 | (ulong)((uint)unaff_x24 | uVar58) << 0x20 | uVar47;
                        }
                        uVar58 = (uint)(byte)local_420[0] << 1;
                        if ((-(~(uint)(byte)local_420[0] << 1 | 2) & 0xfe) !=
                            ((((uVar58 ^ 2) + (uVar58 ^ 0xfc)) - (uint)(byte)local_420[0]) +
                             (uVar58 | 0xfc) + ((byte)local_420[0] | 1) * 3 + 5 & 0xff))
                        goto LAB_00135d70;
                        uVar58 = 0xe45080e2;
                        if ((byte)local_420[0] >> 1 != 0) goto LAB_00135d80;
                      }
                      goto LAB_00134a84;
                    }
                    if (0x4aa2c3af < (int)uVar86) {
                      if (uVar86 == 0x4aa2c3b0) {
                        local_460 = 0;
                        uVar58 = 0xca15a97b;
                      }
                      else {
                        if (uVar86 != 0x54de58ef) goto LAB_001360d0;
                        uVar86 = (uint)(byte)local_2f8 << 1;
                        uVar58 = 0xf5a4b13e;
                        if ((uVar86 | 0xfffffffc) +
                            (((byte)local_2f8 | 1) + (uint)(byte)local_2f8 * -4 +
                             ~(uint)(byte)local_2f8 * -3 + (uVar86 & 0xfc) + (uVar86 ^ 0xfc) +
                             ((uVar86 ^ 0xffffffff) & 2) + 2 & 0xff) != 0) {
                          free(local_2e8,uVar99);
                          uVar99 = extraout_x1_01;
                          uVar58 = 0xf5a4b13e;
                        }
                      }
                      goto LAB_00134a84;
                    }
                    if (uVar86 == 0x15bfc039) {
                      local_460 = 0;
                      uVar58 = 0xa5824081;
                      goto LAB_00134a84;
                    }
                    if (uVar86 == 0x21d23544) {
                      local_4e8 = _local_3d0;
                      local_4e0 = local_3c8;
                      local_3c8 = (long **)0x0;
                      _local_3d0 = (long **)0x0;
                      uVar58 = (uint)local_3d8[0];
                      local_3d8 = (undefined  [8])0x0;
                      unique0x00024900 = local_368;
                      auStack_39f._3_3_ =
                           (undefined3)((uint)*(undefined4 *)((long)local_4d8 + 3) >> 8);
                      local_460 = CONCAT44(1,uVar58);
                      auStack_39f._7_4_ = 0;
                      uStack_394 = uStack_394 & 0xff000000;
                      local_368 = 0;
                      uStack_364 = uStack_364 & 0xff000000;
                      uVar58 = 0x64db2d42;
                      goto LAB_00134a84;
                    }
                  }
LAB_001360d0:
                  (**(code **)(local_458 + 0x10))(local_3f0,&local_458,local_490);
                  uVar58 = (uint)local_3f0[0] << 1;
                  uVar99 = extraout_x1_14;
                  if ((-(~(uint)local_3f0[0] << 1 | 2) & 0xfe) ==
                      ((local_3f0[0] | 1) + (local_3f0[0] ^ 1) + (uVar58 & 0xfc) + (uVar58 ^ 0xfc) +
                       4 & 0xff)) {
                    if (local_3f0[0] >> 1 == 0) {
LAB_0013617c:
                      uVar58 = uVar86 * 2;
                      uVar58 = (uVar86 ^ 0xa12f877a) + uVar58 + (uVar58 & 0x425f0ef4) +
                               (uVar58 & 0xbda0f10a ^ 0xbda0f10a) +
                               (uVar58 & 0xbda0f10a) + (uVar58 & 0x425f0ef4 ^ 0x425f0ef4) +
                               (~uVar86 << 1 | 0x425f0ef4) + 4;
                      goto LAB_00134a84;
                    }
                  }
                  else if (local_3e8 == 0) goto LAB_0013617c;
                  uVar58 = uVar86 + 0xa0a150fa + (uVar86 & 0xafaf5783) +
                           (uVar86 & 0xafaf5783 ^ 0xafaf5783) +
                           (uVar86 ^ 0x5050a87c) + (uVar86 ^ 0xafaf5783);
                  goto LAB_00134a84;
                }
                if ((int)uVar86 < -0x496da30e) {
                  if ((int)uVar86 < -0x5d1b3e27) {
                    if ((int)uVar86 < -0x734f883e) {
                      if (uVar86 != 0x86a19ad9) {
                        if (uVar86 != 0x8b3e0439) goto LAB_001360d0;
                        uVar58 = 0xe45080e2;
                        if ((uVar81 & 0xff) != 0) {
                          uVar58 = 0x44ad530;
                        }
                        goto LAB_00134a84;
                      }
                      (*(code *)local_2e0[2])(&local_3c0,&local_2e0,4);
                      uVar58 = (uint)(byte)local_3c0 * 2;
                      uVar86 = uVar58 | 0xfffffffc;
                      uVar58 = (uVar58 & 0x1fc) + (uint)(byte)local_3c0 * -2 +
                               (~(uint)(byte)local_3c0 | 0xfffffffe) * -5 +
                               ~(uint)(byte)local_3c0 * 2 +
                               ((uint)(byte)local_3c0 << 2 ^ 4) + (uVar58 ^ 0xfffffffc) + 1;
                      if (uVar86 + (uVar58 & 0xff) == 0) {
                        pplVar82 = (long **)(ulong)((byte)local_3c0 >> 1);
                        if (pplVar82 != (long **)0x0) goto LAB_001353e0;
LAB_001354fc:
                        uVar44 = 0;
                        unaff_x24 = (long **)0x0;
                        if (-uVar86 != (uVar58 & 0xff)) goto LAB_00135854;
                      }
                      else {
                        pplVar82 = pplStack_3b8;
                        if (pplStack_3b8 == (long **)0x0) goto LAB_001354fc;
LAB_001353e0:
                        pplVar100 = (long **)local_3b0._0_8_;
                        if (-uVar86 == (uVar58 & 0xff)) {
                          pplVar100 = (long **)((ulong)&local_3c0 | 1);
                        }
                        uVar113 = *(uint *)pplVar100;
                        uVar44 = (uVar113 | 0xffffff00) + 0x100;
                        uVar111 = uVar113 << 1 & 0x1fe;
                        unaff_x24 = (long **)(ulong)(((uVar113 | 0xffffff00) + ~uVar113 +
                                                      (uVar113 << 1 | 0x1fe) +
                                                     (uVar111 ^ 0x1fe) + uVar111) - 0x2fb);
                        if (-uVar86 != (uVar58 & 0xff)) {
LAB_00135854:
                          free(local_3b0._0_8_);
                        }
                      }
                      uVar58 = (uint)unaff_x24;
                      uVar58 = (((uVar44 | uVar58 ^ 0xffffffff) + uVar58 * 2) - (uVar58 & uVar44)) +
                               (uVar58 & (uVar44 ^ 0xffffffff)) + ~uVar58 + uVar44 + 2;
                      uVar99 = (ulong)uVar58;
                      if (((int)uVar58 < 0) || (pplVar82 == (long **)0x0)) {
                        uVar86 = 0;
                        local_2f8 = (long **)((ulong)local_2f8 & 0xffffffffffff0000);
                      }
                      else {
                        (*(code *)local_2e0[2])(&local_2f8,&local_2e0);
                        uVar86 = (uint)(byte)local_2f8;
                        uVar99 = extraout_x1_07;
                      }
                      if ((~uVar86 | 1) +
                          ((~uVar86 * -3 - (uVar86 << 1 | 2)) +
                           ((uVar86 ^ 0xffffffff) & 0xfe) + (uVar86 ^ 1) +
                           ((uVar86 ^ 0xffffffff) & 1) & 0xff) == 0) {
                        uVar58 = 0xf69c13d5;
                        if (uVar86 >> 1 == 0) goto LAB_00134a84;
                      }
                      else {
                        uVar58 = 0xf69c13d5;
                        if (pplStack_2f0 == (long **)0x0) goto LAB_00134a84;
                      }
                      uVar58 = 0xb0a23815;
                      goto LAB_00134a84;
                    }
                    if (uVar86 == 0x8cb077c2) {
LAB_00134a78:
                      local_460 = 0;
                      uVar58 = 0x64db2d42;
                      goto LAB_00134a84;
                    }
                    if (uVar86 != 0x9abe0092) goto LAB_001360d0;
                    uVar86 = (uint)(byte)local_438[0];
                    uVar58 = (uVar86 << 1 | 3) +
                             (((byte)local_438[0] ^ 0xffffffff) & 0xfffffffe) +
                             ((byte)local_438[0] ^ 0xfffffffe) + ((uVar86 ^ 0xffffffff) & 1) + 2;
                    local_310 = local_528;
                    if ((uVar86 | 0xfffffffe) + (uVar58 & 0xff) != 0) {
                      local_310 = local_428;
                    }
                    local_308 = local_430;
                    if (-(uVar86 | 0xfffffffe) == (uVar58 & 0xff)) {
                      local_308 = (long **)(ulong)((byte)local_438[0] >> 1);
                    }
                    local_320 = (undefined  [8])&DAT_0016f650;
                    pcStack_318 = (code *)0x0;
                    func_0x00169828(&local_3c0,local_320,4);
                    uVar58 = (uint)(byte)local_3c0 << 1;
                    uVar86 = -(~(uint)(byte)local_3c0 << 1 | 2);
                    uVar58 = ((byte)local_3c0 & 0xfe) + (uint)(byte)local_3c0 + (uVar58 & 0x1fc) +
                             (uVar58 ^ 0xfffffffc) + ((uVar58 ^ 0xffffffff) & 2) + 4;
                    uVar99 = extraout_x1_06;
                    if ((uVar86 & 0xfe) == (uVar58 & 0xff)) {
                      pplVar82 = (long **)(ulong)((byte)local_3c0 >> 1);
                      if (pplVar82 != (long **)0x0) goto LAB_0013570c;
LAB_001357bc:
                      uVar111 = 0;
                      uVar44 = 0;
                      if ((uVar58 & 0xff) != (uVar86 & 0xff)) goto LAB_00135e28;
                    }
                    else {
                      pplVar82 = pplStack_3b8;
                      if (pplStack_3b8 == (long **)0x0) goto LAB_001357bc;
LAB_0013570c:
                      pplVar100 = (long **)local_3b0._0_8_;
                      if ((uVar58 & 0xff) == (uVar86 & 0xff)) {
                        pplVar100 = (long **)((ulong)&local_3c0 | 1);
                      }
                      uVar44 = *(uint *)pplVar100;
                      uVar113 = ~uVar44;
                      uVar111 = ((uVar44 | 0xff) + (uVar113 | 0xff) + uVar44 * -3 +
                                uVar113 * -3 + (uVar44 ^ 0xffffff00) + (uVar44 & 0xffffff00)) - 1;
                      uVar44 = (uVar44 << 1 | 0x1fe) + (uVar44 ^ 0xffffff00) +
                               (uVar113 << 1 | 0xfffffe00) +
                               ((uVar44 << 1 ^ 0xffffffff) & 0x1fe) + (uVar44 | 0xffffff00) * 3 + 6;
                      if ((uVar58 & 0xff) != (uVar86 & 0xff)) {
LAB_00135e28:
                        free(local_3b0._0_8_);
                        uVar99 = extraout_x1_11;
                      }
                    }
                    if ((pplVar82 == (long **)0x0) ||
                       (uVar58 = ((uVar44 & uVar111) * 4 - uVar111) + ~(uVar44 | uVar111) * 2 +
                                 (uVar44 ^ uVar111) * 2 + (uVar44 ^ uVar111 ^ 0xffffffff) * -3 +
                                 (uVar111 & (uVar44 ^ 0xffffffff)) * 2 +
                                 (uVar44 | uVar111 ^ 0xffffffff) * 3 +
                                 (uVar111 | uVar44 ^ 0xffffffff) * 2 + 4, uVar99 = (ulong)uVar58,
                       (int)uVar58 < 0)) {
                      uVar86 = 0;
                      local_408[0] = 0;
                    }
                    else {
                      (**(code **)((long)local_320 + 0x10))(local_408,local_320);
                      uVar86 = (uint)(byte)local_408[0];
                      uVar99 = extraout_x1_12;
                    }
                    uVar58 = uVar86 << 1 & 0x1fc;
                    if ((uVar86 << 1 | 0xfffffffc) +
                        (uVar58 + (uVar86 | 1) + uVar86 + (uVar58 ^ 0xfc) + ~uVar86 * 2 + 9 & 0xff)
                        == 0) {
                      uVar58 = 0x4aa2c3b0;
                      if (uVar86 >> 1 == 0) goto LAB_00134a84;
                    }
                    else {
                      uVar58 = 0x4aa2c3b0;
                      if (local_400 == 0) goto LAB_00134a84;
                    }
                    uVar58 = 0xc1279b5e;
                    goto LAB_00134a84;
                  }
                  if ((int)uVar86 < -0x565f725c) {
                    if (uVar86 == 0xa2e4c1d9) {
                      local_460 = 0;
                      uVar58 = 0xf5a4b13e;
                    }
                    else {
                      if (uVar86 != 0xa5824081) goto LAB_001360d0;
                      uVar86 = local_3d8[0] & 0xfffffffe;
                      uVar44 = (uint)local_3d8[0];
                      uVar58 = 0x54de58ef;
                      if ((uVar44 | 0xfffffffe) +
                          ((uVar86 ^ 0xfe) + (uVar44 - (local_3d8[0] | 1)) +
                           uVar86 + ((uVar44 ^ 0xffffffff) & 1) + 4 & 0xff) != 0) {
                        free(local_3c8,uVar99);
                        uVar99 = extraout_x1;
                        uVar58 = 0x54de58ef;
                      }
                    }
                    goto LAB_00134a84;
                  }
                  if (uVar86 != 0xa9a08da4) {
                    if (uVar86 != 0xb0a23815) goto LAB_001360d0;
                    uVar86 = (uint)(byte)local_2f8;
                    uVar58 = (((byte)local_2f8 & 0xfe) - ((uint)(byte)local_2f8 << 2 | 4)) +
                             uVar86 * 2 + (uVar86 ^ 1) + ((uVar86 ^ 0xffffffff) & 1) + 4;
                    local_350 = (code *)local_510;
                    if ((uVar86 | 0xfffffffe) + (uVar58 & 0xff) != 0) {
                      local_350 = (code *)local_2e8;
                    }
                    uStack_348 = pplStack_2f0;
                    if (-(uVar86 | 0xfffffffe) == (uVar58 & 0xff)) {
                      uStack_348 = (long **)(ulong)((byte)local_2f8 >> 1);
                    }
                    local_360[0] = 0x50;
                    local_360._1_5_ = 0x16f6;
                    uStack_35a = 0;
                    auStack_358 = (undefined  [6])0x0;
                    uStack_352 = 0;
                    func_0x00169828(&local_3c0,local_360,4);
                    uVar58 = ~(uint)(byte)local_3c0;
                    uVar44 = (uint)(byte)local_3c0;
                    uVar86 = uVar58 | 1;
                    uVar58 = ((((byte)local_3c0 | 1) + uVar44 * -2 + uVar58 * -3 +
                              (uVar44 & 0xfe ^ 0xfffffffe)) - (uVar44 & 0xfe)) +
                             (uVar44 ^ 1) + (uVar44 | 0xfffffffe);
                    if (uVar86 + (uVar58 & 0xff) == 0) {
                      pplVar82 = (long **)(ulong)((byte)local_3c0 >> 1);
                      if (pplVar82 != (long **)0x0) goto LAB_001357a0;
LAB_001357e0:
                      unaff_x24 = (long **)0x0;
                      uVar44 = 0;
                      if (-uVar86 != (uVar58 & 0xff)) goto LAB_00135f84;
                    }
                    else {
                      pplVar82 = pplStack_3b8;
                      if (pplStack_3b8 == (long **)0x0) goto LAB_001357e0;
LAB_001357a0:
                      pplVar100 = (long **)local_3b0._0_8_;
                      if (-uVar86 == (uVar58 & 0xff)) {
                        pplVar100 = (long **)((ulong)&local_3c0 | 1);
                      }
                      uVar111 = *(uint *)pplVar100;
                      uVar113 = uVar111 << 1;
                      uVar44 = ((uVar111 << 2 | 0xfffffc00) - uVar111) + (~uVar111 & 0xff) +
                               (uVar111 ^ 0xff) + (uVar111 | 0xff) + (~uVar111 | 0xffffff00) + 0x104
                      ;
                      unaff_x24 = (long **)(ulong)((uVar111 | 0xff) * 3 +
                                                   ((uVar113 ^ 0xffffffff) & 0xfffffe00) +
                                                   (uVar111 ^ 0xff) + (uVar113 ^ 0xfffffe00) +
                                                   ((uVar113 ^ 0xffffffff) & 0x1fe) +
                                                   (uVar113 | 0xfffffe00) + 6);
                      if (-uVar86 != (uVar58 & 0xff)) {
LAB_00135f84:
                        free(local_3b0._0_8_);
                      }
                    }
                    uVar58 = (uint)unaff_x24;
                    uVar58 = (~(uVar44 & uVar58) * -3 - uVar58) + (uVar58 | uVar44 ^ 0xffffffff) * 2
                             + uVar44 + (uVar44 ^ uVar58) * 4 + ~(uVar44 | uVar58) * 2 + 1;
                    uVar99 = (ulong)uVar58;
                    if (((int)uVar58 < 0) || (pplVar82 == (long **)0x0)) {
                      uVar86 = 0;
                      local_3d8 = (undefined  [8])((ulong)local_3d8 & 0xffffffffffff0000);
                    }
                    else {
                      (**(code **)(CONCAT26(uStack_35a,CONCAT51(local_360._1_5_,local_360[0])) +
                                  0x10))(local_3d8,local_360);
                      uVar86 = (uint)local_3d8[0];
                      uVar99 = extraout_x1_13;
                    }
                    if ((uVar86 | 0xfffffffe) +
                        (((uVar86 | 1) - (uVar86 & 0xfe)) + (uVar86 ^ 1) + (uVar86 ^ 0xfe) + 2 &
                        0xff) == 0) {
                      uVar58 = 0x15bfc039;
                      if (uVar86 >> 1 == 0) goto LAB_00134a84;
                    }
                    else {
                      uVar58 = 0x15bfc039;
                      if (_local_3d0 == (long **)0x0) goto LAB_00134a84;
                    }
                    uVar58 = 0x598043a6;
                    goto LAB_00134a84;
                  }
                  (*(code *)local_390[2])(&local_3c0,&local_390,4);
                  uVar58 = ~(uint)(byte)local_3c0;
                  uVar86 = -(uVar58 << 1 | 2);
                  uVar58 = (((byte)local_3c0 | 1) + uVar58) * -3 +
                           ((uint)(byte)local_3c0 << 1 & 0x1fc) +
                           (((uint)(byte)local_3c0 << 1 ^ 0xffffffff) & 2);
                  if ((uVar86 & 0xfe) == (uVar58 & 0xff)) {
                    pplVar82 = (long **)(ulong)((byte)local_3c0 >> 1);
                    if (pplVar82 != (long **)0x0) goto LAB_00135468;
LAB_00135518:
                    uVar111 = 0;
                    uVar44 = 0;
                    if ((uVar58 & 0xff) != (uVar86 & 0xff)) goto LAB_0013598c;
                  }
                  else {
                    pplVar82 = pplStack_3b8;
                    if (pplStack_3b8 == (long **)0x0) goto LAB_00135518;
LAB_00135468:
                    pplVar100 = (long **)local_3b0._0_8_;
                    if ((uVar58 & 0xff) == (uVar86 & 0xff)) {
                      pplVar100 = (long **)((ulong)&local_3c0 | 1);
                    }
                    uVar111 = *(uint *)pplVar100;
                    uVar44 = ((uVar111 ^ 0xff) + ~uVar111 +
                             (uVar111 | 0xffffff00) + (uVar111 | 0xff) + (uVar111 & 0xff)) - 0xfd;
                    uVar111 = (((uVar111 ^ 0xffffffff) & 0xffffff00) + (uVar111 ^ 0xffffff00) +
                              (~uVar111 | 0xff) + (uVar111 | 0xff) * 3) - 0xfc;
                    if ((uVar58 & 0xff) != (uVar86 & 0xff)) {
LAB_0013598c:
                      free(local_3b0._0_8_);
                    }
                  }
                  uVar58 = uVar111 * 3 + (uVar44 & uVar111) * -7 + ~uVar44 * -5 +
                           (uVar44 ^ uVar111 ^ 0xffffffff) * 2 +
                           (uVar111 & (uVar44 ^ 0xffffffff)) * 2 +
                           (uVar44 | uVar111 ^ 0xffffffff) * 2 + (uVar111 | uVar44 ^ 0xffffffff) * 2
                           + 1;
                  uVar99 = (ulong)uVar58;
                  if (((int)uVar58 < 0) || (pplVar82 == (long **)0x0)) {
                    uVar86 = 0;
                    local_438[0] = 0;
                  }
                  else {
                    (*(code *)local_390[2])(local_438,&local_390);
                    uVar86 = (uint)(byte)local_438[0];
                    uVar99 = extraout_x1_08;
                  }
                  uVar44 = ~uVar86;
                  uVar58 = uVar86 << 1;
                  if ((-(uVar44 << 1 | 2) & 0xfe) ==
                      ((((uVar44 | 0xfffffffe) * -6 - (uVar86 | 1)) +
                        uVar44 + (uVar58 & 0xfc) + (uVar58 ^ 2) + ((uVar58 ^ 0xffffffff) & 2)) - 6 &
                      0xff)) {
                    uVar58 = 0xb6925cf2;
                    if (uVar86 >> 1 == 0) goto LAB_00134a84;
                  }
                  else {
                    uVar58 = 0xb6925cf2;
                    if (local_430 == (long **)0x0) goto LAB_00134a84;
                  }
                  uVar58 = 0x9abe0092;
                  goto LAB_00134a84;
                }
                if ((int)uVar86 < -0x3b8df754) {
                  if ((int)uVar86 < -0x409afce5) {
                    if (uVar86 == 0xb6925cf2) {
                      local_460 = 0;
                      uVar58 = 0xbf65031b;
                      goto LAB_00134a84;
                    }
                    if (uVar86 == 0xbeb3fc2c) {
                      local_460 = 0;
                      uVar58 = 0xf0d4224c;
                      goto LAB_00134a84;
                    }
                  }
                  else {
                    if (uVar86 == 0xbf65031b) {
                      uVar58 = 0xf8421b97;
                      if ((byte)(~(byte)local_438[0] + (byte)local_438[0] * '\x02' + '\x02') !=
                          (byte)-(~(byte)local_438[0] | 1)) {
                        free(local_428,uVar99);
                        uVar99 = extraout_x1_04;
                        uVar58 = 0xf8421b97;
                      }
                      goto LAB_00134a84;
                    }
                    if (uVar86 == 0xc1279b5e) {
                      lVar80 = (**(code **)((long)local_320 + 0x30))(local_320);
                      auVar124 = (**(code **)((long)local_320 + 0x38))(local_320);
                      uVar99 = auVar124._8_8_;
                      uVar58 = 0x72126bb7;
                      if (lVar80 != auVar124._0_8_) {
                        uVar58 = 0x4aa2c3b0;
                      }
                      goto LAB_00134a84;
                    }
                  }
                  goto LAB_001360d0;
                }
                if ((int)uVar86 < -0x1baf7f1e) {
                  if (uVar86 == 0xc47208ac) {
                    uVar58 = 0x21d23544;
                    if (uVar87 != uVar47) {
                      uVar58 = 0x8cb077c2;
                    }
                    goto LAB_00134a84;
                  }
                  if (uVar86 == 0xca15a97b) {
                    uVar58 = 0xbf65031b;
                    if ((byte)((((((byte)local_408[0] ^ 0xff) & 0xfe) + ((byte)local_408[0] ^ 1) +
                                (byte)local_408[0] * '\x02') - ((byte)local_408[0] | 1)) + '\x03')
                        != (byte)-(~(byte)local_408[0] | 1)) {
                      free(local_3f8,uVar99);
                      uVar99 = extraout_x1_00;
                      uVar58 = 0xbf65031b;
                    }
                    goto LAB_00134a84;
                  }
                  goto LAB_001360d0;
                }
                if (uVar86 == 0xe45080e2) {
                  local_460 = 0;
                  uVar58 = 0x7088655;
                  goto LAB_00134a84;
                }
                if (uVar86 != 0xf0d4224c) goto LAB_001360d0;
                uVar58 = (uint)local_3f0[0] << 1;
                uVar86 = ~(uint)local_3f0[0];
                if ((-(uVar86 << 1 | 2) & 0xfe) !=
                    (((uVar58 & 2) - (local_3f0[0] | 1)) +
                     uVar86 * -3 + ((uVar58 ^ 0xffffffff) & 0xfc) + (uVar58 ^ 2) + (uVar58 & 2 ^ 2)
                    & 0xff)) {
                  free(local_3e0,uVar99);
                  uVar99 = extraout_x1_15;
                }
                pplVar82 = local_498;
                iVar31 = (int)sVar17;
                if (local_460._4_4_ == 0) {
                  *(undefined4 *)((long)unaff_x27[1] + ((ulong)local_530 & 0xffffffff)) = 1;
                  uVar87 = 0xcbf29ce484222325;
                  if (iVar31 != 0) {
                    lVar80 = 0;
                    iVar32 = 0;
                    do {
                      lVar91 = lVar80 + ((ulong)puVar97 & 0xffffffff);
                      iVar32 = iVar32 + 1;
                      lVar80 = (long)iVar32;
                      uVar87 = uVar87 * 0x100000001b3 ^ (long)*(char *)((long)unaff_x27[1] + lVar91)
                      ;
                    } while (iVar31 != iVar32);
                  }
                  uVar81 = (ulong)*(int *)((long)unaff_x27[1] + ((ulong)plVar95 & 0xffffffff));
                  lVar80 = uVar81 + ~(uVar87 & uVar81);
                }
                else {
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + ((ulong)local_538 & 0xffffffff));
                  if ((local_460 & 1) == 0) {
                    bVar102 = 0;
                    local_360[0] = (byte)local_460;
                    *(undefined4 *)local_560 = stack0xfffffffffffffc60;
                    *(uint *)((long)local_560 + 3) = CONCAT31(auStack_39f._3_3_,auStack_39f[2]);
                    auStack_358 = SUB86(local_4e8,0);
                    uStack_352 = (undefined2)((ulong)local_4e8 >> 0x30);
                    uVar87 = local_460 & 0xffffffff;
                    local_350 = (code *)local_4e0;
                    pplVar100 = local_4e8;
                  }
                  else {
                    FUN_0012ae34(local_360,local_4e0,local_4e8);
                    uVar87 = (ulong)local_360[0];
                    pplVar100 = (long **)CONCAT26(uStack_352,auStack_358);
                    bVar102 = local_360[0] & 1;
                  }
                  unaff_x24 = (long **)local_350;
                  local_2a0 = 0;
                  pplVar88 = (long **)(uVar87 >> 1);
                  if (bVar102 != 0) {
                    pplVar88 = pplVar100;
                  }
                  auStack_180._0_4_ = 0xa6bfec1c;
                  auStack_180._4_4_ = 0xdd0cdf35;
                  bStack_2d8 = 0;
                  uStack_2d7 = 0;
                  uStack_2d6 = 0;
                  iStack_2d4 = 0;
                  local_2e0 = (long *)0x0;
                  local_2c8 = (long **)0x0;
                  bStack_2d0 = 0;
                  uStack_2cf = 0;
                  uStack_2ce = 0;
                  iStack_2cc = 0;
                  uStack_2b8 = (long **)0x0;
                  local_2c0 = (long **)0x0;
                  local_2a8 = 0;
                  local_2b0 = (undefined *)0x0;
                  pcStack_318 = (code *)local_830;
                  uStack_198 = pplStack_838;
                  _local_1a0 = local_840;
                  uStack_188 = (undefined)uStack_848;
                  uStack_187 = (undefined)((ulong)uStack_848 >> 8);
                  uStack_186 = (undefined)((ulong)uStack_848 >> 0x10);
                  uStack_185 = (undefined)((ulong)uStack_848 >> 0x18);
                  uStack_184 = (undefined)((ulong)uStack_848 >> 0x20);
                  uStack_183 = (undefined)((ulong)uStack_848 >> 0x28);
                  uStack_182 = (undefined)((ulong)uStack_848 >> 0x30);
                  uStack_181 = (undefined)((ulong)uStack_848 >> 0x38);
                  local_190 = (byte)local_850;
                  uStack_18f = (undefined)((ulong)local_850 >> 8);
                  uStack_18e = (undefined)((ulong)local_850 >> 0x10);
                  uStack_18d = (undefined)((ulong)local_850 >> 0x18);
                  bStack_18c = (byte)((ulong)local_850 >> 0x20);
                  uStack_18b = (undefined)((ulong)local_850 >> 0x28);
                  uStack_18a = (undefined)((ulong)local_850 >> 0x30);
                  uStack_189 = (undefined)((ulong)local_850 >> 0x38);
                  local_320 = (undefined  [8])&local_1a0;
                  FUN_00129fb0(auStack_298,local_320);
                  plVar48 = (long *)((long)local_2e0 + (long)pplVar88);
                  if (pplVar88 != (long **)0x0) {
                    uVar87 = (ulong)local_2e0 & 0x3f;
                    pbVar98 = local_558;
                    pplVar100 = local_560;
                    local_2e0 = plVar48;
                    if (bVar102 != 0) {
                      pplVar100 = unaff_x24;
                    }
                    do {
                      uVar81 = uVar87 + 1;
                      pbVar98[uVar87] = *(byte *)pplVar100;
                      uVar87 = uVar81;
                      if (uVar81 == 0x40) {
                        FUN_0012a370(&local_2e0);
                        uVar87 = 0;
                        pbVar98 = local_558;
                      }
                      pplVar88 = (long **)((long)pplVar88 + -1);
                      pplVar100 = (long **)((long)pplVar100 + 1);
                      plVar48 = local_2e0;
                    } while (pplVar88 != (long **)0x0);
                  }
                  local_2e0 = plVar48;
                  FUN_0012a174(&local_1a0,&local_2e0);
                  uVar99 = extraout_x1_16;
                  if ((byte)((local_360[0] ^ 0xfe) + local_360[0]) != (local_360[0] | 0xfe)) {
                    free(local_350);
                    uVar99 = extraout_x1_17;
                  }
                  uVar58 = uVar58 ^ uVar86 ^ 0xffffffff;
                  uVar44 = *(uint *)(unaff_x27 + 2);
                  uVar111 = 0;
                  if (uVar86 != 0) {
                    uVar111 = uVar58 / uVar86;
                  }
                  iVar32 = uVar58 - uVar111 * uVar86;
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 2)) ^ uVar44 ^ 0xffffffff
                  ;
                  uVar86 = 0;
                  if (uVar44 != 0) {
                    uVar86 = uVar58 / uVar44;
                  }
                  *(byte *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar86 * uVar44)) = local_1a0;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 6)) ^ uVar86 ^ 0xffffffff
                  ;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(byte *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) = auStack_19f[0]
                  ;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 10)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(byte *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) = auStack_19f[1]
                  ;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0xe)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(byte *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) = bStack_19d;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x12)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(undefined *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) =
                       (undefined)uStack_19c;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x16)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(undefined *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) =
                       uStack_19c._1_1_;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x1a)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(undefined *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) =
                       uStack_19c._2_1_;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x1e)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(undefined *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) =
                       uStack_19c._3_1_;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x22)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(undefined *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) =
                       (undefined)uStack_198;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x26)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(undefined *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) =
                       uStack_198._1_1_;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x2a)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(undefined *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) =
                       uStack_198._2_1_;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x2e)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(undefined *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) =
                       uStack_198._3_1_;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x32)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(undefined *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) =
                       uStack_198._4_1_;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x36)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(undefined *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) =
                       uStack_198._5_1_;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x3a)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(undefined *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) =
                       uStack_198._6_1_;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x3e)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(undefined *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) =
                       uStack_198._7_1_;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x42)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(byte *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) = local_190;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x46)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(undefined *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) =
                       uStack_18f;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x4a)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(undefined *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) =
                       uStack_18e;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x4e)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(undefined *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) =
                       uStack_18d;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x52)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(byte *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) = bStack_18c;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x56)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(undefined *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) =
                       uStack_18b;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x5a)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(undefined *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) =
                       uStack_18a;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x5e)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(undefined *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) =
                       uStack_189;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x62)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(undefined *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) =
                       uStack_188;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x66)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(undefined *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) =
                       uStack_187;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x6a)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(undefined *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) =
                       uStack_186;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x6e)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(undefined *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) =
                       uStack_185;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x72)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(undefined *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) =
                       uStack_184;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x76)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(undefined *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) =
                       uStack_183;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x7a)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(undefined *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) =
                       uStack_182;
                  uVar87 = 0xcbf29ce484222325;
                  uVar86 = *(uint *)(unaff_x27 + 2);
                  uVar58 = *(uint *)((long)unaff_x27[1] + (ulong)(iVar32 + 0x7e)) ^
                           uVar86 ^ 0xffffffff;
                  uVar44 = 0;
                  if (uVar86 != 0) {
                    uVar44 = uVar58 / uVar86;
                  }
                  *(undefined *)((long)unaff_x27[1] + (ulong)(uVar58 - uVar44 * uVar86)) =
                       uStack_181;
                  *(undefined4 *)((long)unaff_x27[1] + ((ulong)local_530 & 0xffffffff)) = 0;
                  if (iVar31 != 0) {
                    lVar80 = 0;
                    iVar32 = 0;
                    do {
                      lVar91 = lVar80 + ((ulong)puVar97 & 0xffffffff);
                      iVar32 = iVar32 + 1;
                      lVar80 = (long)iVar32;
                      uVar87 = uVar87 * 0x100000001b3 ^ (long)*(char *)((long)unaff_x27[1] + lVar91)
                      ;
                    } while (iVar31 != iVar32);
                  }
                  uVar81 = (ulong)*(int *)((long)unaff_x27[1] + ((ulong)plVar95 & 0xffffffff));
                  lVar80 = (uVar87 | uVar81 ^ 0xffffffffffffffff) +
                           (uVar81 & (uVar87 ^ 0xffffffffffffffff)) * 2;
                }
                uVar58 = (uint)local_4b0;
                if ((long **)(lVar80 - (uVar81 | uVar87 ^ 0xffffffffffffffff)) != pplVar82) {
                  uVar58 = (uint)local_4d0;
                }
                puVar91 = (undefined8 *)(ulong)uVar58;
                pplVar82 = local_4e0;
                uVar87 = local_460;
                if (local_460._4_4_ != 0) goto joined_r0x0013e754;
                goto LAB_0013f5ec;
              }
            }
          }
          *(undefined4 *)((long)plVar95 + (ulong)uVar115) = 1;
          uVar81 = 0xcbf29ce484222325;
          if (sVar17 != 0) {
            lVar80 = 0;
            iVar31 = 0;
            do {
              lVar91 = lVar80 + uVar87;
              iVar31 = iVar31 + 1;
              lVar80 = (long)iVar31;
              uVar81 = uVar81 * 0x100000001b3 ^ (long)*(char *)((long)unaff_x27[1] + lVar91);
            } while (sVar17 != iVar31);
          }
          uVar87 = (ulong)*(int *)((long)unaff_x27[1] + (ulong)uVar86);
          pplVar82 = (long **)((ulong)pplVar100 & 0xffffffff);
          if ((long **)((uVar81 | uVar87) * 2 - (uVar81 + uVar87)) != unaff_x24) {
            uVar58 = uVar112;
          }
          puVar91 = (undefined8 *)(ulong)uVar58;
          local_464 = uVar44;
          goto LAB_0012ecfc;
        }
        uVar58 = local_7d4;
        if (uVar86 != 0x45409bae) goto LAB_0013267c;
        goto LAB_0012ed04;
      }
      if (uVar86 == 0x456f184e) {
        local_490 = *(long ***)(local_470 + 8);
        uVar111 = *(uint *)(local_490 + 2);
        uVar96 = *(uint *)((long)local_490 + 0x14);
        plVar95 = local_490[1];
        uVar58 = uVar96 + 0xc;
        uVar113 = *(uint *)((long)plVar95 + (ulong)uVar96);
        *(uint *)((long)local_490 + 0x14) = uVar96 + 4;
        uVar112 = *(uint *)((long)plVar95 + (ulong)(uVar96 + 4));
        uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
        uVar86 = (uVar58 * 2 | 0x11) + (uVar58 ^ 0xfffffff7);
        *(uint *)((long)local_490 + 0x14) = uVar96 + 8;
        uVar115 = 0;
        if (uVar111 != 0) {
          uVar115 = uVar113 / uVar111;
        }
        uVar94 = uVar86 + 4;
        uVar96 = *(uint *)((long)plVar95 + (ulong)(uVar96 + 8));
        *(uint *)((long)local_490 + 0x14) = uVar58;
        local_498 = *(long ***)((long)plVar95 + (ulong)uVar58);
        *(uint *)((long)local_490 + 0x14) = uVar86;
        uVar112 = uVar112 ^ uVar111 ^ 0xffffffff;
        uVar96 = uVar96 ^ uVar111 ^ 0xffffffff;
        uVar58 = *(uint *)((long)plVar95 + (ulong)uVar86);
        iVar31 = (uVar86 | 0xfffffffd) + ((uVar94 * 2 | 4) - (uVar94 & 0xfffffffd));
        *(uint *)((long)local_490 + 0x14) = uVar94;
        sVar17 = *(short *)((long)plVar95 + (ulong)uVar94);
        *(uint *)((long)local_490 + 0x14) = iVar31 + 1U;
        uVar86 = 0;
        if (uVar111 != 0) {
          uVar86 = uVar112 / uVar111;
        }
        uVar58 = uVar58 ^ uVar111 ^ 0xffffffff;
        uVar33 = *(undefined4 *)((long)plVar95 + (ulong)(iVar31 + 1U));
        *(uint *)((long)local_490 + 0x14) = iVar31 + 5U;
        uVar30 = *(undefined4 *)((long)plVar95 + (ulong)(iVar31 + 5U));
        local_4b0 = (long **)CONCAT44(local_4b0._4_4_,uVar33);
        *(uint *)((long)local_490 + 0x14) = iVar31 + 9U;
        local_4d0 = (long **)CONCAT44(local_4d0._4_4_,uVar30);
        uVar94 = *(uint *)((long)plVar95 + (ulong)(iVar31 + 9U));
        *(int *)((long)local_490 + 0x14) = iVar31 + 0xd;
        uVar94 = uVar94 ^ uVar111 ^ 0xffffffff;
        plVar48 = *(long **)((long)plVar95 + (ulong)(uVar113 - uVar115 * uVar111));
        uVar113 = 0;
        if (uVar111 != 0) {
          uVar113 = uVar94 / uVar111;
        }
        uVar87 = *(ulong *)((long)plVar95 + (ulong)(uVar112 - uVar86 * uVar111));
        uVar86 = 0;
        if (uVar111 != 0) {
          uVar86 = uVar96 / uVar111;
        }
        uVar112 = 0;
        if (uVar111 != 0) {
          uVar112 = uVar58 / uVar111;
        }
        local_4f0 = (long *)CONCAT44(local_4f0._4_4_,uVar96 - uVar86 * uVar111);
        local_508 = (undefined *)CONCAT44(local_508._4_4_,uVar58 - uVar112 * uVar111);
        pplVar82 = (long **)plVar48[4];
        uVar81 = *(long *)((long)plVar95 + (ulong)(uVar94 - uVar113 * uVar111)) << 3;
        local_464 = uVar44;
        do {
          while( true ) {
            pplVar100 = (long **)plVar48[3];
            unaff_x27 = (long **)((long)pplVar82 - (long)pplVar100);
            uVar99 = plVar48[1] - *plVar48;
            uVar47 = 0;
            if (uVar99 != 0) {
              uVar47 = (ulong)unaff_x27 / uVar99;
            }
            bVar102 = *(byte *)((long)unaff_x27 + (*plVar48 - uVar47 * uVar99)) ^
                      ((byte)uVar81 & 0x7f | (0x7f < uVar81) << 7);
            if (pplVar82 < (long **)plVar48[5]) break;
            puVar97 = (undefined *)((long)unaff_x27 + 1);
            if ((long)puVar97 < 0) goto LAB_00142498;
            uVar47 = (long)(long **)plVar48[5] - (long)pplVar100;
            puVar46 = (undefined *)(uVar47 * 2);
            if (puVar46 < puVar97 || (long)puVar46 - (long)puVar97 == 0) {
              puVar46 = puVar97;
            }
            if (0x3ffffffffffffffe < uVar47) {
              puVar46 = (undefined *)0x7fffffffffffffff;
            }
            if (puVar46 == (undefined *)0x0) {
              pplVar77 = (long **)0x0;
              *(byte *)unaff_x27 = bVar102;
              pplVar88 = unaff_x27;
            }
            else {
              pplVar77 = (long **)malloc(puVar46);
              pplVar88 = (long **)((long)pplVar77 + (long)unaff_x27);
              *(byte *)pplVar88 = bVar102;
            }
            unaff_x24 = (long **)((long)pplVar88 + 1);
            if (pplVar82 != pplVar100) {
              if ((unaff_x27 < (long **)0x8) || ((ulong)((long)pplVar100 - (long)pplVar77) < 0x20))
              {
LAB_00137114:
                do {
                  pplVar88 = (long **)((long)pplVar88 + -1);
                  pplVar82 = (long **)((long)pplVar82 + -1);
                  *(undefined *)pplVar88 = *(undefined *)pplVar82;
                } while (pplVar82 != pplVar100);
              }
              else if (unaff_x27 < (long **)0x20) {
                pplVar70 = (long **)0x0;
LAB_001370c4:
                puVar84 = (undefined8 *)((long)pplVar82 - (long)pplVar70);
                pplVar71 = (long **)((ulong)unaff_x27 & 0xfffffffffffffff8);
                pplVar82 = (long **)((long)pplVar82 - (long)pplVar71);
                puVar91 = (undefined8 *)((long)pplVar77 + ((long)puVar84 - (long)pplVar100));
                lVar80 = (long)pplVar70 - (long)pplVar71;
                do {
                  puVar84 = puVar84 + -1;
                  puVar91 = puVar91 + -1;
                  lVar80 = lVar80 + 8;
                  *puVar91 = *puVar84;
                } while (lVar80 != 0);
                if (unaff_x27 != pplVar71) {
                  pplVar88 = (long **)((long)pplVar88 - (long)pplVar71);
                  goto LAB_00137114;
                }
              }
              else {
                pplVar70 = (long **)((ulong)unaff_x27 & 0xffffffffffffffe0);
                pplVar69 = pplVar82 + -2;
                pplVar50 = (long **)((undefined *)((long)pplVar77 + (long)unaff_x27) + -0x10);
                pplVar71 = pplVar70;
                do {
                  pplVar51 = pplVar69 + -1;
                  plVar79 = pplVar69[-2];
                  plVar39 = pplVar69[1];
                  plVar95 = *pplVar69;
                  pplVar71 = pplVar71 + -4;
                  pplVar69 = pplVar69 + -4;
                  pplVar50[-1] = *pplVar51;
                  pplVar50[-2] = plVar79;
                  pplVar50[1] = plVar39;
                  *pplVar50 = plVar95;
                  pplVar50 = pplVar50 + -4;
                } while (pplVar71 != (long **)0x0);
                if (unaff_x27 != pplVar70) {
                  if (((ulong)unaff_x27 & 0x18) == 0) {
                    pplVar88 = (long **)((long)pplVar88 - (long)pplVar70);
                    pplVar82 = (long **)((long)pplVar82 - (long)pplVar70);
                    goto LAB_00137114;
                  }
                  goto LAB_001370c4;
                }
              }
              pplVar82 = (long **)plVar48[3];
              pplVar88 = pplVar77;
            }
            plVar48[3] = (long)pplVar88;
            plVar48[4] = (long)unaff_x24;
            plVar48[5] = (long)((long)pplVar77 + (long)puVar46);
            if (pplVar82 != (long **)0x0) {
              free(pplVar82);
            }
            plVar48[4] = (long)unaff_x24;
            bVar28 = uVar81 < 0x80;
            pplVar82 = unaff_x24;
            uVar81 = uVar81 >> 7;
            if (bVar28) goto LAB_00137180;
          }
          unaff_x24 = (long **)((long)pplVar82 + 1);
          *(byte *)pplVar82 = bVar102;
          plVar48[4] = (long)unaff_x24;
          bVar28 = 0x7f < uVar81;
          pplVar82 = unaff_x24;
          uVar81 = uVar81 >> 7;
        } while (bVar28);
LAB_00137180:
        do {
          pplVar82 = (long **)plVar48[3];
          pbVar98 = (byte *)((long)unaff_x24 - (long)pplVar82);
          uVar47 = plVar48[1] - *plVar48;
          uVar81 = 0;
          if (uVar47 != 0) {
            uVar81 = (ulong)pbVar98 / uVar47;
          }
          bVar102 = pbVar98[*plVar48 - uVar81 * uVar47] ^
                    ((byte)uVar87 & 0x7f | (0x7f < uVar87) << 7);
          if (unaff_x24 < (long **)plVar48[5]) {
            *(byte *)unaff_x24 = bVar102;
            pplVar100 = (long **)((long)unaff_x24 + 1);
          }
          else {
            pbVar66 = pbVar98 + 1;
            if ((long)pbVar66 < 0) goto LAB_00142498;
            uVar81 = (long)(long **)plVar48[5] - (long)pplVar82;
            pbVar61 = (byte *)(uVar81 * 2);
            if (pbVar61 < pbVar66 || (long)pbVar61 - (long)pbVar66 == 0) {
              pbVar61 = pbVar66;
            }
            if (0x3ffffffffffffffe < uVar81) {
              pbVar61 = (byte *)0x7fffffffffffffff;
            }
            if (pbVar61 == (byte *)0x0) {
              pbVar36 = (byte *)0x0;
              *pbVar98 = bVar102;
              pbVar66 = pbVar98;
            }
            else {
              pbVar36 = (byte *)malloc(pbVar61);
              pbVar66 = pbVar36 + (long)pbVar98;
              *pbVar66 = bVar102;
            }
            pplVar100 = (long **)(pbVar66 + 1);
            if (unaff_x24 != pplVar82) {
              if ((pbVar98 < (byte *)0x8) || ((ulong)((long)pplVar82 - (long)pbVar36) < 0x20)) {
LAB_001372d0:
                do {
                  pbVar66 = pbVar66 + -1;
                  unaff_x24 = (long **)((long)unaff_x24 + -1);
                  *pbVar66 = *(byte *)unaff_x24;
                } while (unaff_x24 != pplVar82);
              }
              else if (pbVar98 < (byte *)0x20) {
                pbVar52 = (byte *)0x0;
LAB_00137280:
                puVar84 = (undefined8 *)((long)unaff_x24 - (long)pbVar52);
                pbVar72 = (byte *)((ulong)pbVar98 & 0xfffffffffffffff8);
                unaff_x24 = (long **)((long)unaff_x24 - (long)pbVar72);
                puVar91 = (undefined8 *)(pbVar36 + ((long)puVar84 - (long)pplVar82));
                lVar80 = (long)pbVar52 - (long)pbVar72;
                do {
                  puVar84 = puVar84 + -1;
                  puVar91 = puVar91 + -1;
                  lVar80 = lVar80 + 8;
                  *puVar91 = *puVar84;
                } while (lVar80 != 0);
                if (pbVar98 != pbVar72) {
                  pbVar66 = pbVar66 + -(long)pbVar72;
                  goto LAB_001372d0;
                }
              }
              else {
                pbVar52 = (byte *)((ulong)pbVar98 & 0xffffffffffffffe0);
                pplVar88 = unaff_x24 + -2;
                pplVar77 = (long **)(pbVar36 + (long)pbVar98 + -0x10);
                pbVar72 = pbVar52;
                do {
                  pplVar71 = pplVar88 + -1;
                  plVar79 = pplVar88[-2];
                  plVar39 = pplVar88[1];
                  plVar95 = *pplVar88;
                  pbVar72 = pbVar72 + -0x20;
                  pplVar88 = pplVar88 + -4;
                  pplVar77[-1] = *pplVar71;
                  pplVar77[-2] = plVar79;
                  pplVar77[1] = plVar39;
                  *pplVar77 = plVar95;
                  pplVar77 = pplVar77 + -4;
                } while (pbVar72 != (byte *)0x0);
                if (pbVar98 != pbVar52) {
                  if (((ulong)pbVar98 & 0x18) == 0) {
                    pbVar66 = pbVar66 + -(long)pbVar52;
                    unaff_x24 = (long **)((long)unaff_x24 - (long)pbVar52);
                    goto LAB_001372d0;
                  }
                  goto LAB_00137280;
                }
              }
              unaff_x24 = (long **)plVar48[3];
              pbVar66 = pbVar36;
            }
            plVar48[3] = (long)pbVar66;
            plVar48[4] = (long)pplVar100;
            plVar48[5] = (long)(pbVar36 + (long)pbVar61);
            if (unaff_x24 != (long **)0x0) {
              free(unaff_x24);
            }
          }
          unaff_x24 = pplVar100;
          plVar48[4] = (long)unaff_x24;
          bVar28 = 0x7f < uVar87;
          uVar87 = uVar87 >> 7;
        } while (bVar28);
        plVar95 = local_490[1];
        uVar87 = 0xcbf29ce484222325;
        if (sVar17 != 0) {
          lVar80 = 0;
          iVar31 = 0;
          do {
            lVar91 = lVar80 + ((ulong)local_508 & 0xffffffff);
            iVar31 = iVar31 + 1;
            lVar80 = (long)iVar31;
            uVar87 = uVar87 * 0x100000001b3 ^ (long)*(char *)((long)plVar95 + lVar91);
          } while (sVar17 != iVar31);
        }
      }
      else {
        if (uVar86 != 0x47454c80) {
          uVar58 = local_804;
          if (uVar86 != 0x4aa2c3b0) goto LAB_0013267c;
          goto LAB_0012ed04;
        }
        lVar91 = *(long *)(local_470 + 8);
        uVar111 = *(uint *)(lVar91 + 0x10);
        uVar86 = *(uint *)(lVar91 + 0x14);
        lVar80 = *(long *)(lVar91 + 8);
        uVar112 = *(uint *)(lVar80 + (ulong)uVar86);
        uVar58 = uVar86 + 0xc;
        *(uint *)(lVar91 + 0x14) = uVar86 + 4;
        uVar96 = *(uint *)(lVar80 + (ulong)(uVar86 + 4));
        *(uint *)(lVar91 + 0x14) = uVar86 + 8;
        uVar112 = uVar112 ^ uVar111 ^ 0xffffffff;
        uVar115 = *(uint *)(lVar80 + (ulong)(uVar86 + 8));
        uVar113 = ((uVar58 ^ 0xffffffff) & 0xfffffff7) * -3 +
                  (~uVar58 | 0xfffffff7) + (uVar58 * 2 ^ 0xffffffee);
        *(uint *)(lVar91 + 0x14) = uVar58;
        uVar86 = uVar113 + 4;
        local_498 = *(long ***)(lVar80 + (ulong)uVar58);
        *(uint *)(lVar91 + 0x14) = uVar113;
        uVar113 = *(uint *)(lVar80 + (ulong)uVar113);
        *(uint *)(lVar91 + 0x14) = uVar86;
        sVar17 = *(short *)(lVar80 + (ulong)uVar86);
        uVar58 = (uVar86 * 2 | 5) + (uVar86 ^ 0xfffffffd);
        uVar96 = uVar96 ^ uVar111 ^ 0xffffffff;
        uVar115 = uVar115 ^ uVar111 ^ 0xffffffff;
        *(uint *)(lVar91 + 0x14) = uVar58;
        uVar86 = 0;
        if (uVar111 != 0) {
          uVar86 = uVar112 / uVar111;
        }
        uVar33 = *(undefined4 *)(lVar80 + (ulong)uVar58);
        *(uint *)(lVar91 + 0x14) = uVar58 + 4;
        uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
        uVar30 = *(undefined4 *)(lVar80 + (ulong)(uVar58 + 4));
        local_4b0 = (long **)CONCAT44(local_4b0._4_4_,uVar33);
        *(uint *)(lVar91 + 0x14) = uVar58 + 8;
        local_4d0 = (long **)CONCAT44(local_4d0._4_4_,uVar30);
        uVar94 = *(uint *)(lVar80 + (ulong)(uVar58 + 8));
        *(uint *)(lVar91 + 0x14) = uVar58 + 0xc;
        uVar94 = uVar94 ^ uVar111 ^ 0xffffffff;
        uVar58 = 0;
        if (uVar111 != 0) {
          uVar58 = uVar96 / uVar111;
        }
        uVar101 = 0;
        if (uVar111 != 0) {
          uVar101 = uVar115 / uVar111;
        }
        plVar95 = *(long **)(lVar80 + (ulong)(uVar96 - uVar58 * uVar111));
        uVar58 = 0;
        if (uVar111 != 0) {
          uVar58 = uVar94 / uVar111;
        }
        local_4f0 = (long *)CONCAT44(local_4f0._4_4_,uVar115 - uVar101 * uVar111);
        uVar96 = 0;
        if (uVar111 != 0) {
          uVar96 = uVar113 / uVar111;
        }
        local_490 = *(long ***)(lVar80 + (ulong)(uVar112 - uVar86 * uVar111));
        local_508 = (undefined *)CONCAT44(local_508._4_4_,uVar113 - uVar96 * uVar111);
        pplVar82 = (long **)plVar95[4];
        uVar87 = *(long *)(lVar80 + (ulong)(uVar94 - uVar58 * uVar111)) << 3;
        local_464 = uVar44;
        do {
          while( true ) {
            pplVar100 = (long **)plVar95[3];
            pbVar98 = (byte *)((long)pplVar82 - (long)pplVar100);
            uVar47 = plVar95[1] - *plVar95;
            uVar81 = 0;
            if (uVar47 != 0) {
              uVar81 = (ulong)pbVar98 / uVar47;
            }
            bVar102 = pbVar98[*plVar95 - uVar81 * uVar47] ^
                      ((byte)uVar87 & 0x7f | (0x7f < uVar87) << 7);
            if (pplVar82 < (long **)plVar95[5]) break;
            pbVar66 = pbVar98 + 1;
            if ((long)pbVar66 < 0) goto LAB_00142498;
            uVar81 = (long)(long **)plVar95[5] - (long)pplVar100;
            pbVar61 = (byte *)(uVar81 * 2);
            if (pbVar61 < pbVar66 || (long)pbVar61 - (long)pbVar66 == 0) {
              pbVar61 = pbVar66;
            }
            if (0x3ffffffffffffffe < uVar81) {
              pbVar61 = (byte *)0x7fffffffffffffff;
            }
            if (pbVar61 == (byte *)0x0) {
              pbVar36 = (byte *)0x0;
              *pbVar98 = bVar102;
              pbVar66 = pbVar98;
            }
            else {
              pbVar36 = (byte *)malloc(pbVar61);
              pbVar66 = pbVar36 + (long)pbVar98;
              *pbVar66 = bVar102;
            }
            pplVar88 = (long **)(pbVar66 + 1);
            if (pplVar82 != pplVar100) {
              if ((pbVar98 < (byte *)0x8) || ((ulong)((long)pplVar100 - (long)pbVar36) < 0x20)) {
LAB_00133290:
                do {
                  pbVar66 = pbVar66 + -1;
                  pplVar82 = (long **)((long)pplVar82 + -1);
                  *pbVar66 = *(byte *)pplVar82;
                } while (pplVar82 != pplVar100);
              }
              else if (pbVar98 < (byte *)0x20) {
                pbVar52 = (byte *)0x0;
LAB_00133240:
                puVar84 = (undefined8 *)((long)pplVar82 - (long)pbVar52);
                pbVar72 = (byte *)((ulong)pbVar98 & 0xfffffffffffffff8);
                pplVar82 = (long **)((long)pplVar82 - (long)pbVar72);
                puVar91 = (undefined8 *)(pbVar36 + ((long)puVar84 - (long)pplVar100));
                lVar80 = (long)pbVar52 - (long)pbVar72;
                do {
                  puVar84 = puVar84 + -1;
                  puVar91 = puVar91 + -1;
                  lVar80 = lVar80 + 8;
                  *puVar91 = *puVar84;
                } while (lVar80 != 0);
                if (pbVar98 != pbVar72) {
                  pbVar66 = pbVar66 + -(long)pbVar72;
                  goto LAB_00133290;
                }
              }
              else {
                pbVar52 = (byte *)((ulong)pbVar98 & 0xffffffffffffffe0);
                pplVar77 = pplVar82 + -2;
                pplVar71 = (long **)(pbVar36 + (long)pbVar98 + -0x10);
                pbVar72 = pbVar52;
                do {
                  pplVar70 = pplVar77 + -1;
                  plVar79 = pplVar77[-2];
                  plVar39 = pplVar77[1];
                  plVar48 = *pplVar77;
                  pbVar72 = pbVar72 + -0x20;
                  pplVar77 = pplVar77 + -4;
                  pplVar71[-1] = *pplVar70;
                  pplVar71[-2] = plVar79;
                  pplVar71[1] = plVar39;
                  *pplVar71 = plVar48;
                  pplVar71 = pplVar71 + -4;
                } while (pbVar72 != (byte *)0x0);
                if (pbVar98 != pbVar52) {
                  if (((ulong)pbVar98 & 0x18) == 0) {
                    pbVar66 = pbVar66 + -(long)pbVar52;
                    pplVar82 = (long **)((long)pplVar82 - (long)pbVar52);
                    goto LAB_00133290;
                  }
                  goto LAB_00133240;
                }
              }
              pplVar82 = (long **)plVar95[3];
              pbVar66 = pbVar36;
            }
            plVar95[3] = (long)pbVar66;
            plVar95[4] = (long)pplVar88;
            plVar95[5] = (long)(pbVar36 + (long)pbVar61);
            if (pplVar82 != (long **)0x0) {
              free(pplVar82);
            }
            plVar95[4] = (long)pplVar88;
            bVar28 = uVar87 < 0x80;
            pplVar82 = pplVar88;
            uVar87 = uVar87 >> 7;
            if (bVar28) goto LAB_001332d8;
          }
          pplVar88 = (long **)((long)pplVar82 + 1);
          *(byte *)pplVar82 = bVar102;
          plVar95[4] = (long)pplVar88;
          bVar28 = 0x7f < uVar87;
          pplVar82 = pplVar88;
          uVar87 = uVar87 >> 7;
        } while (bVar28);
LAB_001332d8:
        uVar87 = (long)local_490 >> 0x3f ^ (long)local_490 << 1;
        do {
          unaff_x24 = (long **)plVar95[3];
          puVar97 = (undefined *)((long)pplVar88 - (long)unaff_x24);
          uVar47 = plVar95[1] - *plVar95;
          uVar81 = 0;
          if (uVar47 != 0) {
            uVar81 = (ulong)puVar97 / uVar47;
          }
          uVar58 = (uint)(byte)puVar97[*plVar95 - uVar81 * uVar47] ^
                   ((uint)uVar87 & 0x7f | (uint)(0x7f < uVar87) << 7);
          unaff_x27 = (long **)(ulong)uVar58;
          uVar13 = (undefined)uVar58;
          if (pplVar88 < (long **)plVar95[5]) {
            *(undefined *)pplVar88 = uVar13;
            pplVar82 = (long **)((long)pplVar88 + 1);
          }
          else {
            puVar46 = puVar97 + 1;
            if ((long)puVar46 < 0) goto LAB_00142498;
            uVar81 = (long)(long **)plVar95[5] - (long)unaff_x24;
            puVar62 = (undefined *)(uVar81 * 2);
            if (puVar62 < puVar46 || (long)puVar62 - (long)puVar46 == 0) {
              puVar62 = puVar46;
            }
            if (0x3ffffffffffffffe < uVar81) {
              puVar62 = (undefined *)0x7fffffffffffffff;
            }
            if (puVar62 == (undefined *)0x0) {
              puVar37 = (undefined *)0x0;
              *puVar97 = uVar13;
              puVar46 = puVar97;
            }
            else {
              puVar37 = (undefined *)malloc(puVar62);
              puVar46 = puVar37 + (long)puVar97;
              *puVar46 = uVar13;
            }
            pplVar82 = (long **)(puVar46 + 1);
            if (pplVar88 != unaff_x24) {
              if ((puVar97 < (undefined *)0x8) || ((ulong)((long)unaff_x24 - (long)puVar37) < 0x20))
              {
LAB_00133458:
                do {
                  puVar46 = puVar46 + -1;
                  pplVar88 = (long **)((long)pplVar88 + -1);
                  *puVar46 = *(undefined *)pplVar88;
                } while (pplVar88 != unaff_x24);
              }
              else if (puVar97 < (undefined *)0x20) {
                puVar53 = (undefined *)0x0;
LAB_00133408:
                puVar84 = (undefined8 *)((long)pplVar88 - (long)puVar53);
                puVar73 = (undefined *)((ulong)puVar97 & 0xfffffffffffffff8);
                pplVar88 = (long **)((long)pplVar88 - (long)puVar73);
                puVar91 = (undefined8 *)(puVar37 + ((long)puVar84 - (long)unaff_x24));
                lVar80 = (long)puVar53 - (long)puVar73;
                do {
                  puVar84 = puVar84 + -1;
                  puVar91 = puVar91 + -1;
                  lVar80 = lVar80 + 8;
                  *puVar91 = *puVar84;
                } while (lVar80 != 0);
                if (puVar97 != puVar73) {
                  puVar46 = puVar46 + -(long)puVar73;
                  goto LAB_00133458;
                }
              }
              else {
                puVar53 = (undefined *)((ulong)puVar97 & 0xffffffffffffffe0);
                pplVar100 = pplVar88 + -2;
                pplVar77 = (long **)(puVar37 + (long)puVar97 + -0x10);
                puVar73 = puVar53;
                do {
                  pplVar71 = pplVar100 + -1;
                  plVar79 = pplVar100[-2];
                  plVar39 = pplVar100[1];
                  plVar48 = *pplVar100;
                  puVar73 = puVar73 + -0x20;
                  pplVar100 = pplVar100 + -4;
                  pplVar77[-1] = *pplVar71;
                  pplVar77[-2] = plVar79;
                  pplVar77[1] = plVar39;
                  *pplVar77 = plVar48;
                  pplVar77 = pplVar77 + -4;
                } while (puVar73 != (undefined *)0x0);
                if (puVar97 != puVar53) {
                  if (((ulong)puVar97 & 0x18) == 0) {
                    puVar46 = puVar46 + -(long)puVar53;
                    pplVar88 = (long **)((long)pplVar88 - (long)puVar53);
                    goto LAB_00133458;
                  }
                  goto LAB_00133408;
                }
              }
              pplVar88 = (long **)plVar95[3];
              puVar46 = puVar37;
            }
            plVar95[3] = (long)puVar46;
            plVar95[4] = (long)pplVar82;
            plVar95[5] = (long)(puVar37 + (long)puVar62);
            if (pplVar88 != (long **)0x0) {
              free(pplVar88);
            }
          }
          pplVar88 = pplVar82;
          plVar95[4] = (long)pplVar88;
          bVar28 = 0x7f < uVar87;
          uVar87 = uVar87 >> 7;
        } while (bVar28);
        plVar95 = *(long **)(lVar91 + 8);
        uVar87 = 0xcbf29ce484222325;
        if (sVar17 != 0) {
          lVar80 = 0;
          iVar31 = 0;
          do {
            lVar91 = lVar80 + ((ulong)local_508 & 0xffffffff);
            iVar31 = iVar31 + 1;
            lVar80 = (long)iVar31;
            uVar87 = uVar87 * 0x100000001b3 ^ (long)*(char *)((long)plVar95 + lVar91);
          } while (sVar17 != iVar31);
        }
      }
LAB_00139588:
      pplVar82 = (long **)(uVar87 ^ (long)*(int *)((long)plVar95 + ((ulong)local_4f0 & 0xffffffff)))
      ;
LAB_00139594:
      bVar28 = pplVar82 == local_498;
      uVar58 = (uint)local_4b0;
      uVar86 = (uint)local_4d0;
LAB_001395a4:
      if (!bVar28) {
        uVar58 = uVar86;
      }
      goto LAB_001395a8;
    }
    if (0x598043a5 < (int)uVar86) {
      if ((int)uVar86 < 0x5b691f21) {
        uVar58 = local_658;
        if ((uVar86 != 0x598043a6) && (uVar58 = local_7b0, uVar86 != 0x59e872a2)) goto LAB_0013267c;
      }
      else {
        uVar58 = local_598;
        if (uVar86 != 0x5b691f21) {
          if (uVar86 == 0x5c808dff) {
            lVar91 = *(long *)(local_470 + 8);
            uVar111 = *(uint *)(lVar91 + 0x10);
            lVar80 = *(long *)(lVar91 + 8);
            uVar58 = *(uint *)(lVar91 + 0x14) + 4;
            uVar112 = *(uint *)(lVar80 + (ulong)*(uint *)(lVar91 + 0x14));
            *(uint *)(lVar91 + 0x14) = uVar58;
            uVar81 = *(ulong *)(lVar80 + (ulong)uVar58);
            iVar31 = (uVar58 | 0xfffffff7) + ((uVar58 * 2 | 0x10) - (uVar58 & 0xfffffff7));
            uVar58 = iVar31 + 5;
            uVar86 = iVar31 + 1;
            *(uint *)(lVar91 + 0x14) = uVar86;
            uVar113 = *(uint *)(lVar80 + (ulong)uVar86);
            *(uint *)(lVar91 + 0x14) = uVar58;
            uVar86 = (uVar58 * 2 | 5) + (uVar58 ^ 0xfffffffd);
            sVar17 = *(short *)(lVar80 + (ulong)uVar58);
            *(uint *)(lVar91 + 0x14) = uVar86;
            uVar58 = *(uint *)(lVar80 + (ulong)uVar86);
            *(uint *)(lVar91 + 0x14) = uVar86 + 4;
            uVar96 = *(uint *)(lVar80 + (ulong)(uVar86 + 4));
            *(uint *)(lVar91 + 0x14) = uVar86 + 8;
            uVar44 = *(uint *)(lVar80 + (ulong)(uVar86 + 8));
            unaff_x27 = (long **)(ulong)uVar44;
            *(uint *)(lVar91 + 0x14) = uVar86 + 0xc;
            uVar87 = syscall(0x71,0,&local_2e0);
            if (0xfffffffffffff000 < uVar87) {
              *local_4b8 = -(int)uVar87;
            }
            uVar87 = CONCAT44(iStack_2d4,CONCAT22(uStack_2d6,CONCAT11(uStack_2d7,bStack_2d8)));
            uVar47 = (long)local_2e0 * 1000000000;
            uVar44 = uVar44 ^ uVar111 ^ 0xffffffff;
            uVar86 = 0;
            if (uVar111 != 0) {
              uVar86 = uVar44 / uVar111;
            }
            uVar99 = 0xcbf29ce484222325;
            *(long *)(*(long *)(lVar91 + 8) + (ulong)(uVar44 - uVar86 * uVar111)) =
                 (long)((uVar47 & (uVar87 ^ 0xffffffffffffffff)) + (uVar47 & uVar87) * 2 +
                       (uVar87 & (uVar47 ^ 0xffffffffffffffff))) / 1000000;
            if (sVar17 != 0) {
              uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
              lVar80 = 0;
              iVar31 = 0;
              uVar86 = 0;
              if (uVar111 != 0) {
                uVar86 = uVar113 / uVar111;
              }
              uVar99 = 0xcbf29ce484222325;
              do {
                pcVar42 = (char *)(*(long *)(lVar91 + 8) + (ulong)(uVar113 - uVar86 * uVar111) +
                                  lVar80);
                iVar31 = iVar31 + 1;
                lVar80 = (long)iVar31;
                uVar99 = uVar99 * 0x100000001b3 ^ (long)*pcVar42;
              } while (sVar17 != iVar31);
            }
            uVar112 = uVar112 ^ uVar111 ^ 0xffffffff;
            uVar86 = 0;
            if (uVar111 != 0) {
              uVar86 = uVar112 / uVar111;
            }
            bVar28 = (uVar99 ^ (long)*(int *)(*(long *)(lVar91 + 8) +
                                             (ulong)(uVar112 - uVar86 * uVar111))) == uVar81;
LAB_0012ece0:
            unaff_x24 = (long **)(long)sVar17;
            if (!bVar28) {
              uVar58 = uVar96;
            }
          }
          else {
            if (uVar86 != 0x5e1e9802) goto LAB_0013267c;
            lVar91 = *(long *)(local_470 + 8);
            uVar111 = *(uint *)(lVar91 + 0x10);
            uVar112 = *(uint *)(lVar91 + 0x14);
            uVar58 = uVar112 + 8;
            iVar31 = (uVar58 * 2 | 0x10) + (uVar58 ^ 8) + (uVar58 * 2 ^ 0xffffffee);
            lVar80 = *(long *)(lVar91 + 8);
            uVar86 = iVar31 + 2;
            uVar44 = iVar31 + 6;
            uVar113 = *(uint *)(lVar80 + (ulong)uVar112);
            unaff_x27 = (long **)(ulong)uVar113;
            *(uint *)(lVar91 + 0x14) = uVar112 + 4;
            uVar96 = *(uint *)(lVar80 + (ulong)(uVar112 + 4));
            *(uint *)(lVar91 + 0x14) = uVar58;
            uVar87 = *(ulong *)(lVar80 + (ulong)uVar58);
            *(uint *)(lVar91 + 0x14) = uVar86;
            iVar31 = (uVar44 ^ 2) + uVar44 * 2 + (uVar86 * -2 - 10 | 4);
            uVar112 = *(uint *)(lVar80 + (ulong)uVar86);
            *(uint *)(lVar91 + 0x14) = uVar44;
            sVar17 = *(short *)(lVar80 + (ulong)uVar44);
            *(uint *)(lVar91 + 0x14) = iVar31 + 2U;
            uVar58 = *(uint *)(lVar80 + (ulong)(iVar31 + 2U));
            *(uint *)(lVar91 + 0x14) = iVar31 + 6U;
            uVar44 = *(uint *)(lVar80 + (ulong)(iVar31 + 6U));
            unaff_x24 = (long **)(ulong)uVar44;
            *(uint *)(lVar91 + 0x14) = iVar31 + 10U;
            uVar86 = *(uint *)(lVar80 + (ulong)(iVar31 + 10U));
            *(int *)(lVar91 + 0x14) = iVar31 + 0xe;
            uVar86 = uVar86 ^ uVar111 ^ 0xffffffff;
            uVar115 = 0;
            if (uVar111 != 0) {
              uVar115 = uVar86 / uVar111;
            }
            iVar31 = **(int **)(lVar80 + (ulong)(uVar86 - uVar115 * uVar111));
            if (iVar31 == -1) {
LAB_0013d70c:
              uVar33 = 0xffffffff;
            }
            else if (iVar31 < 0) {
              *local_4b8 = 9;
              uVar33 = 0xffffffff;
            }
            else {
              uVar81 = syscall(0x2c,iVar31,&local_2e0);
              if (uVar81 < 0xfffffffffffff001) {
                if ((int)uVar81 != 0) goto LAB_0013d70c;
                local_290 = local_290 & 0xffffffffffffffdf;
                uVar33 = (uint)local_2e0;
              }
              else {
                *local_4b8 = -(int)uVar81;
                uVar33 = 0xffffffff;
              }
            }
            uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
            uVar86 = 0;
            if (uVar111 != 0) {
              uVar86 = uVar113 / uVar111;
            }
            uVar81 = 0xcbf29ce484222325;
            *(undefined4 *)(*(long *)(lVar91 + 8) + (ulong)(uVar113 - uVar86 * uVar111)) = uVar33;
            if (sVar17 != 0) {
              uVar112 = uVar112 ^ uVar111 ^ 0xffffffff;
              lVar80 = 0;
              iVar31 = 0;
              uVar86 = 0;
              if (uVar111 != 0) {
                uVar86 = uVar112 / uVar111;
              }
              uVar81 = 0xcbf29ce484222325;
              do {
                pcVar42 = (char *)(*(long *)(lVar91 + 8) + (ulong)(uVar112 - uVar86 * uVar111) +
                                  lVar80);
                iVar31 = iVar31 + 1;
                lVar80 = (long)iVar31;
                uVar81 = uVar81 * 0x100000001b3 ^ (long)*pcVar42;
              } while (sVar17 != iVar31);
            }
            uVar96 = uVar96 ^ uVar111 ^ 0xffffffff;
            uVar86 = 0;
            if (uVar111 != 0) {
              uVar86 = uVar96 / uVar111;
            }
            if ((uVar81 ^ (long)*(int *)(*(long *)(lVar91 + 8) + (ulong)(uVar96 - uVar86 * uVar111))
                ) != uVar87) {
              uVar58 = uVar44;
            }
          }
LAB_0012ece4:
          uVar58 = uVar58 ^ uVar111 ^ 0xffffffff;
          goto LAB_0012ecec;
        }
      }
      goto LAB_0012ed04;
    }
    if ((int)uVar86 < 0x54de58ef) {
      if (uVar86 == 0x4c6a9874) {
        lVar91 = *(long *)(local_470 + 8);
        uVar111 = *(uint *)(lVar91 + 0x10);
        lVar80 = *(long *)(lVar91 + 8);
        uVar58 = *(uint *)(lVar91 + 0x14) + 4;
        uVar112 = *(uint *)(lVar80 + (ulong)*(uint *)(lVar91 + 0x14));
        *(uint *)(lVar91 + 0x14) = uVar58;
        uVar87 = *(ulong *)(lVar80 + (ulong)uVar58);
        uVar86 = (uVar58 * 2 & 0x10) + (uVar58 ^ 8);
        *(uint *)(lVar91 + 0x14) = uVar86;
        uVar113 = *(uint *)(lVar80 + (ulong)uVar86);
        *(uint *)(lVar91 + 0x14) = uVar86 + 4;
        sVar17 = *(short *)(lVar80 + (ulong)(uVar86 + 4));
        *(uint *)(lVar91 + 0x14) = uVar86 + 6;
        uVar58 = *(uint *)(lVar80 + (ulong)(uVar86 + 6));
        *(uint *)(lVar91 + 0x14) = uVar86 + 10;
        uVar96 = *(uint *)(lVar80 + (ulong)(uVar86 + 10));
        *(uint *)(lVar91 + 0x14) = uVar86 + 0xe;
        uVar44 = *(uint *)(lVar80 + (ulong)(uVar86 + 0xe));
        *(uint *)(lVar91 + 0x14) = uVar86 + 0x12;
        uVar44 = uVar44 ^ uVar111 ^ 0xffffffff;
        uVar86 = 0;
        if (uVar111 != 0) {
          uVar86 = uVar44 / uVar111;
        }
        unaff_x27 = (long **)(ulong)(uVar44 - uVar86 * uVar111);
        puVar91 = (undefined8 *)malloc(0x18);
        puVar91[1] = 0;
        puVar91[2] = 0;
        *puVar91 = 0;
        uVar81 = 0xcbf29ce484222325;
        *(undefined8 **)(*(long *)(lVar91 + 8) + (long)unaff_x27) = puVar91;
        if (sVar17 != 0) {
          uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
          lVar80 = 0;
          iVar31 = 0;
          uVar86 = 0;
          if (uVar111 != 0) {
            uVar86 = uVar113 / uVar111;
          }
          uVar81 = 0xcbf29ce484222325;
          do {
            pcVar42 = (char *)(*(long *)(lVar91 + 8) + (ulong)(uVar113 - uVar86 * uVar111) + lVar80)
            ;
            iVar31 = iVar31 + 1;
            lVar80 = (long)iVar31;
            uVar81 = uVar81 * 0x100000001b3 ^ (long)*pcVar42;
          } while (sVar17 != iVar31);
        }
        uVar112 = uVar112 ^ uVar111 ^ 0xffffffff;
        uVar86 = 0;
        if (uVar111 != 0) {
          uVar86 = uVar112 / uVar111;
        }
        uVar81 = uVar81 ^ (long)*(int *)(*(long *)(lVar91 + 8) + (ulong)(uVar112 - uVar86 * uVar111)
                                        );
LAB_0012ecdc:
        bVar28 = uVar81 == uVar87;
        goto LAB_0012ece0;
      }
      if (uVar86 != 0x544f7249) goto LAB_0013267c;
      lVar91 = *(long *)(local_470 + 8);
      uVar111 = *(uint *)(lVar91 + 0x10);
      uVar58 = *(uint *)(lVar91 + 0x14) + 4;
      lVar80 = *(long *)(lVar91 + 8);
      uVar113 = *(uint *)(lVar80 + (ulong)*(uint *)(lVar91 + 0x14));
      *(uint *)(lVar91 + 0x14) = uVar58;
      uVar86 = ((uVar58 & 8 | ((uVar58 & 8) >> 3) << 4) - (uVar58 | 8)) + (uVar58 * 2 ^ 0x10);
      uVar87 = *(ulong *)(lVar80 + (ulong)uVar58);
      uVar58 = uVar86 + 4;
      *(uint *)(lVar91 + 0x14) = uVar86;
      uVar112 = *(uint *)(lVar80 + (ulong)uVar86);
      *(uint *)(lVar91 + 0x14) = uVar58;
      uVar86 = (uVar58 | 2) + (uVar86 & 2);
      sVar17 = *(short *)(lVar80 + (ulong)uVar58);
      *(uint *)(lVar91 + 0x14) = uVar86;
      uVar58 = *(uint *)(lVar80 + (ulong)uVar86);
      *(uint *)(lVar91 + 0x14) = uVar86 + 4;
      uVar96 = *(uint *)(lVar80 + (ulong)(uVar86 + 4));
      *(uint *)(lVar91 + 0x14) = uVar86 + 8;
      uVar44 = *(uint *)(lVar80 + (ulong)(uVar86 + 8));
      *(uint *)(lVar91 + 0x14) = uVar86 + 0xc;
      uVar44 = uVar44 ^ uVar111 ^ 0xffffffff;
      uVar86 = 0;
      if (uVar111 != 0) {
        uVar86 = uVar44 / uVar111;
      }
      plVar95 = *(long **)(lVar80 + (ulong)(uVar44 - uVar86 * uVar111));
      if (plVar95 != (long *)0x0) {
        if (plVar95[3] != 0) {
          plVar95[4] = plVar95[3];
          free();
        }
        if (*plVar95 != 0) {
          plVar95[1] = *plVar95;
          free();
        }
        free(plVar95);
        lVar80 = *(long *)(lVar91 + 8);
      }
      uVar81 = 0xcbf29ce484222325;
      if (sVar17 != 0) {
        uVar86 = uVar112 ^ uVar111 ^ 0xffffffff;
        lVar91 = 0;
        iVar31 = 0;
        uVar44 = 0;
        if (uVar111 != 0) {
          uVar44 = uVar86 / uVar111;
        }
        uVar81 = 0xcbf29ce484222325;
        do {
          pcVar42 = (char *)(lVar80 + (ulong)(uVar86 - uVar44 * uVar111) + lVar91);
          iVar31 = iVar31 + 1;
          lVar91 = (long)iVar31;
          uVar81 = uVar81 * 0x100000001b3 ^ (long)*pcVar42;
        } while (sVar17 != iVar31);
      }
      uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
      uVar86 = 0;
      if (uVar111 != 0) {
        uVar86 = uVar113 / uVar111;
      }
      uVar81 = uVar81 ^ (long)*(int *)(lVar80 + (ulong)(uVar113 - uVar86 * uVar111));
LAB_0013d318:
      unaff_x27 = (long **)(ulong)uVar112;
      bVar28 = uVar81 == uVar87;
LAB_0013d31c:
      unaff_x24 = (long **)(ulong)uVar96;
      if (!bVar28) {
        uVar58 = uVar96;
      }
      goto LAB_0012ece4;
    }
    uVar58 = local_5c0;
    if (uVar86 == 0x54de58ef) goto LAB_0012ed04;
    if (uVar86 == 0x5741547a) {
      lVar91 = *(long *)(local_470 + 8);
      uVar111 = *(uint *)(lVar91 + 0x10);
      uVar44 = *(uint *)(lVar91 + 0x14);
      lVar80 = *(long *)(lVar91 + 8);
      uVar58 = uVar44 + 8;
      uVar86 = *(uint *)(lVar80 + (ulong)uVar44);
      *(uint *)(lVar91 + 0x14) = uVar44 + 4;
      uVar86 = uVar86 ^ uVar111 ^ 0xffffffff;
      uVar44 = *(uint *)(lVar80 + (ulong)(uVar44 + 4));
      *(uint *)(lVar91 + 0x14) = uVar58;
      iVar31 = (uVar58 ^ 8) + (uVar58 * 2 | 0xffffffee);
      uVar113 = 0;
      if (uVar111 != 0) {
        uVar113 = uVar86 / uVar111;
      }
      uVar87 = *(ulong *)(lVar80 + (ulong)uVar58);
      uVar58 = iVar31 + 0x16;
      uVar112 = iVar31 + 0x12;
      *(uint *)(lVar91 + 0x14) = uVar112;
      uVar112 = *(uint *)(lVar80 + (ulong)uVar112);
      *(uint *)(lVar91 + 0x14) = uVar58;
      sVar17 = *(short *)(lVar80 + (ulong)uVar58);
      unaff_x24 = (long **)(long)sVar17;
      iVar31 = (uVar58 * 2 | 4) + (uVar58 ^ 2) + (uVar58 * 2 ^ 0xfffffffa);
      *(uint *)(lVar91 + 0x14) = iVar31 + 2U;
      uVar58 = *(uint *)(lVar80 + (ulong)(iVar31 + 2U));
      *(uint *)(lVar91 + 0x14) = iVar31 + 6U;
      uVar96 = *(uint *)(lVar80 + (ulong)(iVar31 + 6U));
      *(int *)(lVar91 + 0x14) = iVar31 + 10;
      if (*(long *)(lVar80 + (ulong)(uVar86 - uVar113 * uVar111)) != 0) {
        free();
        lVar80 = *(long *)(lVar91 + 8);
      }
      uVar81 = 0xcbf29ce484222325;
      if (sVar17 != 0) {
        uVar112 = uVar112 ^ uVar111 ^ 0xffffffff;
        lVar91 = 0;
        iVar31 = 0;
        uVar86 = 0;
        if (uVar111 != 0) {
          uVar86 = uVar112 / uVar111;
        }
        uVar81 = 0xcbf29ce484222325;
        do {
          pcVar42 = (char *)(lVar80 + (ulong)(uVar112 - uVar86 * uVar111) + lVar91);
          iVar31 = iVar31 + 1;
          lVar91 = (long)iVar31;
          uVar81 = uVar81 * 0x100000001b3 ^ (long)*pcVar42;
        } while (sVar17 != iVar31);
      }
LAB_00132d30:
      uVar44 = uVar44 ^ uVar111 ^ 0xffffffff;
      uVar86 = 0;
      if (uVar111 != 0) {
        uVar86 = uVar44 / uVar111;
      }
      if ((uVar81 ^ (long)*(int *)(lVar80 + (ulong)(uVar44 - uVar86 * uVar111))) != uVar87) {
        uVar58 = uVar96;
      }
LAB_00138770:
      uVar58 = uVar58 ^ uVar111 ^ 0xffffffff;
      unaff_x27 = pplVar82;
LAB_0012ecec:
      pplVar82 = (long **)((ulong)pplVar100 & 0xffffffff);
      uVar86 = 0;
      if (uVar111 != 0) {
        uVar86 = uVar58 / uVar111;
      }
LAB_0012ecf0:
      puVar91 = (undefined8 *)(ulong)(uVar58 - uVar86 * uVar111);
      goto LAB_0012ecfc;
    }
    uVar58 = local_7a8;
    if (uVar86 == 0x58801dbd) goto LAB_0012ed04;
  }
  else if ((int)uVar86 < 0x6e487ad9) {
    if ((int)uVar86 < 0x64db2d42) {
      if (0x619cec58 < (int)uVar86) {
        if (uVar86 == 0x619cec59) {
          lVar91 = *(long *)(local_470 + 8);
          uVar111 = *(uint *)(lVar91 + 0x10);
          lVar80 = *(long *)(lVar91 + 8);
          uVar58 = *(uint *)(lVar91 + 0x14) + 4;
          uVar112 = *(uint *)(lVar80 + (ulong)*(uint *)(lVar91 + 0x14));
          *(uint *)(lVar91 + 0x14) = uVar58;
          uVar87 = *(ulong *)(lVar80 + (ulong)uVar58);
          iVar32 = (uVar58 * 2 | 0x10) - (uVar58 & 0xfffffff7);
          iVar31 = (uVar58 | 0xfffffff7) + iVar32;
          uVar58 = iVar31 + 5;
          uVar86 = iVar31 + 1;
          *(uint *)(lVar91 + 0x14) = uVar86;
          iVar31 = (uVar58 ^ 2) + (iVar32 * 2 | 0xfffffffaU);
          uVar113 = *(uint *)(lVar80 + (ulong)uVar86);
          *(uint *)(lVar91 + 0x14) = uVar58;
          sVar17 = *(short *)(lVar80 + (ulong)uVar58);
          *(uint *)(lVar91 + 0x14) = iVar31 + 6U;
          uVar58 = *(uint *)(lVar80 + (ulong)(iVar31 + 6U));
          *(uint *)(lVar91 + 0x14) = iVar31 + 10U;
          uVar96 = *(uint *)(lVar80 + (ulong)(iVar31 + 10U));
          *(uint *)(lVar91 + 0x14) = iVar31 + 0xeU;
          uVar86 = *(uint *)(lVar80 + (ulong)(iVar31 + 0xeU)) ^ uVar111 ^ 0xffffffff;
          uVar115 = 0;
          if (uVar111 != 0) {
            uVar115 = uVar86 / uVar111;
          }
          unaff_x27 = (long **)(ulong)(uVar86 - uVar115 * uVar111);
          *(int *)(lVar91 + 0x14) = iVar31 + 0x12;
          local_464 = uVar44;
          puVar91 = (undefined8 *)malloc(0x18);
          puVar91[1] = 0;
          puVar91[2] = 0;
          *puVar91 = 0;
          uVar81 = 0xcbf29ce484222325;
          *(undefined8 **)(*(long *)(lVar91 + 8) + (long)unaff_x27) = puVar91;
          if (sVar17 != 0) {
            uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
            lVar80 = 0;
            iVar31 = 0;
            uVar86 = 0;
            if (uVar111 != 0) {
              uVar86 = uVar113 / uVar111;
            }
            uVar81 = 0xcbf29ce484222325;
            do {
              pcVar42 = (char *)(*(long *)(lVar91 + 8) + (ulong)(uVar113 - uVar86 * uVar111) +
                                lVar80);
              iVar31 = iVar31 + 1;
              lVar80 = (long)iVar31;
              uVar81 = uVar81 * 0x100000001b3 ^ (long)*pcVar42;
            } while (sVar17 != iVar31);
          }
          uVar112 = uVar112 ^ uVar111 ^ 0xffffffff;
          uVar86 = 0;
          if (uVar111 != 0) {
            uVar86 = uVar112 / uVar111;
          }
          uVar81 = uVar81 ^ (long)*(int *)(*(long *)(lVar91 + 8) +
                                          (ulong)(uVar112 - uVar86 * uVar111));
          goto LAB_00136b94;
        }
        if (uVar86 != 0x625b4dc6) {
          local_464 = uVar44;
          if (uVar86 == 0x629bb9c1) {
            lVar91 = *(long *)(local_470 + 8);
            uVar111 = *(uint *)(lVar91 + 0x10);
            uVar86 = *(uint *)(lVar91 + 0x14);
            lVar80 = *(long *)(lVar91 + 8);
            uVar58 = uVar86 + 0xc;
            uVar112 = *(uint *)(lVar80 + (ulong)uVar86);
            *(uint *)(lVar91 + 0x14) = uVar86 + 4;
            uVar96 = *(uint *)(lVar80 + (ulong)(uVar86 + 4));
            *(uint *)(lVar91 + 0x14) = uVar86 + 8;
            uVar112 = uVar112 ^ uVar111 ^ 0xffffffff;
            iVar31 = (uVar58 ^ 8) + uVar58 * 2 + (uVar86 * -2 - 0x1a | 0x10);
            uVar115 = *(uint *)(lVar80 + (ulong)(uVar86 + 8));
            *(uint *)(lVar91 + 0x14) = uVar58;
            uVar86 = iVar31 + 2;
            uVar113 = iVar31 + 6;
            uVar87 = *(ulong *)(lVar80 + (ulong)uVar58);
            uVar58 = uVar86 & 2;
            *(uint *)(lVar91 + 0x14) = uVar86;
            uVar96 = uVar96 ^ uVar111 ^ 0xffffffff;
            uVar86 = *(uint *)(lVar80 + (ulong)uVar86);
            *(uint *)(lVar91 + 0x14) = uVar113;
            uVar94 = 0;
            if (uVar111 != 0) {
              uVar94 = uVar112 / uVar111;
            }
            sVar17 = *(short *)(lVar80 + (ulong)uVar113);
            iVar31 = (uVar113 ^ 2) + ~uVar58 + (uVar58 | (uVar58 >> 1) << 2);
            *(uint *)(lVar91 + 0x14) = iVar31 + 1U;
            uVar58 = *(uint *)(lVar80 + (ulong)(iVar31 + 1U));
            *(uint *)(lVar91 + 0x14) = iVar31 + 5U;
            uVar101 = *(uint *)(lVar80 + (ulong)(iVar31 + 5U));
            unaff_x24 = (long **)(ulong)uVar101;
            *(uint *)(lVar91 + 0x14) = iVar31 + 9U;
            uVar113 = *(uint *)(lVar80 + (ulong)(iVar31 + 9U));
            uVar85 = 0;
            if (uVar111 != 0) {
              uVar85 = uVar96 / uVar111;
            }
            *(int *)(lVar91 + 0x14) = iVar31 + 0xd;
            uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
            uVar22 = 0;
            if (uVar111 != 0) {
              uVar22 = uVar113 / uVar111;
            }
            func_0x0016a080(*(undefined8 *)(lVar80 + (ulong)(uVar112 - uVar94 * uVar111)),
                            lVar80 + (ulong)(uVar113 - uVar22 * uVar111),
                            (long)*(int *)(lVar80 + (ulong)(uVar96 - uVar85 * uVar111)));
            uVar81 = 0xcbf29ce484222325;
            if (sVar17 != 0) {
              uVar86 = uVar86 ^ uVar111 ^ 0xffffffff;
              lVar80 = 0;
              iVar31 = 0;
              uVar44 = 0;
              if (uVar111 != 0) {
                uVar44 = uVar86 / uVar111;
              }
              uVar81 = 0xcbf29ce484222325;
              do {
                pcVar42 = (char *)(*(long *)(lVar91 + 8) + (ulong)(uVar86 - uVar44 * uVar111) +
                                  lVar80);
                iVar31 = iVar31 + 1;
                lVar80 = (long)iVar31;
                uVar81 = uVar81 * 0x100000001b3 ^ (long)*pcVar42;
              } while (sVar17 != iVar31);
            }
            uVar115 = uVar115 ^ uVar111 ^ 0xffffffff;
            uVar86 = 0;
            if (uVar111 != 0) {
              uVar86 = uVar115 / uVar111;
            }
            if ((uVar81 ^ (long)*(int *)(*(long *)(lVar91 + 8) + (ulong)(uVar115 - uVar86 * uVar111)
                                        )) != uVar87) {
              uVar58 = uVar101;
            }
            goto LAB_001395a8;
          }
          goto LAB_0013267c;
        }
        local_490 = *(long ***)(local_470 + 8);
        plVar95 = local_490[1];
        local_4b0 = (long **)((long)local_490 + 0x14);
        uVar111 = *(uint *)local_4b0;
        pplVar100 = local_490 + 2;
        uVar113 = *(uint *)pplVar100;
        uVar86 = *(uint *)((long)plVar95 + (ulong)uVar111);
        *(uint *)local_4b0 = uVar111 + 4;
        uVar86 = uVar86 ^ uVar113 ^ 0xffffffff;
        pplVar82 = (long **)(ulong)uVar86;
        uVar112 = ~(*(uint *)((long)plVar95 + (ulong)(uVar111 + 4)) ^ uVar113);
        pbVar98 = (byte *)(ulong)uVar112;
        uVar58 = uVar111 + 0xc;
        *(uint *)local_4b0 = uVar111 + 8;
        uVar96 = 0;
        if (uVar113 != 0) {
          uVar96 = uVar112 / uVar113;
        }
        uVar33 = *(undefined4 *)((long)plVar95 + (ulong)(uVar111 + 8));
        *(uint *)local_4b0 = uVar58;
        iVar31 = ((uVar58 ^ 0xffffffff) & 0xfffffff7) + (uVar58 & 8) + (uVar58 * 2 | 0x10);
        plVar48 = *(long **)((long)plVar95 + (ulong)uVar58);
        uVar58 = iVar31 + 1;
        local_508 = (undefined *)CONCAT44(local_508._4_4_,uVar33);
        uVar111 = iVar31 + 5;
        *(uint *)local_4b0 = uVar58;
        uVar33 = *(undefined4 *)((long)plVar95 + (ulong)uVar58);
        *(uint *)local_4b0 = uVar111;
        uVar58 = (uVar58 * 2 & 4) + (uVar111 ^ 2);
        local_568 = CONCAT44(local_568._4_4_,uVar33);
        uVar115 = 0;
        if (uVar113 != 0) {
          uVar115 = uVar86 / uVar113;
        }
        local_540 = (long **)CONCAT44(local_540._4_4_,
                                      (int)*(short *)((long)plVar95 + (ulong)uVar111));
        *(uint *)local_4b0 = uVar58;
        uVar111 = uVar112 - uVar96 * uVar113;
        uVar33 = *(undefined4 *)((long)plVar95 + (ulong)uVar58);
        *(uint *)local_4b0 = uVar58 + 4;
        uVar30 = *(undefined4 *)((long)plVar95 + (ulong)(uVar58 + 4));
        *(uint *)local_4b0 = uVar58 + 0xc;
        local_530 = (long **)CONCAT44(local_530._4_4_,uVar33);
        local_538 = (undefined *)CONCAT44(local_538._4_4_,uVar30);
        uVar58 = *(ushort *)((long)plVar95 + (ulong)uVar111) ^ uVar111;
        lVar80 = *(long *)((long)plVar95 + (ulong)(uVar86 - uVar115 * uVar113));
        pplVar88 = (long **)0xffff;
        local_4f0 = plVar48;
        if (((uVar58 ^ 0xffffffff) & 0xffff) == 0) {
          unaff_x27 = (long **)0x0;
          local_464 = uVar44;
        }
        else {
          local_464 = uVar44;
          if ((uVar58 >> 0xf & 1) == 0) goto LAB_001424b4;
          uVar16 = *(ushort *)((long)plVar95 + (ulong)uVar111) ^ (ushort)uVar111 ^ 0xffff;
          unaff_x24 = (long **)(ulong)uVar113;
          local_498 = (long **)malloc((long)(short)uVar16 << 2);
          func_0x0016a0f0(local_498,0,(long)(short)uVar16 << 2);
          plVar95 = local_490[1];
          pplVar77 = (long **)(ulong)uVar16;
          unaff_x27 = local_498;
          if ((uVar58 & 0xffff) < 0xffec) {
            pplVar88 = (long **)0x0;
            if (((uint)((int)(undefined *)((long)pplVar77 + -1) << 2) <=
                 (uVar96 * uVar113 - uVar112) - 3) &&
               ((ulong)(undefined *)((long)pplVar77 + -1) >> 0x1e == 0)) {
              pplVar82 = (long **)((long)plVar95 + (ulong)(uVar111 + 2));
              pplVar71 = (long **)((long)local_498 + (long)pplVar77 * 4);
              pplVar88 = (long **)0x0;
              if ((pplVar71 <= pplVar100 || local_4b0 <= local_498) &&
                 ((long **)((long)pplVar82 + (long)pplVar77 * 4) <= local_498 ||
                  pplVar71 <= pplVar82)) {
                uVar58 = *(uint *)pplVar100;
                pplVar82 = (long **)0x0;
                iVar31 = 0;
                pplVar88 = (long **)((ulong)pplVar77 & 0x7ffc);
                do {
                  iVar32 = iVar31 * 4;
                  iVar31 = iVar31 + 4;
                  puVar91 = (undefined8 *)((long)plVar95 + (ulong)(uVar111 + 2 + iVar32));
                  uVar108 = puVar91[1];
                  uVar49 = *puVar91;
                  bVar102 = (byte)uVar58;
                  bVar104 = (byte)(uVar58 >> 8);
                  bVar105 = (byte)(uVar58 >> 0x10);
                  bVar106 = (byte)(uVar58 >> 0x18);
                  uVar44 = CONCAT13(~((byte)((ulong)uVar49 >> 0x18) ^ bVar106),
                                    CONCAT12(~((byte)((ulong)uVar49 >> 0x10) ^ bVar105),
                                             CONCAT11(~((byte)((ulong)uVar49 >> 8) ^ bVar104),
                                                      ~((byte)uVar49 ^ bVar102))));
                  uVar96 = CONCAT13(~((byte)((ulong)uVar108 >> 0x18) ^ bVar106),
                                    CONCAT12(~((byte)((ulong)uVar108 >> 0x10) ^ bVar105),
                                             CONCAT11(~((byte)((ulong)uVar108 >> 8) ^ bVar104),
                                                      ~((byte)uVar108 ^ bVar102))));
                  uVar112 = (uint)(CONCAT17(~((byte)((ulong)uVar49 >> 0x38) ^ bVar106),
                                            CONCAT16(~((byte)((ulong)uVar49 >> 0x30) ^ bVar105),
                                                     CONCAT15(~((byte)((ulong)uVar49 >> 0x28) ^
                                                               bVar104),
                                                              CONCAT14(~((byte)((ulong)uVar49 >>
                                                                               0x20) ^ bVar102),
                                                                       uVar44)))) >> 0x20);
                  uVar115 = (uint)(CONCAT17(~((byte)((ulong)uVar108 >> 0x38) ^ bVar106),
                                            CONCAT16(~((byte)((ulong)uVar108 >> 0x30) ^ bVar105),
                                                     CONCAT15(~((byte)((ulong)uVar108 >> 0x28) ^
                                                               bVar104),
                                                              CONCAT14(~((byte)((ulong)uVar108 >>
                                                                               0x20) ^ bVar102),
                                                                       uVar96)))) >> 0x20);
                  uVar86 = 0;
                  if (uVar58 != 0) {
                    uVar86 = uVar44 / uVar58;
                  }
                  uVar94 = 0;
                  if (uVar58 != 0) {
                    uVar94 = uVar112 / uVar58;
                  }
                  uVar101 = 0;
                  if (uVar58 != 0) {
                    uVar101 = uVar96 / uVar58;
                  }
                  uVar85 = 0;
                  if (uVar58 != 0) {
                    uVar85 = uVar115 / uVar58;
                  }
                  ((undefined8 *)((long)local_498 + (long)pplVar82))[1] =
                       CONCAT44(uVar115 - uVar85 * uVar58,uVar96 - uVar101 * uVar58);
                  *(undefined8 *)((long)local_498 + (long)pplVar82) =
                       CONCAT44(uVar112 - uVar94 * uVar58,uVar44 - uVar86 * uVar58);
                  pplVar82 = pplVar82 + 2;
                } while (((ulong)(uVar16 >> 2) & 0x1fff) * 0x10 - (long)pplVar82 != 0);
                if (pplVar88 == pplVar77) goto LAB_0013bc14;
              }
            }
          }
          else {
            pplVar88 = (long **)0x0;
          }
          do {
            uVar86 = *(uint *)pplVar100;
            uVar58 = *(uint *)((long)plVar95 + (ulong)(uVar111 + 2 + (int)pplVar88 * 4)) ^
                     uVar86 ^ 0xffffffff;
            uVar44 = 0;
            if (uVar86 != 0) {
              uVar44 = uVar58 / uVar86;
            }
            uVar58 = uVar58 - uVar44 * uVar86;
            pplVar82 = (long **)(ulong)uVar58;
            *(uint *)((long)local_498 + (long)pplVar88 * 4) = uVar58;
            pplVar88 = (long **)((long)pplVar88 + 1);
          } while (pplVar77 != pplVar88);
        }
LAB_0013bc14:
        pplVar71 = local_490;
        pplVar77 = (long **)local_4f0;
        local_498 = unaff_x27;
        if (lVar80 < -0x362888a840588851) {
          if (lVar80 < -0x5cf81a8431b01f2d) {
            if (lVar80 < -0x71fb6c8ef424d310) {
              if (lVar80 == -0x7cd78199a285abae) {
                if ((DAT_00174958 & 1) == 0) {
                  iVar31 = FUN_0011b428(&DAT_00174958);
                  if (iVar31 != 0) {
                    _DAT_00174960 = (long *)FUN_0012a59c();
                    FUN_0011b54c(&DAT_00174958);
                  }
                }
                pplVar100 = (long **)_DAT_00174960[1];
                pplVar82 = unaff_x27;
                if (pplVar100 != (long **)0x0) {
                  pplVar88 = *(long ***)((long)pplVar71[1] + (ulong)*(uint *)unaff_x27);
                  uVar49 = NEON_cnt(pplVar100,1);
                  uVar103 = NEON_uaddlv(uVar49,1);
                  uVar87 = CONCAT62((int6)((ulong)uVar49 >> 0x10),uVar103) & 0xffffffff;
                  if (uVar87 < 2) {
                    pplVar70 = (long **)((ulong)((long)pplVar100 + -1) & (ulong)pplVar88);
                  }
                  else {
                    pplVar70 = pplVar88;
                    if (pplVar100 <= pplVar88) {
                      uVar81 = 0;
                      if (pplVar100 != (long **)0x0) {
                        uVar81 = (ulong)pplVar88 / (ulong)pplVar100;
                      }
                      pplVar70 = (long **)((long)pplVar88 - uVar81 * (long)pplVar100);
                    }
                  }
                  pplVar69 = *(long ***)(*_DAT_00174960 + (long)pplVar70 * 8);
                  if ((pplVar69 != (long **)0x0) &&
                     (pplVar69 = (long **)*pplVar69, pplVar69 != (long **)0x0)) {
                    if (uVar87 < 2) {
                      do {
                        if (pplVar88 == (long **)pplVar69[1]) {
                          pplVar82 = pplVar88;
                          if ((long **)pplVar69[2] == pplVar88) break;
                        }
                        else {
                          pplVar82 = unaff_x27;
                          if ((long **)((ulong)pplVar69[1] & (ulong)((long)pplVar100 + -1)) !=
                              pplVar70) break;
                        }
                        pplVar69 = (long **)*pplVar69;
                        pplVar82 = unaff_x27;
                      } while (pplVar69 != (long **)0x0);
                    }
                    else {
                      do {
                        pplVar50 = (long **)pplVar69[1];
                        if (pplVar88 == pplVar50) {
                          pplVar82 = pplVar88;
                          if ((long **)pplVar69[2] == pplVar88) break;
                        }
                        else {
                          if (pplVar100 <= pplVar50) {
                            uVar87 = 0;
                            if (pplVar100 != (long **)0x0) {
                              uVar87 = (ulong)pplVar50 / (ulong)pplVar100;
                            }
                            pplVar50 = (long **)((long)pplVar50 - uVar87 * (long)pplVar100);
                          }
                          pplVar82 = unaff_x27;
                          if (pplVar50 != pplVar70) break;
                        }
                        pplVar69 = (long **)*pplVar69;
                        pplVar82 = unaff_x27;
                      } while (pplVar69 != (long **)0x0);
                    }
                  }
                }
                *(long ***)((long)pplVar71[1] + (ulong)*(uint *)((long)unaff_x27 + 4)) = pplVar82;
              }
              else if (lVar80 == -0x7c431366a3eac33d) {
                uVar49 = *(undefined8 *)((long)plVar95 + (ulong)*(uint *)unaff_x27);
                uVar87 = func_0x0016a1a0(uVar49);
                pplVar100 = (long **)auStack_180;
                if (0xffffffffffffffef < uVar87) goto LAB_001424ac;
                if (uVar87 < 0x17) {
                  local_2e0 = (long *)CONCAT71(local_2e0._1_7_,(char)((int)uVar87 << 1));
                  pplVar82 = local_570;
                  if (uVar87 != 0) goto LAB_001415ac;
                  *(byte *)local_570 = 0;
                  FUN_0012a8d8(&local_2e0);
                }
                else {
                  pplVar82 = (long **)malloc((uVar87 | 0xf) + 1);
                  local_2e0 = (long *)((uVar87 | 0xf) + 2);
                  bStack_2d0 = (byte)pplVar82;
                  uStack_2cf = (undefined)((ulong)pplVar82 >> 8);
                  uStack_2ce = (undefined2)((ulong)pplVar82 >> 0x10);
                  iStack_2cc = (int)((ulong)pplVar82 >> 0x20);
                  bStack_2d8 = (byte)uVar87;
                  uStack_2d7 = (undefined)(uVar87 >> 8);
                  uStack_2d6 = (undefined2)(uVar87 >> 0x10);
                  iStack_2d4 = (int)(uVar87 >> 0x20);
LAB_001415ac:
                  func_0x0016a0c0(pplVar82,uVar49,uVar87);
                  *(byte *)((long)pplVar82 + uVar87) = 0;
                  FUN_0012a8d8(&local_2e0);
                }
                if (((ulong)local_2e0 & 1) != 0) {
                  pplVar82 = (long **)CONCAT44(iStack_2cc,
                                               CONCAT22(uStack_2ce,CONCAT11(uStack_2cf,bStack_2d0)))
                  ;
                  goto LAB_00141ee8;
                }
              }
              else if (lVar80 == -0x76941fcca28321bc) {
                iVar31 = *(int *)((long)plVar95 + (ulong)*(uint *)((long)unaff_x27 + 4));
                if (iVar31 < 0) goto LAB_001424a8;
                piVar34 = *(int **)((long)plVar95 + (ulong)*(uint *)unaff_x27);
                if ((*(char *)(piVar34 + 1) != '\0') && (-1 < *piVar34)) {
                  do {
                    uVar87 = syscall(0x39,(long)*piVar34);
                    if (uVar87 < 0xfffffffffffff001) {
                      if ((int)uVar87 == -1) {
                        iVar32 = *local_4b8;
                        goto LAB_0013d3f0;
                      }
                    }
                    else {
                      iVar32 = -(int)uVar87;
                      *local_4b8 = iVar32;
LAB_0013d3f0:
                      uVar87 = (ulong)-(uint)(iVar32 != 4);
                    }
                  } while (((int)uVar87 < 0) && (*local_4b8 == 4));
                }
                *piVar34 = iVar31;
                local_954 = 0xffffffff;
                *(undefined *)(piVar34 + 1) = 1;
              }
            }
            else if (lVar80 == -0x71fb6c8ef424d310) {
              if (*(char *)(*(int **)((long)plVar95 + (ulong)*(uint *)unaff_x27) + 1) == '\0') {
                lVar80 = -1;
              }
              else {
                lVar80 = (long)**(int **)((long)plVar95 + (ulong)*(uint *)unaff_x27);
              }
              *(long *)((long)plVar95 + (ulong)*(uint *)((long)unaff_x27 + 4)) = lVar80;
            }
            else {
              if (lVar80 == -0x708114a2a4026ee4) {
                uVar58 = *(uint *)((long)unaff_x27 + 4);
                bVar28 = (*(uint *)((long)plVar95 + (ulong)*(uint *)unaff_x27) & 0x7f) == 0;
              }
              else {
                if (lVar80 != -0x6ee8b369c2509d8e) goto LAB_00141fcc;
                uVar58 = *(uint *)((long)unaff_x27 + 4);
                bVar28 = *(char *)((long)plVar95 + (ulong)*(uint *)unaff_x27) == '\x7f';
              }
              *(uint *)((long)plVar95 + (ulong)uVar58) = (uint)bVar28;
            }
            goto LAB_00141fcc;
          }
          if (-0x492a34f44fd4e6fd < lVar80) {
            if (lVar80 < -0x3ee943ca3078f17f) {
              if (lVar80 == -0x492a34f44fd4e6fc) {
                uVar58 = *(uint *)((long)unaff_x27 + 4);
                uVar86 = (uint)*(byte *)((long)plVar95 + (ulong)*(uint *)unaff_x27 + 1);
LAB_00140368:
                *(uint *)((long)plVar95 + (ulong)uVar58) = uVar86;
              }
              else if (lVar80 == -0x4104588bc6277766) {
                uVar49 = *(undefined8 *)((long)plVar95 + (ulong)*(uint *)unaff_x27);
                FUN_0011b008(0x174b68);
                _DAT_00174978 = uVar49;
                FUN_0011b034(0x174b68);
              }
            }
            else if (lVar80 == -0x3ee943ca3078f17f) {
              bVar28 = false;
              bVar102 = 0;
              pbVar66 = (byte *)0xc116bc35cf870e81;
              iVar31 = 0x1d8474b2;
              local_4b0 = pplVar88;
LAB_001403f0:
              while (pbVar61 = pbVar66, pbVar66 = pbVar61, -0x414c03d5 < iVar31) {
                if (iVar31 == -0x414c03d4) {
                  pplVar82 = (long **)0x0;
                  pbVar66 = (byte *)0x0;
                  iVar31 = -0x565f725c;
                  if (pbVar61 != (byte *)0x0) {
                    lVar80 = func_0x0016a020(pbVar98,0x20,pbVar61);
                    uVar87 = lVar80 - (long)pbVar98;
                    if (lVar80 == 0) {
                      uVar87 = 0xffffffffffffffff;
                    }
                    lVar80 = func_0x0016a020(pbVar98,0x2d,pbVar61);
                    uVar81 = lVar80 - (long)pbVar98;
                    if (lVar80 == 0) {
                      uVar81 = 0xffffffffffffffff;
                    }
                    pplVar82 = (long **)0x0;
                    iVar31 = -0x565f725c;
                    pbVar66 = pbVar61;
                    if (((uVar81 <= uVar87) && (uVar87 != 0xffffffffffffffff)) &&
                       (uVar81 != 0xffffffffffffffff)) {
                      local_688 = func_0x0016a120(pbVar98,0,0x10);
                      local_6d0 = (byte *)func_0x0016a120(pbVar98 + uVar81 + 1,0,0x10);
                      pplVar82 = (long **)0x0;
                      iVar31 = 0x6dd51d2e;
                    }
                  }
                }
                else if (iVar31 == -0x36f5556) {
                  if (!bVar28) goto LAB_001424a8;
                  puVar41 = (undefined4 *)malloc0(4);
                  plVar95 = local_2e0;
                  *puVar41 = 0;
                  *(undefined *)puVar41 = 0x2e;
                  *(undefined *)((long)puVar41 + 1) = 0x73;
                  *(undefined *)((long)puVar41 + 2) = 0x6f;
                  *(undefined *)((long)puVar41 + 3) = 0;
                  local_2e0._0_4_ =
                       CONCAT13(*(undefined *)((long)puVar41 + 2),
                                CONCAT12(*(undefined *)((long)puVar41 + 1),
                                         CONCAT11(*(undefined *)puVar41,6)));
                  local_2e0 = (long *)(CONCAT44((int)((ulong)plVar95 >> 0x20),(uint)local_2e0) &
                                      0xffffff00ffffffff);
                  free();
                  plVar95 = local_2e0;
                  pplVar100 = (long **)CONCAT44(iStack_2cc,
                                                CONCAT22(uStack_2ce,CONCAT11(uStack_2cf,bStack_2d0))
                                               );
                  pbVar36 = (byte *)(long)(int)local_4b0;
                  pplVar82 = local_570;
                  if (((ulong)local_2e0 & 1) != 0) {
                    pplVar82 = pplVar100;
                  }
                  lVar80 = func_0x0016a1a0(pplVar82);
                  if (pbVar61 < pbVar36) {
                    pbVar36 = (byte *)0xffffffffffffffff;
                  }
                  else if (lVar80 != 0) {
                    pbVar36 = pbVar98 + (long)pbVar36;
                    pbVar66 = pbVar98 + (long)pbVar61;
                    lVar91 = (long)pbVar66 - (long)pbVar36;
                    pbVar72 = pbVar66;
                    if (lVar80 <= lVar91) {
                      bVar102 = *(byte *)pplVar82;
                      do {
                        pbVar72 = pbVar66;
                        if (0xfffffffffffffffe < (ulong)(lVar91 - lVar80)) break;
                        pbVar36 = (byte *)func_0x0016a020(pbVar36,bVar102,(lVar91 - lVar80) + 1);
                        if (pbVar36 == (byte *)0x0) break;
                        iVar31 = func_0x0016a2e0(pbVar36,pplVar82,lVar80);
                        pbVar72 = pbVar36;
                        if (iVar31 == 0) break;
                        pbVar36 = pbVar36 + 1;
                        lVar91 = (long)pbVar66 - (long)pbVar36;
                        pbVar72 = pbVar66;
                      } while (lVar80 <= lVar91);
                    }
                    pbVar36 = pbVar72 + -(long)pbVar98;
                    if (pbVar72 == pbVar66) {
                      pbVar36 = (byte *)0xffffffffffffffff;
                    }
                  }
                  if (((ulong)plVar95 & 1) != 0) {
                    free(pplVar100);
                  }
                  bVar102 = 0;
                  plVar48 = (long *)0x0;
                  bVar28 = true;
                  pplVar82 = (long **)0x1;
                  pbVar66 = (byte *)0x0;
                  pbVar72 = pbVar61;
                  iVar31 = -0x565f725c;
                  if (pbVar61 != (byte *)0x0) {
                    do {
                      pbVar52 = pbVar72;
                      if (pbVar52 == (byte *)0x0) {
                        bVar102 = 0;
                        plVar48 = (long *)0x0;
                        goto LAB_001408a4;
                      }
                      pbVar72 = pbVar52 + -1;
                    } while (pbVar98[(long)(pbVar52 + -1)] != 0x2f);
                    plVar48 = (long *)0x0;
                    bVar102 = 0;
                    bVar28 = true;
                    pplVar82 = (long **)0x1;
                    iVar31 = -0x565f725c;
                    pbVar66 = pbVar61;
                    if ((pbVar36 != (byte *)0xffffffffffffffff) && (pbVar72 < pbVar36)) {
                      bVar102 = 1;
                      plVar48 = (long *)0xcbf29ce484222325;
                      if (pbVar36 + 2 != pbVar72) {
                        uVar87 = 0;
                        iVar31 = 1;
                        do {
                          pbVar66 = pbVar52 + uVar87;
                          uVar87 = (ulong)iVar31;
                          iVar31 = iVar31 + 1;
                          plVar48 = (long *)((long)plVar48 * 0x100000001b3 ^
                                            (long)(char)pbVar98[(long)pbVar66]);
                        } while (uVar87 < (ulong)((long)(pbVar36 + 2) - (long)pbVar72));
                        bVar102 = 1;
LAB_001408a4:
                        bVar28 = true;
                        pplVar82 = (long **)0x1;
                        pbVar66 = pbVar61;
                        iVar31 = -0x565f725c;
                      }
                    }
                  }
                }
                else {
                  if (iVar31 != 0x6dd51d2e) goto LAB_0014066c;
                  if (!bVar28) goto LAB_001424a8;
                  iVar32 = (int)unaff_x24;
                  pplVar82 = (long **)0x0;
                  bVar28 = true;
                  iVar31 = -0x565f725c;
                  if ((byte *)(long)(iVar32 + 4) < pbVar61) {
                    pplVar82 = (long **)0x0;
                    uVar58 = (uint)(pbVar98[iVar32] == 0x72) << 3 | 4;
                    if (pbVar98[iVar32 + 1] != 0x77) {
                      uVar58 = (uint)(pbVar98[iVar32] == 0x72) << 3;
                    }
                    uVar86 = uVar58 | 2;
                    if (pbVar98[iVar32 + 2] != 0x78) {
                      uVar86 = uVar58;
                    }
                    local_548 = (undefined *)
                                CONCAT44(local_548._4_4_,uVar86 | pbVar98[iVar32 + 3] == 0x70);
                    iVar31 = -0x36f5556;
                  }
                }
              }
              if (iVar31 == -0x565f725c) {
                local_4d0 = (long **)0x0;
                iVar31 = -0x496da30e;
                if (((ulong)pplVar82 & 1) == 0) {
                  iVar31 = -0x6541ff6e;
                }
                goto LAB_001403f0;
              }
              if (iVar31 == -0x496da30e) {
                if (!bVar28) goto LAB_001424a8;
                bVar28 = true;
                local_4d0 = (long **)(*(long *)((long)local_490[1] + (ulong)*(uint *)local_498) +
                                     (long)(int)local_4b0);
                iVar31 = -0x6541ff6e;
                goto LAB_001403f0;
              }
              if (iVar31 != -0x6541ff6e) {
LAB_0014066c:
                pbVar98 = *(byte **)((long)local_490[1] + (ulong)*(uint *)local_498);
                pbVar61 = pbVar98 + -1;
                lVar80 = 0;
                do {
                  lVar91 = lVar80;
                  pbVar61 = pbVar61 + 1;
                  lVar80 = lVar91 + 1;
                } while (*pbVar61 != 0);
                pbVar66 = pbVar61 + -(long)pbVar98;
                pbVar36 = pbVar98;
                if (pbVar66 == (byte *)0x0) {
LAB_001406cc:
                  if (pbVar36 != pbVar61) {
                    do {
                      pbVar72 = pbVar36;
                      if ((*pbVar36 == 0x20) || (0xfffffffa < *pbVar36 - 0xe)) break;
                      pbVar36 = pbVar36 + 1;
                      pbVar72 = pbVar61;
                    } while (pbVar36 != pbVar61);
                    do {
                      if (pbVar72 == pbVar61) break;
                      if ((*pbVar72 != 0x20) && (*pbVar72 - 0xe < 0xfffffffb)) {
                        if (pbVar72 != pbVar61) {
                          iVar32 = (int)pbVar72;
                          goto LAB_001408c4;
                        }
                        break;
                      }
                      pbVar72 = pbVar72 + 1;
                    } while( true );
                  }
                }
                else {
                  do {
                    if ((*pbVar36 != 0x20) && (*pbVar36 - 0xe < 0xfffffffb)) goto LAB_001406cc;
                    lVar91 = lVar91 + -1;
                    pbVar36 = pbVar36 + 1;
                  } while (lVar91 != 0);
                }
LAB_00140a64:
                bVar28 = false;
                bVar102 = 0;
                plVar48 = (long *)0x0;
                local_548 = (undefined *)((ulong)local_548._4_4_ << 0x20);
                local_6d0 = (byte *)0x0;
                pplVar82 = (long **)0x0;
                local_688 = 0;
                iVar31 = iVar31 + -0x73e3e70e;
                goto LAB_001403f0;
              }
              *(uint *)((long)local_490[1] + (ulong)*(uint *)((long)local_498 + 4)) =
                   (uint)pplVar82 & 1;
              *(ulong *)((long)local_490[1] + (ulong)*(uint *)(local_498 + 1)) = local_688;
              *(byte **)((long)local_490[1] + (ulong)*(uint *)((long)local_498 + 0xc)) = local_6d0;
              *(undefined4 *)((long)local_490[1] + (ulong)*(uint *)(local_498 + 2)) =
                   (undefined4)local_548;
              *(uint *)((long)local_490[1] + (ulong)*(uint *)((long)local_498 + 0x14)) =
                   (uint)bVar102;
              *(long **)((long)local_490[1] + (ulong)*(uint *)(local_498 + 3)) = plVar48;
              *(long ***)((long)local_490[1] + (ulong)*(uint *)((long)local_498 + 0x1c)) = local_4d0
              ;
              pplVar77 = (long **)local_4f0;
              pplVar71 = local_490;
              unaff_x27 = local_498;
            }
            else if (lVar80 == -0x39822b15a2c942b9) {
              lVar80 = *(long *)((long)plVar95 + (ulong)*(uint *)unaff_x27);
              uVar87 = func_0x0016a1a0(lVar80);
              iVar31 = *(int *)((long)plVar95 + (ulong)*(uint *)((long)unaff_x27 + 4));
              if (uVar87 < (ulong)(long)iVar31) {
                uVar58 = 0;
              }
              else {
                uVar87 = 0xcbf29ce484222325;
                if (iVar31 != 0) {
                  lVar91 = 0;
                  iVar32 = 0;
                  do {
                    pcVar42 = (char *)(lVar80 + lVar91);
                    iVar32 = iVar32 + 1;
                    lVar91 = (long)iVar32;
                    uVar87 = uVar87 * 0x100000001b3 ^ (long)*pcVar42;
                  } while (iVar31 != iVar32);
                }
                uVar58 = (uint)(uVar87 ==
                               *(ulong *)((long)plVar95 + (ulong)*(uint *)(unaff_x27 + 1)));
              }
              *(uint *)((long)plVar95 + (ulong)*(uint *)((long)unaff_x27 + 0xc)) = uVar58;
              pplVar77 = (long **)local_4f0;
            }
            goto LAB_00141fcc;
          }
          if (lVar80 == -0x5cf81a8431b01f2d) {
            FUN_00149a84_XOR((astruct_3 *)&local_2e0,(char *)plVar95,*(undefined4 *)(local_490 + 2),
                             *(undefined4 *)unaff_x27,*(undefined4 *)(unaff_x27 + 1));
            plVar95 = local_2e0;
            uVar87 = (ulong)local_2e0 >> 1 & 0x7f;
            if (((ulong)local_2e0 & 1) != 0) {
              uVar87 = CONCAT44(iStack_2d4,CONCAT22(uStack_2d6,CONCAT11(uStack_2d7,bStack_2d8)));
            }
            uVar49 = func_0x0016a110(uVar87 + 1);
            pplVar82 = (long **)CONCAT44(iStack_2cc,
                                         CONCAT22(uStack_2ce,CONCAT11(uStack_2cf,bStack_2d0)));
            pplVar100 = local_570;
            if (((ulong)plVar95 & 1) != 0) {
              pplVar100 = pplVar82;
            }
            func_0x0016a080(uVar49,pplVar100,uVar87 + 1);
            *(undefined8 *)((long)pplVar71[1] + (ulong)*(uint *)((long)unaff_x27 + 4)) = uVar49;
            pplVar100 = (long **)((ulong)plVar95 & 1);
            goto joined_r0x00140d2c;
          }
          if (lVar80 == -0x5343510322787868) {
            piVar90 = (int *)0x0;
            uVar81 = 0;
            for (iVar31 = 0x54de58ef; iVar31 != 0x7088655; iVar31 = iVar31 + iVar32) {
              if (iVar31 == -0xa5b4ec2) {
                uVar87 = (ulong)((uint)uVar81 & 1);
                pplVar100 = (long **)(uVar81 >> 1);
                if ((uVar81 & 1) != 0) {
                  pplVar100 = pplVar82;
                }
                pplVar82 = (long **)((ulong)piVar90 >> 1);
                if (((ulong)piVar90 & 1) != 0) {
                  pplVar82 = pplVar88;
                }
                if ((pplVar82 == (long **)0xffffffffffffffff) || (pplVar100 < pplVar82))
                goto LAB_001424cc;
                uVar87 = local_580;
                if (((ulong)piVar90 & 1) != 0) {
                  uVar87 = CONCAT17(uStack_189,
                                    CONCAT16(uStack_18a,
                                             CONCAT15(uStack_18b,
                                                      CONCAT14(bStack_18c,
                                                               CONCAT13(uStack_18d,
                                                                        CONCAT12(uStack_18e,
                                                                                 CONCAT11(uStack_18f
                                                                                          ,local_190
                                                                                         )))))));
                }
                pplVar88 = local_570;
                if ((uVar81 & 1) != 0) {
                  pplVar88 = (long **)CONCAT44(iStack_2cc,
                                               CONCAT22(uStack_2ce,CONCAT11(uStack_2cf,bStack_2d0)))
                  ;
                }
                iVar31 = func_0x0016a2e0((byte *)((long)pplVar88 +
                                                 ((long)pplVar100 - (long)pplVar82)),uVar87);
                *(uint *)((long)pplVar71[1] + (ulong)*(uint *)(unaff_x27 + 1)) = (uint)(iVar31 == 0)
                ;
                goto joined_r0x0014163c;
              }
              FUN_00149a84_XOR((astruct_3 *)&local_1a0,(char *)pplVar71[1],
                               *(undefined4 *)(pplVar71 + 2),*(undefined4 *)((long)unaff_x27 + 4),
                               *(undefined4 *)((long)unaff_x27 + 0xc));
              uVar49 = *(undefined8 *)((long)pplVar71[1] + (ulong)*(uint *)unaff_x27);
              uVar87 = func_0x0016a1a0(uVar49);
              pplVar100 = (long **)auStack_180;
              if (0xffffffffffffffef < uVar87) goto LAB_001424ac;
              if (uVar87 < 0x17) {
                local_2e0 = (long *)CONCAT71(local_2e0._1_7_,(char)((int)uVar87 << 1));
                pplVar82 = local_570;
                if (uVar87 != 0) goto LAB_00140f00;
              }
              else {
                pplVar82 = (long **)malloc((uVar87 | 0xf) + 1);
                local_2e0 = (long *)((uVar87 | 0xf) + 2);
                bStack_2d0 = (byte)pplVar82;
                uStack_2cf = (undefined)((ulong)pplVar82 >> 8);
                uStack_2ce = (undefined2)((ulong)pplVar82 >> 0x10);
                iStack_2cc = (int)((ulong)pplVar82 >> 0x20);
                bStack_2d8 = (byte)uVar87;
                uStack_2d7 = (undefined)(uVar87 >> 8);
                uStack_2d6 = (undefined2)(uVar87 >> 0x10);
                iStack_2d4 = (int)(uVar87 >> 0x20);
                pplVar71 = local_490;
LAB_00140f00:
                func_0x0016a0c0(pplVar82,uVar49,uVar87);
              }
              *(byte *)((long)pplVar82 + uVar87) = 0;
              piVar90 = (int *)((ulong)_local_1a0 & 0xff);
              uVar81 = (ulong)local_2e0 & 0xff;
              pplVar82 = (long **)CONCAT44(iStack_2d4,
                                           CONCAT22(uStack_2d6,CONCAT11(uStack_2d7,bStack_2d8)));
              pplVar100 = (long **)((ulong)local_2e0 >> 1 & 0x7f);
              if (((ulong)local_2e0 & 1) != 0) {
                pplVar100 = pplVar82;
              }
              pplVar88 = (long **)((ulong)_local_1a0 >> 1 & 0x7f);
              if (((ulong)_local_1a0 & 1) != 0) {
                pplVar88 = uStack_198;
              }
              iVar32 = -0x4dd5d29a;
              if (pplVar88 <= pplVar100) {
                iVar32 = -0x5f39a7b1;
              }
              pplVar88 = uStack_198;
            }
            *(undefined4 *)((long)pplVar71[1] + (ulong)*(uint *)(unaff_x27 + 1)) = 0;
joined_r0x0014163c:
            if ((uVar81 & 1) != 0) {
              free(CONCAT44(iStack_2cc,CONCAT22(uStack_2ce,CONCAT11(uStack_2cf,bStack_2d0))));
            }
            if (((ulong)piVar90 & 1) != 0) {
              pplVar82 = (long **)CONCAT17(uStack_189,
                                           CONCAT16(uStack_18a,
                                                    CONCAT15(uStack_18b,
                                                             CONCAT14(bStack_18c,
                                                                      CONCAT13(uStack_18d,
                                                                               CONCAT12(uStack_18e,
                                                                                        CONCAT11(
                                                  uStack_18f,local_190)))))));
              goto LAB_00141ee8;
            }
          }
          else if (lVar80 == -0x53210ca6e095fa77) {
            *(uint *)((long)plVar95 + (ulong)*(uint *)((long)unaff_x27 + 4)) =
                 (uint)*(byte *)((long)plVar95 + (ulong)*(uint *)unaff_x27 + 1);
          }
          goto LAB_00141fcc;
        }
        if (lVar80 < 0x482aae7a9718681c) {
          if (lVar80 < -0x4113d02e850b5a2) {
            if (lVar80 == -0x362888a840588851) {
              puVar91 = (undefined8 *)malloc(0x20);
              uVar58 = *(uint *)unaff_x27;
              puVar91[1] = 0;
              *puVar91 = 0;
              puVar91[3] = 0;
              puVar91[2] = 0;
              *(undefined8 **)((long)pplVar71[1] + (ulong)uVar58) = puVar91;
            }
            else if (lVar80 == -0x2a8d84419599ddd7) {
              FUN_0011b008(0x174b40);
            }
            else if (lVar80 == -0xaed3e5648c31d42) {
              puVar97 = *(undefined **)((long)plVar95 + (ulong)*(uint *)unaff_x27);
              pplVar82 = (long **)func_0x0016a1a0(puVar97);
              local_2e0 = (long *)CONCAT44(local_2e0._4_4_,1);
              bStack_2d8 = 0;
              local_2c0 = (long **)((ulong)local_2c0 & 0xffffffffffffff00);
              puVar41 = (undefined4 *)malloc0(5);
              plVar95 = _local_1a0;
              *puVar41 = 0;
              *(undefined *)(puVar41 + 1) = 0;
              *(undefined *)puVar41 = 0x2e;
              *(undefined *)((long)puVar41 + 1) = 0x61;
              *(undefined *)((long)puVar41 + 2) = 0x70;
              *(undefined *)((long)puVar41 + 3) = 0x6b;
              *(undefined *)(puVar41 + 1) = 0;
              _local_1a0 = CONCAT11(*(undefined *)puVar41,8);
              _local_1a0 = CONCAT12(*(undefined *)((long)puVar41 + 1),_local_1a0);
              _local_1a0 = CONCAT13(*(undefined *)((long)puVar41 + 2),_local_1a0);
              _local_1a0 = CONCAT14(*(undefined *)((long)puVar41 + 3),_local_1a0);
              _local_1a0 = (long *)(CONCAT35((int3)((ulong)plVar95 >> 0x28),_local_1a0) &
                                   0xffff00ffffffffff);
              free();
              plVar95 = _local_1a0;
              uVar81 = CONCAT17(uStack_189,
                                CONCAT16(uStack_18a,
                                         CONCAT15(uStack_18b,
                                                  CONCAT14(bStack_18c,
                                                           CONCAT13(uStack_18d,
                                                                    CONCAT12(uStack_18e,
                                                                             CONCAT11(uStack_18f,
                                                                                      local_190)))))
                                        ));
              uVar87 = local_580;
              if (((ulong)_local_1a0 & 1) != 0) {
                uVar87 = uVar81;
              }
              pplVar100 = (long **)func_0x0016a1a0(uVar87);
              bVar28 = false;
              if (pplVar100 <= pplVar82) {
                pcVar42 = puVar97 + (long)pplVar82;
                do {
                  pcVar42 = pcVar42 + -1;
                  bVar28 = pplVar100 == (long **)0x0;
                  if (pplVar100 == (long **)0x0) break;
                  pcVar57 = (char *)((uVar87 - 1) + (long)pplVar100);
                  pplVar100 = (long **)((long)pplVar100 + -1);
                } while (*pcVar57 == *pcVar42);
              }
              pplVar100 = (long **)auStack_180;
              if (((ulong)plVar95 & 1) != 0) {
                free(uVar81);
                pplVar100 = (long **)auStack_180;
              }
              pplVar71 = local_490;
              auStack_180 = (undefined  [8])pplVar100;
              if (bVar28) {
                pplVar88 = pplVar82;
                if (pplVar82 == (long **)0x0) {
LAB_00141478:
                  local_2e0 = (long *)CONCAT44(local_2e0._4_4_,5);
                  auStack_180 = (undefined  [8])pplVar100;
                  goto LAB_00141480;
                }
                do {
                  pplVar70 = pplVar88;
                  if (pplVar70 == (long **)0x0) goto LAB_00141478;
                  pplVar88 = (long **)((long)pplVar70 + -1);
                } while (*(char *)((long)pplVar70 + (long)(puVar97 + -1)) != '/');
                if ((long **)((long)pplVar70 + -1) == (long **)0xffffffffffffffff)
                goto LAB_00141478;
                if (pplVar70 <= pplVar82) {
                  pplVar82 = pplVar70;
                }
                if (pplVar82 < (long **)0xfffffffffffffff0) {
                  if (pplVar82 < (long **)0x17) {
                    _local_1a0 = (long *)CONCAT71(_auStack_19f,(char)((int)pplVar82 << 1));
                    uVar87 = local_580;
                  }
                  else {
                    uVar87 = malloc(((ulong)pplVar82 | 0xf) + 1);
                    _local_1a0 = (long *)(((ulong)pplVar82 | 0xf) + 2);
                    local_190 = (byte)uVar87;
                    uStack_18f = (undefined)(uVar87 >> 8);
                    uStack_18e = (undefined)(uVar87 >> 0x10);
                    uStack_18d = (undefined)(uVar87 >> 0x18);
                    bStack_18c = (byte)(uVar87 >> 0x20);
                    uStack_18b = (undefined)(uVar87 >> 0x28);
                    uStack_18a = (undefined)(uVar87 >> 0x30);
                    uStack_189 = (undefined)(uVar87 >> 0x38);
                    uStack_198 = pplVar82;
                  }
                  func_0x0016a0c0(uVar87,puVar97,pplVar82);
                  *(undefined *)(uVar87 + (long)pplVar82) = 0;
                  bVar102 = local_1a0;
                  uVar13 = auStack_19f[0];
                  pplVar82 = (long **)CONCAT17(uStack_189,
                                               CONCAT16(uStack_18a,
                                                        CONCAT15(uStack_18b,
                                                                 CONCAT14(bStack_18c,
                                                                          CONCAT13(uStack_18d,
                                                                                   CONCAT12(
                                                  uStack_18e,CONCAT11(uStack_18f,local_190)))))));
                  uVar49 = *local_970;
                  uVar108 = *(undefined8 *)((long)local_970 + 6);
                  local_2e0 = (long *)((ulong)local_2e0 & 0xffffffff00000000);
                  local_360[0] = (byte)uVar49;
                  local_360._1_5_ = (undefined5)((ulong)uVar49 >> 8);
                  uStack_35a = (undefined2)uVar108;
                  auStack_358 = SUB86((ulong)uVar108 >> 0x10,0);
                  if ((char)local_2c0 == '\x01') {
                    if ((bStack_2d8 & 1) != 0) {
                      free(local_2c8);
                    }
                    local_97c = 0;
                    uStack_2d6 = (undefined2)CONCAT51(local_360._1_5_,local_360[0]);
                    iStack_2d4 = (int)((uint5)local_360._1_5_ >> 8);
                    bStack_2d0 = (byte)uStack_35a;
                    uStack_2cf = (undefined)((ushort)uStack_35a >> 8);
                    uStack_2ce = SUB62(auStack_358,0);
                    iStack_2cc = (int)((uint6)auStack_358 >> 0x10);
                    local_978 = pplVar82;
                    bStack_2d8 = bVar102;
                    uStack_2d7 = uVar13;
                    local_2c8 = pplVar82;
                  }
                  else {
                    local_97c = 0;
                    uStack_2d6 = (undefined2)uVar49;
                    iStack_2d4 = (int)((ulong)uVar49 >> 0x10);
                    bStack_2d8 = local_1a0;
                    uStack_2d7 = auStack_19f[0];
                    bStack_2d0 = (byte)uVar108;
                    uStack_2cf = (undefined)((ulong)uVar108 >> 8);
                    uStack_2ce = (undefined2)((ulong)uVar108 >> 0x10);
                    iStack_2cc = (int)((ulong)uVar108 >> 0x20);
                    local_360[0] = 0;
                    local_360._1_5_ = 0;
                    uStack_35a = 0;
                    auStack_358 = (undefined  [6])0x0;
                    local_2c0 = (long **)CONCAT71(local_2c0._1_7_,1);
                    local_978 = (long **)0x0;
                    local_2c8 = pplVar82;
                  }
                  goto LAB_00141480;
                }
                goto LAB_001424ac;
              }
              puVar91 = (undefined8 *)malloc0(0x11);
              *puVar91 = 0;
              puVar91[1] = 0;
              *(undefined *)(puVar91 + 2) = 0;
              *(undefined *)puVar91 = 0x6c;
              *(undefined *)((long)puVar91 + 1) = 0x69;
              *(undefined *)((long)puVar91 + 2) = 0x62;
              *(undefined *)((long)puVar91 + 3) = 0x70;
              *(undefined *)((long)puVar91 + 4) = 0x61;
              *(undefined *)((long)puVar91 + 5) = 0x69;
              *(undefined *)((long)puVar91 + 6) = 0x72;
              *(undefined *)((long)puVar91 + 7) = 0x69;
              *(undefined *)(puVar91 + 1) = 0x70;
              *(undefined *)((long)puVar91 + 9) = 99;
              *(undefined *)((long)puVar91 + 10) = 0x6f;
              *(undefined *)((long)puVar91 + 0xb) = 0x72;
              *(undefined *)((long)puVar91 + 0xc) = 0x65;
              *(undefined *)((long)puVar91 + 0xd) = 0x2e;
              *(undefined *)((long)puVar91 + 0xe) = 0x73;
              *(undefined *)((long)puVar91 + 0xf) = 0x6f;
              *(undefined *)(puVar91 + 2) = 0;
              _local_1a0 = CONCAT11(*(undefined *)puVar91,0x20);
              _local_1a0 = CONCAT12(*(undefined *)((long)puVar91 + 1),_local_1a0);
              _local_1a0 = CONCAT13(*(undefined *)((long)puVar91 + 2),_local_1a0);
              _local_1a0 = CONCAT14(*(undefined *)((long)puVar91 + 3),_local_1a0);
              _local_1a0 = (long *)CONCAT17(*(undefined *)((long)puVar91 + 6),
                                            CONCAT16(*(undefined *)((long)puVar91 + 5),
                                                     CONCAT15(*(undefined *)((long)puVar91 + 4),
                                                              _local_1a0)));
              uStack_198 = *(long ***)((long)puVar91 + 7);
              local_190 = *(byte *)((long)puVar91 + 0xf);
              uStack_18f = 0;
              free();
              plVar95 = _local_1a0;
              uVar81 = CONCAT17(uStack_189,
                                CONCAT16(uStack_18a,
                                         CONCAT15(uStack_18b,
                                                  CONCAT14(bStack_18c,
                                                           CONCAT13(uStack_18d,
                                                                    CONCAT12(uStack_18e,
                                                                             CONCAT11(uStack_18f,
                                                                                      local_190)))))
                                        ));
              uVar87 = local_580;
              if (((ulong)_local_1a0 & 1) != 0) {
                uVar87 = uVar81;
              }
              pplVar100 = (long **)func_0x0016a1a0(uVar87);
              pplVar71 = local_490;
              if (pplVar100 <= pplVar82) {
                pcVar42 = puVar97 + (long)pplVar82;
                do {
                  pcVar42 = pcVar42 + -1;
                  bVar28 = pplVar100 == (long **)0x0;
                  if (pplVar100 == (long **)0x0) break;
                  pcVar57 = (char *)((uVar87 - 1) + (long)pplVar100);
                  pplVar100 = (long **)((long)pplVar100 + -1);
                } while (*pcVar57 == *pcVar42);
              }
              pplVar100 = (long **)auStack_180;
              if (((ulong)plVar95 & 1) != 0) {
                free(uVar81);
                pplVar100 = (long **)auStack_180;
              }
              auStack_180 = (undefined  [8])pplVar100;
              if (bVar28) {
                pplVar88 = pplVar82;
                if (pplVar82 != (long **)0x0) {
                  do {
                    if (pplVar88 == (long **)0x0) goto LAB_00141478;
                    pplVar70 = (long **)((long)pplVar88 + -1);
                    pcVar42 = (char *)((long)pplVar88 + (long)(puVar97 + -1));
                    pplVar88 = pplVar70;
                  } while (*pcVar42 != '/');
                  pplVar88 = (long **)(puVar97 + (long)pplVar70 + -(long)puVar97);
                  if ((pplVar88 != (long **)0xffffffffffffffff) &&
                     (puVar97 + (long)pplVar70 != puVar97)) {
                    if (pplVar82 <= (long **)((long)pplVar88 + -1)) {
                      pplVar88 = pplVar82;
                    }
                    do {
                      if (pplVar88 == (long **)0x0) goto LAB_00141478;
                      pplVar70 = (long **)((long)pplVar88 + -1);
                      pcVar42 = (char *)((long)pplVar88 + (long)(puVar97 + -1));
                      pplVar88 = pplVar70;
                    } while (*pcVar42 != '/');
                    pplVar88 = (long **)(puVar97 + (long)pplVar70 + -(long)puVar97);
                    if ((pplVar88 != (long **)0xffffffffffffffff) &&
                       (puVar97 + (long)pplVar70 != puVar97)) {
                      if (pplVar82 <= (long **)((long)pplVar88 + -1)) {
                        pplVar88 = pplVar82;
                      }
                      do {
                        pplVar70 = pplVar88;
                        if (pplVar70 == (long **)0x0) goto LAB_00141478;
                        pplVar88 = (long **)((long)pplVar70 + -1);
                      } while (*(char *)((long)pplVar70 + (long)(puVar97 + -1)) != '/');
                      if ((long **)((long)pplVar70 + -1) != (long **)0xffffffffffffffff) {
                        if (pplVar70 <= pplVar82) {
                          pplVar82 = pplVar70;
                        }
                        if ((long **)0xffffffffffffffef < pplVar82) goto LAB_001424ac;
                        if (pplVar82 < (long **)0x17) {
                          _local_1a0 = (long *)CONCAT71(_auStack_19f,(char)((int)pplVar82 << 1));
                          uVar87 = local_580;
                        }
                        else {
                          uVar87 = malloc(((ulong)pplVar82 | 0xf) + 1);
                          _local_1a0 = (long *)(((ulong)pplVar82 | 0xf) + 2);
                          local_190 = (byte)uVar87;
                          uStack_18f = (undefined)(uVar87 >> 8);
                          uStack_18e = (undefined)(uVar87 >> 0x10);
                          uStack_18d = (undefined)(uVar87 >> 0x18);
                          bStack_18c = (byte)(uVar87 >> 0x20);
                          uStack_18b = (undefined)(uVar87 >> 0x28);
                          uStack_18a = (undefined)(uVar87 >> 0x30);
                          uStack_189 = (undefined)(uVar87 >> 0x38);
                          uStack_198 = pplVar82;
                        }
                        func_0x0016a0c0(uVar87,puVar97,pplVar82);
                        *(undefined *)(uVar87 + (long)pplVar82) = 0;
                        bVar102 = local_1a0;
                        uVar13 = auStack_19f[0];
                        pplVar82 = (long **)CONCAT17(uStack_189,
                                                     CONCAT16(uStack_18a,
                                                              CONCAT15(uStack_18b,
                                                                       CONCAT14(bStack_18c,
                                                                                CONCAT13(uStack_18d,
                                                                                         CONCAT12(
                                                  uStack_18e,CONCAT11(uStack_18f,local_190)))))));
                        uVar49 = *local_970;
                        uVar108 = *(undefined8 *)((long)local_970 + 6);
                        local_2e0 = (long *)((ulong)local_2e0 & 0xffffffff00000000);
                        local_360[0] = (byte)uVar49;
                        local_360._1_5_ = (undefined5)((ulong)uVar49 >> 8);
                        uStack_35a = (undefined2)uVar108;
                        auStack_358 = SUB86((ulong)uVar108 >> 0x10,0);
                        if ((char)local_2c0 == '\x01') {
                          if ((bStack_2d8 & 1) != 0) {
                            free(local_2c8);
                          }
                          bStack_2d8 = bVar102;
                          uStack_2d7 = uVar13;
                          uStack_2d6 = (undefined2)CONCAT51(local_360._1_5_,local_360[0]);
                          iStack_2d4 = (int)((uint5)local_360._1_5_ >> 8);
                          bStack_2d0 = (byte)uStack_35a;
                          uStack_2cf = (undefined)((ushort)uStack_35a >> 8);
                          uStack_2ce = SUB62(auStack_358,0);
                          iStack_2cc = (int)((uint6)auStack_358 >> 0x10);
                          local_2c8 = pplVar82;
                        }
                        else {
                          bStack_2d8 = local_1a0;
                          uStack_2d6 = (undefined2)uVar49;
                          iStack_2d4 = (int)((ulong)uVar49 >> 0x10);
                          uStack_2d7 = auStack_19f[0];
                          bStack_2d0 = (byte)uVar108;
                          uStack_2cf = (undefined)((ulong)uVar108 >> 8);
                          uStack_2ce = (undefined2)((ulong)uVar108 >> 0x10);
                          iStack_2cc = (int)((ulong)uVar108 >> 0x20);
                          local_360[0] = 0;
                          local_360._1_5_ = 0;
                          uStack_35a = 0;
                          auStack_358 = (undefined  [6])0x0;
                          local_2c0 = (long **)CONCAT71(local_2c0._1_7_,1);
                          local_2c8 = pplVar82;
                        }
                        goto LAB_00141480;
                      }
                    }
                  }
                }
                goto LAB_00141478;
              }
LAB_00141480:
              bVar102 = bStack_2d8;
              iVar31 = (uint)local_2e0;
              cVar27 = (char)local_2c0;
              if ((uint)local_2e0 == 0) {
                if ((char)local_2c0 == '\0') goto LAB_001424a8;
                uVar58 = (uint)(bStack_2d8 >> 1);
                if ((bStack_2d8 & 1) != 0) {
                  uVar58 = CONCAT22(uStack_2ce,CONCAT11(uStack_2cf,bStack_2d0));
                }
                uVar49 = func_0x0016a110((long)(int)(uVar58 + 1));
                pplVar82 = local_968;
                if ((bVar102 & 1) != 0) {
                  pplVar82 = local_2c8;
                }
                uVar49 = func_0x0016a170(uVar49,pplVar82,(long)(int)(uVar58 + 1));
              }
              else {
                uVar49 = 0;
              }
              *(uint *)((long)pplVar71[1] + (ulong)*(uint *)((long)unaff_x27 + 4)) =
                   (uint)(iVar31 == 0);
              *(undefined8 *)((long)pplVar71[1] + (ulong)*(uint *)(unaff_x27 + 1)) = uVar49;
              if ((cVar27 != '\0') && (pplVar82 = local_2c8, (bStack_2d8 & 1) != 0))
              goto LAB_00141ee8;
            }
          }
          else if (lVar80 == -0x4113d02e850b5a2) {
            uVar87 = *(ulong *)((long)plVar95 + (ulong)*(uint *)((long)unaff_x27 + 4));
            uVar81 = 0xcbf29ce484222325;
            if (uVar87 != 0) {
              uVar47 = 0;
              iVar31 = 1;
              do {
                pcVar42 = (char *)(*(long *)((long)plVar95 + (ulong)*(uint *)unaff_x27) + uVar47);
                uVar47 = (ulong)iVar31;
                iVar31 = iVar31 + 1;
                uVar81 = uVar81 * 0x100000001b3 ^ (long)*pcVar42;
              } while (uVar47 < uVar87);
            }
            *(ulong *)((long)plVar95 + (ulong)*(uint *)(unaff_x27 + 1)) = uVar81;
          }
          else if (lVar80 == 0x24f97a08925804e) {
            uVar58 = *(uint *)unaff_x27;
            FUN_0011b008(0x174b68);
            bVar102 = DAT_00174940;
            FUN_0011b034(0x174b68);
            *(uint *)((long)pplVar71[1] + (ulong)uVar58) = (uint)bVar102;
            uVar58 = *(uint *)((long)unaff_x27 + 4);
            FUN_0011b008(0x174b68);
            uVar49 = _DAT_00174978;
            FUN_0011b034(0x174b68);
            *(undefined8 *)((long)pplVar71[1] + (ulong)uVar58) = uVar49;
          }
          else if (lVar80 == 0x182cae2334aa7454) {
            FUN_0011b034(0x174b40);
          }
          goto LAB_00141fcc;
        }
        if (0x647105bfe419a906 < lVar80) {
          if (0x6e2576812ddd9630 < lVar80) {
            pbVar98 = (byte *)0x6e2576812ddd9631;
            if (lVar80 == 0x6e2576812ddd9631) {
              iVar31 = 0x250ff82c;
LAB_00140ad4:
              pplVar71 = local_490;
              uVar87 = 0;
              do {
                pbVar66 = (byte *)((long)pplVar100 + uVar87);
                if (iVar31 == -0x28e09017) {
                  if (pbVar98 <= pbVar66) goto LAB_001410b4;
                }
                else if (iVar31 != 0xdec3fa5) goto code_r0x00140b30;
                uVar81 = 0;
                if (plVar95 != (long *)0x0) {
                  uVar81 = uVar87 / (ulong)plVar95;
                }
                iVar31 = -0x28e09017;
                lVar80 = uVar87 - uVar81 * (long)plVar95;
                uVar87 = uVar87 + 1;
                *pbVar66 = *pbVar66 ^ *(byte *)(local_760 + lVar80);
              } while( true );
            }
            if (lVar80 == 0x738fa5df866daae4) {
              uVar58 = *(uint *)((long)unaff_x27 + 4);
              uVar86 = *(uint *)((long)plVar95 + (ulong)*(uint *)unaff_x27);
              goto LAB_00140368;
            }
            goto LAB_00141fcc;
          }
          if (lVar80 != 0x647105bfe419a907) {
            if ((lVar80 == 0x658a1e180ecc6d57) &&
               (pplVar82 = *(long ***)((long)plVar95 + (ulong)*(uint *)unaff_x27),
               pplVar82 != (long **)0x0)) {
              plVar95 = pplVar82[1];
              if (plVar95 != (long *)0x0) {
                plVar39 = pplVar82[2];
                plVar48 = plVar95;
                if (plVar39 != plVar95) {
                  do {
                    plVar39 = (long *)((long)plVar39 + -4);
                    if (-1 < *(int *)plVar39) {
                      do {
                        uVar87 = syscall(0x39,(long)*(int *)plVar39);
                        if (uVar87 < 0xfffffffffffff001) {
                          if ((int)uVar87 == -1) {
                            iVar31 = *local_4b8;
                            goto LAB_0013c804;
                          }
                        }
                        else {
                          iVar31 = -(int)uVar87;
                          *local_4b8 = iVar31;
LAB_0013c804:
                          uVar87 = (ulong)-(uint)(iVar31 != 4);
                        }
                      } while (((int)uVar87 < 0) && (*local_4b8 == 4));
                    }
                  } while (plVar39 != plVar95);
                  plVar48 = pplVar82[1];
                }
                pplVar82[2] = plVar95;
                free(plVar48);
              }
              if ((*(char *)((long)pplVar82 + 4) != '\0') && (-1 < *(int *)pplVar82)) {
                do {
                  uVar87 = syscall(0x39,(long)*(int *)pplVar82);
                  if (uVar87 < 0xfffffffffffff001) {
                    if ((int)uVar87 == -1) {
                      iVar31 = *local_4b8;
                      goto LAB_00141ec8;
                    }
                  }
                  else {
                    iVar31 = -(int)uVar87;
                    *local_4b8 = iVar31;
LAB_00141ec8:
                    uVar87 = (ulong)-(uint)(iVar31 != 4);
                  }
                } while (((int)uVar87 < 0) && (*local_4b8 == 4));
              }
              goto LAB_00141ee8;
            }
            goto LAB_00141fcc;
          }
          iVar31 = *(int *)((long)plVar95 + (ulong)*(uint *)((long)unaff_x27 + 4));
          if (-1 < iVar31) {
            uVar87 = *(ulong *)((long)plVar95 + (ulong)*(uint *)unaff_x27);
            piVar34 = *(int **)(uVar87 + 0x10);
            if (piVar34 < *(int **)(uVar87 + 0x18)) {
              piVar95 = piVar34 + 1;
              *piVar34 = iVar31;
            }
            else {
              piVar90 = *(int **)(uVar87 + 8);
              lVar80 = (long)piVar34 - (long)piVar90 >> 2;
              uVar81 = lVar80 + 1;
              if (uVar81 >> 0x3e != 0) {
                FUN_0012a590();
LAB_001424cc:
                FUN_0012ae10();
                pcStack_9b0 = FUN_001424d0;
                lVar80 = tpidr_el0;
                lStack_9b8 = *(long *)(lVar80 + 0x28);
                piStack_9a0 = piVar90;
                uStack_998 = uVar87;
                puVar41 = (undefined4 *)malloc0(7);
                *puVar41 = 0;
                *(undefined4 *)((long)puVar41 + 3) = 0;
                *(undefined *)puVar41 = 100;
                *(undefined *)((long)puVar41 + 1) = 0x6c;
                *(undefined *)((long)puVar41 + 2) = 0x76;
                *(undefined *)((long)puVar41 + 3) = 0x73;
                *(undefined *)(puVar41 + 1) = 0x79;
                *(undefined *)((long)puVar41 + 5) = 0x6d;
                *(undefined *)((long)puVar41 + 6) = 0;
                bStack_9d0 = 0xc;
                uStack_9cf = *(undefined *)puVar41;
                uStack_9ce = *(undefined *)((long)puVar41 + 1);
                uStack_9cd = *(undefined *)((long)puVar41 + 2);
                uStack_9cc = *(undefined *)((long)puVar41 + 3);
                uStack_9cb = *(undefined *)(puVar41 + 1);
                uStack_9ca = *(undefined *)((long)puVar41 + 5);
                uStack_9c9 = 0;
                free();
                uVar87 = (ulong)&bStack_9d0 | 1;
                if ((bStack_9d0 & 1) != 0) {
                  uVar87 = uStack_9c0;
                }
                uVar87 = func_0x00169f70(0,uVar87);
                if ((bStack_9d0 & 1) != 0) {
                  free(uStack_9c0);
                }
                if (*(long *)(lVar80 + 0x28) == lStack_9b8) {
                  return uVar87;
                }
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail(uVar87);
              }
              uVar99 = (long)*(int **)(uVar87 + 0x18) - (long)piVar90;
              uVar47 = (long)uVar99 >> 1;
              if (uVar47 <= uVar81) {
                uVar47 = uVar81;
              }
              if (0x7ffffffffffffffb < uVar99) {
                uVar47 = 0x3fffffffffffffff;
              }
              if (uVar47 == 0) {
                piVar40 = (int *)(lVar80 * 4);
                lVar91 = 0;
                piVar95 = piVar40 + 1;
                *piVar40 = iVar31;
                piVar93 = piVar34;
                if (piVar34 != piVar90) goto LAB_00141508;
LAB_00141fa8:
                *(int **)(uVar87 + 8) = piVar40;
                *(int **)(uVar87 + 0x10) = piVar95;
                *(long *)(uVar87 + 0x18) = lVar91;
                pplVar71 = local_490;
              }
              else {
                if (uVar47 >> 0x3e != 0) goto LAB_001424b8;
                lVar91 = malloc(uVar47 << 2);
                piVar90 = *(int **)(uVar87 + 8);
                piVar34 = *(int **)(uVar87 + 0x10);
                piVar40 = (int *)(lVar91 + lVar80 * 4);
                lVar91 = lVar91 + uVar47 * 4;
                piVar95 = piVar40 + 1;
                *piVar40 = iVar31;
                piVar93 = piVar34;
                if (piVar34 == piVar90) goto LAB_00141fa8;
LAB_00141508:
                do {
                  pplVar71 = local_490;
                  piVar34 = piVar34 + -1;
                  piVar40 = piVar40 + -1;
                  *piVar40 = *piVar34;
                  *piVar34 = -1;
                } while (piVar34 != piVar90);
                *(int **)(uVar87 + 8) = piVar40;
                *(int **)(uVar87 + 0x10) = piVar95;
                *(long *)(uVar87 + 0x18) = lVar91;
                do {
                  piVar93 = piVar93 + -1;
                  if (-1 < *piVar93) {
                    do {
                      uVar81 = syscall(0x39,(long)*piVar93);
                      if (uVar81 < 0xfffffffffffff001) {
                        if ((int)uVar81 == -1) {
                          iVar31 = *local_4b8;
                          goto LAB_0014156c;
                        }
                      }
                      else {
                        iVar31 = -(int)uVar81;
                        *local_4b8 = iVar31;
LAB_0014156c:
                        uVar81 = (ulong)-(uint)(iVar31 != 4);
                      }
                    } while (((int)uVar81 < 0) && (*local_4b8 == 4));
                  }
                } while (piVar93 != piVar90);
              }
              if (piVar90 != (int *)0x0) {
                free(piVar90);
              }
            }
            *(int **)(uVar87 + 0x10) = piVar95;
            local_958 = 0xffffffff;
            goto LAB_00141fcc;
          }
LAB_001424a8:
          FUN_0012ae00();
          pplVar100 = (long **)auStack_180;
          goto LAB_001424ac;
        }
        if (lVar80 != 0x482aae7a9718681c) {
          if (lVar80 == 0x4b3dfd405182ee68) {
            FUN_0011b008(0x174b68);
            DAT_00174940 = 1;
            FUN_0011b034(0x174b68);
            pplVar77 = (long **)local_4f0;
          }
          else if (lVar80 == 0x4f4ebb3b51af22bf) {
            pbVar98 = *(byte **)((long)plVar95 + (ulong)*(uint *)unaff_x27);
            uVar87 = func_0x0016a1a0(pbVar98);
            plVar48 = (long *)(long)*(int *)((long)plVar95 + (ulong)*(uint *)((long)unaff_x27 + 4));
            local_820 = *(long ***)((long)plVar95 + (ulong)*(uint *)(unaff_x27 + 1));
            local_898 = *(ulong *)((long)plVar95 + (ulong)*(uint *)((long)unaff_x27 + 0xc));
            plVar39 = (long *)malloc(0x30);
            pplVar82 = (long **)0x0;
            plVar95 = (long *)0x0;
            plVar39[3] = 0;
            *plVar39 = (long)&DAT_0016eed8;
            plVar39[2] = 0;
            plVar39[1] = 0;
            *(undefined8 *)((long)plVar39 + 0x14) = 0x100000001;
            plVar39[5] = 1;
            plVar39[4] = 1;
            if (uVar87 == 0) {
              pplStack_4a8 = (long **)0x0;
              local_4b0 = (long **)0x0;
              uVar33 = 0;
              pplVar100 = (long **)0x0;
            }
            else {
              pplVar70 = (long **)0x0;
              pplVar88 = (long **)0x0;
              pplVar77 = (long **)0x0;
              iVar31 = 0;
              local_750 = pbVar98 + uVar87;
              local_758 = (long **)0x0;
              local_948 = pbVar98;
              local_8c8 = plVar39;
              local_8a0 = uVar87;
              local_858 = plVar48;
              do {
                local_688 = CONCAT44(local_688._4_4_,iVar31);
                local_548 = (undefined *)CONCAT44(local_548._4_4_,(uint)*pbVar98);
                pplVar100 = pplVar70;
                pplVar69 = pplVar88;
                local_6d0 = pbVar98;
                local_4d0 = pplVar82;
                plStack_4c8 = plVar95;
                if (plVar95 == plVar48) {
                  local_4b0 = pplVar70;
                  pplStack_4a8 = pplVar88;
                  (**(code **)(*plVar39 + 0x18))
                            (plVar39,*(undefined *)
                                      (*(long *)((long)pplVar70 +
                                                ((ulong)pplVar82 >> 9 & 0x7ffffffffffff8)) +
                                      ((ulong)pplVar82 & 0xfff)));
                  local_4d0 = (long **)((long)local_4d0 + local_8c0);
                  plStack_4c8 = (long *)((long)plStack_4c8 + lStack_8b8);
                  pplVar100 = local_4b0;
                  pplVar69 = pplStack_4a8;
                  if ((long **)0x1fff < local_4d0) {
                    free(*pplVar70);
                    local_4d0 = local_4d0 + -0x200;
                    pplVar100 = pplVar70 + 1;
                    pplVar69 = pplStack_4a8;
                  }
                }
                puVar97 = (undefined *)0x0;
                if (pplVar69 != pplVar100) {
                  puVar97 = (undefined *)(((long)pplVar69 - (long)pplVar100) * 0x200 + -1);
                }
                local_4b0 = pplVar100;
                pplStack_4a8 = pplVar69;
                pplVar50 = (long **)(**(code **)(*plVar39 + 0x10))
                                              (plVar39,(ulong)local_548 & 0xffffffff);
                pplVar70 = local_4b0;
                plVar95 = plStack_4c8;
                puVar46 = (undefined *)((long)local_4d0 + (long)plStack_4c8);
                if (puVar97 == puVar46) {
                  pplVar82 = local_4d0 + -0x200;
                  if (local_4d0 < (long **)0x1000) {
                    uVar81 = (long)pplVar69 - (long)local_4b0;
                    uVar87 = (long)pplVar77 - (long)local_758 >> 2;
                    local_8a8 = puVar46;
                    if ((ulong)((long)pplVar77 - (long)local_758) <= uVar81) {
                      local_950 = plStack_4c8;
                      if (pplVar77 == local_758) {
                        uVar87 = 1;
                      }
                      local_890 = pplVar50;
                      if (uVar87 >> 0x3d == 0) {
                        pplVar82 = (long **)malloc(uVar87 * 8);
                        pplVar100 = (long **)((long)pplVar82 + uVar81);
                        plVar95 = (long *)malloc(0x1000);
                        if (uVar81 == uVar87 * 8) {
                          if (pplVar82 < pplVar100) {
                            lVar80 = (long)uVar81 >> 3;
                            uVar87 = lVar80 + 2;
                            if (lVar80 + 1 < 0 == SCARRY8(lVar80,1)) {
                              uVar87 = lVar80 + 1;
                            }
                            pplVar100[-(uVar87 >> 1)] = plVar95;
                            pplVar77 = pplVar100;
                            pplVar100 = pplVar100 + -(uVar87 >> 1);
                            goto joined_r0x0013fa74;
                          }
                          uVar81 = (long)uVar81 >> 2;
                          if (pplVar69 == pplVar70) {
                            uVar81 = 1;
                          }
                          if (uVar81 >> 0x3d != 0) goto LAB_001424b8;
                          pplVar51 = (long **)malloc(uVar81 * 8);
                          pplVar77 = pplVar51 + uVar81;
                          pplVar100 = pplVar51 + (uVar81 >> 2);
                          free(pplVar82);
                          *pplVar100 = plVar95;
                          plVar48 = local_858;
                          pplVar88 = pplVar100 + 1;
                        }
                        else {
                          pplVar77 = pplVar82 + uVar87;
                          *pplVar100 = plVar95;
joined_r0x0013fa74:
                          pplVar51 = pplVar82;
                          plVar48 = local_858;
                          pplVar88 = pplVar100 + 1;
                        }
                        while (pplVar69 != pplVar70) {
                          pplVar71 = pplVar100;
                          pplVar82 = pplVar88;
                          if (pplVar100 == pplVar51) {
                            if (pplVar88 < pplVar77) {
                              lVar80 = (long)pplVar77 - (long)pplVar88 >> 3;
                              uVar87 = lVar80 + 2;
                              if (lVar80 + 1 < 0 == SCARRY8(lVar80,1)) {
                                uVar87 = lVar80 + 1;
                              }
                              pplVar82 = pplVar88 + (uVar87 >> 1);
                              pplVar71 = (long **)((long)pplVar82 -
                                                  ((long)pplVar88 - (long)pplVar100));
                              pplVar51 = pplVar88;
                              if ((long)pplVar88 - (long)pplVar100 != 0) {
                                func_0x0016a0c0(pplVar71,pplVar100,(long)pplVar88 - (long)pplVar100)
                                ;
                                pplVar51 = pplVar100;
                              }
                            }
                            else {
                              uVar87 = (long)pplVar77 - (long)pplVar100 >> 2;
                              if ((long)pplVar77 - (long)pplVar100 == 0) {
                                uVar87 = 1;
                              }
                              if (uVar87 >> 0x3d != 0) goto LAB_001424b8;
                              uVar81 = uVar87 + 3 >> 2;
                              pplVar51 = (long **)malloc(uVar87 * 8);
                              pplVar71 = pplVar51 + uVar81;
                              lVar80 = (long)pplVar88 - (long)pplVar100;
                              pplVar82 = pplVar71;
                              if (lVar80 != 0) {
                                pplVar82 = (long **)((long)pplVar71 + lVar80);
                                pplVar88 = pplVar71;
                                pplVar77 = pplVar100;
                                if ((0x37 < lVar80 - 8U) &&
                                   ((undefined *)0x1f <
                                    (undefined *)((long)pplVar51 + (uVar81 * 8 - (long)pplVar100))))
                                {
                                  pplVar88 = pplVar100 + 2;
                                  pplVar77 = pplVar51 + uVar81 + 2;
                                  uVar81 = (lVar80 - 8U >> 3) + 1;
                                  uVar99 = uVar81 & 0x3ffffffffffffffc;
                                  uVar47 = uVar99;
                                  do {
                                    pplVar50 = pplVar88 + -1;
                                    plVar95 = pplVar88[-2];
                                    plVar39 = pplVar88[1];
                                    plVar48 = *pplVar88;
                                    uVar47 = uVar47 - 4;
                                    pplVar88 = pplVar88 + 4;
                                    pplVar77[-1] = *pplVar50;
                                    pplVar77[-2] = plVar95;
                                    pplVar77[1] = plVar39;
                                    *pplVar77 = plVar48;
                                    pplVar77 = pplVar77 + 4;
                                  } while (uVar47 != 0);
                                  if (uVar81 == uVar99) goto LAB_0013fc60;
                                  pplVar88 = pplVar71 + uVar99;
                                  pplVar77 = pplVar100 + uVar99;
                                }
                                do {
                                  pplVar50 = pplVar88 + 1;
                                  *pplVar88 = *pplVar77;
                                  pplVar88 = pplVar50;
                                  pplVar77 = pplVar77 + 1;
                                } while (pplVar50 != pplVar82);
                              }
LAB_0013fc60:
                              pplVar77 = pplVar51 + uVar87;
                              free(pplVar100);
                              plVar48 = local_858;
                            }
                          }
                          pplVar69 = pplVar69 + -1;
                          pplVar100 = pplVar71 + -1;
                          *pplVar100 = *pplVar69;
                          pplVar88 = pplVar82;
                        }
                        if (local_758 != (long **)0x0) {
                          local_4b0 = pplVar100;
                          pplStack_4a8 = pplVar88;
                          free();
                          pplVar100 = local_4b0;
                          pplVar88 = pplStack_4a8;
                        }
                        pplVar50 = local_890;
                        plVar95 = local_950;
                        puVar46 = local_8a8;
                        pplVar71 = local_490;
                        plVar39 = local_8c8;
                        unaff_x27 = local_498;
                        pplVar70 = pplVar100;
                        pplVar82 = local_4d0;
                        iVar31 = (uint)local_688;
                        local_758 = pplVar51;
                        goto LAB_0013fe28;
                      }
                      goto LAB_001424b8;
                    }
                    local_890 = pplVar50;
                    plVar79 = (long *)malloc(0x1000);
                    pplVar82 = local_758;
                    pplVar100 = local_4b0;
                    if (pplVar77 != pplVar69) {
                      pplVar88 = pplVar69 + 1;
                      *pplVar69 = plVar79;
                      pplVar50 = local_890;
                      puVar46 = local_8a8;
                      unaff_x27 = local_498;
                      pplVar70 = local_4b0;
                      pplVar82 = local_4d0;
                      iVar31 = (uint)local_688;
                      goto LAB_0013fe28;
                    }
                    pplVar51 = local_758;
                    pplVar50 = pplStack_4a8;
                    if (pplVar70 == local_758) {
                      if (pplVar77 == local_758) {
                        uVar87 = 1;
                      }
                      local_950 = plVar79;
                      if (uVar87 >> 0x3d != 0) goto LAB_001424b8;
                      uVar81 = uVar87 + 3 >> 2;
                      pplVar51 = (long **)malloc(uVar87 * 8);
                      pplVar71 = local_490;
                      pplVar70 = pplVar51 + uVar81;
                      bVar28 = pplVar77 == pplVar82;
                      pplVar77 = pplVar51 + uVar87;
                      pplVar50 = pplVar70;
                      if (bVar28) {
LAB_0013fed4:
                        plVar79 = local_950;
                        pplVar100 = pplVar70;
                        if (pplVar82 == (long **)0x0) goto LAB_0013ff10;
                      }
                      else {
                        uVar87 = ((long)pplVar69 - (long)pplVar82) - 8;
                        pplVar50 = (long **)((long)pplVar70 + ((long)pplVar69 - (long)pplVar82));
                        pplVar100 = pplVar70;
                        pplVar88 = pplVar82;
                        if ((uVar87 < 0x38) ||
                           ((undefined *)((long)pplVar51 + (uVar81 * 8 - (long)pplVar82)) <
                            (undefined *)0x20)) {
LAB_0013fec0:
                          do {
                            pplVar69 = pplVar100 + 1;
                            *pplVar100 = *pplVar88;
                            pplVar100 = pplVar69;
                            pplVar88 = pplVar88 + 1;
                            pplVar82 = local_758;
                          } while (pplVar69 != pplVar50);
                          goto LAB_0013fed4;
                        }
                        pplVar100 = pplVar82 + 2;
                        pplVar88 = pplVar51 + uVar81 + 2;
                        uVar87 = (uVar87 >> 3) + 1;
                        uVar47 = uVar87 & 0x3ffffffffffffffc;
                        uVar81 = uVar47;
                        do {
                          pplVar69 = pplVar100 + -1;
                          plVar48 = pplVar100[-2];
                          plVar56 = pplVar100[1];
                          plVar79 = *pplVar100;
                          uVar81 = uVar81 - 4;
                          pplVar100 = pplVar100 + 4;
                          pplVar88[-1] = *pplVar69;
                          pplVar88[-2] = plVar48;
                          pplVar88[1] = plVar56;
                          *pplVar88 = plVar79;
                          pplVar88 = pplVar88 + 4;
                        } while (uVar81 != 0);
                        if (uVar87 != uVar47) {
                          pplVar100 = pplVar70 + uVar47;
                          pplVar88 = pplVar82 + uVar47;
                          goto LAB_0013fec0;
                        }
                      }
                      local_4b0 = pplVar70;
                      pplStack_4a8 = pplVar50;
                      free(pplVar82);
                      plVar79 = local_950;
                      pplVar70 = local_4b0;
                      pplVar100 = local_4b0;
                      pplVar50 = pplStack_4a8;
                    }
LAB_0013ff10:
                    pplVar70[-1] = plVar79;
                    pplVar70 = pplVar100 + -1;
                    pplVar82 = (long **)*pplVar70;
                    iVar31 = (uint)local_688;
                    puVar46 = local_8a8;
                    pplVar88 = pplVar50;
                    if (pplVar50 == pplVar77) {
                      if (pplVar100 < pplVar51 || (long)pplVar100 - (long)pplVar51 == 0) {
                        uVar87 = (long)pplVar77 - (long)pplVar51 >> 2;
                        if ((long)pplVar77 - (long)pplVar51 == 0) {
                          uVar87 = 1;
                        }
                        if (uVar87 >> 0x3d != 0) goto LAB_001424b8;
                        local_4b0 = (long **)(uVar87 << 3);
                        uVar87 = uVar87 >> 2;
                        pplVar88 = (long **)malloc();
                        puVar46 = local_8a8;
                        pplVar69 = pplVar88 + uVar87;
                        iVar31 = (uint)local_688;
                        pplVar50 = pplVar69;
                        if ((long)pplVar77 - (long)pplVar100 != 0) {
                          pplVar50 = (long **)((long)pplVar69 + ((long)pplVar77 - (long)pplVar100));
                          puVar97 = (undefined *)((long)pplVar77 + (-0x10 - (long)pplVar70));
                          pplVar77 = pplVar69;
                          if (((undefined *)0x47 < puVar97) &&
                             ((undefined *)0x1f <
                              (undefined *)((long)pplVar88 + (uVar87 * 8 - (long)pplVar70) + -8))) {
                            pplVar77 = pplVar100 + 2;
                            pplVar71 = pplVar88 + uVar87 + 2;
                            uVar87 = ((ulong)puVar97 >> 3) + 1;
                            uVar47 = uVar87 & 0x3ffffffffffffffc;
                            uVar81 = uVar47;
                            do {
                              pplVar70 = pplVar77 + -1;
                              plVar48 = pplVar77[-2];
                              plVar79 = pplVar77[1];
                              plVar39 = *pplVar77;
                              uVar81 = uVar81 - 4;
                              pplVar77 = pplVar77 + 4;
                              pplVar71[-1] = *pplVar70;
                              pplVar71[-2] = plVar48;
                              pplVar71[1] = plVar79;
                              *pplVar71 = plVar39;
                              pplVar71 = pplVar71 + 4;
                            } while (uVar81 != 0);
                            if (uVar87 == uVar47) goto LAB_001400c0;
                            pplVar100 = pplVar100 + uVar47;
                            pplVar77 = pplVar69 + uVar47;
                          }
                          do {
                            pplVar71 = pplVar77 + 1;
                            *pplVar77 = *pplVar100;
                            pplVar77 = pplVar71;
                            pplVar100 = pplVar100 + 1;
                          } while (pplVar71 != pplVar50);
                        }
LAB_001400c0:
                        pplVar77 = (long **)((long)pplVar88 + (long)local_4b0);
                        bVar28 = pplVar51 != (long **)0x0;
                        pplVar51 = pplVar88;
                        pplVar71 = local_490;
                        plVar39 = local_8c8;
                        pplVar100 = pplVar69;
                        pplVar88 = pplVar50;
                        if (bVar28) {
                          local_4b0 = pplVar69;
                          pplStack_4a8 = pplVar50;
                          free();
                          pplVar71 = local_490;
                          plVar39 = local_8c8;
                          pplVar100 = local_4b0;
                          pplVar88 = pplStack_4a8;
                        }
                      }
                      else {
                        lVar91 = (long)pplVar100 - (long)pplVar51 >> 3;
                        lVar80 = lVar91 + 2;
                        if (lVar91 + 1 < 0 == SCARRY8(lVar91,1)) {
                          lVar80 = lVar91 + 1;
                        }
                        lVar91 = (long)pplVar77 - (long)pplVar100;
                        pplVar88 = pplVar77;
                        local_4b0 = pplVar82;
                        if (lVar91 != 0) {
                          func_0x0016a0c0(pplVar100 + -(lVar80 >> 1),pplVar100,lVar91);
                          pplVar88 = pplVar100;
                        }
                        pplVar50 = (long **)((long)(pplVar100 + -(lVar80 >> 1)) + lVar91);
                        puVar46 = local_8a8;
                        pplVar71 = local_490;
                        pplVar82 = local_4b0;
                        pplVar100 = pplVar88 + -(lVar80 >> 1);
                        pplVar88 = pplVar50;
                      }
                    }
                    *pplVar50 = (long *)pplVar82;
                    pplVar50 = local_890;
                    plVar48 = local_858;
                    pplVar82 = local_4d0;
                    local_758 = pplVar51;
                  }
                  else {
                    pplVar100 = local_4b0 + 1;
                    plVar39 = *local_4b0;
                    pplVar88 = pplStack_4a8;
                    pplVar51 = local_758;
                    if (pplVar69 == pplVar77) {
                      if (pplVar100 < local_758 || (long)pplVar100 - (long)local_758 == 0) {
                        local_950 = plStack_4c8;
                        uVar87 = (long)pplVar77 - (long)local_758 >> 2;
                        if ((long)pplVar77 - (long)local_758 == 0) {
                          uVar87 = 1;
                        }
                        local_890 = pplVar50;
                        if (uVar87 >> 0x3d != 0) goto LAB_001424b8;
                        uVar81 = uVar87 >> 2;
                        pplVar51 = (long **)malloc(uVar87 * 8);
                        pplVar67 = pplVar51 + uVar81;
                        pplVar69 = pplVar67;
                        if ((long)pplVar77 - (long)pplVar100 != 0) {
                          pplVar69 = (long **)((long)pplVar67 + ((long)pplVar77 - (long)pplVar100));
                          uVar47 = (long)pplVar77 + (-0x10 - (long)pplVar70);
                          pplVar88 = pplVar67;
                          if ((0x47 < uVar47) &&
                             ((undefined *)0x1f <
                              (undefined *)((long)pplVar51 + (uVar81 * 8 - (long)pplVar70) + -8))) {
                            pplVar70 = pplVar70 + 3;
                            pplVar88 = pplVar51 + uVar81 + 2;
                            uVar81 = (uVar47 >> 3) + 1;
                            uVar99 = uVar81 & 0x3ffffffffffffffc;
                            uVar47 = uVar99;
                            do {
                              pplVar77 = pplVar70 + -1;
                              plVar95 = pplVar70[-2];
                              plVar79 = pplVar70[1];
                              plVar48 = *pplVar70;
                              uVar47 = uVar47 - 4;
                              pplVar70 = pplVar70 + 4;
                              pplVar88[-1] = *pplVar77;
                              pplVar88[-2] = plVar95;
                              pplVar88[1] = plVar79;
                              *pplVar88 = plVar48;
                              pplVar88 = pplVar88 + 4;
                            } while (uVar47 != 0);
                            if (uVar81 == uVar99) goto LAB_0013fdc8;
                            pplVar100 = pplVar100 + uVar99;
                            pplVar88 = pplVar67 + uVar99;
                          }
                          do {
                            pplVar77 = pplVar88 + 1;
                            *pplVar88 = *pplVar100;
                            pplVar88 = pplVar77;
                            pplVar100 = pplVar100 + 1;
                          } while (pplVar77 != pplVar69);
                        }
LAB_0013fdc8:
                        pplVar77 = pplVar51 + uVar87;
                        pplVar50 = local_890;
                        plVar95 = local_950;
                        plVar48 = local_858;
                        pplVar71 = local_490;
                        pplVar100 = pplVar67;
                        pplVar88 = pplVar69;
                        if (local_758 != (long **)0x0) {
                          local_4b0 = pplVar67;
                          pplStack_4a8 = pplVar69;
                          free();
                          pplVar50 = local_890;
                          plVar95 = local_950;
                          plVar48 = local_858;
                          pplVar71 = local_490;
                          pplVar100 = local_4b0;
                          pplVar88 = pplStack_4a8;
                        }
                      }
                      else {
                        lVar91 = (long)pplVar100 - (long)local_758 >> 3;
                        lVar80 = lVar91 + 2;
                        if (lVar91 + 1 < 0 == SCARRY8(lVar91,1)) {
                          lVar80 = lVar91 + 1;
                        }
                        lVar91 = (long)pplVar77 - (long)pplVar100;
                        pplVar88 = pplVar77;
                        if (lVar91 != 0) {
                          func_0x0016a0c0(pplVar100 + -(lVar80 >> 1),pplVar100,lVar91);
                          pplVar88 = pplVar100;
                        }
                        pplVar69 = (long **)((long)(pplVar100 + -(lVar80 >> 1)) + lVar91);
                        plVar48 = local_858;
                        pplVar71 = local_490;
                        pplVar100 = pplVar88 + -(lVar80 >> 1);
                        pplVar88 = pplVar69;
                        pplVar51 = local_758;
                      }
                    }
                    local_758 = pplVar51;
                    *pplVar69 = plVar39;
                    puVar46 = (undefined *)((long)plVar95 + (long)pplVar82);
                    plVar39 = local_8c8;
                    iVar31 = (uint)local_688;
                  }
                  pplVar88 = pplVar88 + 1;
                  unaff_x27 = local_498;
                  pplVar70 = pplVar100;
                }
                else {
                  pplVar88 = pplStack_4a8;
                  pplVar82 = local_4d0;
                  iVar31 = (uint)local_688;
                }
LAB_0013fe28:
                plVar95 = (long *)((long)plVar95 + 1);
                *(char *)(*(long *)((long)pplVar100 + ((ulong)puVar46 >> 9 & 0x7ffffffffffff8)) +
                         ((ulong)puVar46 & 0xfff)) = (char)local_548;
                pplVar100 = local_758;
                if (((int)plVar48 == (int)plVar95) && (pplVar50 == local_820)) {
                  uVar87 = (ulong)((iVar31 - (int)plVar48) + 1);
                  if (local_8a0 < uVar87) goto LAB_0014249c;
                  plVar79 = (long *)(local_8a0 - uVar87);
                  if (plVar48 <= (long *)(local_8a0 - uVar87)) {
                    plVar79 = plVar48;
                  }
                  uVar81 = 0xcbf29ce484222325;
                  if (plVar79 != (long *)0x0) {
                    plVar56 = (long *)0x0;
                    iVar32 = 1;
                    do {
                      pbVar98 = local_948 + uVar87 + (long)plVar56;
                      plVar56 = (long *)(long)iVar32;
                      iVar32 = iVar32 + 1;
                      uVar81 = uVar81 * 0x100000001b3 ^ (long)(char)*pbVar98;
                    } while (plVar56 < plVar79);
                  }
                  if (uVar81 == local_898) {
                    uVar33 = 1;
                    local_4b0 = pplVar70;
                    pplStack_4a8 = pplVar88;
                    goto LAB_00141efc;
                  }
                }
                iVar31 = iVar31 + 1;
                pbVar98 = local_6d0 + 1;
              } while (pbVar98 != local_750);
              uVar33 = 0;
              local_4b0 = pplVar70;
              pplStack_4a8 = pplVar88;
            }
LAB_00141efc:
            (**(code **)(*plVar39 + 8))(plVar39);
            pplVar77 = (long **)local_4f0;
            lVar80 = (long)pplStack_4a8 - (long)local_4b0;
            pplVar82 = local_4b0;
            pplVar88 = pplStack_4a8;
            while (pplStack_4a8 = pplVar88, 2 < (ulong)(lVar80 >> 3)) {
              local_4b0 = pplVar82;
              free(*pplVar82);
              pplVar82 = local_4b0 + 1;
              pplVar88 = pplStack_4a8;
              lVar80 = (long)pplStack_4a8 - (long)pplVar82;
            }
            for (; pplVar82 != pplVar88; pplVar82 = pplVar82 + 1) {
              free(*pplVar82);
            }
            if (pplVar100 != (long **)0x0) {
              free(pplVar100);
            }
            *(undefined4 *)((long)pplVar71[1] + (ulong)*(uint *)(unaff_x27 + 2)) = uVar33;
          }
          goto LAB_00141fcc;
        }
        uVar58 = *(uint *)pplVar100;
        piVar34 = *(int **)((long)plVar95 + (ulong)*(uint *)unaff_x27);
        puVar97 = (undefined *)(long)*(int *)((long)plVar95 + (ulong)*(uint *)(unaff_x27 + 1));
        uVar86 = ~(*(uint *)((long)plVar95 + (ulong)*(uint *)((long)unaff_x27 + 4)) ^ uVar58);
        uVar44 = 0;
        if (uVar58 != 0) {
          uVar44 = uVar86 / uVar58;
        }
        uVar112 = uVar86 - uVar44 * uVar58;
        uVar111 = *(ushort *)((long)plVar95 + (ulong)uVar112) ^ uVar112;
        if (((uVar111 ^ 0xffffffff) & 0xffff) == 0) {
          pplVar82 = (long **)0x0;
        }
        else {
          local_4d0 = (long **)CONCAT44(local_4d0._4_4_,uVar113);
          local_548 = puVar97;
          if ((uVar111 >> 0xf & 1) == 0) goto LAB_001424b4;
          uVar16 = *(ushort *)((long)plVar95 + (ulong)uVar112) ^ (ushort)uVar112 ^ 0xffff;
          pplVar82 = (long **)malloc((long)(short)uVar16 << 2);
          func_0x0016a0f0(pplVar82,0,(long)(short)uVar16 << 2);
          uVar87 = (ulong)uVar16;
          plVar95 = local_490[1];
          puVar97 = local_548;
          uVar113 = (uint)local_4d0;
          if ((uVar111 & 0xffff) < 0xffec) {
            if ((uVar44 * uVar58 - uVar86) - 3 < (uint)((int)(uVar87 - 1) << 2) ||
                uVar87 - 1 >> 0x1e != 0) {
              uVar81 = 0;
            }
            else {
              pplVar88 = (long **)((long)plVar95 + (ulong)(uVar112 + 2));
              pplVar77 = (long **)((long)pplVar82 + uVar87 * 4);
              uVar81 = 0;
              if ((pplVar77 <= pplVar100 || local_4b0 <= pplVar82) &&
                 ((long **)((long)pplVar88 + uVar87 * 4) <= pplVar82 || pplVar77 <= pplVar88)) {
                uVar58 = *(uint *)pplVar100;
                lVar80 = 0;
                iVar31 = 0;
                uVar81 = uVar87 & 0x7ffc;
                do {
                  iVar32 = iVar31 * 4;
                  iVar31 = iVar31 + 4;
                  puVar91 = (undefined8 *)((long)plVar95 + (ulong)(uVar112 + 2 + iVar32));
                  uVar108 = puVar91[1];
                  uVar49 = *puVar91;
                  bVar102 = (byte)uVar58;
                  bVar104 = (byte)(uVar58 >> 8);
                  bVar105 = (byte)(uVar58 >> 0x10);
                  bVar106 = (byte)(uVar58 >> 0x18);
                  uVar44 = CONCAT13(~((byte)((ulong)uVar49 >> 0x18) ^ bVar106),
                                    CONCAT12(~((byte)((ulong)uVar49 >> 0x10) ^ bVar105),
                                             CONCAT11(~((byte)((ulong)uVar49 >> 8) ^ bVar104),
                                                      ~((byte)uVar49 ^ bVar102))));
                  uVar96 = CONCAT13(~((byte)((ulong)uVar108 >> 0x18) ^ bVar106),
                                    CONCAT12(~((byte)((ulong)uVar108 >> 0x10) ^ bVar105),
                                             CONCAT11(~((byte)((ulong)uVar108 >> 8) ^ bVar104),
                                                      ~((byte)uVar108 ^ bVar102))));
                  uVar111 = (uint)(CONCAT17(~((byte)((ulong)uVar49 >> 0x38) ^ bVar106),
                                            CONCAT16(~((byte)((ulong)uVar49 >> 0x30) ^ bVar105),
                                                     CONCAT15(~((byte)((ulong)uVar49 >> 0x28) ^
                                                               bVar104),
                                                              CONCAT14(~((byte)((ulong)uVar49 >>
                                                                               0x20) ^ bVar102),
                                                                       uVar44)))) >> 0x20);
                  uVar115 = (uint)(CONCAT17(~((byte)((ulong)uVar108 >> 0x38) ^ bVar106),
                                            CONCAT16(~((byte)((ulong)uVar108 >> 0x30) ^ bVar105),
                                                     CONCAT15(~((byte)((ulong)uVar108 >> 0x28) ^
                                                               bVar104),
                                                              CONCAT14(~((byte)((ulong)uVar108 >>
                                                                               0x20) ^ bVar102),
                                                                       uVar96)))) >> 0x20);
                  uVar86 = 0;
                  if (uVar58 != 0) {
                    uVar86 = uVar44 / uVar58;
                  }
                  uVar94 = 0;
                  if (uVar58 != 0) {
                    uVar94 = uVar111 / uVar58;
                  }
                  uVar101 = 0;
                  if (uVar58 != 0) {
                    uVar101 = uVar96 / uVar58;
                  }
                  uVar85 = 0;
                  if (uVar58 != 0) {
                    uVar85 = uVar115 / uVar58;
                  }
                  ((undefined8 *)((long)pplVar82 + lVar80))[1] =
                       CONCAT44(uVar115 - uVar85 * uVar58,uVar96 - uVar101 * uVar58);
                  *(undefined8 *)((long)pplVar82 + lVar80) =
                       CONCAT44(uVar111 - uVar94 * uVar58,uVar44 - uVar86 * uVar58);
                  lVar80 = lVar80 + 0x10;
                } while (((ulong)(uVar16 >> 2) & 0x1fff) * 0x10 - lVar80 != 0);
                if (uVar81 == uVar87) goto LAB_00141cc0;
              }
            }
          }
          else {
            uVar81 = 0;
          }
          do {
            uVar86 = *(uint *)pplVar100;
            uVar58 = *(uint *)((long)plVar95 + (ulong)(uVar112 + 2 + (int)uVar81 * 4)) ^
                     uVar86 ^ 0xffffffff;
            uVar44 = 0;
            if (uVar86 != 0) {
              uVar44 = uVar58 / uVar86;
            }
            *(uint *)((long)pplVar82 + uVar81 * 4) = uVar58 - uVar44 * uVar86;
            uVar81 = uVar81 + 1;
          } while (uVar87 != uVar81);
        }
LAB_00141cc0:
        pplVar100 = pplVar82;
        if (*(char *)(piVar34 + 1) == '\0') {
          plVar48 = (long *)0x0;
          plVar95 = (long *)0x0;
          piVar90 = *(int **)(piVar34 + 2);
          piVar34 = *(int **)(piVar34 + 4);
          plVar39 = plVar95;
          if (piVar90 == piVar34) goto LAB_00141e2c;
LAB_00141d10:
          do {
            while( true ) {
              puVar46 = (undefined *)((long)plVar95 - (long)plVar48 >> 3);
              if (puVar97 <= puVar46) {
                uVar87 = (long)plVar95 - (long)plVar48;
                if (uVar87 != 0) goto LAB_00141dcc;
                uVar87 = 0;
                goto LAB_00141e38;
              }
              iVar31 = *piVar90;
              if (plVar95 < plVar39) break;
              puVar62 = puVar46 + 1;
              if ((ulong)puVar62 >> 0x3d != 0) goto LAB_001424c0;
              puVar37 = (undefined *)((long)plVar39 - (long)plVar48 >> 2);
              if (puVar37 <= puVar62) {
                puVar37 = puVar62;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)plVar39 - (long)plVar48)) {
                puVar37 = (undefined *)0x1fffffffffffffff;
              }
              if (puVar37 == (undefined *)0x0) {
                lVar80 = 0;
              }
              else {
                if ((ulong)puVar37 >> 0x3d != 0) goto LAB_001424b8;
                lVar80 = malloc((long)puVar37 << 3);
              }
              plVar39 = (long *)(lVar80 + (long)puVar46 * 8);
              plVar79 = plVar39 + 1;
              *plVar39 = (long)iVar31;
              while (plVar95 != plVar48) {
                plVar95 = plVar95 + -1;
                plVar39 = plVar39 + -1;
                *plVar39 = *plVar95;
              }
              if (plVar48 != (long *)0x0) {
                free(plVar48);
              }
              piVar90 = piVar90 + 1;
              plVar48 = plVar39;
              plVar95 = plVar79;
              plVar39 = (long *)(lVar80 + (long)puVar37 * 8);
              if (piVar90 == piVar34) goto LAB_00141dc4;
            }
            plVar79 = plVar95 + 1;
            *plVar95 = (long)iVar31;
            piVar90 = piVar90 + 1;
            plVar95 = plVar79;
          } while (piVar90 != piVar34);
LAB_00141dc4:
          uVar87 = (long)plVar79 - (long)plVar48;
          if (uVar87 != 0) goto LAB_00141dcc;
LAB_00141e38:
          *(int *)((long)local_490[1] + (ulong)*(uint *)((long)local_498 + 0xc)) =
               (int)(uVar87 >> 3);
          unaff_x27 = local_498;
          pplVar77 = (long **)local_4f0;
          pplVar71 = local_490;
          if (plVar48 == (long *)0x0) goto joined_r0x00140d2c;
        }
        else {
          iVar31 = *piVar34;
          plVar48 = (long *)malloc(8);
          plVar95 = plVar48 + 1;
          *plVar48 = (long)iVar31;
          piVar90 = *(int **)(piVar34 + 2);
          piVar34 = *(int **)(piVar34 + 4);
          plVar39 = plVar95;
          if (piVar90 != piVar34) goto LAB_00141d10;
LAB_00141e2c:
          uVar87 = (long)plVar95 - (long)plVar48;
          if (uVar87 == 0) goto LAB_00141e38;
LAB_00141dcc:
          uVar81 = (long)uVar87 >> 3;
          pplVar88 = pplVar82;
          plVar95 = plVar48;
          if (uVar81 < 2) {
            uVar81 = 1;
          }
          do {
            uVar81 = uVar81 - 1;
            *(long *)((long)local_490[1] + (ulong)*(uint *)pplVar88) = *plVar95;
            pplVar88 = (long **)((long)pplVar88 + 4);
            plVar95 = plVar95 + 1;
          } while (uVar81 != 0);
          *(int *)((long)local_490[1] + (ulong)*(uint *)((long)local_498 + 0xc)) =
               (int)(uVar87 >> 3);
        }
        pplVar71 = local_490;
        unaff_x27 = local_498;
        pplVar77 = (long **)local_4f0;
        free(plVar48);
joined_r0x00140d2c:
        if (pplVar100 != (long **)0x0) {
LAB_00141ee8:
          free(pplVar82);
        }
        goto LAB_00141fcc;
      }
      if (uVar86 == 0x5f21598f) {
        lVar91 = *(long *)(local_470 + 8);
        uVar112 = *(uint *)(lVar91 + 0x10);
        uVar58 = *(uint *)(lVar91 + 0x14);
        lVar80 = *(long *)(lVar91 + 8);
        uVar86 = *(uint *)(lVar80 + (ulong)uVar58);
        *(uint *)(lVar91 + 0x14) = uVar58 + 4;
        uVar111 = *(uint *)(lVar80 + (ulong)(uVar58 + 4));
        *(uint *)(lVar91 + 0x14) = uVar58 + 8;
        uVar86 = uVar86 ^ uVar112 ^ 0xffffffff;
        uVar113 = *(uint *)(lVar80 + (ulong)(uVar58 + 8));
        *(uint *)(lVar91 + 0x14) = uVar58 + 0xc;
        uVar96 = 0;
        if (uVar112 != 0) {
          uVar96 = uVar86 / uVar112;
        }
        uVar94 = *(uint *)(lVar80 + (ulong)(uVar58 + 0xc));
        *(uint *)(lVar91 + 0x14) = uVar58 + 0x10;
        uVar115 = uVar58 + 0x18;
        uVar101 = *(uint *)(lVar80 + (ulong)(uVar58 + 0x10));
        uVar94 = uVar94 ^ uVar112 ^ 0xffffffff;
        *(uint *)(lVar91 + 0x14) = uVar58 + 0x14;
        uVar101 = uVar101 ^ uVar112 ^ 0xffffffff;
        uVar85 = *(uint *)(lVar80 + (ulong)(uVar58 + 0x14));
        *(uint *)(lVar91 + 0x14) = uVar115;
        unaff_x24 = *(long ***)(lVar80 + (ulong)uVar115);
        uVar22 = 0;
        if (uVar112 != 0) {
          uVar22 = uVar94 / uVar112;
        }
        uVar111 = uVar111 ^ uVar112 ^ 0xffffffff;
        iVar31 = (uVar115 ^ 8) + (uVar115 * 2 | 0xffffffee);
        uVar115 = 0;
        if (uVar112 != 0) {
          uVar115 = uVar101 / uVar112;
        }
        uVar58 = iVar31 + 0x12;
        uVar7 = iVar31 + 0x16;
        *(uint *)(lVar91 + 0x14) = uVar58;
        uVar33 = *(undefined4 *)(lVar80 + (ulong)uVar58);
        *(uint *)(lVar91 + 0x14) = uVar7;
        sVar17 = *(short *)(lVar80 + (ulong)uVar7);
        local_490 = (long **)CONCAT44(local_490._4_4_,uVar33);
        uVar20 = 0;
        if (uVar112 != 0) {
          uVar20 = uVar111 / uVar112;
        }
        uVar7 = (uVar58 * 2 & 4) + (uVar7 ^ 2);
        *(uint *)(lVar91 + 0x14) = uVar7;
        uVar58 = *(uint *)(lVar80 + (ulong)uVar7);
        *(uint *)(lVar91 + 0x14) = uVar7 + 4;
        uVar18 = *(uint *)(lVar80 + (ulong)(uVar7 + 4));
        unaff_x27 = (long **)(ulong)uVar18;
        *(uint *)(lVar91 + 0x14) = uVar7 + 8;
        uVar94 = *(uint *)(lVar80 + (ulong)(uVar94 - uVar22 * uVar112));
        pplVar82 = (long **)(long)(int)uVar94;
        uVar49 = *(undefined8 *)(lVar80 + (ulong)(uVar101 - uVar115 * uVar112));
        local_464 = uVar44;
        FUN_00149a84_XOR((astruct_3 *)local_360,*(char **)(lVar91 + 8),uVar112,
                         uVar86 - uVar96 * uVar112,uVar111 - uVar20 * uVar112);
        if ((local_360[0] & 1) == 0) {
          uStack_198 = (long **)CONCAT26(uStack_352,auStack_358);
          _local_1a0 = (long *)CONCAT26(uStack_35a,CONCAT51(local_360._1_5_,local_360[0]));
          local_190 = (byte)local_350;
          uStack_18f = (undefined)((ulong)local_350 >> 8);
          uStack_18e = (undefined)((ulong)local_350 >> 0x10);
          uStack_18d = (undefined)((ulong)local_350 >> 0x18);
          bStack_18c = (byte)((ulong)local_350 >> 0x20);
          uStack_18b = (undefined)((ulong)local_350 >> 0x28);
          uStack_18a = (undefined)((ulong)local_350 >> 0x30);
          uStack_189 = (undefined)((ulong)local_350 >> 0x38);
          pplVar100 = (long **)auStack_180;
        }
        else {
          FUN_0012ae34(&local_1a0,local_350,CONCAT26(uStack_352,auStack_358));
          pplVar100 = (long **)auStack_180;
        }
        auStack_180._4_4_ = (undefined4)((ulong)pplVar100 >> 0x20);
        uVar113 = uVar113 ^ uVar112 ^ 0xffffffff;
        uVar86 = 0;
        if (uVar112 != 0) {
          uVar86 = uVar113 / uVar112;
        }
        uVar108 = *(undefined8 *)(*(long *)(lVar91 + 8) + (ulong)(uVar113 - uVar86 * uVar112));
        uStack_188 = (undefined)uVar108;
        uStack_187 = (undefined)((ulong)uVar108 >> 8);
        uStack_186 = (undefined)((ulong)uVar108 >> 0x10);
        uStack_185 = (undefined)((ulong)uVar108 >> 0x18);
        uStack_184 = (undefined)((ulong)uVar108 >> 0x20);
        uStack_183 = (undefined)((ulong)uVar108 >> 0x28);
        uStack_182 = (undefined)((ulong)uVar108 >> 0x30);
        uStack_181 = (undefined)((ulong)uVar108 >> 0x38);
        if (0xffffffef < uVar94) goto LAB_001424ac;
        if (uVar94 < 0x17) {
          auStack_180._1_3_ = (undefined3)((ulong)pplVar100 >> 8);
          auStack_180._0_4_ = CONCAT31(auStack_180._1_3_,(char)(uVar94 << 1));
          puVar97 = local_818;
          if (uVar94 != 0) goto LAB_0013b4e8;
        }
        else {
          uVar87 = 0xe - (~(ulong)pplVar82 | 0xf) & 0xfffffffffffffffe;
          auStack_180 = (undefined  [8])pplVar100;
          puVar97 = (undefined *)malloc(uVar87 + 2);
          auStack_180 = (undefined  [8])(uVar87 + 3);
          auStack_178 = (undefined  [8])pplVar82;
          local_170 = puVar97;
LAB_0013b4e8:
          func_0x0016a0c0(puVar97,uVar49,pplVar82);
        }
        puVar97[(long)pplVar82] = 0;
        if ((DAT_00174980 & 1) == 0) {
          iVar31 = FUN_0011b428(&DAT_00174980);
          if (iVar31 != 0) {
            puVar91 = (undefined8 *)malloc(0x30);
            _DAT_00174988 = puVar91;
            puVar91[1] = 0;
            *puVar91 = 0;
            puVar91[3] = 0;
            puVar91[2] = 0;
            puVar91[5] = 0;
            puVar91[4] = 0;
            FUN_0011b54c(&DAT_00174980);
          }
        }
        puVar91 = _DAT_00174988;
        if ((byte)(local_1a0 + 1) == (byte)-(~local_1a0 | 1)) {
          uStack_2ce._1_1_ = uStack_18d;
          uStack_2ce._0_1_ = uStack_18e;
          bStack_2d0 = local_190;
          uStack_2cf = uStack_18f;
          iStack_2cc = (int)(CONCAT15(uStack_189,
                                      CONCAT14(uStack_18a,
                                               CONCAT13(uStack_18b,CONCAT12(bStack_18c,uStack_2ce)))
                                     ) >> 0x10);
          bStack_2d8 = (byte)uStack_198;
          uStack_2d7 = (undefined)((ulong)uStack_198 >> 8);
          uStack_2d6 = (undefined2)((ulong)uStack_198 >> 0x10);
          iStack_2d4 = (int)((ulong)uStack_198 >> 0x20);
          local_2e0 = _local_1a0;
          local_2c8 = (long **)CONCAT17(uStack_181,
                                        CONCAT16(uStack_182,
                                                 CONCAT15(uStack_183,
                                                          CONCAT14(uStack_184,
                                                                   CONCAT13(uStack_185,
                                                                            CONCAT12(uStack_186,
                                                                                     CONCAT11(
                                                  uStack_187,uStack_188)))))));
          pplVar82 = (long **)auStack_180;
          if (((ulong)auStack_180 & 1) != 0) goto LAB_0013b55c;
LAB_0013b598:
          local_2c0 = pplVar82;
          uStack_2b8 = (long **)auStack_178;
          local_2b0 = local_170;
          auStack_180 = (undefined  [8])local_2c0;
        }
        else {
          FUN_0012ae34(&local_2e0,
                       CONCAT17(uStack_189,
                                CONCAT16(uStack_18a,
                                         CONCAT15(uStack_18b,
                                                  CONCAT14(bStack_18c,
                                                           CONCAT13(uStack_18d,
                                                                    CONCAT12(uStack_18e,
                                                                             CONCAT11(uStack_18f,
                                                                                      local_190)))))
                                        )),uStack_198);
          local_2c8 = (long **)CONCAT17(uStack_181,
                                        CONCAT16(uStack_182,
                                                 CONCAT15(uStack_183,
                                                          CONCAT14(uStack_184,
                                                                   CONCAT13(uStack_185,
                                                                            CONCAT12(uStack_186,
                                                                                     CONCAT11(
                                                  uStack_187,uStack_188)))))));
          pplVar82 = (long **)auStack_180;
          if (((ulong)auStack_180 & 1) == 0) goto LAB_0013b598;
LAB_0013b55c:
          FUN_0012ae34(&local_2c0,local_170,auStack_178);
        }
        local_2a8 = local_2a8 & 0xffffffff00000000;
        FUN_00144dfc(puVar91,&local_2e0);
        if ((int)local_2a8 != -1) {
          local_320 = (undefined  [8])FUN_0012d788;
          pcStack_318 = FUN_0012e0d0;
          local_310 = (long **)FUN_0012e0cc;
          (**(code **)(local_320 + (local_2a8 & 0xffffffff) * 8))(&local_390,&local_2e0);
        }
        local_2a8 = CONCAT44(local_2a8._4_4_,0xffffffff);
        uVar87 = 0xcbf29ce484222325;
        if (sVar17 != 0) {
          lVar80 = 0;
          iVar31 = 0;
          uVar86 = (uint)local_490 ^ uVar112 ^ 0xffffffff;
          uVar44 = 0;
          if (uVar112 != 0) {
            uVar44 = uVar86 / uVar112;
          }
          uVar87 = 0xcbf29ce484222325;
          do {
            pcVar42 = (char *)(*(long *)(lVar91 + 8) + (ulong)(uVar86 - uVar44 * uVar112) + lVar80);
            iVar31 = iVar31 + 1;
            lVar80 = (long)iVar31;
            uVar87 = uVar87 * 0x100000001b3 ^ (long)*pcVar42;
          } while (sVar17 != iVar31);
        }
        uVar85 = uVar85 ^ uVar112 ^ 0xffffffff;
        uVar86 = 0;
        if (uVar112 != 0) {
          uVar86 = uVar85 / uVar112;
        }
        if ((long **)(uVar87 ^ (long)*(int *)(*(long *)(lVar91 + 8) +
                                             (ulong)(uVar85 - uVar86 * uVar112))) != unaff_x24) {
          uVar58 = uVar18;
        }
        if ((byte)(auStack_180[0] + (auStack_180[0] ^ 0xfe)) != (auStack_180[0] | 0xfe)) {
          free(local_170);
        }
        if ((byte)(local_1a0 + 1) != (byte)-(~local_1a0 | 1)) {
          free(CONCAT17(uStack_189,
                        CONCAT16(uStack_18a,
                                 CONCAT15(uStack_18b,
                                          CONCAT14(bStack_18c,
                                                   CONCAT13(uStack_18d,
                                                            CONCAT12(uStack_18e,
                                                                     CONCAT11(uStack_18f,local_190))
                                                           ))))));
        }
        pplVar82 = (long **)local_350;
        if ((byte)(local_360[0] + 1) != (local_360[0] | 1)) goto LAB_0013c350;
        goto LAB_0013c354;
      }
      uVar58 = local_770;
      if (uVar86 != 0x60aba98c) goto LAB_0013267c;
      goto LAB_0012ed04;
    }
    if (0x65fb0cc8 < (int)uVar86) {
      uVar58 = local_59c;
      if (uVar86 != 0x65fb0cc9) {
        if (uVar86 == 0x6d7b099b) {
          lVar54 = *(long *)(local_470 + 8);
          uVar111 = *(uint *)(lVar54 + 0x10);
          lVar80 = *(long *)(lVar54 + 8);
          uVar58 = *(uint *)(lVar54 + 0x14) + 4;
          uVar115 = *(uint *)(lVar80 + (ulong)*(uint *)(lVar54 + 0x14));
          unaff_x27 = (long **)(ulong)uVar115;
          *(uint *)(lVar54 + 0x14) = uVar58;
          uVar86 = (uVar58 | 8) + (uVar58 & 8);
          lVar91 = *(long *)(lVar80 + (ulong)uVar58);
          uVar58 = uVar86 + 4;
          *(uint *)(lVar54 + 0x14) = uVar86;
          uVar96 = *(uint *)(lVar80 + (ulong)uVar86);
          *(uint *)(lVar54 + 0x14) = uVar58;
          sVar17 = *(short *)(lVar80 + (ulong)uVar58);
          uVar86 = ((uVar58 & 2 | ((uVar58 & 2) >> 1) << 2) - (uVar58 | 2)) + (uVar58 * 2 ^ 4);
          *(uint *)(lVar54 + 0x14) = uVar86;
          uVar58 = *(uint *)(lVar80 + (ulong)uVar86);
          *(uint *)(lVar54 + 0x14) = uVar86 + 4;
          uVar94 = *(uint *)(lVar80 + (ulong)(uVar86 + 4));
          unaff_x24 = (long **)(ulong)uVar94;
          *(uint *)(lVar54 + 0x14) = uVar86 + 8;
          uVar113 = *(uint *)(lVar80 + (ulong)(uVar86 + 8));
          *(uint *)(lVar54 + 0x14) = uVar86 + 0xc;
          uVar112 = *(uint *)(lVar80 + (ulong)(uVar86 + 0xc));
          uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
          uVar101 = 0;
          if (uVar111 != 0) {
            uVar101 = uVar113 / uVar111;
          }
          *(uint *)(lVar54 + 0x14) = uVar86 + 0x10;
          uVar85 = *(uint *)(lVar80 + (ulong)(uVar86 + 0x10));
          *(uint *)(lVar54 + 0x14) = uVar86 + 0x14;
          piVar34 = *(int **)(lVar80 + (ulong)(uVar113 - uVar101 * uVar111));
          uVar87 = *(ulong *)(piVar34 + 2);
          if (uVar87 == 0) {
            piVar90 = piVar34 + 6;
            local_490 = (long **)CONCAT44(local_490._4_4_,uVar58);
            local_464 = uVar44;
            do {
              uVar87 = syscall(0x3d,(long)*piVar34,piVar90,0x1068);
              iVar31 = (int)uVar87;
              if (uVar87 < 0xfffffffffffff001) {
                if (iVar31 != -1) {
                  if (0 < iVar31) {
                    uVar87 = uVar87 & 0xffffffff;
                    uVar58 = (uint)local_490;
                    goto LAB_00133650;
                  }
                  break;
                }
              }
              else {
                *local_4b8 = -iVar31;
              }
              piVar40 = (int *)func_0x0016a0b0();
            } while (*piVar40 == 4);
            lVar80 = 0;
            iVar31 = 0;
            uVar58 = (uint)local_490;
          }
          else {
            piVar90 = *(int **)(piVar34 + 4);
            local_464 = uVar44;
LAB_00133650:
            uVar16 = *(ushort *)(piVar90 + 4);
            lVar80 = (long)piVar90 + 0x13;
            *(ulong *)(piVar34 + 2) = uVar87 - uVar16;
            *(ulong *)(piVar34 + 4) = (long)piVar90 + (ulong)uVar16;
            *(long *)(piVar34 + 0x420) = lVar80;
            uVar86 = *(byte *)((long)piVar90 + 0x12) - 1;
            if (uVar86 < 0xe) {
              iVar31 = *(int *)(&DAT_0010f2ac + ((ulong)uVar86 & 0xff) * 4);
            }
            else {
              iVar31 = 0;
            }
            piVar34[0x422] = iVar31;
          }
          uVar112 = uVar112 ^ uVar111 ^ 0xffffffff;
          uVar85 = uVar85 ^ uVar111 ^ 0xffffffff;
          uVar86 = 0;
          if (uVar111 != 0) {
            uVar86 = uVar112 / uVar111;
          }
          uVar44 = 0;
          if (uVar111 != 0) {
            uVar44 = uVar85 / uVar111;
          }
          *(int *)(*(long *)(lVar54 + 8) + (ulong)(uVar112 - uVar86 * uVar111)) = iVar31;
          *(long *)(*(long *)(lVar54 + 8) + (ulong)(uVar85 - uVar44 * uVar111)) = lVar80;
          uVar87 = 0xcbf29ce484222325;
          if (sVar17 != 0) {
            uVar96 = uVar96 ^ uVar111 ^ 0xffffffff;
            lVar80 = 0;
            iVar31 = 0;
            uVar86 = 0;
            if (uVar111 != 0) {
              uVar86 = uVar96 / uVar111;
            }
            uVar87 = 0xcbf29ce484222325;
            do {
              pcVar42 = (char *)(*(long *)(lVar54 + 8) + (ulong)(uVar96 - uVar86 * uVar111) + lVar80
                                );
              iVar31 = iVar31 + 1;
              lVar80 = (long)iVar31;
              uVar87 = uVar87 * 0x100000001b3 ^ (long)*pcVar42;
            } while (sVar17 != iVar31);
          }
          uVar115 = uVar115 ^ uVar111 ^ 0xffffffff;
          uVar86 = 0;
          if (uVar111 != 0) {
            uVar86 = uVar115 / uVar111;
          }
          uVar81 = (ulong)*(int *)(*(long *)(lVar54 + 8) + (ulong)(uVar115 - uVar86 * uVar111));
          if ((uVar87 | uVar81) * 2 - (uVar87 + uVar81) != lVar91) {
            uVar58 = uVar94;
          }
          goto LAB_001395a8;
        }
        uVar58 = local_80c;
        if (uVar86 != 0x6dd51d2e) goto LAB_0013267c;
      }
      goto LAB_0012ed04;
    }
    uVar58 = local_640;
    if ((uVar86 == 0x64db2d42) || (uVar58 = local_788, uVar86 == 0x6510f97b)) goto LAB_0012ed04;
  }
  else if ((int)uVar86 < 0x79f262cd) {
    if (0x72126bb6 < (int)uVar86) {
      uVar58 = local_5c8;
      if (uVar86 != 0x72126bb7) {
        if (uVar86 == 0x72c4753d) {
          lVar91 = *(long *)(local_470 + 8);
          uVar111 = *(uint *)(lVar91 + 0x10);
          uVar96 = *(uint *)(lVar91 + 0x14);
          lVar80 = *(long *)(lVar91 + 8);
          uVar86 = *(uint *)(lVar80 + (ulong)uVar96);
          *(uint *)(lVar91 + 0x14) = uVar96 + 4;
          uVar58 = uVar96 + 0x10;
          uVar113 = *(uint *)(lVar80 + (ulong)(uVar96 + 4));
          *(uint *)(lVar91 + 0x14) = uVar96 + 8;
          uVar86 = uVar86 ^ uVar111 ^ 0xffffffff;
          uVar112 = *(uint *)(lVar80 + (ulong)(uVar96 + 8));
          uVar115 = 0;
          if (uVar111 != 0) {
            uVar115 = uVar86 / uVar111;
          }
          *(uint *)(lVar91 + 0x14) = uVar96 + 0xc;
          uVar113 = uVar113 ^ uVar111 ^ 0xffffffff;
          uVar94 = *(uint *)(lVar80 + (ulong)(uVar96 + 0xc));
          uVar112 = uVar112 ^ uVar111 ^ 0xffffffff;
          *(uint *)(lVar91 + 0x14) = uVar58;
          uVar96 = (uVar58 * 2 | 0x11) + (uVar58 ^ 0xfffffff7);
          local_490 = *(long ***)(lVar80 + (ulong)uVar58);
          uVar94 = uVar94 ^ uVar111 ^ 0xffffffff;
          *(uint *)(lVar91 + 0x14) = uVar96;
          uVar58 = uVar96 + 4;
          uVar101 = *(uint *)(lVar80 + (ulong)uVar96);
          *(uint *)(lVar91 + 0x14) = uVar58;
          uVar101 = uVar101 ^ uVar111 ^ 0xffffffff;
          sVar17 = *(short *)(lVar80 + (ulong)uVar58);
          uVar85 = 0;
          if (uVar111 != 0) {
            uVar85 = uVar112 / uVar111;
          }
          iVar31 = uVar96 + (uVar58 | 2) + (-uVar96 - 5 | 2);
          uVar58 = 0;
          if (uVar111 != 0) {
            uVar58 = uVar113 / uVar111;
          }
          *(uint *)(lVar91 + 0x14) = iVar31 + 5U;
          uVar33 = *(undefined4 *)(lVar80 + (ulong)(iVar31 + 5U));
          *(uint *)(lVar91 + 0x14) = iVar31 + 9U;
          local_498 = (long **)CONCAT44(local_498._4_4_,uVar33);
          uVar96 = 0;
          if (uVar111 != 0) {
            uVar96 = uVar94 / uVar111;
          }
          uVar33 = *(undefined4 *)(lVar80 + (ulong)(iVar31 + 9U));
          *(int *)(lVar91 + 0x14) = iVar31 + 0xd;
          paVar89 = *(astruct_1 **)(lVar80 + (ulong)(uVar112 - uVar85 * uVar111));
          local_4b0 = (long **)CONCAT44(local_4b0._4_4_,uVar33);
          pplVar82 = (long **)paVar89->field11_0x20;
          local_4f0 = (long *)CONCAT44(local_4f0._4_4_,
                                       *(undefined4 *)(lVar80 + (ulong)(uVar113 - uVar58 * uVar111))
                                      );
          uVar58 = 0;
          if (uVar111 != 0) {
            uVar58 = uVar101 / uVar111;
          }
          local_4d0 = (long **)CONCAT44(local_4d0._4_4_,uVar94 - uVar96 * uVar111);
          local_508 = (undefined *)CONCAT44(local_508._4_4_,uVar101 - uVar58 * uVar111);
          uVar87 = *(long *)(lVar80 + (ulong)(uVar86 - uVar115 * uVar111)) << 3 | 5;
          local_464 = uVar44;
          do {
            unaff_x27 = (long **)paVar89->field10_0x18;
            plVar95 = (long *)((long)pplVar82 - (long)unaff_x27);
            uVar47 = paVar89->field1_0x8 - paVar89->pStart;
            uVar81 = 0;
            if (uVar47 != 0) {
              uVar81 = (ulong)plVar95 / uVar47;
            }
            bVar102 = *(byte *)((long)plVar95 + (paVar89->pStart - uVar81 * uVar47)) ^
                      ((byte)uVar87 & 0x7f | (0x7f < uVar87) << 7);
            if (pplVar82 < paVar89->field12_0x28) {
              *(byte *)pplVar82 = bVar102;
              pplVar100 = (long **)((long)pplVar82 + 1);
            }
            else {
              pbVar98 = (byte *)((long)plVar95 + 1);
              if ((long)pbVar98 < 0) goto LAB_00142498;
              uVar81 = (long)paVar89->field12_0x28 - (long)unaff_x27;
              pbVar66 = (byte *)(uVar81 * 2);
              if (pbVar66 < pbVar98 || (long)pbVar66 - (long)pbVar98 == 0) {
                pbVar66 = pbVar98;
              }
              if (0x3ffffffffffffffe < uVar81) {
                pbVar66 = (byte *)0x7fffffffffffffff;
              }
              if (pbVar66 == (byte *)0x0) {
                plVar39 = (long *)0x0;
                *(byte *)plVar95 = bVar102;
                plVar48 = plVar95;
              }
              else {
                plVar39 = (long *)malloc(pbVar66);
                plVar48 = (long *)((long)plVar39 + (long)plVar95);
                *(byte *)plVar48 = bVar102;
              }
              pplVar100 = (long **)((long)plVar48 + 1);
              if (pplVar82 != unaff_x27) {
                if ((plVar95 < (long *)0x8) || ((ulong)((long)unaff_x27 - (long)plVar39) < 0x20)) {
LAB_00132fdc:
                  do {
                    plVar48 = (long *)((long)plVar48 + -1);
                    pplVar82 = (long **)((long)pplVar82 + -1);
                    *(byte *)plVar48 = *(byte *)pplVar82;
                  } while (pplVar82 != unaff_x27);
                }
                else if (plVar95 < (long *)0x20) {
                  plVar56 = (long *)0x0;
LAB_00132f8c:
                  puVar84 = (undefined8 *)((long)pplVar82 - (long)plVar56);
                  plVar79 = (long *)((ulong)plVar95 & 0xfffffffffffffff8);
                  pplVar82 = (long **)((long)pplVar82 - (long)plVar79);
                  puVar91 = (undefined8 *)((long)plVar39 + ((long)puVar84 - (long)unaff_x27));
                  lVar80 = (long)plVar56 - (long)plVar79;
                  do {
                    puVar84 = puVar84 + -1;
                    puVar91 = puVar91 + -1;
                    lVar80 = lVar80 + 8;
                    *puVar91 = *puVar84;
                  } while (lVar80 != 0);
                  if (plVar95 != plVar79) {
                    plVar48 = (long *)((long)plVar48 - (long)plVar79);
                    goto LAB_00132fdc;
                  }
                }
                else {
                  plVar56 = (long *)((ulong)plVar95 & 0xffffffffffffffe0);
                  pplVar88 = pplVar82 + -2;
                  pplVar77 = (long **)((byte *)((long)plVar39 + (long)plVar95) + -0x10);
                  plVar79 = plVar56;
                  do {
                    pplVar71 = pplVar88 + -1;
                    plVar55 = pplVar88[-2];
                    plVar76 = pplVar88[1];
                    plVar38 = *pplVar88;
                    plVar79 = plVar79 + -4;
                    pplVar88 = pplVar88 + -4;
                    pplVar77[-1] = *pplVar71;
                    pplVar77[-2] = plVar55;
                    pplVar77[1] = plVar76;
                    *pplVar77 = plVar38;
                    pplVar77 = pplVar77 + -4;
                  } while (plVar79 != (long *)0x0);
                  if (plVar95 != plVar56) {
                    if (((ulong)plVar95 & 0x18) == 0) {
                      plVar48 = (long *)((long)plVar48 - (long)plVar56);
                      pplVar82 = (long **)((long)pplVar82 - (long)plVar56);
                      goto LAB_00132fdc;
                    }
                    goto LAB_00132f8c;
                  }
                }
                pplVar82 = (long **)paVar89->field10_0x18;
                plVar48 = plVar39;
              }
              paVar89->field10_0x18 = plVar48;
              paVar89->field11_0x20 = (char *)pplVar100;
              paVar89->field12_0x28 = (char *)((long)plVar39 + (long)pbVar66);
              if (pplVar82 != (long **)0x0) {
                free(pplVar82);
              }
            }
            pplVar82 = pplVar100;
            paVar89->field11_0x20 = (char *)pplVar82;
            bVar28 = 0x7f < uVar87;
            uVar87 = uVar87 >> 7;
          } while (bVar28);
          uVar58 = (uint)local_4f0 >> 8;
          uVar86 = (uint)local_4f0 >> 0x10;
          uVar44 = (uint)local_4f0 >> 0x18;
          unaff_x24 = (long **)(ulong)uVar44;
          vector_append_value(paVar89,(uint)local_4f0);
          vector_append_value(paVar89,uVar58);
          vector_append_value(paVar89,uVar86);
          vector_append_value(paVar89,uVar44);
          lVar80 = *(long *)(lVar91 + 8);
          uVar87 = 0xcbf29ce484222325;
          if (sVar17 != 0) {
            lVar91 = 0;
            iVar31 = 0;
            do {
              pcVar42 = (char *)(lVar80 + ((ulong)local_508 & 0xffffffff) + lVar91);
              iVar31 = iVar31 + 1;
              lVar91 = (long)iVar31;
              uVar87 = uVar87 * 0x100000001b3 ^ (long)*pcVar42;
            } while (sVar17 != iVar31);
          }
          goto LAB_00139344;
        }
        uVar58 = local_7d0;
        if (uVar86 != 0x74bb892d) goto LAB_0013267c;
      }
      goto LAB_0012ed04;
    }
    if (uVar86 == 0x6e487ad9) {
      lVar80 = *(long *)(local_470 + 8);
      uVar112 = *(uint *)(lVar80 + 0x10);
      uVar96 = *(uint *)(lVar80 + 0x14);
      pcVar42 = *(char **)(lVar80 + 8);
      uVar58 = uVar96 + 0xc;
      uVar111 = *(uint *)(pcVar42 + uVar96);
      *(uint *)(lVar80 + 0x14) = uVar96 + 4;
      uVar113 = *(uint *)(pcVar42 + (uVar96 + 4));
      uVar111 = uVar111 ^ uVar112 ^ 0xffffffff;
      uVar86 = (uVar58 * 2 | 0x11) + (uVar58 ^ 0xfffffff7);
      *(uint *)(lVar80 + 0x14) = uVar96 + 8;
      uVar115 = 0;
      if (uVar112 != 0) {
        uVar115 = uVar111 / uVar112;
      }
      uVar94 = uVar86 + 4;
      uVar96 = *(uint *)(pcVar42 + (uVar96 + 8));
      *(uint *)(lVar80 + 0x14) = uVar58;
      uVar113 = uVar113 ^ uVar112 ^ 0xffffffff;
      uVar87 = *(ulong *)(pcVar42 + uVar58);
      *(uint *)(lVar80 + 0x14) = uVar86;
      iVar31 = (uVar94 * 2 | 4) + (uVar86 | 0xfffffffd) + (-uVar86 - 5 | 2);
      uVar86 = *(uint *)(pcVar42 + uVar86);
      unaff_x27 = (long **)(ulong)uVar86;
      *(uint *)(lVar80 + 0x14) = uVar94;
      sVar17 = *(short *)(pcVar42 + uVar94);
      *(uint *)(lVar80 + 0x14) = iVar31 + 2U;
      uVar58 = *(uint *)(pcVar42 + (iVar31 + 2U));
      unaff_x24 = (long **)(ulong)uVar58;
      *(uint *)(lVar80 + 0x14) = iVar31 + 6U;
      uVar94 = 0;
      if (uVar112 != 0) {
        uVar94 = uVar113 / uVar112;
      }
      uVar22 = *(uint *)(pcVar42 + (iVar31 + 6U));
      *(uint *)(lVar80 + 0x14) = iVar31 + 10U;
      uVar101 = *(uint *)(pcVar42 + (iVar31 + 10U));
      *(uint *)(lVar80 + 0x14) = iVar31 + 0xeU;
      uVar85 = *(uint *)(pcVar42 + (iVar31 + 0xeU));
      uVar101 = uVar101 ^ uVar112 ^ 0xffffffff;
      *(int *)(lVar80 + 0x14) = iVar31 + 0x12;
      uVar49 = *(undefined8 *)(pcVar42 + (uVar111 - uVar115 * uVar112));
      uVar85 = uVar85 ^ uVar112 ^ 0xffffffff;
      uVar111 = 0;
      if (uVar112 != 0) {
        uVar111 = uVar101 / uVar112;
      }
      uVar115 = 0;
      if (uVar112 != 0) {
        uVar115 = uVar85 / uVar112;
      }
      local_464 = uVar44;
      FUN_00149a84_XOR((astruct_3 *)&local_2e0,pcVar42,uVar112,uVar101 - uVar111 * uVar112,
                       uVar85 - uVar115 * uVar112);
      pplVar82 = local_570;
      if ((byte)(((byte)local_2e0 | 1) + ((byte)local_2e0 | 0xfe) + '\x02') !=
          (byte)-(~(byte)local_2e0 | 1)) {
        pplVar82 = (long **)CONCAT44(iStack_2cc,CONCAT22(uStack_2ce,CONCAT11(uStack_2cf,bStack_2d0))
                                    );
      }
      uVar49 = func_0x00169f70(uVar49,pplVar82);
      *(undefined8 *)(*(long *)(lVar80 + 8) + (ulong)(uVar113 - uVar94 * uVar112)) = uVar49;
      uVar81 = 0xcbf29ce484222325;
      if (sVar17 != 0) {
        uVar86 = uVar86 ^ uVar112 ^ 0xffffffff;
        lVar91 = 0;
        iVar31 = 0;
        uVar44 = 0;
        if (uVar112 != 0) {
          uVar44 = uVar86 / uVar112;
        }
        uVar81 = 0xcbf29ce484222325;
        do {
          pcVar42 = (char *)(*(long *)(lVar80 + 8) + (ulong)(uVar86 - uVar44 * uVar112) + lVar91);
          iVar31 = iVar31 + 1;
          lVar91 = (long)iVar31;
          uVar81 = uVar81 * 0x100000001b3 ^ (long)*pcVar42;
        } while (sVar17 != iVar31);
      }
      uVar96 = uVar96 ^ uVar112 ^ 0xffffffff;
      uVar86 = 0;
      if (uVar112 != 0) {
        uVar86 = uVar96 / uVar112;
      }
      if ((uVar81 ^ (long)*(int *)(*(long *)(lVar80 + 8) + (ulong)(uVar96 - uVar86 * uVar112))) !=
          uVar87) {
        uVar58 = uVar22;
      }
      if (((((byte)local_2e0 | 1) - ((byte)local_2e0 & 0xfe)) + 1 & 0xfe) +
          ((byte)local_2e0 | 0xfffffffe) == 0) goto LAB_0013c354;
LAB_0013c34c:
      pplVar82 = (long **)CONCAT44(iStack_2cc,CONCAT22(uStack_2ce,CONCAT11(uStack_2cf,bStack_2d0)));
      goto LAB_0013c350;
    }
    uVar58 = local_794;
    if (uVar86 == 0x6f7df4df) goto LAB_0012ed04;
  }
  else if ((int)uVar86 < 0x7a0eedb5) {
    uVar58 = local_61c;
    if ((uVar86 == 0x79f262cd) || (uVar58 = local_7a0, uVar86 == 0x79f73c3c)) goto LAB_0012ed04;
  }
  else {
    uVar58 = local_594;
    if ((uVar86 == 0x7a0eedb5) ||
       ((uVar58 = local_610, uVar86 == 0x7e607bbe || (uVar58 = local_7cc, uVar86 == 0x7f1de0ac))))
    goto LAB_0012ed04;
  }
LAB_0013267c:
  pplVar82 = (long **)((ulong)pplVar100 & 0xffffffff);
  uVar58 = ((uVar86 & 0xa12f877a) * 3 - (uVar86 | 0xa12f877a)) + (uVar86 << 1 ^ 0x425f0ef4);
  goto LAB_0012ed04;
LAB_00135d70:
  uVar58 = 0xe45080e2;
  if (local_418 != (long **)0x0) {
LAB_00135d80:
    uVar58 = 0x8b3e0439;
  }
  goto LAB_00134a84;
code_r0x00140b30:
  if (iVar31 == -0xa02ab65) goto LAB_001410b4;
  plVar48 = local_490[1];
  plVar95 = *(long **)((long)plVar48 + (ulong)*(uint *)((long)unaff_x27 + 0xc));
  pplVar100 = *(long ***)((long)plVar48 + (ulong)*(uint *)unaff_x27);
  lVar80 = *(long *)((long)plVar48 + (ulong)*(uint *)((long)unaff_x27 + 4));
  if (plVar95 == (long *)0x0) {
    local_760 = 0;
    goto LAB_00140cbc;
  }
  if ((long)plVar95 < 0) goto LAB_00142498;
  uVar58 = *(uint *)(unaff_x27 + 1);
  uVar87 = (ulong)*(uint *)(unaff_x27 + 2);
  local_760 = malloc(plVar95);
  func_0x0016a0f0(local_760,0,plVar95);
  uVar86 = (uint)plVar95;
  unaff_x27 = local_498;
  if ((int)uVar86 < 1) goto LAB_00140cbc;
  uVar81 = 0;
  uVar47 = (ulong)plVar95 & 0xffffffff;
  plVar39 = local_490[1];
  lVar91 = (long)plVar48 + (ulong)uVar58;
  if ((((7 < uVar86) && (0xfffffffffffffeff < uVar47 - 0x101)) &&
      (uVar81 = 0, 0x1f < (ulong)(local_760 - lVar91))) &&
     (0x1f < local_760 - ((long)plVar39 + uVar87))) {
    if (uVar86 < 0x20) {
      uVar81 = 0;
    }
    else {
      uVar99 = 0;
      uVar81 = (ulong)plVar95 & 0x1e0;
      do {
        puVar91 = (undefined8 *)(lVar91 + uVar99);
        puVar84 = (undefined8 *)((long)plVar39 + (uVar99 & 0xe0) + uVar87);
        uVar114 = puVar91[1];
        uVar109 = *puVar91;
        uVar118 = puVar91[3];
        uVar116 = puVar91[2];
        uVar108 = puVar84[1];
        uVar49 = *puVar84;
        uVar122 = puVar84[3];
        uVar120 = puVar84[2];
        puVar91 = (undefined8 *)(local_760 + uVar99);
        uVar99 = uVar99 + 0x20;
        puVar91[1] = CONCAT17((byte)((ulong)uVar114 >> 0x38) ^ (byte)((ulong)uVar108 >> 0x38),
                              CONCAT16((byte)((ulong)uVar114 >> 0x30) ^
                                       (byte)((ulong)uVar108 >> 0x30),
                                       CONCAT15((byte)((ulong)uVar114 >> 0x28) ^
                                                (byte)((ulong)uVar108 >> 0x28),
                                                CONCAT14((byte)((ulong)uVar114 >> 0x20) ^
                                                         (byte)((ulong)uVar108 >> 0x20),
                                                         CONCAT13((byte)((ulong)uVar114 >> 0x18) ^
                                                                  (byte)((ulong)uVar108 >> 0x18),
                                                                  CONCAT12((byte)((ulong)uVar114 >>
                                                                                 0x10) ^
                                                                           (byte)((ulong)uVar108 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)((ulong)
                                                  uVar114 >> 8) ^ (byte)((ulong)uVar108 >> 8),
                                                  (byte)uVar114 ^ (byte)uVar108)))))));
        *puVar91 = CONCAT17((byte)((ulong)uVar109 >> 0x38) ^ (byte)((ulong)uVar49 >> 0x38),
                            CONCAT16((byte)((ulong)uVar109 >> 0x30) ^ (byte)((ulong)uVar49 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar109 >> 0x28) ^
                                              (byte)((ulong)uVar49 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar109 >> 0x20) ^
                                                       (byte)((ulong)uVar49 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar109 >> 0x18) ^
                                                                (byte)((ulong)uVar49 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar109 >>
                                                                               0x10) ^
                                                                         (byte)((ulong)uVar49 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar109 >> 8) ^ (byte)((ulong)uVar49 >> 8),
                                                  (byte)uVar109 ^ (byte)uVar49)))))));
        puVar91[3] = CONCAT17((byte)((ulong)uVar118 >> 0x38) ^ (byte)((ulong)uVar122 >> 0x38),
                              CONCAT16((byte)((ulong)uVar118 >> 0x30) ^
                                       (byte)((ulong)uVar122 >> 0x30),
                                       CONCAT15((byte)((ulong)uVar118 >> 0x28) ^
                                                (byte)((ulong)uVar122 >> 0x28),
                                                CONCAT14((byte)((ulong)uVar118 >> 0x20) ^
                                                         (byte)((ulong)uVar122 >> 0x20),
                                                         CONCAT13((byte)((ulong)uVar118 >> 0x18) ^
                                                                  (byte)((ulong)uVar122 >> 0x18),
                                                                  CONCAT12((byte)((ulong)uVar118 >>
                                                                                 0x10) ^
                                                                           (byte)((ulong)uVar122 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)((ulong)
                                                  uVar118 >> 8) ^ (byte)((ulong)uVar122 >> 8),
                                                  (byte)uVar118 ^ (byte)uVar122)))))));
        puVar91[2] = CONCAT17((byte)((ulong)uVar116 >> 0x38) ^ (byte)((ulong)uVar120 >> 0x38),
                              CONCAT16((byte)((ulong)uVar116 >> 0x30) ^
                                       (byte)((ulong)uVar120 >> 0x30),
                                       CONCAT15((byte)((ulong)uVar116 >> 0x28) ^
                                                (byte)((ulong)uVar120 >> 0x28),
                                                CONCAT14((byte)((ulong)uVar116 >> 0x20) ^
                                                         (byte)((ulong)uVar120 >> 0x20),
                                                         CONCAT13((byte)((ulong)uVar116 >> 0x18) ^
                                                                  (byte)((ulong)uVar120 >> 0x18),
                                                                  CONCAT12((byte)((ulong)uVar116 >>
                                                                                 0x10) ^
                                                                           (byte)((ulong)uVar120 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)((ulong)
                                                  uVar116 >> 8) ^ (byte)((ulong)uVar120 >> 8),
                                                  (byte)uVar116 ^ (byte)uVar120)))))));
      } while (uVar81 != uVar99);
      if (uVar81 == uVar47) goto LAB_00140cbc;
      if (((ulong)plVar95 & 0x18) == 0) goto LAB_00140c9c;
    }
    uVar99 = (ulong)plVar95 & 0x1f8;
    do {
      uVar108 = *(undefined8 *)(lVar91 + uVar81);
      uVar49 = *(undefined8 *)((long)plVar39 + (uVar81 & 0xf8) + uVar87);
      *(ulong *)(local_760 + uVar81) =
           CONCAT17((byte)((ulong)uVar108 >> 0x38) ^ (byte)((ulong)uVar49 >> 0x38),
                    CONCAT16((byte)((ulong)uVar108 >> 0x30) ^ (byte)((ulong)uVar49 >> 0x30),
                             CONCAT15((byte)((ulong)uVar108 >> 0x28) ^ (byte)((ulong)uVar49 >> 0x28)
                                      ,CONCAT14((byte)((ulong)uVar108 >> 0x20) ^
                                                (byte)((ulong)uVar49 >> 0x20),
                                                CONCAT13((byte)((ulong)uVar108 >> 0x18) ^
                                                         (byte)((ulong)uVar49 >> 0x18),
                                                         CONCAT12((byte)((ulong)uVar108 >> 0x10) ^
                                                                  (byte)((ulong)uVar49 >> 0x10),
                                                                  CONCAT11((byte)((ulong)uVar108 >>
                                                                                 8) ^
                                                                           (byte)((ulong)uVar49 >> 8
                                                                                 ),(byte)uVar108 ^
                                                                                   (byte)uVar49)))))
                            ));
      uVar81 = uVar81 + 8;
    } while (uVar99 != uVar81);
    uVar81 = uVar99;
    if (uVar99 == uVar47) goto LAB_00140cbc;
  }
LAB_00140c9c:
  do {
    *(byte *)(local_760 + uVar81) =
         *(byte *)(lVar91 + uVar81) ^ *(byte *)((long)plVar39 + (uVar81 & 0xff) + uVar87);
    uVar81 = uVar81 + 1;
  } while (uVar47 != uVar81);
LAB_00140cbc:
  pbVar98 = (byte *)((long)pplVar100 + lVar80);
  iVar31 = iVar31 + -0x4df08843;
  goto LAB_00140ad4;
LAB_001410b4:
  pplVar77 = (long **)local_4f0;
  if (local_760 != 0) {
    free();
    pplVar77 = (long **)local_4f0;
  }
LAB_00141fcc:
  uVar87 = 0xcbf29ce484222325;
  if ((uint)local_540 != 0) {
    lVar80 = 0;
    iVar31 = 0;
    uVar58 = (uint)local_568 ^ uVar113 ^ 0xffffffff;
    uVar86 = 0;
    if (uVar113 != 0) {
      uVar86 = uVar58 / uVar113;
    }
    uVar87 = 0xcbf29ce484222325;
    do {
      lVar91 = lVar80 + (ulong)(uVar58 - uVar86 * uVar113);
      iVar31 = iVar31 + 1;
      lVar80 = (long)iVar31;
      uVar87 = uVar87 * 0x100000001b3 ^ (long)*(char *)((long)pplVar71[1] + lVar91);
    } while ((uint)local_540 != iVar31);
  }
  uVar58 = (uint)local_508 ^ uVar113 ^ 0xffffffff;
  uVar86 = 0;
  if (uVar113 != 0) {
    uVar86 = uVar58 / uVar113;
  }
  uVar81 = (ulong)*(int *)((long)pplVar71[1] + (ulong)(uVar58 - uVar86 * uVar113));
  uVar58 = (uint)local_530;
  if ((long **)((uVar87 ^ uVar81) + (uVar81 & (uVar87 ^ 0xffffffffffffffff)) +
                (uVar87 | uVar81 ^ 0xffffffffffffffff) + 1) != pplVar77) {
    uVar58 = (uint)local_538;
  }
  uVar58 = uVar58 ^ uVar113 ^ 0xffffffff;
  uVar86 = 0;
  if (uVar113 != 0) {
    uVar86 = uVar58 / uVar113;
  }
  uVar58 = uVar58 - uVar86 * uVar113;
  unaff_x24 = pplVar77;
  pplVar100 = unaff_x27;
joined_r0x00142090:
  pplVar82 = (long **)(ulong)local_464;
  puVar91 = (undefined8 *)(ulong)uVar58;
  uVar58 = 0xa73a71ad;
  if (pplVar100 != (long **)0x0) {
    free(pplVar100);
    uVar58 = 0xa73a71ad;
  }
  goto LAB_0012ed04;
  while (pbVar72 = pbVar72 + 1, pbVar36 = pbVar61, pbVar72 != pbVar61) {
LAB_001408c4:
    pbVar36 = pbVar72;
    if ((*pbVar72 == 0x20) || (0xfffffffa < *pbVar72 - 0xe)) break;
  }
  do {
    if (pbVar36 == pbVar61) goto LAB_00140a64;
    if ((*pbVar36 != 0x20) && (*pbVar36 - 0xe < 0xfffffffb)) {
      if (pbVar36 != pbVar61) break;
      goto LAB_00140a64;
    }
    pbVar36 = pbVar36 + 1;
  } while( true );
  while (pbVar36 = pbVar36 + 1, pbVar72 = pbVar61, pbVar36 != pbVar61) {
    pbVar72 = pbVar36;
    if ((*pbVar36 == 0x20) || (0xfffffffa < *pbVar36 - 0xe)) break;
  }
  do {
    if (pbVar72 == pbVar61) goto LAB_00140a64;
    if ((*pbVar72 != 0x20) && (*pbVar72 - 0xe < 0xfffffffb)) {
      if (pbVar72 != pbVar61) break;
      goto LAB_00140a64;
    }
    pbVar72 = pbVar72 + 1;
  } while( true );
  while (pbVar72 = pbVar72 + 1, pbVar36 = pbVar61, pbVar72 != pbVar61) {
    pbVar36 = pbVar72;
    if ((*pbVar72 == 0x20) || (0xfffffffa < *pbVar72 - 0xe)) break;
  }
  do {
    if (pbVar36 == pbVar61) goto LAB_00140a64;
    if ((*pbVar36 != 0x20) && (*pbVar36 - 0xe < 0xfffffffb)) {
      if (pbVar36 != pbVar61) break;
      goto LAB_00140a64;
    }
    pbVar36 = pbVar36 + 1;
  } while( true );
  while (pbVar36 = pbVar36 + 1, pbVar72 = pbVar61, pbVar36 != pbVar61) {
    pbVar72 = pbVar36;
    if ((*pbVar36 == 0x20) || (0xfffffffa < *pbVar36 - 0xe)) break;
  }
  for (; (pbVar36 = pbVar61, pbVar72 != pbVar61 &&
         ((*pbVar72 == 0x20 || (pbVar36 = pbVar72, 0xfffffffa < *pbVar72 - 0xe))));
      pbVar72 = pbVar72 + 1) {
  }
  local_4b0 = (long **)(ulong)(uint)((int)pbVar36 - (int)pbVar98);
  bVar102 = 0;
  plVar48 = (long *)0x0;
  pplVar82 = (long **)0x0;
  local_548 = (undefined *)((ulong)local_548._4_4_ << 0x20);
  bVar28 = true;
  local_6d0 = (byte *)0x0;
  unaff_x24 = (long **)(ulong)(uint)(iVar32 - (int)pbVar98);
  local_688 = 0;
  iVar31 = iVar31 + -0x5ed07886;
  goto LAB_001403f0;
LAB_00139ad8:
  bVar28 = true;
  unaff_x24 = local_578;
joined_r0x00139ae8:
  local_578 = unaff_x24;
  if (((ulong)plVar95 & 1) != 0) {
    free(pplVar71);
  }
  if (bVar28) {
    local_2e0 = (long *)((ulong)local_2e0 & 0xffffffffffffff00);
    uStack_2b8 = (long **)((ulong)uStack_2b8 & 0xffffffffffffff00);
  }
  if ((auStack_180[0] != '\0') && (((ulong)_local_1a0 & 1) != 0)) {
    free(CONCAT17(uStack_189,
                  CONCAT16(uStack_18a,
                           CONCAT15(uStack_18b,
                                    CONCAT14(bStack_18c,
                                             CONCAT13(uStack_18d,
                                                      CONCAT12(uStack_18e,
                                                               CONCAT11(uStack_18f,local_190))))))))
    ;
  }
  if (bVar28) goto LAB_0013dbb0;
  lVar80 = (**(code **)(local_458 + 0x30))(&local_458);
  lVar91 = (**(code **)(local_458 + 0x38))(&local_458);
  plVar95 = (long *)local_320;
  pplVar88 = (long **)pcStack_318;
  pplVar77 = local_308;
  pplVar100 = local_310;
  pplVar82 = unaff_x24;
  fVar107 = local_300;
  if (lVar80 == lVar91) goto LAB_0013da1c;
  goto LAB_00139824;
LAB_0013cf54:
  uVar87 = 0xcbf29ce484222325;
  *(ulong *)((long)local_820[1] + ((ulong)local_750 & 0xffffffff)) = local_4f8;
  *(undefined4 *)((long)local_820[1] + ((ulong)local_758 & 0xffffffff)) = local_4fc;
  *(uint *)((long)local_820[1] + ((ulong)local_8a8 & 0xffffffff)) = (uint)local_4d0;
  if ((int)local_890 != 0) {
    lVar80 = 0;
    iVar31 = 0;
    do {
      lVar91 = lVar80 + ((ulong)local_6d0 & 0xffffffff);
      iVar31 = iVar31 + 1;
      lVar80 = (long)iVar31;
      uVar87 = uVar87 * 0x100000001b3 ^ (long)*(char *)((long)local_820[1] + lVar91);
    } while ((int)local_890 != iVar31);
  }
  pplVar82 = (long **)(ulong)local_464;
  uVar81 = (ulong)*(int *)((long)local_820[1] + (local_688 & 0xffffffff));
  uVar58 = (uint)local_898;
  if ((long *)((uVar87 + ~(uVar87 & uVar81)) - (uVar87 | uVar81 ^ 0xffffffffffffffff)) != local_858)
  {
    uVar58 = (uint)local_8a0;
  }
  puVar91 = (undefined8 *)(ulong)uVar58;
LAB_0012ecfc:
  uVar58 = 0xa73a71ad;
  goto LAB_0012ed04;
LAB_001376e0:
  uVar58 = 0xa5824081;
  if (uVar86 == 0x64db2d42) goto LAB_001374c0;
  if (uVar86 == 0x6dd51d2e) {
    uVar58 = 0xfc90aaaa;
    if (local_478 >> 0x25 != 0) {
      uVar58 = 0xa9a08da4;
    }
    goto LAB_001374c0;
  }
  if (uVar86 == 0x72126bb7) {
    uVar58 = (uint)local_360[0];
    if ((~(uint)local_360[0] | 1) +
        (((((uint)local_360[0] * 3 - (uVar58 | 1)) + (uVar58 & 0xfe ^ 0xfffffffe)) - (uVar58 & 0xfe)
         ) + (uVar58 ^ 1) + ((uVar58 ^ 0xffffffff) & 1) + 2 & 0xff) == 0) {
      plVar95 = *local_480;
      uVar58 = 0xe45080e2;
      if (plVar95 < (long *)(ulong)(local_360[0] >> 1)) goto LAB_001374c0;
    }
    else {
      plVar95 = *local_480;
      uVar58 = 0xe45080e2;
      if (plVar95 < (long *)CONCAT26(uStack_352,auStack_358)) goto LAB_001374c0;
    }
    uVar58 = 0x8b3e0439;
    goto LAB_001374c0;
  }
LAB_00137ca0:
  auVar124 = func_0x00169c20(&local_2e0);
  uVar81 = auVar124._8_8_;
  local_478 = auVar124._0_8_;
  if (~uVar81 * 3 + (uVar81 << 1 | 0xfffffe01fffffffe) + (uVar81 | 0xff00000000) * 7 +
      ((uVar81 << 1 ^ 0xfffffe01fffffffe) - 0x2fcfffffff7) + (~uVar81 * 2 | 0x1fe00000000) == 0) {
    uVar58 = (uVar86 & 0xa12f877a) + (uVar86 & 0x5ed07885) + (uVar86 << 1 | 0x425f0ef4) +
             (uVar86 ^ 0x5ed07885) + (uVar86 & 0xa12f877a ^ 0xa12f877a) + (~uVar86 | 0xa12f877a) +
             0x5ed07888;
  }
  else {
    uVar58 = (uVar86 | 0x5050a87c) + (uVar86 & 0xafaf5783) + (uVar86 | 0xafaf5783) +
             (~uVar86 | 0x5050a87c) + 0x5050a87e;
  }
  goto LAB_001374c0;
}

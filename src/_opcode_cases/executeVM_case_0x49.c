#include "gvm/types.h"

void case_0x49() {
    if (_val_A == 0x8c2dfaae) {
      lVar95 = *(astruct **)(local_470 + 8);
      codeLength = lVar95->vmCodeLength;
      pcBase = lVar95->pc;
      code = lVar95->vmCode;
      _val_A = *(uint *)(code + (ulong)uVar118);
      lVar95->pc = pcBase + 4;
      uVar58 = pcBase + 0x1c;
      _val_B = *(uint *)(code + (ulong)(pcBase + 4));
      lVar95->pc = pcBase + 8;
      _val_A = _val_A ^ codeLength ^ 0xffffffff;
      _val_C = *(uint *)(code + (ulong)(pcBase + 8));
      uVar121 = 0;
      if (codeLength != 0) {
        uVar121 = _val_A / uVar117;
      }
      lVar95->pc = pcBase + 0xc;
      _val_C = _val_C ^ codeLength ^ 0xffffffff;
      xorValAddr = *(uint *)(code + (ulong)(pcBase + 0xc));
      lVar95->pc = pcBase + 0x10;
      iVar27 = (uVar58 ^ 0xfffffffd) + (uVar58 * 2 | 4);
      hash = *(long *)(code + (ulong)(pcBase + 0x10));
      lVar95->pc = pcBase + 0x18;
      hashAddr = *(uint *)(code + (ulong)(pcBase + 0x18));
      lVar95->pc = uVar58;
      hashDataLen = *(short *)(code + (ulong)uVar58);
      uVar106 = 0;
      if (codeLength != 0) {
        uVar106 = _val_C / uVar117;
      }
      lVar95->pc = iVar27 + 1U;
      uVar58 = *(uint *)(code + (ulong)(iVar27 + 1U));
      lVar95->pc = iVar27 + 5U;
      pcBase = *(uint *)(code + (ulong)(iVar27 + 5U));
      lVar95->pc = iVar27 + 9;
      vector = *(long **)(code + (ulong)(_val_A - uVar121 * uVar117));
      _local_1a0 = (astruct *)
                   CONCAT44(uStack_19c,
                            *(undefined4 *)(code + (ulong)(_val_C - uVar106 * uVar117)));
      puVar73 = (undefined8 *)vector[1];
      local_464 = uVar41;
      for (fnPtr = (undefined8 *)*vector; fnPtr != puVar73; fnPtr = fnPtr + 1) {
        (***(code ***)(undefined8 *)*fnPtr)(&local_2e0,(undefined8 *)*fnPtr,&local_1a0);
        if ((uint)local_2e0 != 0) {
          uVar29 = 0;
          goto LAB_0013c008;
        }
      }
      uVar29 = 1;
      local_2e0 = (astruct *)((ulong)local_2e0 & 0xffffffff00000000);
LAB_0013c008:
      _val_B = _val_B ^ codeLength ^ 0xffffffff;
      _val_A = 0;
      if (codeLength != 0) {
        _val_A = _val_B / uVar117;
      }
      uVar77 = 0xcbf29ce484222325;
      *(undefined4 *)(lVar95->vmCode + (ulong)(_val_B - _val_A * uVar117)) = uVar29;
      code = lVar95->vmCode;
      if (hashDataLen != 0) {
        _val_A = hashAddr ^ codeLength ^ 0xffffffff;
        lVar96 = 0;
        iVar27 = 0;
        uVar41 = 0;
        if (codeLength != 0) {
          uVar41 = _val_A / uVar117;
        }
        uVar77 = 0xcbf29ce484222325;
        do {
          pcVar36 = (char *)(code + (ulong)(_val_A - uVar41 * uVar117) + lVar96);
          iVar27 = iVar27 + 1;
          lVar96 = (long)iVar27;
          uVar77 = uVar77 * 0x100000001b3 ^ (long)*pcVar36;
        } while (hashDataLen != iVar27);
      }
      xorValAddr = xorValAddr ^ codeLength ^ 0xffffffff;
LAB_0013c108:
      unaff_x27 = (astruct *)(ulong)uVar18;
      unaff_x24 = (astruct *)(ulong)uVar118;
      _val_A = 0;
      if (codeLength != 0) {
        _val_A = xorValAddr / uVar117;
      }
      uVar70 = (ulong)*(int *)(code + (ulong)(xorValAddr - _val_A * uVar117));
      if ((uVar77 - uVar70) + (uVar70 & (uVar77 ^ 0xffffffffffffffff)) * 2 != lVar53) {
        uVar58 = uVar118;
      }
      goto LAB_001395a8;
    }
}

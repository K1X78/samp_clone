/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008c2c0
 * Name: FUN_1008c2c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1008c2c0(uint param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  HKL *lpList;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  HKL pHStack_198;
  WCHAR WStack_194;
  wint_t wStack_192;
  undefined2 uStack_190;
  undefined1 auStack_18e [134];
  WCHAR WStack_108;
  undefined4 auStack_106 [64];
  
  if (DAT_1017f6b0 != '\0') {
    if (param_1 < 0x10e) {
      if (param_1 == 0x10d) {
        FUN_100859e0();
        DAT_1017f694 = 1;
        return 1;
      }
      if (param_1 == 0x1c) {
        if (param_2 != 0) {
          uVar6 = GetKeyboardLayoutList(0,(HKL *)0x0);
          thunk_FUN_10086800(0);
          lpList = operator_new(uVar6 * 4);
          if (lpList != (HKL *)0x0) {
            GetKeyboardLayoutList(uVar6,lpList);
            uVar5 = 0;
            if (uVar6 != 0) {
              do {
                uVar1 = *(ushort *)(lpList + uVar5) & 0x3ff;
                if ((((uVar1 != 4) && (uVar1 != 0x11)) && (uVar1 != 0x12)) ||
                   (iVar2 = (*(code *)PTR_FUN_10140c64)(lpList[uVar5]), iVar2 != 0)) {
                  iVar2 = 0;
                  if (0 < DAT_10180624) {
                    psVar3 = DAT_10180620;
                    do {
                      if (*psVar3 == *(short *)(lpList + uVar5)) goto LAB_1008c51a;
                      iVar2 = iVar2 + 1;
                      psVar3 = psVar3 + 0x45;
                    } while (iVar2 < DAT_10180624);
                  }
                  pHStack_198 = lpList[uVar5];
                  WStack_108 = L'\0';
                  puVar7 = auStack_106;
                  for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
                    *puVar7 = 0;
                    puVar7 = puVar7 + 1;
                  }
                  uVar1 = *(ushort *)(lpList + uVar5);
                  *(undefined2 *)puVar7 = 0;
                  uVar4 = uVar1 & 0x3ff;
                  if (uVar4 == 4) {
                    if (uVar1 >> 10 == 1) {
                      puVar8 = &DAT_10140c88;
                    }
                    else {
                      if (uVar1 >> 10 != 2) goto LAB_1008c450;
                      puVar8 = &DAT_10140c82;
                    }
LAB_1008c4cb:
                    FUN_10083fa0(&WStack_194,3,puVar8);
                  }
                  else {
                    if (uVar4 == 0x11) {
                      puVar8 = &DAT_10140c94;
                      goto LAB_1008c4cb;
                    }
                    if (uVar4 == 0x12) {
                      puVar8 = &DAT_10140c8e;
                      goto LAB_1008c4cb;
                    }
LAB_1008c450:
                    GetLocaleInfoW((uint)uVar1,3,&WStack_108,0x80);
                    WStack_194 = WStack_108;
                    wStack_192 = _towlower((wint_t)auStack_106[0]);
                    uStack_190 = 0;
                  }
                  GetLocaleInfoW((uint)*(ushort *)(lpList + uVar5),2,&WStack_108,0x80);
                  FUN_10083fa0(auStack_18e,0x40,&WStack_108);
                  FUN_100896b0(&pHStack_198);
                }
                uVar5 = uVar5 + 1;
              } while (uVar5 < uVar6);
            }
LAB_1008c51a:
            _free(lpList);
            return 0;
          }
        }
      }
      else if (param_1 == 0x51) {
        uVar6 = _DAT_10180600 & 0x3ff;
        FUN_10085860();
        if (uVar6 != (_DAT_10180600 & 0x3ff)) {
          DAT_1017f695 = (_DAT_10180600 & 0x3ff) == 0x12;
        }
        FUN_10085950();
        if (PTR_FUN_10140c6c == (undefined *)0x0) {
          return 1;
        }
        iVar2 = (*(code *)PTR_FUN_10140c34)(_DAT_00c97c1c);
        if (iVar2 == 0) {
          return 1;
        }
        (*(code *)PTR_FUN_10140c6c)(iVar2,0);
        (*(code *)PTR_FUN_10140c38)(_DAT_00c97c1c,iVar2);
        return 1;
      }
    }
    else if (param_1 == 0x10f) {
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x1008c2c0 */

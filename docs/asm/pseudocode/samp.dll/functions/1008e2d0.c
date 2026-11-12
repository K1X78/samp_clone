/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008e2d0
 * Name: FUN_1008e2d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1008e2d0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iStack_30;
  undefined4 uStack_2c;
  tagRECT tStack_20;
  tagRECT tStack_10;
  
  uVar8 = 0;
  if (*(char *)(param_1 + 0x214) == '\0') {
    uVar8 = 2;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 8);
  if (DAT_10181a94 == '\0') {
    iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x13a) + 0x14) +
                             *(int *)(iVar1 + 4) * 4) + 0x108);
    iVar6 = *(int *)(param_1 + 0x251) - *(int *)(param_1 + 0x249);
    if (iVar2 != 0) {
      iVar6 = iVar6 / iVar2;
    }
    *(int *)(param_1 + 0x1f0) = iVar6;
    FUN_10084e80();
    FUN_10084da0();
    DAT_10181a94 = '\x01';
  }
  if (*(char *)(param_1 + 0x214) != '\0') {
    (**(code **)(*(int *)(param_1 + 0x15e) + 0xc))(param_2,param_3);
  }
  FUN_10085f40(uVar8,param_3,0x3f333333);
  FUN_10085f40(uVar8,param_3,0x3f333333);
  FUN_10086e20(iVar1,param_1 + 0x235);
  iVar2 = *(int *)(*(int *)(param_1 + 0x20) + 0xc);
  *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(iVar1 + 0x34);
  *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(iVar1 + 0x38);
  *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(iVar1 + 0x3c);
  *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iVar1 + 0x40);
  uVar3 = *(uint *)(iVar2 + 0x44);
  tStack_20.left = (LONG)((float)(uVar3 >> 0x10 & 0xff) * 0.003921569);
  tStack_20.top = (LONG)((float)(uVar3 >> 8 & 0xff) * 0.003921569);
  *(LONG *)(iVar2 + 0x5c) = tStack_20.left;
  tStack_20.right = (LONG)((float)(uVar3 & 0xff) * 0.003921569);
  *(LONG *)(iVar2 + 0x60) = tStack_20.top;
  *(LONG *)(iVar2 + 100) = tStack_20.right;
  tStack_20.bottom = (LONG)((float)(uVar3 >> 0x18) * 0.003921569);
  *(LONG *)(iVar2 + 0x68) = tStack_20.bottom;
  iVar6 = FUN_10086b40(*(undefined4 *)(iVar1 + 4));
  if (iVar6 != 0) {
    param_2 = *(int *)(param_1 + 0x249);
    iVar9 = *(int *)(param_1 + 0x251) - param_2;
    iVar7 = *(int *)(param_1 + 0x1ec);
    if (iVar7 < *(int *)(param_1 + 0x259)) {
      do {
        iVar4 = *(int *)(*(int *)(param_1 + 0x255) + iVar7 * 4);
        iVar9 = iVar9 - *(int *)(iVar6 + 0x108);
        if (iVar9 < 0) {
          *(undefined1 *)(iVar4 + 0x114) = 0;
        }
        else {
          SetRect((LPRECT)(iVar4 + 0x104),*(int *)(param_1 + 0x245),param_2,
                  *(int *)(param_1 + 0x24d),*(int *)(iVar6 + 0x108) + param_2);
          param_2 = param_2 + *(int *)(iVar6 + 0x108);
          *(undefined1 *)(iVar4 + 0x114) = 1;
          if (*(char *)(param_1 + 0x214) != '\0') {
            iVar10 = iVar1;
            if (iVar7 == *(int *)(param_1 + 0x156)) {
              SetRect(&tStack_20,*(int *)(param_1 + 0x235),*(int *)(iVar4 + 0x108) + -2,
                      *(int *)(param_1 + 0x23d),*(int *)(iVar4 + 0x110) + 2);
              FUN_10086e20(iVar2,&tStack_20);
              iVar10 = iVar2;
            }
            FUN_1008cae0(iVar4,iVar10,(LPRECT)(iVar4 + 0x104),0,0xffffffff);
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x259));
    }
  }
  uVar8 = 0;
  iStack_30 = 0;
  param_2 = 0;
  if (*(char *)(param_1 + 4) == '\0') {
    uVar8 = 2;
  }
  else if (*(char *)(param_1 + 0x3c) == '\0') {
    uVar8 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x151) != '\0') {
      uVar8 = 5;
      iStack_30 = 1;
      param_2 = 2;
      uStack_2c = 0;
      goto LAB_1008e592;
    }
    if (*(char *)(param_1 + 5) == '\0') {
      if (*(char *)(param_1 + 6) != '\0') {
        uVar8 = 3;
      }
    }
    else {
      uVar8 = 4;
      iStack_30 = -1;
      param_2 = -2;
    }
  }
  uStack_2c = 0x3f4ccccd;
LAB_1008e592:
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 4);
  FUN_10085f40(uVar8,param_3,uStack_2c);
  tStack_10.left = *(LONG *)(param_1 + 0x225);
  tStack_10.top = *(LONG *)(param_1 + 0x229);
  tStack_10.right = *(LONG *)(param_1 + 0x22d);
  tStack_10.bottom = *(LONG *)(param_1 + 0x231);
  OffsetRect(&tStack_10,iStack_30,param_2);
  FUN_10086e20(uVar5,&tStack_10);
  if (*(char *)(param_1 + 0x214) != '\0') {
    uVar8 = 5;
  }
  uVar5 = **(undefined4 **)(param_1 + 0x20);
  FUN_10085f40(uVar8,param_3,uStack_2c);
  FUN_10085f40(uVar8,param_3,uStack_2c);
  FUN_10086e20(uVar5,param_1 + 0x215);
  iVar1 = *(int *)(param_1 + 0x152);
  if (((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x259))) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x255) + iVar1 * 4), iVar1 != 0)) {
    FUN_1008cae0(iVar1,uVar5,param_1 + 0x215,0,0xffffffff);
  }
  return;
}


/* END FUNCTION 0x1008e2d0 */

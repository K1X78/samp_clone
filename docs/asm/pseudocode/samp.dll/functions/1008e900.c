/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008e900
 * Name: FUN_1008e900
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1008e900(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_38;
  tagRECT local_30;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  if (*(char *)(param_1 + 4) != '\0') {
    iVar1 = **(int **)(param_1 + 0x20);
    FUN_10085f40(0,param_3,0x3f333333);
    FUN_10085f40(0,param_3,0x3f333333);
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 4);
    FUN_10085f40(0,param_3,0x3f333333);
    FUN_10085f40(0,param_3,0x3f333333);
    FUN_10086e20(iVar1,param_1 + 0x3d);
    if (0 < *(int *)(param_1 + 0x150)) {
      local_30.left = *(int *)(param_1 + 0x10f);
      iVar8 = *(int *)(param_1 + 0x113);
      local_30.right = *(LONG *)(param_1 + 0x117);
      local_30.bottom = *(LONG *)(param_1 + 0x11b);
      local_10 = *(undefined4 *)(param_1 + 0x11f);
      local_c = *(int *)(param_1 + 0x123);
      local_8 = *(undefined4 *)(param_1 + 0x127);
      local_4 = *(int *)(param_1 + 299);
      local_30.top = iVar8;
      iVar3 = FUN_10086b40(*(undefined4 *)(iVar1 + 4));
      local_30.bottom = *(int *)(iVar3 + 0x108) + iVar8;
      *(LONG *)(param_1 + 0x13b) = local_30.bottom - iVar8;
      if (*(int *)(param_1 + 0xeb) < 0) {
        *(undefined4 *)(param_1 + 0xeb) = 0;
        FUN_10084e80();
        FUN_10084da0();
      }
      if (DAT_10181a95 == '\0') {
        if (*(int *)(param_1 + 0x13b) == 0) {
          *(int *)(param_1 + 0xef) = *(int *)(param_1 + 0x11b) - *(int *)(param_1 + 0x113);
        }
        else {
          *(int *)(param_1 + 0xef) =
               (*(int *)(param_1 + 0x11b) - *(int *)(param_1 + 0x113)) / *(int *)(param_1 + 0x13b);
        }
        FUN_10084e80();
        FUN_10084da0();
        DAT_10181a95 = '\x01';
      }
      local_30.right = *(LONG *)(param_1 + 0x117);
      iVar8 = *(int *)(param_1 + 0xeb);
      if (iVar8 < *(int *)(param_1 + 0x150)) {
        do {
          if (*(int *)(param_1 + 0x11b) < local_30.bottom) break;
          iVar3 = *(int *)(*(int *)(param_1 + 0x14c) + iVar8 * 4);
          cVar5 = '\0';
          uVar4 = *(uint *)(param_1 + 0x13f) & 1;
          if ((uVar4 == 0) && (iVar8 == *(int *)(param_1 + 0x143))) {
LAB_1008eaf7:
            cVar5 = '\x01';
          }
          else if (uVar4 != 0) {
            if (*(char *)(param_1 + 0x14b) == '\0') {
LAB_1008eaed:
              if (*(char *)(iVar3 + 0x298) != '\0') goto LAB_1008eaf7;
            }
            else {
              if (iVar8 < *(int *)(param_1 + 0x143)) {
LAB_1008ead8:
                iVar6 = *(int *)(param_1 + 0x147);
                if (iVar8 <= iVar6) goto LAB_1008eaed;
              }
              else {
                iVar6 = *(int *)(param_1 + 0x147);
                if (iVar6 <= iVar8) {
                  if (*(int *)(param_1 + 0x143) < iVar8) goto LAB_1008eaed;
                  goto LAB_1008ead8;
                }
              }
              cVar5 = *(char *)(*(int *)(*(int *)(param_1 + 0x14c) + iVar6 * 4) + 0x298);
            }
          }
          if ((*(char *)(iVar3 + 0x29d) == '\0') && (cVar5 != '\0')) {
            local_4 = local_30.bottom;
            local_c = local_30.top;
            FUN_10086e20(uVar2,&local_10);
            FUN_1008cae0(iVar3,uVar2,&local_30,0,0xffffffff);
            if (0 < *(int *)(param_1 + 0x4d)) {
              iVar6 = 0;
              local_38 = local_30.left;
              if (0 < *(int *)(param_1 + 0x4d)) {
                iVar3 = iVar3 + 0x101;
                piVar7 = (int *)(param_1 + 0x51);
                do {
                  local_30.left = local_30.left + *piVar7;
                  FUN_1008cae0(iVar3,uVar2,&local_30,0,0xffffffff);
                  iVar6 = iVar6 + 1;
                  piVar7 = piVar7 + 1;
                  iVar3 = iVar3 + 0x81;
                } while (iVar6 < *(int *)(param_1 + 0x4d));
              }
LAB_1008eca8:
              local_30.left = local_38;
            }
          }
          else {
            uVar4 = *(uint *)(iVar3 + 0x299);
            if (uVar4 != 0) {
              local_20 = (float)(uVar4 >> 0x10 & 0xff) * 0.003921569;
              local_1c = (float)(uVar4 >> 8 & 0xff) * 0.003921569;
              *(float *)(iVar1 + 0x5c) = local_20;
              local_18 = (float)(uVar4 & 0xff) * 0.003921569;
              *(float *)(iVar1 + 0x60) = local_1c;
              *(float *)(iVar1 + 100) = local_18;
              local_14 = (float)(uVar4 >> 0x18) * 0.003921569;
              *(float *)(iVar1 + 0x68) = local_14;
            }
            FUN_1008cae0(iVar3,iVar1,&local_30,0,0xffffffff);
            if (0 < *(int *)(param_1 + 0x4d)) {
              iVar6 = 0;
              local_38 = local_30.left;
              if (0 < *(int *)(param_1 + 0x4d)) {
                iVar3 = iVar3 + 0x101;
                piVar7 = (int *)(param_1 + 0x51);
                do {
                  local_30.left = local_30.left + *piVar7;
                  FUN_1008cae0(iVar3,iVar1,&local_30,0,0xffffffff);
                  iVar6 = iVar6 + 1;
                  piVar7 = piVar7 + 1;
                  iVar3 = iVar3 + 0x81;
                } while (iVar6 < *(int *)(param_1 + 0x4d));
              }
              goto LAB_1008eca8;
            }
          }
          OffsetRect(&local_30,0,*(int *)(param_1 + 0x13b));
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(param_1 + 0x150));
      }
    }
    (**(code **)(*(int *)(param_1 + 0x5d) + 0xc))(param_2,param_3);
  }
  return;
}


/* END FUNCTION 0x1008e900 */

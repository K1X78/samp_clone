/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00446aa0
 * Name: FUN_00446aa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl
FUN_00446aa0(int *param_1,short *param_2,int *param_3,int *param_4,int *param_5,uint param_6)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar11;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  int *piVar12;
  int extraout_EDX;
  byte *pbVar13;
  undefined4 *puVar14;
  int local_94;
  int local_90;
  int local_88;
  byte *local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int *local_5c;
  uint local_58;
  int *local_54;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_34 = 0;
  local_70 = *param_1;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_94 = 0;
  local_68 = 0;
  local_88 = -1;
  local_60 = 0;
  local_64 = 0;
  local_4c = 0;
  local_48 = 0;
  local_3c = 0;
  local_38 = 0;
  local_40 = 0;
  local_6c = 0;
  local_50 = (undefined4 *)0x0;
  if ((((param_1[0x10] != 0) || (*(char *)(local_70 + 0x1e) != '\0')) ||
      (*(int *)(param_2 + 6) == 0)) || (iVar4 = FUN_00442e70(), iVar4 == 0)) goto LAB_00447906;
  local_7c = FUN_0040fc30(local_70);
  iVar5 = FUN_0041ab60(0x12,*(undefined4 *)(iVar4 + 4),0,
                       *(undefined4 *)(local_7c * 0x10 + *(int *)(local_70 + 8)));
  if (iVar5 != 0) goto LAB_00447906;
  local_54 = (int *)FUN_00410290(param_1,0x69,0,&local_58);
  local_44 = (uint)(*(int *)(iVar4 + 0x1c) != 0);
  iVar5 = FUN_00446950(param_1,iVar4);
  if (((iVar5 != 0) || (iVar5 = FUN_0041b9d0(extraout_ECX,iVar4,local_58), iVar5 != 0)) ||
     (piVar6 = (int *)FUN_0041c720(), local_5c = piVar6, piVar6 == (int *)0x0)) goto LAB_00447906;
  if (*(char *)((int)param_1 + 0x13) == '\0') {
    FUN_0040dcc0();
  }
  iVar5 = local_7c;
  if ((param_4 == (int *)0x0) && (local_54 == (int *)0x0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  FUN_0042cdb0((byte)local_7c,bVar2);
  uVar11 = extraout_ECX_00;
  if ((param_5 != (int *)0x0) ||
     (iVar7 = FUN_00443220(param_1,iVar4,param_6,iVar5), uVar11 = extraout_ECX_01, iVar7 == 0)) {
    local_78 = FUN_00416af0(uVar11,(int)param_1,iVar5);
    piVar6 = local_5c;
    iVar5 = 0;
    if (param_4 == (int *)0x0) {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      local_8 = 0;
      local_4 = 0;
      local_24 = param_1;
      local_64 = -1;
      if (param_3 == (int *)0x0) {
        local_74 = 0;
      }
      else {
        local_74 = *param_3;
      }
      if (0 < local_74) {
        do {
          bVar3 = FUN_00424ba0(param_3[3]);
          if (CONCAT31(extraout_var,bVar3) != 0) goto LAB_00447906;
          iVar5 = iVar5 + 1;
        } while (iVar5 < local_74);
      }
    }
    else {
      local_6c = param_1[0x12] + 1;
      param_1[0x12] = local_6c;
      FUN_00414e70(0,7);
      iVar5 = param_1[0x12];
      param_1[0x12] = iVar5 + 1;
      FUN_0040fcc0(extraout_ECX_02,iVar5 + 1,10);
      iVar5 = FUN_0040d5c0();
      FUN_00414e70(iVar5 + 1,7);
      local_80 = (byte *)FUN_00414e70(0,1);
      iVar5 = FUN_00443d60(param_1,param_4,(byte *)&local_34);
      if (((iVar5 != 0) || (param_1[0x10] != 0)) || (*(char *)(local_70 + 0x1e) != '\0'))
      goto LAB_00447906;
      FUN_00414e70(1,7);
      FUN_00414e50(4);
      FUN_00414e70(2,6);
      FUN_0040d680(piVar6);
      local_38 = local_2c;
      local_74 = *(int *)*param_4;
      if ((local_54 != (int *)0x0) || (iVar5 = FUN_00421620(param_1,local_7c,iVar4), iVar5 != 0)) {
        iVar5 = param_1[0x11];
        param_1[0x11] = iVar5 + 1;
        local_60 = 1;
        local_64 = iVar5;
        iVar7 = FUN_0040ec00();
        iVar8 = FUN_0040ec00();
        FUN_00414e70(iVar5,0x29);
        local_80 = (byte *)FUN_00414e50(4);
        local_7c = FUN_00414e50(0x1a);
        FUN_00414dd0(0x1e,local_2c,local_74,iVar7);
        FUN_00414e70(iVar5,0x36);
        FUN_00414dd0(0x37,iVar5,iVar7,iVar8);
        FUN_00414e70(0,1);
        FUN_0040d680(piVar6);
        FUN_0040ec20(extraout_ECX_03,(int)param_1);
        FUN_0040ec20(extraout_ECX_04,extraout_EDX);
      }
    }
    if (((*(byte *)(iVar4 + 0x22) & 0x10) != 0) && (iVar5 = *(int *)(iVar4 + 0xc), 0 < iVar5)) {
      pcVar9 = (char *)(*(int *)(iVar4 + 0x10) + 0x17);
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 0x18;
        local_94 = local_94 + (uint)(cVar1 != '\0');
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (param_5 == (int *)0x0) {
      if (local_74 != 0) {
        if (local_74 != *(int *)(iVar4 + 0xc) - local_94) {
          FUN_00418b00((undefined **)"table %S has %d columns but %d values were supplied");
          goto LAB_00447906;
        }
        if (0 < local_74) {
          local_88 = *(int *)(iVar4 + 8);
        }
      }
    }
    else {
      if (local_74 != param_5[1]) {
        FUN_00418b00((undefined **)"%d values for %d columns");
        goto LAB_00447906;
      }
      iVar5 = 0;
      if (0 < param_5[1]) {
        do {
          *(undefined4 *)(*param_5 + 4 + iVar5 * 8) = 0xffffffff;
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_5[1]);
      }
      local_90 = 0;
      if (0 < param_5[1]) {
        do {
          iVar5 = *(int *)(iVar4 + 0xc);
          iVar7 = 0;
          if (0 < iVar5) {
            local_80 = *(byte **)(*param_5 + local_90 * 8);
            local_7c = *param_5 + local_90 * 8;
            puVar14 = *(undefined4 **)(iVar4 + 0x10);
            do {
              iVar8 = FUN_00408450(local_80,(byte *)*puVar14);
              if (iVar8 == 0) {
                *(int *)(local_7c + 4) = iVar7;
                if (iVar7 == *(int *)(iVar4 + 8)) {
                  local_88 = local_90;
                }
                break;
              }
              iVar7 = iVar7 + 1;
              puVar14 = puVar14 + 6;
            } while (iVar7 < iVar5);
          }
          if (*(int *)(iVar4 + 0xc) <= iVar7) {
            bVar3 = FUN_0040e880();
            if (CONCAT31(extraout_var_00,bVar3) == 0) {
              FUN_00418b00((undefined **)"table %S has no column named %s");
              *(undefined1 *)((int)param_1 + 0x12) = 1;
              goto LAB_00447906;
            }
            local_88 = local_90;
          }
          local_90 = local_90 + 1;
        } while (local_90 < param_5[1]);
      }
    }
    piVar6 = local_5c;
    if ((*(uint *)(local_70 + 0xc) & 0x1000) != 0) {
      local_40 = param_1[0x12] + 1;
      param_1[0x12] = local_40;
      FUN_00414e70(0,7);
    }
    if (local_44 == 0) {
      local_68 = param_1[0x11];
      iVar5 = FUN_00431a70(param_1,iVar4,local_68,0x27);
      local_50 = FUN_00412930(iVar5 * 4 + 4);
      if (local_50 == (undefined4 *)0x0) goto LAB_00447906;
      iVar7 = 0;
      if (0 < iVar5) {
        do {
          iVar8 = param_1[0x12];
          param_1[0x12] = iVar8 + 1;
          local_50[iVar7] = iVar8 + 1;
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar5);
      }
    }
    if (local_60 == 0) {
      if (param_4 != (int *)0x0) {
        local_48 = FUN_00414e50(4);
        local_4c = FUN_00414e50(0x1a);
      }
    }
    else {
      local_4c = FUN_00414e50(0x41);
      local_48 = FUN_0040d5c0();
    }
    iVar7 = param_1[0x12];
    param_1[0x12] = iVar7 + 1;
    local_7c = iVar7 + 2;
    iVar5 = *(int *)(iVar4 + 0xc) + 1 + iVar7 + 1;
    param_1[0x12] = iVar5;
    iVar8 = local_7c;
    if ((*(byte *)(iVar4 + 0x22) & 0x10) != 0) {
      iVar8 = iVar7 + 3;
      param_1[0x12] = iVar5 + 1;
    }
    local_6c = iVar8 + 1;
    iVar7 = FUN_00414e90(iVar8);
    iVar5 = iVar8 + 1;
    if ((local_58 & 1) != 0) {
      iVar5 = FUN_0040ec60((int)param_1);
      if (local_88 < 0) {
        FUN_00414e70(0xffffffff,7);
      }
      else {
        if (local_60 == 0) {
          FUN_00415dc0();
        }
        else {
          FUN_00414dd0(0x1c,local_64,local_88,iVar5);
        }
        FUN_00414e50(0x4a);
        FUN_00414e70(0xffffffff,7);
        FUN_0040d680(piVar6);
        FUN_00414e50(0x15);
      }
      local_90 = 0;
      if (0 < *(int *)(iVar4 + 0xc)) {
        pbVar13 = (byte *)(iVar5 + 1);
        local_58 = 0;
        do {
          iVar10 = local_90;
          if (param_5 != (int *)0x0) {
            iVar10 = 0;
            if (0 < param_5[1]) {
              piVar12 = (int *)(*param_5 + 4);
              do {
                if (*piVar12 == local_90) break;
                iVar10 = iVar10 + 1;
                piVar12 = piVar12 + 2;
              } while (iVar10 < param_5[1]);
            }
          }
          local_80 = pbVar13;
          if (((local_60 == 0) && (param_3 == (int *)0x0)) ||
             ((param_5 != (int *)0x0 && (param_5[1] <= iVar10)))) {
            FUN_00415dc0();
          }
          else if (local_60 == 0) {
            FUN_00415df0();
            piVar6 = local_5c;
          }
          else {
            FUN_00414dd0(0x1c,local_64,iVar10,pbVar13);
          }
          local_58 = local_58 + 0x18;
          local_90 = local_90 + 1;
          pbVar13 = pbVar13 + 1;
          local_80 = pbVar13;
        } while (local_90 < *(int *)(iVar4 + 0xc));
      }
      if (local_44 == 0) {
        FUN_00414e70(iVar5 + 1,0x1d);
        FUN_00416a70(piVar6);
      }
      FUN_0044ab00(param_1,local_54,0x69,0,1,iVar4,(iVar5 - *(int *)(iVar4 + 0xc)) + -1,param_6,
                   iVar7);
      FUN_0040ec90(iVar5);
      iVar5 = local_6c;
    }
    if (local_44 == 0) {
      if ((*(byte *)(iVar4 + 0x22) & 0x10) != 0) {
        FUN_00414e70(0,10);
      }
      if (local_88 < 0) {
        if ((*(byte *)(iVar4 + 0x22) & 0x10) == 0) {
          FUN_00414dd0(0x36,local_68,iVar8,local_78);
LAB_00447571:
          local_3c = 1;
        }
        else {
          FUN_00414e70(0,10);
        }
      }
      else {
        if (local_60 == 0) {
          if (param_4 == (int *)0x0) {
            FUN_00415dc0();
            pcVar9 = FUN_0040d6f0(piVar6);
            if (((pcVar9 != (char *)0x0) && (*pcVar9 == '\n')) &&
               ((*(byte *)(iVar4 + 0x22) & 0x10) == 0)) {
              *(int *)(pcVar9 + 4) = local_68;
              *pcVar9 = '6';
              *(int *)(pcVar9 + 8) = iVar8;
              *(int *)(pcVar9 + 0xc) = local_78;
              goto LAB_00447571;
            }
          }
          else {
            FUN_00414e70(local_38 + local_88,0xf);
          }
        }
        else {
          FUN_00414dd0(0x1c,local_64,local_88,iVar8);
        }
        if ((*(byte *)(iVar4 + 0x22) & 0x10) == 0) {
          FUN_00414e50(0x4a);
          FUN_00414dd0(0x36,local_68,iVar8,local_78);
          FUN_0040d680(piVar6);
        }
        else {
          FUN_0040d5c0();
          FUN_00414e70(iVar8,0x49);
        }
        FUN_00414e50(0x15);
      }
      FUN_00416b60(local_78);
      local_94 = 0;
      local_90 = 0;
      if (0 < *(int *)(iVar4 + 0xc)) {
        local_78 = 0;
        iVar5 = local_6c;
        do {
          if (local_90 == *(int *)(iVar4 + 8)) {
            FUN_00414e70(0,10);
            goto LAB_004475fd;
          }
          if (param_5 == (int *)0x0) {
            if (*(char *)(*(int *)(iVar4 + 0x10) + 0x17 + local_78) == '\0') {
              iVar8 = local_90 - local_94;
LAB_004476a0:
              if (-1 < iVar8) goto LAB_004476af;
            }
            else {
              local_94 = local_94 + 1;
            }
LAB_004475f2:
            FUN_00415dc0();
          }
          else {
            iVar8 = 0;
            if (0 < param_5[1]) {
              piVar12 = (int *)(*param_5 + 4);
              do {
                if (*piVar12 == local_90) break;
                iVar8 = iVar8 + 1;
                piVar12 = piVar12 + 2;
              } while (iVar8 < param_5[1]);
              goto LAB_004476a0;
            }
LAB_004476af:
            if ((local_74 == 0) || ((param_5 != (int *)0x0 && (param_5[1] <= iVar8))))
            goto LAB_004475f2;
            if (local_60 == 0) {
              if (param_4 == (int *)0x0) goto LAB_004475f2;
              FUN_00414e70(local_38 + iVar8,0xf);
            }
            else {
              FUN_00414dd0(0x1c,local_64,iVar8,iVar5);
            }
          }
LAB_004475fd:
          local_90 = local_90 + 1;
          local_78 = local_78 + 0x18;
          iVar5 = iVar5 + 1;
        } while (local_90 < *(int *)(iVar4 + 0xc));
      }
      iVar5 = local_7c;
      if ((*(byte *)(iVar4 + 0x22) & 0x10) == 0) {
        FUN_004402e0(param_1,iVar4,local_68,local_7c,(int)local_50,(uint)(-1 < local_88),0,param_6,
                     iVar7,(int *)&local_80);
        FUN_00442ed0(param_1,iVar4,0,iVar5);
        FUN_00421970((int)param_1,local_68,iVar5,(int)local_50,0,local_3c,
                     (uint)(local_80 == (byte *)0x0));
        iVar5 = local_6c;
      }
      else {
        pcVar9 = (char *)FUN_004103b0(local_70);
        FUN_00416ed0();
        FUN_004197c0(*(int *)(iVar4 + 0xc) + 2,1,0x85,pcVar9,-10);
        FUN_0040f330((int)param_1);
        iVar5 = local_6c;
      }
    }
    if ((*(uint *)(local_70 + 0xc) & 0x1000) != 0) {
      FUN_00414e70(local_40,0x14);
    }
    if (local_54 != (int *)0x0) {
      FUN_0044ab00(param_1,local_54,0x69,0,2,iVar4,(iVar5 - *(int *)(iVar4 + 0xc)) + -2,param_6,
                   iVar7);
    }
    FUN_0040d4e0((int)piVar6,iVar7);
    if (local_60 == 0) {
      if (param_4 != (int *)0x0) {
        FUN_00414e70(0,1);
        FUN_0040d680(piVar6);
      }
    }
    else {
      FUN_00414e70(local_64,0x43);
      FUN_0040d680(piVar6);
      FUN_00414e50(0x2b);
    }
    piVar6 = local_5c;
    if (((*(byte *)(iVar4 + 0x22) & 0x10) == 0) && (local_44 == 0)) {
      FUN_00414e50(0x2b);
      piVar6 = local_5c;
      for (iVar4 = *(int *)(iVar4 + 0x14); local_5c = piVar6, iVar4 != 0;
          iVar4 = *(int *)(iVar4 + 0x20)) {
        FUN_00414e50(0x2b);
        piVar6 = local_5c;
      }
    }
  }
  if ((*(char *)((int)param_1 + 0x13) == '\0') && (param_1[0x6b] == 0)) {
    FUN_004217f0((int)param_1);
  }
  if ((((*(uint *)(local_70 + 0xc) & 0x1000) != 0) && (*(char *)((int)param_1 + 0x13) == '\0')) &&
     (param_1[0x6b] == 0)) {
    FUN_00414e70(local_40,0x10);
    FUN_00419d70(1);
    FUN_0042e910(piVar6,0,0,"rows inserted");
  }
LAB_00447906:
  iVar4 = local_70;
  FUN_0040f240(param_2);
  FUN_0040e580();
  FUN_0040fce0(iVar4,(int)param_4);
  FUN_0040f150();
  FUN_00408130(iVar4);
  return;
}


/* END FUNCTION 0x00446aa0 */

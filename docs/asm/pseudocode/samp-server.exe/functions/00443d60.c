/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00443d60
 * Name: FUN_00443d60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00443d60(int *param_1,int *param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  short *psVar5;
  int *piVar6;
  int *piVar7;
  undefined2 *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 extraout_ECX;
  byte *extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  int iVar11;
  undefined4 extraout_ECX_05;
  undefined2 extraout_var;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  int *piVar15;
  byte *local_c4;
  int local_c0;
  int *local_bc;
  int local_b8;
  int *local_b4;
  int local_b0;
  byte local_a9;
  int local_a8;
  uint local_a4;
  short *local_a0;
  int *local_9c;
  byte *local_98;
  int *local_94;
  int *local_90;
  int local_8c;
  int *local_88;
  int local_84;
  int local_80;
  char *local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  int local_64;
  byte *local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_4c;
  int local_44;
  int local_3c;
  int *local_38;
  int *local_34;
  short *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  
  local_b0 = *param_1;
  local_b8 = 1;
  if ((((param_2 == (int *)0x0) || (*(char *)(local_b0 + 0x1e) != '\0')) || (param_1[0x10] != 0)) ||
     (iVar2 = FUN_0041ab60(0x15,0,0,0), iVar2 != 0)) {
    return 1;
  }
  puVar14 = &local_68;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  if (*param_3 < 5) {
    FUN_0040e580();
    *(byte *)((int)param_2 + 6) = *(byte *)((int)param_2 + 6) & 0xfe;
    param_2[6] = 0;
  }
  FUN_00443d00(param_1,(int)param_2,0);
  local_b4 = (int *)param_2[6];
  local_a0 = (short *)param_2[2];
  if ((param_1[0x10] != 0) || (*(char *)(local_b0 + 0x1e) != '\0')) goto LAB_00444aec;
  local_a4 = (*(byte *)((int)param_2 + 6) & 4) >> 2;
  piVar3 = (int *)FUN_0041c720();
  if (piVar3 == (int *)0x0) goto LAB_00444aec;
  iVar2 = param_2[7];
  local_c0 = 0;
  iVar12 = local_c0;
  psVar5 = local_a0;
  while ((local_c0 = iVar12, iVar2 == 0 && (iVar12 < *psVar5))) {
    piVar7 = *(int **)(psVar5 + iVar12 * 0x1c + 0xc);
    if ((piVar7 != (int *)0x0) && ((char)psVar5[iVar12 * 0x1c + 0xe] == '\0')) {
      iVar2 = FUN_0040e470();
      param_1[0x88] = param_1[0x88] + iVar2;
      local_9c = (int *)((*(byte *)((int)piVar7 + 6) & 4) >> 2);
      iVar2 = FUN_00422420(param_1,param_2,local_c0,local_a4,(int)local_9c);
      if (iVar2 == 0) {
        pbVar4 = (byte *)FUN_0040fcc0(extraout_ECX,*(undefined4 *)(psVar5 + iVar12 * 0x1c + 0x10),9)
        ;
        FUN_00443d60(param_1,piVar7,pbVar4);
        *(undefined1 *)(psVar5 + iVar12 * 0x1c + 0xe) = 1;
      }
      else {
        if (local_9c != (int *)0x0) {
          *(byte *)((int)param_2 + 6) = *(byte *)((int)param_2 + 6) | 4;
          local_a4 = 1;
        }
        local_c0 = -1;
      }
      if (*(char *)(local_b0 + 0x1e) != '\0') goto LAB_00444aec;
      iVar2 = FUN_0040e470();
      param_1[0x88] = param_1[0x88] - iVar2;
      psVar5 = (short *)param_2[2];
      local_a0 = psVar5;
      if (4 < *param_3) {
        local_b4 = (int *)param_2[6];
      }
    }
    iVar2 = param_2[7];
    iVar12 = local_c0 + 1;
  }
  local_c4 = (byte *)param_2[4];
  local_98 = (byte *)param_2[3];
  local_90 = (int *)*param_2;
  local_7c = (char *)param_2[5];
  local_bc = (int *)(*(byte *)((int)param_2 + 6) & 1);
  if (param_2[7] != 0) {
    if (param_2[9] == 0) {
      iVar2 = 0;
      piVar3 = param_2;
      piVar7 = (int *)0x0;
      do {
        piVar6 = piVar3;
        piVar6[8] = (int)piVar7;
        piVar6[9] = (int)param_2;
        iVar2 = iVar2 + 1;
        piVar3 = (int *)piVar6[7];
        piVar7 = piVar6;
      } while ((int *)piVar6[7] != (int *)0x0);
      if ((*(int *)(local_b0 + 0x58) != 0) && (*(int *)(local_b0 + 0x58) < iVar2)) {
        FUN_00418b00((undefined **)"too many terms in compound SELECT");
        return 1;
      }
    }
    iVar2 = FUN_00436300(param_1,param_2,(undefined4 *)param_3);
    return iVar2;
  }
  iVar2 = FUN_0041c260(*local_90);
  if (iVar2 != 0) goto LAB_00444aec;
  if ((*(byte *)((int)param_2 + 6) & 5) == 1) {
    local_c4 = (byte *)FUN_00415950(local_b0,(int *)*param_2,0);
    *(byte *)((int)param_2 + 6) = *(byte *)((int)param_2 + 6) & 0xfe;
    param_2[4] = (int)local_c4;
    local_bc = (int *)0x0;
  }
  iVar2 = FUN_0040eb80();
  piVar7 = local_b4;
  if ((iVar2 == 0) && ((*(byte *)(local_b0 + 0xc) & 0x20) == 0)) {
    local_b4 = (int *)0x0;
LAB_00444063:
    local_a8 = -1;
  }
  else {
    if (local_b4 == (int *)0x0) goto LAB_00444063;
    piVar6 = FUN_00431bd0(param_1,local_b4);
    piVar7[2] = param_1[0x11];
    param_1[0x11] = param_1[0x11] + 1;
    local_a8 = FUN_004197c0(*piVar7 + 2,piVar7[2],0x29,(char *)piVar6,-0x10);
    param_2[0x10] = local_a8;
  }
  pbVar4 = param_3;
  if (*param_3 == 9) {
    FUN_00414e70(*(undefined4 *)(param_3 + 4),0x29);
    pbVar4 = extraout_ECX_00;
  }
  local_3c = FUN_00414e90(pbVar4);
  FUN_0041c750((int)param_2);
  if (local_bc == (int *)0x0) {
    local_9c = (int *)0xffffffff;
    iVar2 = extraout_ECX_01;
  }
  else {
    piVar7 = (int *)param_1[0x11];
    param_1[0x11] = (int)piVar7 + 1;
    local_9c = piVar7;
    piVar6 = FUN_00431bd0(param_1,(int *)*param_2);
    FUN_004197c0(0,piVar7,0x29,(char *)piVar6,-0x10);
    iVar2 = extraout_ECX_02;
  }
  pbVar4 = local_c4;
  if (local_a4 == 0) {
    if (local_c4 != (byte *)0x0) {
LAB_004441c9:
      iVar2 = *(int *)*param_2;
      if (0 < iVar2) {
        puVar8 = (undefined2 *)(((int *)*param_2)[3] + 0x10);
        do {
          *puVar8 = 0;
          puVar8 = puVar8 + 10;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = *(int *)local_c4;
      if (0 < iVar2) {
        puVar8 = (undefined2 *)(*(int *)(local_c4 + 0xc) + 0x10);
        iVar12 = iVar2;
        do {
          *puVar8 = 0;
          puVar8 = puVar8 + 10;
          iVar12 = iVar12 + -1;
          iVar2 = 0;
        } while (iVar12 != 0);
      }
      goto LAB_004441fb;
    }
    piVar7 = FUN_00440af0(param_1,local_a0,local_98,&local_b4,0);
    if (piVar7 == (int *)0x0) goto LAB_00444aec;
    if ((-1 < local_a8) && (local_b4 == (int *)0x0)) {
      FUN_004150c0(local_a8,piVar3);
      param_2[0x10] = -1;
    }
    FUN_00421f10(param_1,(int)param_2,local_90,0,(char *)0x0,local_b4,-1,(char *)param_3,piVar7[4],
                 piVar7[5]);
    FUN_004174c0(piVar7);
  }
  else {
    if (local_c4 != (byte *)0x0) goto LAB_004441c9;
LAB_004441fb:
    local_8c = FUN_00414e90(iVar2);
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = &local_68;
    local_14 = 0;
    local_34 = param_1;
    local_30 = local_a0;
    if (pbVar4 == (byte *)0x0) {
      local_5c = 0;
    }
    else {
      local_5c = *(int *)pbVar4 + 1;
    }
    local_60 = local_c4;
    FUN_00420650();
    FUN_00420650();
    if (local_7c != (char *)0x0) {
      FUN_00420620((int)local_7c);
    }
    local_4c = local_54;
    local_c0 = 0;
    if (0 < local_44) {
      do {
        FUN_00420650();
        local_c0 = local_c0 + 1;
      } while (local_c0 < local_44);
    }
    if (*(char *)(local_b0 + 0x1e) != '\0') goto LAB_00444aec;
    if (local_c4 == (byte *)0x0) {
      local_94 = (int *)0x0;
      uVar10 = FUN_004100f0((int)&local_68);
      if (uVar10 == 0) {
        local_bc = (int *)0x0;
        bVar1 = FUN_00410090();
        iVar2 = local_b0;
        local_a9 = bVar1;
        if (((bVar1 != 0) &&
            (local_bc = FUN_00415950(local_b0,*(int **)(**(int **)(*param_2 + 0xc) + 0x10),0),
            local_94 = local_bc, local_bc != (int *)0x0)) && (*(char *)(iVar2 + 0x1e) == '\0')) {
          *(bool *)(local_bc[3] + 0xc) = bVar1 != 1;
          **(undefined1 **)local_bc[3] = 0x98;
        }
        FUN_004326d0(param_1);
        piVar7 = FUN_00440af0(param_1,local_a0,local_98,&local_bc,
                              CONCAT22(extraout_var,(ushort)local_a9));
        if (piVar7 == (int *)0x0) {
          FUN_0040e580();
          goto LAB_00444aec;
        }
        FUN_004327a0((undefined1 *)&local_68);
        if ((local_bc == (int *)0x0) && (local_a9 != 0)) {
          FUN_00414e70(0,1);
        }
        FUN_004174c0(piVar7);
        FUN_0041cbc0((int)&local_68);
      }
      else {
        iVar2 = FUN_0040fc30(*param_1);
        local_bc = (int *)param_1[0x11];
        param_1[0x11] = (int)local_bc + 1;
        local_88 = *(int **)(uVar10 + 0x18);
        piVar15 = (int *)0x0;
        local_9c = (int *)0x0;
        FUN_0042cd30();
        FUN_00416230(iVar2,*(int *)(uVar10 + 0x18),'\0',*(int *)(uVar10 + 4));
        piVar7 = *(int **)(uVar10 + 0x14);
        piVar6 = local_9c;
        if (piVar7 != (int *)0x0) {
          do {
            if ((piVar15 == (int *)0x0) || (piVar7[1] < piVar15[1])) {
              piVar15 = piVar7;
            }
            piVar7 = (int *)piVar7[8];
          } while (piVar7 != (int *)0x0);
          if ((piVar15 != (int *)0x0) && (piVar15[1] < *(int *)(uVar10 + 0xc))) {
            local_88 = (int *)piVar15[5];
            piVar6 = FUN_00430960(param_1,piVar15);
          }
        }
        FUN_00414dd0(0x26,local_bc,local_88,iVar2);
        if (piVar6 != (int *)0x0) {
          FUN_00415110(-0x10,(char *)piVar6,piVar3);
        }
        FUN_00414e70(local_bc,0x1f);
        FUN_00414e50(0x2b);
      }
      iVar2 = local_8c;
      local_b4 = (int *)0x0;
      FUN_004351c0(param_1,local_7c,local_8c,8);
      FUN_00421f10(param_1,(int)param_2,(int *)*param_2,0,(char *)0x0,(int *)0x0,-1,(char *)param_3,
                   iVar2,iVar2);
      FUN_0040e580();
    }
    else {
      local_64 = param_1[0x11];
      param_1[0x11] = local_64 + 1;
      local_38 = FUN_00431bd0(param_1,(int *)local_c4);
      local_78 = FUN_004197c0(local_5c,local_64,0x29,(char *)local_38,-0x10);
      iVar2 = param_1[0x12];
      local_74 = iVar2 + 1;
      local_70 = iVar2 + 2;
      param_1[0x12] = iVar2 + 3;
      local_84 = FUN_00414e90(extraout_ECX_03);
      local_bc = (int *)(param_1[0x12] + 1);
      param_1[0x12] = (int)local_bc;
      local_94 = (int *)FUN_00414e90(extraout_ECX_04);
      local_80 = param_1[0x12] + 1;
      iVar2 = param_1[0x12] + *(int *)local_c4;
      param_1[0x12] = iVar2;
      local_a4 = iVar2 + 1;
      param_1[0x12] = *(int *)local_c4 + iVar2;
      FUN_00414e70(0,7);
      FUN_00414e70(0,7);
      FUN_00414e70(local_bc,2);
      local_88 = FUN_00440af0(param_1,local_a0,local_98,&local_c4,0);
      if (local_88 == (int *)0x0) goto LAB_00444aec;
      if (local_c4 == (byte *)0x0) {
        local_98 = local_c4;
        local_c4 = (byte *)param_2[4];
      }
      else {
        local_b8 = *(int *)local_c4 + 1;
        local_98 = (byte *)0x1;
        local_a8 = local_b8;
        if (0 < local_54) {
          piVar7 = (int *)(local_58 + 0xc);
          iVar2 = local_b8;
          iVar12 = local_54;
          do {
            if (iVar2 <= *piVar7) {
              local_a8 = local_a8 + 1;
              iVar2 = iVar2 + 1;
            }
            piVar7 = piVar7 + 6;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        iVar2 = FUN_0040ec60((int)param_1);
        local_6c = iVar2;
        FUN_0040eb00();
        FUN_00420330(param_1,iVar2,0);
        FUN_00414e70(local_64,0x35);
        local_c0 = 0;
        if (0 < local_54) {
          iVar12 = iVar2 + local_b8;
          iVar13 = 0;
          iVar9 = local_58;
          iVar11 = local_b8;
          do {
            if (iVar11 <= *(int *)(iVar13 + 0xc + iVar9)) {
              iVar2 = FUN_00437690(*(undefined4 *)(iVar13 + iVar9),*(int *)(iVar13 + 8 + iVar9),
                                   *(void **)(iVar13 + 4 + iVar9),iVar12);
              if (iVar12 != iVar2) {
                FUN_00414e70(iVar2,0xf);
              }
              iVar11 = local_b8 + 1;
              iVar12 = iVar12 + 1;
              iVar9 = local_58;
              iVar2 = local_6c;
              local_b8 = iVar11;
            }
            local_c0 = local_c0 + 1;
            iVar13 = iVar13 + 0x18;
          } while (local_c0 < local_54);
        }
        iVar12 = FUN_0040ec00();
        FUN_00414dd0(0x1e,iVar2,local_a8,iVar12);
        FUN_00414e70(local_64,0x46);
        FUN_0040ec20(extraout_ECX_05,(int)param_1);
        FUN_0040ec90(iVar2);
        FUN_004174c0(local_88);
        FUN_00414e70(local_64,0x40);
        local_68._1_1_ = 1;
        FUN_0040eb00();
      }
      local_6c = FUN_0040d5c0();
      FUN_0040eb00();
      if (0 < *(int *)local_c4) {
        local_b8 = 0;
        iVar2 = 0;
        do {
          if (local_98 == (byte *)0x0) {
            local_68._0_1_ = 1;
            FUN_00415dc0();
          }
          else {
            FUN_00414dd0(0x1c,local_64,iVar2,iVar2 + local_a4);
          }
          local_b8 = local_b8 + 0x14;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)local_c4);
      }
      pbVar4 = local_c4;
      FUN_004197c0(local_a4,local_80,0x18,(char *)local_38,-6);
      local_80 = FUN_0040d5c0();
      FUN_00414dd0(0x19,local_80 + 1,0,local_80 + 1);
      FUN_00415c30(*(int *)pbVar4);
      FUN_00414e70(local_70 + 1,2);
      FUN_00414e70(local_70,0x71);
      FUN_00414e70(local_bc,2);
      FUN_0040d680(piVar3);
      FUN_004327a0((undefined1 *)&local_68);
      FUN_00414e70(1,7);
      if (local_98 == (byte *)0x0) {
        FUN_004174c0(local_88);
        FUN_004150c0(local_78,piVar3);
      }
      else {
        FUN_00414e70(local_64,0x43);
      }
      FUN_00414e70(local_70 + 1,2);
      FUN_00414e70(0,1);
      local_78 = FUN_0040d5c0();
      FUN_00414e70(1,7);
      FUN_00414e50(3);
      FUN_0040d4e0((int)piVar3,local_84);
      iVar2 = FUN_0040d5c0();
      FUN_00414e70(local_74,0x71);
      FUN_00414e50(3);
      FUN_0041cbc0((int)&local_68);
      FUN_004351c0(param_1,local_7c,iVar2 + 1,8);
      FUN_00421f10(param_1,(int)param_2,(int *)*param_2,0,(char *)0x0,local_b4,(int)local_9c,
                   (char *)param_3,iVar2 + 1,local_78);
      FUN_00414e50(3);
      FUN_0040d4e0((int)piVar3,(int)local_94);
      FUN_004326d0(param_1);
      FUN_00414e50(3);
    }
    FUN_0040d4e0((int)piVar3,local_8c);
  }
  if (local_b4 != (int *)0x0) {
    FUN_0041c290((void *)*local_90,(int)param_1,(int)param_2,(int)piVar3,*local_90,(char *)param_3);
  }
  FUN_0040d4e0((int)piVar3,local_3c);
  local_b8 = 0;
  if (*param_3 == 5) {
    FUN_0042f670(param_1,local_a0,local_90);
  }
LAB_00444aec:
  iVar2 = local_b0;
  FUN_00408130(local_b0);
  FUN_00408130(iVar2);
  return local_b8;
}


/* END FUNCTION 0x00443d60 */

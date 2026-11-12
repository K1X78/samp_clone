/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004494f0
 * Name: FUN_004494f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004494f0(int *param_1,short *param_2,int *param_3,byte *param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  void *this;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined3 extraout_var;
  int iVar11;
  undefined3 extraout_var_00;
  int *piVar12;
  undefined3 extraout_var_01;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  undefined4 extraout_ECX;
  int iVar16;
  int extraout_ECX_00;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  int local_80;
  int local_6c;
  int *local_68;
  uint local_5c;
  int *local_54;
  undefined4 *local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  byte *local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  short *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = *param_1;
  local_2c = 0;
  local_28 = 0;
  local_68 = (int *)0x0;
  local_48 = (undefined4 *)0x0;
  bVar3 = false;
  local_38 = 0;
  local_44 = 0;
  local_30 = 0;
  if (((param_1[0x10] != 0) || (*(char *)(iVar2 + 0x1e) != '\0')) ||
     (iVar5 = FUN_00442e70(), iVar5 == 0)) goto LAB_0044a0fc;
  iVar6 = FUN_0040fc30(*param_1);
  piVar7 = (int *)FUN_00410290(param_1,0x6b,param_3,&local_40);
  local_3c = (uint)(*(int *)(iVar5 + 0x1c) != 0);
  iVar8 = FUN_00446950(param_1,iVar5);
  if (((iVar8 != 0) || (iVar8 = FUN_0041b9d0(extraout_ECX,iVar5,local_40), iVar8 != 0)) ||
     (puVar9 = FUN_00412930(*(int *)(iVar5 + 0xc) << 2), puVar9 == (undefined4 *)0x0))
  goto LAB_0044a0fc;
  iVar8 = 0;
  if (0 < *(int *)(iVar5 + 0xc)) {
    do {
      puVar9[iVar8] = 0xffffffff;
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(iVar5 + 0xc));
  }
  this = (void *)param_1[0x11];
  *(void **)(param_2 + 0x10) = this;
  iVar10 = param_1[0x11] + 1;
  param_1[0x11] = iVar10;
  for (iVar8 = *(int *)(iVar5 + 0x14); iVar8 != 0; iVar8 = *(int *)(iVar8 + 0x20)) {
    iVar10 = iVar10 + 1;
    param_1[0x11] = iVar10;
  }
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_24 = param_1;
  local_20 = param_2;
  local_6c = 0;
  local_80 = 0;
  if (0 < *param_3) {
    local_5c = 0;
    do {
      bVar4 = FUN_00424ba0(param_3[3]);
      if (CONCAT31(extraout_var,bVar4) != 0) goto LAB_0044a0fc;
      iVar8 = *(int *)(iVar5 + 0xc);
      iVar10 = 0;
      if (0 < iVar8) {
        iVar16 = param_3[3];
        puVar17 = *(undefined4 **)(iVar5 + 0x10);
        local_34 = (byte *)((undefined4 *)(local_5c + iVar16))[1];
        do {
          iVar11 = FUN_00408450((byte *)*puVar17,local_34);
          if (iVar11 == 0) {
            if (iVar10 == *(int *)(iVar5 + 8)) {
              local_48 = *(undefined4 **)(local_5c + iVar16);
              local_6c = 1;
            }
            puVar9[iVar10] = local_80;
            break;
          }
          iVar10 = iVar10 + 1;
          puVar17 = puVar17 + 6;
        } while (iVar10 < iVar8);
      }
      if (*(int *)(iVar5 + 0xc) <= iVar10) {
        iVar8 = param_3[3];
        bVar4 = FUN_0040e880();
        if (CONCAT31(extraout_var_00,bVar4) == 0) {
          FUN_00418b00((undefined **)"no such column: %s");
          *(undefined1 *)((int)param_1 + 0x12) = 1;
          goto LAB_0044a0fc;
        }
        local_48 = *(undefined4 **)(local_5c + iVar8);
        local_6c = 1;
      }
      iVar8 = FUN_0041ab60(0x17,*(undefined4 *)(iVar5 + 4),
                           *(undefined4 *)(*(int *)(iVar5 + 0x10) + iVar10 * 0x18),
                           *(undefined4 *)(iVar6 * 0x10 + *(int *)(iVar2 + 8)));
      if (iVar8 == 1) goto LAB_0044a0fc;
      if (iVar8 == 2) {
        puVar9[iVar10] = 0xffffffff;
      }
      local_80 = local_80 + 1;
      local_5c = local_5c + 0x14;
    } while (local_80 < *param_3);
  }
  iVar10 = FUN_0040f860(iVar5,(int)puVar9,local_6c);
  iVar8 = *(int *)(iVar5 + 0x14);
  iVar16 = 0;
  if (iVar8 != 0) {
    do {
      iVar8 = *(int *)(iVar8 + 0x20);
      iVar16 = iVar16 + 1;
    } while (iVar8 != 0);
    if ((0 < iVar16) && (local_68 = FUN_00412930(iVar16 * 4), local_68 == (int *)0x0))
    goto LAB_0044a0fc;
  }
  iVar8 = *(int *)(iVar5 + 0x14);
  if (iVar8 != 0) {
    local_54 = local_68;
    do {
      if (local_6c == 0) {
        iVar16 = 0;
        iVar11 = 0;
        local_34 = (byte *)0x0;
        if (0 < *(int *)(iVar8 + 4)) {
          piVar12 = *(int **)(iVar8 + 8);
          do {
            if (-1 < (int)puVar9[*piVar12]) {
              iVar16 = param_1[0x12];
              goto LAB_004498a2;
            }
            iVar11 = iVar11 + 1;
            piVar12 = piVar12 + 1;
          } while (iVar11 < *(int *)(iVar8 + 4));
          iVar16 = 0;
        }
      }
      else {
        iVar16 = param_1[0x12];
LAB_004498a2:
        iVar16 = iVar16 + 1;
        param_1[0x12] = iVar16;
      }
      *local_54 = iVar16;
      iVar8 = *(int *)(iVar8 + 0x20);
      local_54 = local_54 + 1;
    } while (iVar8 != 0);
  }
  piVar12 = (int *)FUN_0041c720();
  if (piVar12 == (int *)0x0) goto LAB_0044a0fc;
  if (*(char *)((int)param_1 + 0x13) == '\0') {
    FUN_0040dcc0();
  }
  FUN_0042cdb0((byte)iVar6,1);
  if ((*(byte *)(iVar5 + 0x22) & 0x10) != 0) {
    FUN_00444ee0((int)param_2,(int)param_3,local_48,(int)puVar9,(int)param_4);
    param_4 = (byte *)0x0;
    param_2 = (short *)0x0;
    goto LAB_0044a0fc;
  }
  iVar8 = param_1[0x12];
  uVar18 = iVar8 + 1;
  param_1[0x12] = uVar18;
  if ((piVar7 != (int *)0x0) || (iVar10 != 0)) {
    local_44 = iVar8 + 2;
    param_1[0x12] = *(int *)(iVar5 + 0xc) + uVar18;
  }
  if (((local_6c != 0) || (piVar7 != (int *)0x0)) || (local_5c = uVar18, iVar10 != 0)) {
    local_5c = param_1[0x12] + 1;
    param_1[0x12] = local_5c;
  }
  iVar8 = param_1[0x12] + 1;
  param_1[0x12] = param_1[0x12] + 1 + *(int *)(iVar5 + 0xc);
  iVar16 = iVar8;
  if (local_3c != 0) {
    FUN_0040ed70(&local_2c,*(undefined4 *)(iVar5 + 4));
    FUN_004462b0(param_1,iVar5,(undefined4 *)param_4,this);
    iVar16 = extraout_ECX_00;
  }
  bVar4 = FUN_00424ba0(iVar16);
  if (CONCAT31(extraout_var_01,bVar4) != 0) goto LAB_0044a0fc;
  FUN_00414e70(0,10);
  piVar13 = FUN_00440af0(param_1,param_2,param_4,(undefined4 *)0x0,4);
  if (piVar13 == (int *)0x0) goto LAB_0044a0fc;
  bVar1 = *(byte *)((int)piVar13 + 6);
  local_34 = (byte *)(uint)bVar1;
  FUN_00414e70(this,0x3d);
  if ((byte *)(uint)bVar1 == (byte *)0x0) {
    local_30 = param_1[0x12] + 1;
    param_1[0x12] = local_30;
    FUN_00414e70(local_30,0x69);
  }
  FUN_004174c0(piVar13);
  if (((*(uint *)(iVar2 + 0xc) & 0x1000) != 0) && (param_1[0x6b] == 0)) {
    local_38 = param_1[0x12] + 1;
    param_1[0x12] = local_38;
    FUN_00414e70(0,7);
  }
  if (local_3c == 0) {
    if (local_34 == (byte *)0x0) {
      FUN_004215c0(this,iVar6,0x27);
    }
    if (param_5 == 5) {
LAB_00449b05:
      bVar3 = true;
    }
    else {
      bVar3 = false;
      for (iVar6 = *(int *)(iVar5 + 0x14); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x20)) {
        if (*(char *)(iVar6 + 0x18) == '\x05') goto LAB_00449b05;
      }
    }
    piVar13 = *(int **)(iVar5 + 0x14);
    local_80 = 0;
    for (; piVar13 != (int *)0x0; piVar13 = (int *)piVar13[8]) {
      if ((bVar3) || (0 < local_68[local_80])) {
        piVar14 = FUN_00430960(param_1,piVar13);
        FUN_004197c0(piVar13[5],(int)this + local_80 + 1,0x27,(char *)piVar14,-0x10);
      }
      local_80 = local_80 + 1;
    }
  }
  if (local_34 == (byte *)0x0) {
    iVar6 = FUN_00414dd0(0x6a,local_30,0,uVar18);
  }
  else {
    FUN_00414e50(0x4a);
    iVar6 = FUN_00414e30();
    FUN_0040d680(piVar12);
  }
  FUN_00414dd0(0x34,this,iVar6,uVar18);
  if (local_6c != 0) {
    FUN_00415dc0();
    FUN_00414e50(0x15);
  }
  if (iVar10 == 0) {
    if (piVar7 != (int *)0x0) {
      uVar19 = 0;
      goto LAB_00449c32;
    }
  }
  else {
    uVar19 = FUN_0041bd00(param_1,iVar5);
LAB_00449c32:
    uVar15 = FUN_00410320(param_1,(int)param_3,0,3,param_5);
    iVar16 = 0;
    if (0 < *(int *)(iVar5 + 0xc)) {
      do {
        if ((((int)puVar9[iVar16] < 0) || ((uVar19 | uVar15) == 0xffffffff)) ||
           (((uVar19 | uVar15) & 1 << ((byte)iVar16 & 0x1f)) != 0)) {
          FUN_00437630(this,iVar16 + local_44);
        }
        else {
          FUN_00414e70(0,10);
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < *(int *)(iVar5 + 0xc));
    }
    if (local_6c == 0) {
      FUN_00414e70(uVar18,0xe);
    }
  }
  local_30 = FUN_00410320(param_1,(int)param_3,1,1,param_5);
  local_80 = 0;
  if (0 < *(int *)(iVar5 + 0xc)) {
    do {
      if (local_80 == *(int *)(iVar5 + 8)) {
        FUN_00414e70(0,10);
      }
      else if ((int)puVar9[local_80] < 0) {
        if ((((local_40 & 1) == 0) || (0x1f < local_80)) ||
           ((local_30 & 1 << ((byte)local_80 & 0x1f)) != 0)) {
          FUN_00414dd0(0x1c,this,local_80,iVar8 + local_80);
          FUN_00436960(iVar8 + local_80);
        }
      }
      else {
        FUN_00415dc0();
      }
      local_80 = local_80 + 1;
    } while (local_80 < *(int *)(iVar5 + 0xc));
  }
  if ((local_40 & 1) != 0) {
    FUN_00414e70(iVar8,0x1d);
    FUN_00416a70(piVar12);
    FUN_0044ab00(param_1,piVar7,0x6b,param_3,1,iVar5,uVar18,param_5,iVar6);
    FUN_00414dd0(0x34,this,iVar6,uVar18);
    iVar16 = 0;
    if (0 < *(int *)(iVar5 + 0xc)) {
      do {
        if (((int)puVar9[iVar16] < 0) && (iVar16 != *(int *)(iVar5 + 8))) {
          FUN_00414dd0(0x1c,this,iVar16,iVar8 + iVar16);
          FUN_00436960(iVar8 + iVar16);
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < *(int *)(iVar5 + 0xc));
    }
  }
  if (local_3c == 0) {
    FUN_004402e0(param_1,iVar5,(int)this,local_5c,(int)local_68,-(uint)(local_6c != 0) & uVar18,1,
                 param_5,iVar6,(int *)0x0);
    if (iVar10 != 0) {
      FUN_00442ed0(param_1,iVar5,uVar18,0);
    }
    local_30 = FUN_00414dd0(0x34,this,0,uVar18);
    FUN_00440280((int)this,local_68);
    if ((iVar10 != 0) || (local_6c != 0)) {
      FUN_00414e70(this,0x39);
    }
    FUN_0040d680(piVar12);
    if (iVar10 != 0) {
      FUN_00442ed0(param_1,iVar5,0,local_5c);
    }
    FUN_00421970((int)param_1,(int)this,local_5c,(int)local_68,1,0,0);
    if (iVar10 != 0) {
      FUN_00421570((int)param_3,uVar18);
    }
  }
  if (((*(uint *)(iVar2 + 0xc) & 0x1000) != 0) && (param_1[0x6b] == 0)) {
    FUN_00414e70(local_38,0x14);
  }
  FUN_0044ab00(param_1,piVar7,0x6b,param_3,2,iVar5,uVar18,param_5,iVar6);
  FUN_00414e70(0,1);
  FUN_0040d680(piVar12);
  iVar6 = 0;
  for (iVar5 = *(int *)(iVar5 + 0x14); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x20)) {
    if ((bVar3) || (0 < local_68[iVar6])) {
      FUN_00414e70((int)this + iVar6 + 1,0x2b);
    }
    iVar6 = iVar6 + 1;
  }
  FUN_00414e70(this,0x2b);
  if ((*(char *)((int)param_1 + 0x13) == '\0') && (param_1[0x6b] == 0)) {
    FUN_004217f0((int)param_1);
  }
  if ((((*(uint *)(iVar2 + 0xc) & 0x1000) != 0) && (param_1[0x6b] == 0)) &&
     (*(char *)((int)param_1 + 0x13) == '\0')) {
    FUN_00414e70(local_38,0x10);
    FUN_00419d70(1);
    FUN_0042e910(piVar12,0,0,"rows updated");
  }
LAB_0044a0fc:
  FUN_0040ed90();
  FUN_00408130(iVar2);
  FUN_00408130(iVar2);
  FUN_0040f240(param_2);
  FUN_0040e580();
  FUN_004158d0(iVar2,(int)param_4);
  return;
}


/* END FUNCTION 0x004494f0 */

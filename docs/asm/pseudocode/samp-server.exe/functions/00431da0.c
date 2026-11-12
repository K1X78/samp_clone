/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00431da0
 * Name: FUN_00431da0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_00431da0(void *this,int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 extraout_ECX;
  ushort *puVar18;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int extraout_ECX_02;
  int *unaff_EBX;
  uint local_68;
  int local_64;
  char *local_58;
  int local_50;
  char *local_44;
  char *local_38;
  char *local_34;
  byte local_20 [8];
  undefined4 local_18;
  byte local_10 [8];
  undefined4 local_8;
  
  piVar7 = param_1;
  iVar2 = *unaff_EBX;
  pvVar3 = (void *)unaff_EBX[3];
  local_58 = (char *)0x0;
  iVar8 = FUN_00414e90(this);
  iVar9 = FUN_00414e90(extraout_ECX);
  piVar4 = (int *)param_1[7];
  cVar1 = (char)param_1[1];
  param_1 = (int *)param_1[6];
  iVar11 = *param_1;
  local_64 = iVar11;
  if ((cVar1 != 'q') && (local_68 = 1, *(char *)(iVar2 + 0x1e) == '\0')) {
    local_44 = (char *)(iVar11 * 0x14);
    do {
      if (*(int *)*piVar7 < (int)local_68) break;
      iVar10 = 0;
      if (0 < (int)local_44) {
        puVar18 = (ushort *)(param_1[3] + 0xe);
        do {
          if (*puVar18 == local_68) break;
          iVar10 = iVar10 + 1;
          puVar18 = puVar18 + 10;
        } while (iVar10 < iVar11);
      }
      if (iVar10 == iVar11) {
        iVar11 = FUN_0041a000((void *)0x0,iVar2,0x81);
        if (iVar11 == 0) {
          return 7;
        }
        *(byte *)(iVar11 + 3) = *(byte *)(iVar11 + 3) | 4;
        *(uint *)(iVar11 + 4) = local_68;
        param_1 = FUN_0041a560(param_1);
        *(undefined2 *)(param_1[3] + 0xe + (int)local_44) = (undefined2)local_68;
        iVar11 = local_64 + 1;
        local_44 = (char *)((int)local_44 + 0x14);
        local_64 = iVar11;
      }
      local_68 = local_68 + 1;
    } while (*(char *)(iVar2 + 0x1e) == '\0');
  }
  pcVar12 = (char *)FUN_00412930(iVar11 * 4);
  iVar11 = 0;
  if (pcVar12 == (char *)0x0) {
    local_38 = (char *)0x0;
  }
  else {
    if (0 < local_64) {
      puVar18 = (ushort *)(param_1[3] + 0xe);
      do {
        *(uint *)(pcVar12 + iVar11 * 4) = *puVar18 - 1;
        iVar11 = iVar11 + 1;
        puVar18 = puVar18 + 10;
      } while (iVar11 < local_64);
    }
    local_38 = (char *)FUN_00412930(local_64 * 5 + 0x10);
    if (local_38 != (char *)0x0) {
      *(char **)(local_38 + 8) = local_38 + local_64 * 4 + 0xc;
      *(short *)(local_38 + 6) = (short)local_64;
      iVar11 = 0;
      local_38[4] = *(char *)(*(int *)(*(int *)(iVar2 + 8) + 0xc) + 0x49);
      if (0 < local_64) {
        local_44 = local_38 + 0xc;
        local_34 = (char *)0x0;
        do {
          iVar10 = *(int *)((int)local_34 + param_1[3]);
          if ((*(byte *)(iVar10 + 3) & 1) == 0) {
            piVar13 = FUN_00431d50(unaff_EBX,piVar7,*(int *)(pcVar12 + iVar11 * 4));
            *(byte *)(iVar10 + 3) = *(byte *)(iVar10 + 3) | 1;
            *(int **)(iVar10 + 0x14) = piVar13;
          }
          else {
            piVar13 = *(int **)(iVar10 + 0x14);
          }
          *(int **)local_44 = piVar13;
          *(undefined1 *)(iVar11 + *(int *)(local_38 + 8)) =
               *(undefined1 *)(param_1[3] + 0xc + (int)local_34);
          local_44 = local_44 + 4;
          iVar11 = iVar11 + 1;
          local_34 = (char *)((int)local_34 + 0x14);
        } while (iVar11 < local_64);
      }
    }
  }
  piVar7[6] = (int)param_1;
  piVar13 = FUN_00415950(*unaff_EBX,param_1,0);
  piVar4[6] = (int)piVar13;
  if (cVar1 == 'q') {
    local_50 = 0;
  }
  else {
    iVar11 = *(int *)*piVar7;
    local_50 = FUN_0040ec60((int)unaff_EBX);
    FUN_00414e70(0,7);
    local_58 = (char *)FUN_00417b70();
    if (local_58 != (char *)0x0) {
      *(short *)(local_58 + 6) = (short)iVar11;
      *(char **)(local_58 + 8) = local_58 + iVar11 * 4 + 0xc;
      iVar10 = 0;
      local_58[4] = *(char *)(*(int *)(*(int *)(iVar2 + 8) + 0xc) + 0x49);
      if (0 < iVar11) {
        local_34 = local_58 + 0xc;
        do {
          piVar13 = FUN_00431d50(unaff_EBX,piVar7,iVar10);
          *(int **)local_34 = piVar13;
          *(undefined1 *)(iVar10 + *(int *)(local_58 + 8)) = 0;
          iVar10 = iVar10 + 1;
          local_34 = local_34 + 4;
        } while (iVar10 < iVar11);
      }
    }
  }
  piVar7[7] = 0;
  piVar4[9] = 0;
  FUN_00424af0(unaff_EBX,piVar7,"ORDER");
  if (piVar4[7] == 0) {
    FUN_00424af0(unaff_EBX,piVar4,"ORDER");
  }
  FUN_0041c750((int)piVar7);
  if ((piVar7[0xc] == 0) || (cVar1 != 'q')) {
    local_44 = (char *)0x0;
    local_34 = (char *)0x0;
  }
  else {
    local_34 = (char *)(unaff_EBX[0x12] + 1);
    local_44 = (char *)(unaff_EBX[0x12] + 2);
    unaff_EBX[0x12] = (int)local_44;
    iVar11 = piVar7[0xd] + 1;
    if (piVar7[0xd] == 0) {
      iVar11 = piVar7[0xc];
    }
    FUN_00414e70(iVar11,0xe);
    FUN_00414e70(local_34,0xe);
  }
  FUN_004158d0(iVar2,piVar7[10]);
  piVar7[10] = 0;
  FUN_004158d0(iVar2,piVar7[0xb]);
  piVar7[0xb] = 0;
  iVar10 = unaff_EBX[0x12];
  iVar11 = iVar10 + 2;
  iVar14 = iVar10 + 4;
  iVar15 = iVar10 + 6;
  unaff_EBX[0x12] = iVar15;
  FUN_0040fcc0(extraout_ECX_00,iVar10 + 1,10);
  FUN_0040fcc0(extraout_ECX_01,iVar10 + 3,10);
  FUN_00414e30();
  FUN_0040d5c0();
  piVar4[0xc] = (int)local_34;
  FUN_00443d60(unaff_EBX,piVar4,local_10);
  FUN_00414e70(1,7);
  FUN_00414e50(4);
  FUN_0040d5c0();
  iVar16 = piVar7[0xd];
  iVar5 = piVar7[0xc];
  piVar7[0xc] = (int)local_44;
  piVar7[0xd] = 0;
  FUN_00443d60(unaff_EBX,piVar7,local_20);
  piVar7[0xc] = iVar5;
  piVar7[0xd] = iVar16;
  FUN_00414e70(1,7);
  FUN_00414e50(4);
  FUN_0041c8b0(unaff_EBX,(int)piVar7,(int)local_10,param_2,iVar10 + 5,local_58,-0x10,iVar8);
  if ((cVar1 == 'q') || (cVar1 == 'p')) {
    FUN_0041c8b0(unaff_EBX,(int)piVar7,(int)local_20,param_2,iVar15,local_58,-0x11,iVar8);
  }
  if ((cVar1 == 'r') || (cVar1 == 's')) {
    FUN_00414e70(0,1);
  }
  else {
    FUN_00414e70(iVar14,0x1a);
    FUN_00414e70(iVar15,2);
    FUN_00414e50(4);
    FUN_00414e70(0,1);
  }
  if (cVar1 != 's') {
    FUN_00414e70(iVar11,0x1a);
    FUN_00414e70(iVar10 + 5,2);
    FUN_00414e50(4);
    FUN_00414e70(0,1);
  }
  local_34 = (char *)FUN_00414e70(iVar10 + 5,2);
  FUN_00414e50(4);
  FUN_00414e70(iVar11,0x1a);
  FUN_00414e70(0,1);
  local_44 = local_34;
  if (cVar1 != 'q') {
    if (cVar1 == 's') {
      local_44 = (char *)((int)local_34 + 1);
    }
    else {
      iVar16 = FUN_00414e50(4);
      FUN_00414e70(iVar11,0x1a);
      FUN_00414e70(0,1);
      local_34 = (char *)iVar16;
    }
  }
  uVar17 = FUN_0040d5c0();
  if ((extraout_ECX_02 == 0x71) || (extraout_ECX_02 == 0x70)) {
    FUN_00414e70(iVar15,2);
  }
  FUN_00414e50(4);
  FUN_00414e70(iVar14,0x1a);
  FUN_00414e70(0,1);
  FUN_0040d680(pvVar3);
  FUN_00414e70(0,7);
  FUN_00414e70(0,7);
  FUN_00414e70(iVar10 + 1,2);
  FUN_00414e70(iVar10 + 3,2);
  FUN_00414e70(iVar11,0x1a);
  FUN_00414e70(iVar14,0x1a);
  FUN_0040d4e0((int)pvVar3,iVar9);
  FUN_004197c0(0,0,0x17,pcVar12,-0xf);
  FUN_004197c0(local_18,local_8,0x18,local_38,-0x10);
  FUN_00414dd0(0x19,local_44,local_34,uVar17);
  if (local_50 != 0) {
    FUN_0040ec90(local_50);
  }
  FUN_0040d4e0((int)pvVar3,iVar8);
  if (*param_2 == '\x05') {
    piVar13 = piVar4;
    for (piVar6 = (int *)piVar4[7]; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[7]) {
      piVar13 = piVar6;
    }
    FUN_0042f670(unaff_EBX,(short *)0x0,(int *)*piVar13);
  }
  if (piVar7[7] != 0) {
    FUN_0040fce0(iVar2,piVar7[7]);
  }
  piVar7[7] = (int)piVar4;
  return 0;
}


/* END FUNCTION 0x00431da0 */

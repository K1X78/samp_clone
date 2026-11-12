/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00443220
 * Name: FUN_00443220
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00443220(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  int *in_EAX;
  int iVar5;
  undefined3 extraout_var;
  int iVar6;
  undefined3 extraout_var_00;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined1 uVar12;
  int extraout_EDX;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int local_10;
  
  bVar2 = false;
  if (in_EAX == (int *)0x0) {
    return 0;
  }
  iVar5 = FUN_004101a0(param_2);
  if ((((iVar5 != 0) || ((*(byte *)(param_2 + 0x22) & 0x10) != 0)) ||
      ((param_3 != 99 && ((param_3 != 2 && (param_3 != 1)))))) ||
     (((*(short *)in_EAX[2] != 1 ||
       ((((*(int *)((short *)in_EAX[2] + 0xc) != 0 || (in_EAX[3] != 0)) || (in_EAX[6] != 0)) ||
        ((in_EAX[4] != 0 || (in_EAX[10] != 0)))))) ||
      (((in_EAX[7] != 0 || (((*(byte *)((int)in_EAX + 6) & 1) != 0 || (*(int *)*in_EAX != 1)))) ||
       (**(char **)((int *)*in_EAX)[3] != 'q')))))) {
    return 0;
  }
  iVar5 = FUN_00442730();
  if (((((iVar5 != 0) && (iVar5 != param_2)) && ((*(byte *)(iVar5 + 0x22) & 0x10) == 0)) &&
      ((*(int *)(iVar5 + 0x1c) == 0 &&
       (iVar14 = *(int *)(param_2 + 0xc), iVar14 == *(int *)(iVar5 + 0xc))))) &&
     (*(int *)(param_2 + 8) == *(int *)(iVar5 + 8))) {
    iVar13 = 0;
    if (0 < iVar14) {
      puVar15 = (undefined4 *)(*(int *)(param_2 + 0x10) + 0x10);
      puVar16 = (undefined4 *)(*(int *)(iVar5 + 0x10) + 0x10);
      do {
        if (*(char *)((int)puVar15 + 6) != *(char *)((int)puVar16 + 6)) {
          return 0;
        }
        bVar3 = FUN_0040f9c0((byte *)*puVar15,(byte *)*puVar16);
        if (CONCAT31(extraout_var,bVar3) == 0) {
          return 0;
        }
        if ((*(char *)(puVar15 + 1) != '\0') && (*(char *)(puVar16 + 1) == '\0')) {
          return 0;
        }
        iVar13 = iVar13 + 1;
        puVar15 = puVar15 + 6;
        puVar16 = puVar16 + 6;
      } while (iVar13 < iVar14);
    }
    iVar14 = *(int *)(param_2 + 0x14);
    if (iVar14 != 0) {
      iVar13 = *(int *)(iVar5 + 0x14);
      do {
        if (*(char *)(iVar14 + 0x18) != '\0') {
          bVar2 = true;
        }
        iVar7 = iVar13;
        if (iVar13 == 0) {
          return 0;
        }
        while (iVar6 = FUN_0040f9e0(), iVar6 == 0) {
          piVar8 = (int *)(iVar7 + 0x20);
          iVar7 = *piVar8;
          if (*piVar8 == 0) {
            return 0;
          }
        }
        if (iVar7 == 0) {
          return 0;
        }
        iVar14 = *(int *)(iVar14 + 0x20);
      } while (iVar14 != 0);
    }
    if ((*(char **)(param_2 + 0x2c) == (char *)0x0) ||
       (bVar4 = FUN_00415fe0(*(char **)(iVar5 + 0x2c),*(char **)(param_2 + 0x2c)),
       CONCAT31(extraout_var_00,bVar4) == 0)) {
      iVar7 = FUN_0040fc30(*param_1);
      piVar8 = (int *)FUN_0041c720();
      FUN_0042cd30();
      iVar13 = param_1[0x11];
      iVar14 = iVar13 + 1;
      param_1[0x11] = iVar13 + 2;
      iVar6 = FUN_00416af0(extraout_ECX,(int)param_1,param_4);
      FUN_004215c0(iVar14,param_4,0x27);
      if (((*(int *)(param_2 + 8) < 0) && (*(int *)(param_2 + 0x14) != 0)) || (bVar2)) {
        FUN_00414e70(iVar14,0x41);
        local_10 = FUN_00414e70(0,1);
        FUN_0040d680(piVar8);
      }
      else {
        local_10 = 0;
      }
      FUN_004215c0(iVar13,iVar7,0x26);
      FUN_00414e70(iVar13,0x41);
      iVar7 = FUN_0040ec00();
      iVar9 = FUN_0040ec00();
      if (*(int *)(param_2 + 8) < 0) {
        if (*(int *)(param_2 + 0x14) == 0) {
          uVar12 = 0x36;
          iVar6 = iVar14;
        }
        else {
          uVar12 = 0x3d;
          iVar6 = iVar13;
        }
        FUN_00414e70(iVar6,uVar12);
      }
      else {
        FUN_00414e70(iVar13,0x3d);
        FUN_00414dd0(0x34,iVar14,0,iVar9);
        FUN_00420ee0("PRIMARY KEY must be unique",-2);
        FUN_0040d680(piVar8);
        FUN_00416b60(iVar6);
      }
      FUN_00414e70(iVar13,0x3c);
      FUN_00414dd0(0x37,iVar14,iVar7,iVar9);
      FUN_0040d660(extraout_ECX_00,0xb);
      FUN_00415110(0,*(char **)(param_2 + 4),piVar8);
      FUN_00414e70(iVar13,0x43);
      for (piVar1 = *(int **)(param_2 + 0x14); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[8]) {
        piVar11 = *(int **)(iVar5 + 0x14);
        while ((piVar11 != (int *)0x0 && (iVar6 = FUN_0040f9e0(), iVar6 == 0))) {
          piVar11 = (int *)piVar11[8];
        }
        FUN_00414e70(iVar13,0x2b);
        FUN_00414e70(iVar14,0x2b);
        piVar10 = FUN_00430960(param_1,piVar11);
        FUN_004197c0(piVar11[5],iVar13,0x26,(char *)piVar10,-0x10);
        piVar11 = FUN_00430960(param_1,piVar1);
        FUN_004197c0(piVar1[5],iVar14,0x27,(char *)piVar11,-0x10);
        FUN_00414e70(iVar13,0x41);
        FUN_00414e70(iVar13,0x3b);
        FUN_00414dd0(0x46,iVar14,iVar7,1);
        FUN_00414e70(iVar13,0x43);
        FUN_0040d680(piVar8);
      }
      FUN_0040d680(piVar8);
      FUN_0040ec20(extraout_ECX_01,(int)param_1);
      FUN_0040ec20(extraout_ECX_02,extraout_EDX);
      FUN_00414e70(iVar13,0x2b);
      FUN_00414e70(iVar14,0x2b);
      if (local_10 == 0) {
        return 1;
      }
      FUN_00414e70(0,6);
      FUN_0040d680(piVar8);
      FUN_00414e70(iVar14,0x2b);
    }
  }
  return 0;
}


/* END FUNCTION 0x00443220 */

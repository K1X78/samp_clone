/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00430ac0
 * Name: FUN_00430ac0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00430ac0(int param_1,int param_2,int *param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  bool bVar11;
  ulonglong uVar12;
  byte *local_c;
  
  bVar10 = false;
  uVar3 = FUN_0040dda0(param_3[1]);
  if (CONCAT31(extraout_var,uVar3) == 5) {
    return;
  }
  if ((param_2 == 3) && (uVar3 = FUN_0040dda0(param_3[2]), CONCAT31(extraout_var_00,uVar3) == 5)) {
    return;
  }
  uVar3 = FUN_0040dda0(*param_3);
  uVar12 = FUN_0041ffa0();
  piVar9 = (int *)uVar12;
  iVar6 = (int)piVar9 >> 0x1f;
  if (CONCAT31(extraout_var_01,uVar3) == 4) {
    piVar4 = (int *)FUN_0041ff70();
    local_c = (byte *)FUN_00424060(*param_3);
    param_3 = piVar4;
    if (local_c == (byte *)0x0) {
      return;
    }
  }
  else {
    local_c = (byte *)FUN_0041ffb0();
    if (local_c == (byte *)0x0) {
      return;
    }
    param_3 = (int *)0x0;
    if ((-1 < (int)piVar9 || iVar6 < 0) && (iVar6 < 0)) {
      bVar2 = *local_c;
      pbVar5 = local_c;
      while (bVar2 != 0) {
        bVar2 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        if (0xbf < bVar2) {
          bVar2 = *pbVar5;
          while ((bVar2 & 0xc0) == 0x80) {
            pbVar1 = pbVar5 + 1;
            pbVar5 = pbVar5 + 1;
            bVar2 = *pbVar1;
          }
        }
        param_3 = (int *)((int)param_3 + 1);
        bVar2 = *pbVar5;
      }
    }
  }
  if (param_2 == 3) {
    uVar12 = FUN_0041ffa0();
    piVar4 = (int *)uVar12;
    iVar7 = (int)piVar4 >> 0x1f;
    if ((-1 < (int)piVar4 || iVar7 < 0) && (iVar7 < 0)) {
      bVar10 = piVar4 != (int *)0x0;
      piVar4 = (int *)-(int)piVar4;
      iVar7 = -(iVar7 + (uint)bVar10);
      bVar10 = true;
    }
  }
  else {
    iVar7 = FUN_0040de20(param_1);
    piVar4 = *(int **)(iVar7 + 0x48);
    iVar7 = (int)piVar4 >> 0x1f;
  }
  iVar8 = (int)param_3 >> 0x1f;
  if (-1 < (int)piVar9 || iVar6 < 0) {
    if (iVar6 < 0) {
      bVar11 = CARRY4((uint)piVar9,(uint)param_3);
      piVar9 = (int *)((int)piVar9 + (int)param_3);
      iVar6 = iVar6 + iVar8 + (uint)bVar11;
      if ((iVar6 < 1) && (iVar6 < 0)) {
        bVar11 = CARRY4((uint)piVar4,(uint)piVar9);
        piVar4 = (int *)((int)piVar4 + (int)piVar9);
        iVar7 = iVar7 + iVar6 + (uint)bVar11;
        if ((iVar7 < 1) && (iVar7 < 0)) {
          piVar4 = (int *)0x0;
          iVar7 = 0;
        }
        piVar9 = (int *)0x0;
        iVar6 = 0;
      }
      goto LAB_00430c4e;
    }
    if ((iVar6 < 0) || ((-1 < (int)piVar9 && (piVar9 == (int *)0x0)))) {
      if ((-1 < iVar7) && ((0 < iVar7 || (piVar4 != (int *)0x0)))) {
        bVar11 = piVar4 != (int *)0x0;
        piVar4 = (int *)((int)piVar4 - 1);
        iVar7 = iVar7 + -1 + (uint)bVar11;
      }
      goto LAB_00430c4e;
    }
  }
  bVar11 = piVar9 != (int *)0x0;
  piVar9 = (int *)((int)piVar9 - 1);
  iVar6 = iVar6 + -1 + (uint)bVar11;
LAB_00430c4e:
  if (bVar10) {
    bVar10 = piVar9 < piVar4;
    piVar9 = (int *)((int)piVar9 - (int)piVar4);
    iVar6 = (iVar6 - iVar7) - (uint)bVar10;
    if ((iVar6 < 1) && (iVar6 < 0)) {
      bVar10 = CARRY4((uint)piVar4,(uint)piVar9);
      piVar4 = (int *)((int)piVar4 + (int)piVar9);
      iVar7 = iVar7 + iVar6 + (uint)bVar10;
      piVar9 = (int *)0x0;
      iVar6 = 0;
    }
  }
  if (CONCAT31(extraout_var_01,uVar3) == 4) {
    iVar7 = iVar7 + iVar6 + (uint)CARRY4((uint)piVar4,(uint)piVar9);
    if ((iVar8 <= iVar7) && ((iVar8 < iVar7 || (param_3 < (int *)((int)piVar4 + (int)piVar9))))) {
      piVar4 = (int *)((int)param_3 - (int)piVar9);
      bVar10 = (int)((iVar8 - iVar6) - (uint)(param_3 < piVar9)) < 0;
      if ((iVar8 - iVar6 == (uint)(param_3 < piVar9) || bVar10) && (bVar10)) {
        piVar4 = (int *)0x0;
      }
    }
    FUN_0042fc90(param_1,(byte *)((int)piVar9 + (int)local_c),piVar4);
    return;
  }
  bVar2 = *local_c;
  for (; (bVar2 != 0 && (piVar9 != (int *)0x0 || iVar6 != 0)); piVar9 = (int *)((int)piVar9 + -1)) {
    local_c = local_c + 1;
    if (0xbf < bVar2) {
      bVar2 = *local_c;
      while ((bVar2 & 0xc0) == 0x80) {
        pbVar5 = local_c + 1;
        local_c = local_c + 1;
        bVar2 = *pbVar5;
      }
    }
    bVar2 = *local_c;
    iVar6 = iVar6 + -1 + (uint)(piVar9 != (int *)0x0);
  }
  bVar2 = *local_c;
  pbVar5 = local_c;
  for (; (bVar2 != 0 && (piVar4 != (int *)0x0 || iVar7 != 0)); piVar4 = (int *)((int)piVar4 - 1)) {
    bVar2 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    if (0xbf < bVar2) {
      bVar2 = *pbVar5;
      while ((bVar2 & 0xc0) == 0x80) {
        pbVar1 = pbVar5 + 1;
        pbVar5 = pbVar5 + 1;
        bVar2 = *pbVar1;
      }
    }
    bVar2 = *pbVar5;
    iVar7 = iVar7 + -1 + (uint)(piVar4 != (int *)0x0);
  }
  FUN_0042fcb0(param_1,local_c,pbVar5 + -(int)local_c);
  return;
}


/* END FUNCTION 0x00430ac0 */

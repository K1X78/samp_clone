/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00426b70
 * Name: FUN_00426b70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00426b70(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  int iVar10;
  undefined4 extraout_ECX;
  short *extraout_ECX_00;
  short *psVar11;
  undefined4 extraout_ECX_01;
  int *piVar12;
  int iVar13;
  int *piVar14;
  char *pcVar15;
  int local_38;
  int *local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  piVar8 = param_2;
  if ((*(ushort *)((int)param_2 + 6) & 2) != 0) {
    return 1;
  }
  iVar10 = *(int *)(param_1 + 0xc);
  piVar2 = *(int **)(param_1 + 8);
  iVar3 = *piVar2;
  if ((*(ushort *)((int)param_2 + 6) & 0x10) == 0) {
    FUN_00443d00(piVar2,(int)param_2,iVar10);
    if ((piVar2[0x10] != 0) || (*(char *)(iVar3 + 0x1e) != '\0')) {
      return 2;
    }
  }
  else {
    iVar4 = param_2[7];
    piVar14 = param_2;
    do {
      *(byte *)((int)piVar14 + 6) = *(byte *)((int)piVar14 + 6) | 2;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      local_8 = 0;
      local_4 = 0;
      local_24 = piVar2;
      bVar9 = FUN_00424ba0(0);
      if (CONCAT31(extraout_var,bVar9) != 0) {
        return 2;
      }
      bVar9 = FUN_00424ba0(extraout_ECX);
      if (CONCAT31(extraout_var_00,bVar9) != 0) {
        return 2;
      }
      local_10 = CONCAT31(local_10._1_3_,1);
      local_20 = piVar14[2];
      piVar5 = (int *)*piVar14;
      psVar11 = extraout_ECX_00;
      local_4 = iVar10;
      if (0 < *piVar5) {
        param_2 = (int *)0x0;
        local_38 = 0;
        do {
          bVar9 = FUN_00424ba0(local_38);
          if (CONCAT31(extraout_var_01,bVar9) != 0) {
            return 2;
          }
          psVar11 = (short *)*piVar5;
          param_2 = (int *)((int)param_2 + 1);
          local_38 = local_38 + 0x14;
        } while ((int)param_2 < (int)psVar11);
      }
      iVar13 = 0;
      param_2 = (int *)0x0;
      if (0 < *(short *)piVar14[2]) {
        do {
          iVar1 = piVar14[2] + 8 + iVar13;
          if (*(int *)(piVar14[2] + 0x18 + iVar13) != 0) {
            iVar6 = *(int *)(iVar1 + 4);
            iVar7 = piVar2[0x82];
            if (iVar6 != 0) {
              piVar2[0x82] = iVar6;
            }
            FUN_00426e50(piVar2,*(int *)(iVar1 + 0x10),iVar10);
            piVar2[0x82] = iVar7;
            if (piVar2[0x10] != 0) {
              return 2;
            }
            if (*(char *)(iVar3 + 0x1e) != '\0') {
              return 2;
            }
          }
          psVar11 = (short *)piVar14[2];
          param_2 = (int *)((int)param_2 + 1);
          iVar13 = iVar13 + 0x38;
        } while ((int)param_2 < (int)*psVar11);
      }
      piVar5 = (int *)piVar14[4];
      if ((piVar5 == (int *)0x0) && (local_10._1_1_ == '\0')) {
        local_10 = local_10 & 0xffffff00;
      }
      else {
        *(byte *)((int)piVar14 + 6) = *(byte *)((int)piVar14 + 6) | 4;
      }
      if ((piVar14[5] != 0) && (piVar5 == (int *)0x0)) {
        pcVar15 = "a GROUP BY clause is required before HAVING";
LAB_00426e27:
        FUN_00418b00((undefined **)pcVar15);
        return 2;
      }
      local_1c = *piVar14;
      bVar9 = FUN_00424ba0(psVar11);
      if (CONCAT31(extraout_var_02,bVar9) != 0) {
        return 2;
      }
      bVar9 = FUN_00424ba0(extraout_ECX_01);
      local_4 = CONCAT31(extraout_var_03,bVar9);
      if (local_4 != 0) {
        return 2;
      }
      local_10 = CONCAT31(local_10._1_3_,1);
      if ((iVar4 == 0) &&
         (iVar13 = FUN_00426a80(&local_24,piVar14,(int *)piVar14[6],"ORDER"), iVar13 != 0)) {
        return 2;
      }
      if (*(char *)(iVar3 + 0x1e) != '\0') {
        return 2;
      }
      if (piVar5 != (int *)0x0) {
        iVar13 = FUN_00426a80(&local_24,piVar14,piVar5,"GROUP");
        if (iVar13 != 0) {
          return 2;
        }
        if (*(char *)(iVar3 + 0x1e) != '\0') {
          return 2;
        }
        piVar12 = (int *)piVar5[3];
        iVar13 = 0;
        if (0 < *piVar5) {
          do {
            if ((*(byte *)(*piVar12 + 2) & 2) != 0) {
              pcVar15 = "aggregate functions are not allowed in the GROUP BY clause";
              goto LAB_00426e27;
            }
            iVar13 = iVar13 + 1;
            piVar12 = piVar12 + 5;
          } while (iVar13 < *piVar5);
        }
      }
      piVar14 = (int *)piVar14[7];
    } while (piVar14 != (int *)0x0);
    if ((iVar4 != 0) && (iVar10 = FUN_00426820(piVar2,piVar8), iVar10 != 0)) {
      return 2;
    }
  }
  return 1;
}


/* END FUNCTION 0x00426b70 */

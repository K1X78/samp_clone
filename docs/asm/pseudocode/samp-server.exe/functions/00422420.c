/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00422420
 * Name: FUN_00422420
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl
FUN_00422420(undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  void *this;
  short *psVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  short *psVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  ushort uVar13;
  int iVar14;
  short *psVar15;
  int *local_24;
  short *local_20;
  short *local_1c;
  short *local_18;
  int local_10;
  
  uVar1 = param_1[0x82];
  this = (void *)*param_1;
  if ((*(byte *)((int)this + 0xc) & 1) != 0) {
    return 0;
  }
  iVar14 = param_3 * 0x38;
  psVar2 = (short *)param_2[2];
  iVar3 = *(int *)(psVar2 + param_3 * 0x1c + 0x10);
  iVar12 = *(int *)(psVar2 + param_3 * 0x1c + 0xc);
  if (param_4 == 0) {
    if ((param_5 != 0) && (1 < *psVar2)) {
      return 0;
    }
  }
  else if (param_5 != 0) {
    return 0;
  }
  iVar11 = *(int *)(iVar12 + 0x28);
  if ((((((((iVar11 != 0) && (param_2[10] != 0)) || (*(int *)(iVar12 + 0x2c) != 0)) ||
         ((param_2[9] != 0 && (iVar11 != 0)))) || (**(short **)(iVar12 + 8) == 0)) ||
       ((((*(byte *)(iVar12 + 6) & 1) != 0 || (iVar11 != 0)) && ((1 < *psVar2 || (param_4 != 0))))))
      || (((uVar13 = *(ushort *)((int)param_2 + 6) & 1, uVar13 != 0 && (param_5 != 0)) ||
          ((param_2[6] != 0 && (*(int *)(iVar12 + 0x18) != 0)))))) ||
     ((((param_4 != 0 && (*(int *)(iVar12 + 0x18) != 0)) || ((iVar11 != 0 && (param_2[3] != 0)))) ||
      ((*(byte *)(iVar14 + 0x1d + (int)psVar2) & 0x20) != 0)))) {
    return 0;
  }
  if (*(int *)(iVar12 + 0x1c) != 0) {
    if (*(int *)(iVar12 + 0x18) != 0) {
      return 0;
    }
    if (param_4 != 0) {
      return 0;
    }
    if (uVar13 != 0) {
      return 0;
    }
    iVar11 = iVar12;
    if (*psVar2 != 1) {
      return 0;
    }
    do {
      if ((*(byte *)(iVar11 + 6) & 5) != 0) {
        return 0;
      }
      iVar4 = *(int *)(iVar11 + 0x1c);
      if ((iVar4 != 0) && (*(char *)(iVar11 + 4) != 'q')) {
        return 0;
      }
      if (*(short **)(iVar11 + 8) == (short *)0x0) {
        return 0;
      }
      if (**(short **)(iVar11 + 8) != 1) {
        return 0;
      }
      iVar11 = iVar4;
    } while (iVar4 != 0);
    piVar5 = (int *)param_2[6];
    if ((piVar5 != (int *)0x0) && (0 < *piVar5)) {
      psVar6 = (short *)(piVar5[3] + 0xe);
      iVar11 = 0;
      do {
        if (*psVar6 == 0) {
          return 0;
        }
        iVar11 = iVar11 + 1;
        psVar6 = psVar6 + 10;
      } while (iVar11 < *(int *)param_2[6]);
    }
  }
  param_1[0x82] = *(undefined4 *)(psVar2 + param_3 * 0x1c + 6);
  FUN_0041ab60(0x15,0,0,0);
  param_1[0x82] = uVar1;
  for (iVar12 = *(int *)(iVar12 + 0x1c); iVar12 != 0; iVar12 = *(int *)(iVar12 + 0x1c)) {
    puVar9 = (undefined4 *)param_2[7];
    iVar11 = param_2[6];
    iVar4 = param_2[10];
    param_2[6] = 0;
    param_2[2] = 0;
    param_2[7] = 0;
    param_2[10] = 0;
    puVar7 = FUN_0041a470((int)this,param_2,0);
    param_2[10] = iVar4;
    param_2[6] = iVar11;
    param_2[2] = (int)psVar2;
    *(undefined1 *)(param_2 + 1) = 0x71;
    param_2[9] = 0;
    if (puVar7 != (undefined4 *)0x0) {
      puVar7[7] = puVar9;
      puVar7[9] = 0;
      puVar9 = puVar7;
    }
    param_2[7] = (int)puVar9;
    if (*(char *)((int)this + 0x1e) != '\0') {
      return 1;
    }
  }
  piVar5 = *(int **)(psVar2 + param_3 * 0x1c + 0xc);
  FUN_00408130((int)this);
  FUN_00408130((int)this);
  FUN_00408130((int)this);
  iVar12 = *(int *)(psVar2 + param_3 * 0x1c + 10);
  (psVar2 + param_3 * 0x1c + 4)[0] = 0;
  (psVar2 + param_3 * 0x1c + 4)[1] = 0;
  (psVar2 + param_3 * 0x1c + 6)[0] = 0;
  (psVar2 + param_3 * 0x1c + 6)[1] = 0;
  (psVar2 + param_3 * 0x1c + 8)[0] = 0;
  (psVar2 + param_3 * 0x1c + 8)[1] = 0;
  (psVar2 + param_3 * 0x1c + 0xc)[0] = 0;
  (psVar2 + param_3 * 0x1c + 0xc)[1] = 0;
  local_24 = piVar5;
  if (iVar12 != 0) {
    if (*(short *)(iVar12 + 0x20) == 1) {
      puVar9 = (undefined4 *)param_1[0x6a];
      if ((undefined4 *)param_1[0x6a] == (undefined4 *)0x0) {
        puVar9 = param_1;
      }
      *(undefined4 *)(iVar12 + 0x48) = puVar9[0x89];
      puVar9[0x89] = iVar12;
    }
    else {
      *(short *)(iVar12 + 0x20) = *(short *)(iVar12 + 0x20) + -1;
    }
    (psVar2 + param_3 * 0x1c + 10)[0] = 0;
    (psVar2 + param_3 * 0x1c + 10)[1] = 0;
  }
  do {
    local_18 = (short *)local_24[2];
    local_20 = (short *)param_2[2];
    local_10 = (int)*local_18;
    param_1._0_1_ = 0;
    if (local_20 == (short *)0x0) {
      local_20 = FUN_0041b4e0();
      param_2[2] = (int)local_20;
      if (local_20 == (short *)0x0) break;
    }
    else {
      param_1._0_1_ = *(undefined1 *)(iVar14 + 0x1d + (int)psVar2);
    }
    if (1 < local_10) {
      local_20 = FUN_004166b0(this,local_10 + -1,param_3 + 1);
      param_2[2] = (int)local_20;
      if (*(char *)((int)this + 0x1e) != '\0') break;
    }
    if (0 < local_10) {
      local_18 = local_18 + 4;
      local_1c = local_20 + param_3 * 0x1c + 4;
      do {
        FUN_0040f150();
        psVar6 = local_18;
        psVar15 = local_1c;
        for (iVar12 = 0xe; iVar12 != 0; iVar12 = iVar12 + -1) {
          *(undefined4 *)psVar15 = *(undefined4 *)psVar6;
          psVar6 = psVar6 + 2;
          psVar15 = psVar15 + 2;
        }
        psVar6 = local_18;
        for (iVar12 = 0xe; iVar12 != 0; iVar12 = iVar12 + -1) {
          psVar6[0] = 0;
          psVar6[1] = 0;
          psVar6 = psVar6 + 2;
        }
        local_1c = local_1c + 0x1c;
        local_18 = local_18 + 0x1c;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    *(undefined1 *)(iVar14 + 0x1d + (int)local_20) = param_1._0_1_;
    piVar10 = (int *)*param_2;
    local_10 = 0;
    if (0 < *piVar10) {
      param_1 = (undefined4 *)0x0;
      do {
        if ((*(int *)((int)param_1 + piVar10[3] + 4) == 0) &&
           (*(int *)((int)param_1 + piVar10[3] + 8) != 0)) {
          pcVar8 = FUN_00412a70();
          *(char **)(piVar10[3] + 4 + (int)param_1) = pcVar8;
        }
        local_10 = local_10 + 1;
        param_1 = param_1 + 5;
      } while (local_10 < *piVar10);
    }
    FUN_004223d0((int)this,(int *)*param_2,iVar3,*local_24);
    if (param_4 != 0) {
      FUN_004223d0((int)this,(int *)param_2[4],iVar3,*local_24);
      pcVar8 = FUN_00422300((int)this,(char *)param_2[5],iVar3,*local_24);
      param_2[5] = (int)pcVar8;
    }
    if (local_24[6] == 0) {
      if ((int *)param_2[6] != (int *)0x0) {
        FUN_004223d0((int)this,(int *)param_2[6],iVar3,*local_24);
      }
    }
    else {
      param_2[6] = local_24[6];
      local_24[6] = 0;
    }
    if ((undefined4 *)local_24[3] == (undefined4 *)0x0) {
      param_1 = (undefined4 *)0x0;
    }
    else {
      param_1 = (undefined4 *)FUN_00420310(this,(undefined4 *)local_24[3],0);
    }
    if (param_5 == 0) {
      pcVar8 = FUN_00422300((int)this,(char *)param_2[3],iVar3,*local_24);
      param_2[3] = (int)pcVar8;
      puVar9 = FUN_0041a0d0(this,(undefined4 *)pcVar8);
      param_2[3] = (int)puVar9;
    }
    else {
      pcVar8 = (char *)param_2[3];
      param_2[5] = (int)pcVar8;
      param_2[3] = (int)param_1;
      pcVar8 = FUN_00422300((int)this,pcVar8,iVar3,*local_24);
      param_2[5] = (int)pcVar8;
      FUN_00420310(this,(undefined4 *)local_24[5],0);
      puVar9 = FUN_0041a0d0(this,(undefined4 *)param_2[5]);
      param_2[5] = (int)puVar9;
      piVar10 = FUN_00415950((int)this,(int *)local_24[4],0);
      param_2[4] = (int)piVar10;
    }
    *(ushort *)((int)param_2 + 6) = *(ushort *)((int)param_2 + 6) | *(byte *)((int)local_24 + 6) & 1
    ;
    if (local_24[10] != 0) {
      param_2[10] = local_24[10];
      local_24[10] = 0;
    }
    param_2 = (int *)param_2[7];
    local_24 = (int *)local_24[7];
  } while (param_2 != (int *)0x0);
  FUN_0040fce0((int)this,(int)piVar5);
  return 1;
}


/* END FUNCTION 0x00422420 */

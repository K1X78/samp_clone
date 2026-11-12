/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007e250
 * Name: FUN_1007e250
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1007e250(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int unaff_retaddr;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_50;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined4 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = (undefined4 *)&LAB_101162a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar3 = (int *)FUN_1007d360();
  (**(code **)(*piVar3 + 0x20))(piVar3,*param_2,&local_1c);
  if (*(int *)(param_1 + 0x10) == 1) {
    uStack_4 = *(uint *)(unaff_retaddr + 0xc);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    uStack_4 = (-(uint)((*(uint *)(param_2[0x15] + 0x24) & 0x10000) != 0) & 0x20) + 0x20;
  }
  else {
    uVar15 = *(uint *)(param_2[0x15] + 0x24) & 0x10000;
    uStack_4 = *(uint *)(unaff_retaddr + 0xc);
    if ((uVar15 == 0) && ((uStack_4 & 0xc0) != 0)) {
      uStack_4 = uStack_4 & 0xffffff3f | 0x20;
    }
    if ((uStack_4 & 0xe0) == 0) {
      if (uVar15 == 0) {
        uStack_4 = uStack_4 | 0x20;
      }
      else {
        uStack_4 = uStack_4 | 0x40;
      }
    }
  }
  if (*(int *)(param_1 + 0x14) == 1) {
    iStack_38 = *(int *)(unaff_retaddr + 0x10);
    iStack_34 = *(int *)(unaff_retaddr + 0x14);
  }
  else {
    if ((*(int *)(param_1 + 0x14) == 2) && (unaff_retaddr != 0)) {
      uStack_28 = *(undefined4 *)(unaff_retaddr + 0x10);
      uStack_24 = *(undefined4 *)(unaff_retaddr + 0x14);
    }
    else if (param_2[4] != 0) {
      uStack_28 = 0x280;
      uStack_24 = 0x1e0;
    }
    FUN_1007bda0(param_2,uStack_28,uStack_24,iStack_20,local_1c,&iStack_38);
  }
  iVar14 = *(int *)(param_1 + 0x1c);
  if (iVar14 == 1) {
    uStack_68 = *(uint *)(unaff_retaddr + 0x1c);
  }
  else if (iVar14 == 0) {
    uStack_68 = 2;
  }
  else {
    uStack_68 = *(uint *)(unaff_retaddr + 0x1c);
    if (uStack_68 < 4) {
      if (uStack_68 == 0) {
        uStack_68 = 1;
      }
    }
    else {
      uStack_68 = 3;
    }
  }
  if ((unaff_retaddr == 0) || (*(int *)(unaff_retaddr + 0x28) == 1)) {
    if (iVar14 == 1) {
      iVar14 = *(int *)(unaff_retaddr + 0x20);
      uVar15 = *(uint *)(unaff_retaddr + 0x24);
    }
    else {
      if ((iVar14 == 0) || (iVar14 != 2)) goto LAB_1007e484;
      iVar14 = 0;
      uVar15 = 0;
      iStack_60 = 0;
      if (0 < (int)param_2[9]) {
        piVar3 = (int *)param_2[0xb];
        iVar9 = param_2[8] - (int)piVar3;
        do {
          iVar10 = *(int *)(iVar9 + (int)piVar3);
          uVar13 = iVar10 - *(int *)(unaff_retaddr + 0x20);
          uVar7 = (int)uVar13 >> 0x1f;
          uVar11 = iVar14 - *(int *)(unaff_retaddr + 0x20);
          uVar8 = (int)uVar11 >> 0x1f;
          if ((int)((uVar13 ^ uVar7) - uVar7) < (int)((uVar11 ^ uVar8) - uVar8)) {
            iVar14 = iVar10;
            uVar15 = *piVar3 - 1U;
            if (*(uint *)(unaff_retaddr + 0x24) <= *piVar3 - 1U) {
              uVar15 = *(uint *)(unaff_retaddr + 0x24);
            }
          }
          iStack_60 = iStack_60 + 1;
          piVar3 = piVar3 + 1;
        } while (iStack_60 < (int)param_2[9]);
      }
    }
  }
  else {
LAB_1007e484:
    iVar14 = 0;
    uVar15 = 0;
  }
  iVar9 = 1;
  if (*(int *)(param_1 + 0x24) == 1) {
    iVar9 = *(int *)(unaff_retaddr + 0x28);
LAB_1007e4b1:
    iStack_64 = iVar9;
  }
  else if ((*(int *)(param_1 + 0x24) == 0) ||
          (((iStack_64 = *(int *)(unaff_retaddr + 0x28), iStack_64 != 1 && (iStack_64 != 2)) &&
           (iStack_64 != 3)))) goto LAB_1007e4b1;
  uStack_10 = 0;
  thunk_FUN_1007bb40(param_2[6]);
  FUN_10082130(param_2[3]);
  if (unaff_retaddr != 0) {
    FUN_10082230(*(undefined4 *)(unaff_retaddr + 0x38));
  }
  iVar9 = 0;
  if (0 < (int)param_2[6]) {
    do {
      FUN_10082230(*(undefined4 *)(param_2[5] + iVar9 * 4));
      FUN_1007c2b0(&stack0xffffff8c);
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)param_2[6]);
  }
  if (unaff_retaddr != 0) {
    FUN_10082290(*(undefined4 *)(unaff_retaddr + 0x38));
  }
  iVar9 = 0;
  if (0 < (int)param_2[6]) {
    do {
      FUN_10082290(*(undefined4 *)(param_2[5] + iVar9 * 4));
      FUN_1007bac0(iVar9,&stack0xffffff8c);
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)param_2[6]);
  }
  iVar10 = -1;
  iVar4 = 0;
  iVar9 = 100000;
  if ((int)param_2[6] < 1) {
LAB_1007e628:
    iVar9 = 0;
    uStack_50 = 0;
  }
  else {
    do {
      if (*(int *)(iVar4 * 4) < iVar9) {
        iVar9 = *(int *)(iVar4 * 4);
        iVar10 = iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_2[6]);
    if (iVar10 < 0) goto LAB_1007e628;
    uStack_50 = *(undefined4 *)(param_2[5] + iVar10 * 4);
    iVar9 = 1;
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    uVar13 = *(uint *)(unaff_retaddr + 0x3c);
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    uVar13 = 0;
    if (iVar9 != 0) {
      uVar13 = 2;
    }
  }
  else {
    uVar13 = *(uint *)(unaff_retaddr + 0x3c);
    if (iVar9 != 0) {
      uVar13 = uVar13 | 2;
    }
  }
  iVar10 = param_2[4];
  if (iVar10 == 0) {
    if (*(int *)(param_1 + 0x34) == 1) {
      iStack_30 = *(int *)(unaff_retaddr + 0x40);
    }
    else {
      if (*(int *)(param_1 + 0x34) == 2) {
        iStack_20 = *(int *)(unaff_retaddr + 0x40);
      }
      iStack_30 = 0;
      if (iStack_20 != 0) {
        iVar4 = *(int *)(param_2[0x14] + 0x554);
        iStack_5c = 100000;
        iStack_58 = 0;
        if (0 < iVar4) {
          piVar3 = *(int **)(param_2[0x14] + 0x550);
          do {
            iVar1 = piVar3[2];
            if (((piVar3[3] == param_2[2]) && (piVar3[1] == iStack_34)) &&
               ((*piVar3 == iStack_38 &&
                ((uVar11 = iVar1 - iStack_20 >> 0x1f, iVar5 = (iVar1 - iStack_20 ^ uVar11) - uVar11,
                 iVar5 < iStack_5c && (iStack_5c = iVar5, iStack_30 = iVar1, iVar5 == 0)))))) break;
            iStack_58 = iStack_58 + 1;
            piVar3 = piVar3 + 4;
          } while (iStack_58 < iVar4);
        }
      }
    }
  }
  else {
    iStack_30 = 0;
  }
  if (*(int *)(param_1 + 0x38) == 1) {
    uVar11 = *(uint *)(unaff_retaddr + 0x44);
  }
  else {
    if ((*(int *)(param_1 + 0x38) != 0) && (0 < (int)param_2[0xf])) {
      iVar4 = FUN_1007ba70((uint *)(unaff_retaddr + 0x44),0,param_2[0xf]);
      if (iVar4 != -1) {
        uVar11 = *(uint *)(unaff_retaddr + 0x44);
        goto LAB_1007e7a6;
      }
    }
    uVar11 = -(uint)(iVar10 != 0) & 0x80000000;
  }
LAB_1007e7a6:
  puVar2 = puStack_8;
  puVar12 = puStack_8;
  for (iVar10 = 0x12; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  *puStack_8 = *param_2;
  puStack_8[1] = param_2[1];
  puStack_8[2] = param_2[2];
  puStack_8[4] = iStack_38;
  puStack_8[3] = uStack_4;
  puStack_8[5] = iStack_34;
  puStack_8[6] = param_2[3];
  puStack_8[7] = uStack_68;
  puStack_8[8] = iVar14;
  puStack_8[9] = uVar15;
  puStack_8[10] = iStack_64;
  if (param_2[4] == 0) {
    uVar6 = FUN_1007d3b0();
  }
  else {
    uVar6 = FUN_1007d3c0();
  }
  puVar2[0xb] = uVar6;
  uVar6 = param_2[4];
  puVar2[0xd] = iVar9;
  puVar2[0xc] = uVar6;
  puVar2[0x10] = iStack_30;
  puVar2[0xe] = uStack_50;
  puVar2[0xf] = uVar13;
  puVar2[0x11] = uVar11;
  thunk_FUN_1007bb40(0);
  ExceptionList = pvStack_18;
  return;
}


/* END FUNCTION 0x1007e250 */

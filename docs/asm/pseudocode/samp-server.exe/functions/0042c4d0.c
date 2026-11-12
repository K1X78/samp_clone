/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042c4d0
 * Name: FUN_0042c4d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_0042c4d0(int *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined3 extraout_var;
  short extraout_var_01;
  undefined2 extraout_var_02;
  undefined3 extraout_var_00;
  uint uVar8;
  int iVar9;
  int *extraout_ECX;
  int extraout_EDX;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  longlong lVar14;
  undefined8 uVar15;
  int **ppiVar16;
  int local_24;
  uint local_c;
  int local_8;
  uint local_4;
  int *piVar7;
  
  piVar2 = param_1;
  FUN_00407e50(*(int *)(param_1[5] + 0x44));
  FUN_0040c2c0();
  if (*piVar2 != 0) {
    FUN_00407e50(*(int *)(*piVar2 + 0x44));
  }
  uVar12 = piVar2[7];
  iVar6 = FUN_0040d0d0();
  if (iVar6 != 0) goto LAB_0042c8c2;
  FUN_0040d020();
  piVar7 = (int *)piVar2[1];
  iVar6 = FUN_0040d020();
  bVar1 = false;
  if ((*piVar2 == 0) || (*(char *)(*(int *)(extraout_EDX + 4) + 0x22) != '\x02')) {
    uVar12 = 0;
    if (piVar2[3] == 0) {
      uVar12 = FUN_00427d80(piVar7,2);
      if (uVar12 != 0) goto LAB_0042c5a1;
      piVar2[3] = 1;
      FUN_0040cff0(1,piVar2 + 2);
    }
    bVar13 = FUN_0040d070(piVar2[6]);
    if (CONCAT31(extraout_var,bVar13) == 0) {
      uVar12 = FUN_00427d80(extraout_ECX,0);
      bVar1 = true;
    }
  }
  else {
    uVar12 = 5;
  }
LAB_0042c5a1:
  uVar5 = FUN_0040cbe0();
  piVar7 = (int *)CONCAT22(extraout_var_01,uVar5);
  uVar5 = FUN_0040cbe0();
  param_1 = (int *)CONCAT22(extraout_var_02,uVar5);
  if (uVar12 == 0) {
    FUN_0040d020();
    uVar4 = FUN_0040b9e0();
    if ((CONCAT31(extraout_var_00,uVar4) == 5) && (piVar7 != param_1)) {
      uVar12 = 8;
    }
  }
  uVar8 = FUN_0040caa0();
  local_24 = 0;
  local_4 = uVar8;
  while (((param_2 < 0 || (local_24 < param_2)) && (uVar10 = piVar2[4], uVar10 <= uVar8))) {
    if (uVar12 != 0) goto LAB_0042c6a5;
    if ((uVar10 != DAT_004ca204 / (int)(uint)*(ushort *)(*(int *)(piVar2[6] + 4) + 0x16) + 1U) &&
       (uVar12 = FUN_004234f0(uVar10,&local_c,0), uVar11 = local_c, uVar12 == 0)) {
      iVar9 = FUN_0040b9a0();
      uVar12 = FUN_00423a70((int)piVar2,uVar10,iVar9);
      FUN_00427080(uVar11);
      uVar8 = local_4;
    }
    local_24 = local_24 + 1;
    piVar2[4] = piVar2[4] + 1;
  }
  if (uVar12 == 0) {
    piVar2[9] = uVar8;
    piVar2[8] = (uVar8 - piVar2[4]) + 1;
    if (uVar8 < (uint)piVar2[4]) goto LAB_0042c6ae;
    if (piVar2[10] == 0) {
      FUN_0040d130();
    }
    goto LAB_0042c893;
  }
LAB_0042c6a5:
  if (uVar12 == 0x65) {
LAB_0042c6ae:
    uVar12 = FUN_00423a20(1);
    if (uVar12 == 0) {
      if (*piVar2 != 0) {
        FUN_00420a50(0);
      }
      piVar3 = param_1;
      FUN_0040b710(iVar6);
      if ((int)piVar7 < (int)piVar3) {
        uVar10 = (int)extraout_var_01 >> 0xf;
        lVar14 = __allmul(uVar8,(int)uVar8 >> 0x1f,(uint)piVar7,uVar10);
        iVar6 = (int)((ulonglong)lVar14 >> 0x20);
        local_c = (uint)lVar14;
        local_4 = FUN_0040f4a0();
        uVar12 = FUN_00427120(0,1);
        if (((uVar12 == 0) && (uVar12 = FUN_0040d0f0(local_c,iVar6), uVar12 == 0)) &&
           (uVar12 = FUN_0040b910(), uVar12 == 0)) {
          uVar8 = DAT_004ca204 + (int)param_1;
          iVar9 = (int)uVar8 >> 0x1f;
          local_8 = iVar6;
          if ((iVar9 <= iVar6) && ((iVar9 < iVar6 || (uVar8 < local_c)))) {
            local_c = uVar8;
            local_8 = iVar9;
          }
          uVar8 = DAT_004ca204 + (int)piVar7;
          uVar11 = (int)uVar8 >> 0x1f;
          do {
            if ((local_8 < (int)uVar11) || ((local_8 <= (int)uVar11 && (local_c <= uVar8))))
            goto LAB_0042c87c;
            iVar6 = 0;
            ppiVar16 = &param_1;
            param_1 = (int *)0x0;
            uVar15 = __alldiv(uVar8,uVar11,(uint)piVar7,uVar10);
            uVar12 = FUN_004234f0((int)uVar15 + 1,ppiVar16,iVar6);
            if (uVar12 == 0) {
              FUN_0040b9a0();
              uVar12 = FUN_00407af0();
            }
            FUN_00427080((int)param_1);
            bVar13 = CARRY4(uVar8,(uint)piVar7);
            uVar8 = uVar8 + (int)piVar7;
            uVar11 = uVar11 + uVar10 + (uint)bVar13;
          } while (uVar12 == 0);
        }
      }
      else {
        uVar12 = FUN_00427120(0,0);
LAB_0042c87c:
        if ((uVar12 == 0) && (uVar12 = FUN_004281d0(), uVar12 == 0)) {
          uVar12 = 0x65;
        }
      }
    }
  }
LAB_0042c893:
  if (bVar1) {
    FUN_0042ac80(0);
    FUN_004281d0();
  }
  if (uVar12 == 0xc0a) {
    uVar12 = 7;
  }
  piVar2[7] = uVar12;
LAB_0042c8c2:
  if (*piVar2 != 0) {
    FUN_00407e90(*(int *)(*piVar2 + 0x44));
  }
  FUN_0040c340();
  FUN_00407e90(*(int *)(piVar2[5] + 0x44));
  return uVar12;
}


/* END FUNCTION 0x0042c4d0 */

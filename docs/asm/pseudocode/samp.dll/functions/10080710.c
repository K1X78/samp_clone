/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10080710
 * Name: FUN_10080710
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10080710(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  code *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  float fStack_ec;
  double dStack_e8;
  int iStack_dc;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 auStack_98 [37];
  
  piVar2 = (int *)FUN_1007b4a0();
  if (piVar2 == (int *)0x0) {
    return;
  }
  FUN_1007cbc0();
  cVar1 = FUN_10079ec0();
  if ((cVar1 != '\0') || (cVar1 = FUN_1007d4a0(), cVar1 != '\0')) {
    Sleep(100);
  }
  FUN_1007cbc0();
  cVar1 = FUN_10079c80();
  if (cVar1 == '\0') {
    Sleep(0x14);
  }
  FUN_1007cbc0();
  cVar1 = FUN_10079ec0();
  if (cVar1 != '\0') {
    FUN_1007cbc0();
    cVar1 = FUN_10079d00();
    if (cVar1 == '\0') {
      iVar3 = (**(code **)(*piVar2 + 0xc))();
      if (iVar3 < 0) {
        if (iVar3 == -0x7789f798) {
LAB_100808c3:
          Sleep(0x32);
          return;
        }
        cVar1 = FUN_1007b4c0();
        if (cVar1 != '\0') {
          piVar4 = (int *)FUN_1007d360();
          FUN_1007cbc0();
          iVar3 = FUN_10078460();
          (**(code **)(*piVar4 + 0x20))();
          if (*(int *)(iVar3 + 8) != iStack_dc) {
            uStack_d4 = 1;
            uStack_d0 = 1;
            uStack_cc = 1;
            uStack_c8 = 1;
            uStack_c4 = 2;
            uStack_c0 = 2;
            uStack_bc = 2;
            uStack_b8 = 2;
            uStack_b4 = 2;
            uStack_b0 = 2;
            uStack_ac = 2;
            uStack_a8 = 2;
            uStack_a4 = 2;
            uStack_a0 = 2;
            uStack_9c = 2;
            puVar5 = (undefined4 *)FUN_1007d630();
            puVar9 = auStack_98;
            for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar9 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar9 = puVar9 + 1;
            }
            iVar3 = FUN_1007f340(auStack_98,auStack_98,&uStack_d4);
            if (iVar3 < 0) {
              FUN_1007bf40();
              FUN_1007cb00(0);
            }
            iVar3 = FUN_1007f770(auStack_98,0,0,0);
            if (-1 < iVar3) {
              return;
            }
            iVar3 = FUN_10080440();
            if (-1 < iVar3) {
              return;
            }
            FUN_1007cb00();
            return;
          }
        }
        iVar3 = FUN_1007e8e0();
        if (iVar3 < 0) {
          if (iVar3 == -0x7789f798) goto LAB_100808c3;
          if ((iVar3 == -0x7ffbf6f8) || (iVar3 == -0x7ffbf6fd)) {
            FUN_1007bf40();
            FUN_1007cb00(0);
            return;
          }
          FUN_1007cbc0();
          uVar6 = FUN_10078460();
          iVar3 = FUN_1007f770(uVar6,0,1,0);
          if (iVar3 < 0) goto LAB_10080a82;
        }
      }
      FUN_1007cbc0();
      FUN_10079e80();
    }
  }
  FUN_10095e30();
  fVar10 = (float10)FUN_100931b0();
  FUN_10095e30();
  fVar11 = (float10)FUN_10093210();
  fStack_ec = (float)fVar11;
  FUN_1007cbc0();
  cVar1 = FUN_100794c0();
  if (cVar1 != '\0') {
    FUN_1007cbc0();
    fVar11 = (float10)FUN_10079540();
    fStack_ec = (float)fVar11;
    fVar10 = (float10)FUN_1007d450();
    fVar10 = fVar10 + (float10)fStack_ec;
  }
  dStack_e8 = (double)fVar10;
  dVar12 = dStack_e8;
  FUN_1007cbc0(dStack_e8);
  FUN_10078c60(dVar12);
  FUN_1007cbc0();
  FUN_10078cf0();
  FUN_1007d080();
  FUN_1007ef20();
  FUN_1007cbc0();
  pcVar7 = (code *)FUN_1007ab40();
  if (pcVar7 != (code *)0x0) {
    FUN_1007cbc0();
    uVar6 = FUN_1007b080();
    (*pcVar7)(piVar2,dStack_e8,fStack_ec,uVar6);
    piVar2 = (int *)FUN_1007b4a0();
    if (piVar2 == (int *)0x0) {
      return;
    }
  }
  FUN_1007cbc0();
  cVar1 = FUN_10079d00();
  if (cVar1 == '\0') {
    FUN_1007cbc0();
    pcVar7 = (code *)FUN_1007abc0();
    if (pcVar7 != (code *)0x0) {
      FUN_1007cbc0();
      uVar6 = FUN_1007b100();
      (*pcVar7)(piVar2,dStack_e8,fStack_ec,uVar6);
      piVar2 = (int *)FUN_1007b4a0();
      if (piVar2 == (int *)0x0) {
        return;
      }
    }
    iVar3 = (**(code **)(*piVar2 + 0x44))(piVar2,0,0,0,0);
    if ((iVar3 < 0) && ((iVar3 == -0x7789f798 || (iVar3 == -0x7789f7d9)))) {
      FUN_1007cbc0();
      FUN_10079e80();
    }
  }
  FUN_1007cbc0();
  iVar3 = FUN_10078fc0();
  FUN_1007cbc0();
  FUN_10078f80();
  FUN_1007cbc0();
  iVar8 = FUN_1007a7c0();
  if (iVar8 == 0) {
    return;
  }
  FUN_1007cbc0();
  iVar8 = FUN_1007a7c0();
  if (iVar3 + 1 <= iVar8) {
    return;
  }
LAB_10080a82:
  FUN_1007cb00();
  return;
}


/* END FUNCTION 0x10080710 */

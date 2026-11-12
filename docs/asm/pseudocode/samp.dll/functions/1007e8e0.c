/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007e8e0
 * Name: FUN_1007e8e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_1007e8e0(void)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  
  piVar2 = (int *)FUN_1007b4a0();
  FUN_1007cbc0();
  cVar1 = FUN_10079c00();
  if (cVar1 == '\x01') {
    uVar7 = 1;
    FUN_1007cbc0(1);
    FUN_10079a40(uVar7);
    FUN_1007cbc0();
    pcVar3 = (code *)FUN_1007aa40();
    if (pcVar3 != (code *)0x0) {
      FUN_1007cbc0();
      uVar7 = FUN_1007af80();
      (*pcVar3)(uVar7);
    }
    uVar7 = 0;
    FUN_1007cbc0(0);
    FUN_10079bc0(uVar7);
    uVar7 = 0;
    FUN_1007cbc0(0);
    FUN_10079a40(uVar7);
    FUN_10099260();
    FUN_10098630();
  }
  FUN_1007cbc0();
  iVar4 = FUN_10078460();
  iVar4 = (**(code **)(*piVar2 + 0x40))(piVar2,iVar4 + 0x10);
  if (iVar4 < 0) {
    return ((iVar4 != -0x7789f798) - 1 & 0x871ff62) + 0x80040906;
  }
  FUN_1007d1a0();
  piVar6 = piVar2;
  FUN_10099260(piVar2);
  iVar4 = FUN_100985d0(piVar6);
  if (iVar4 < 0) {
    return -0x7ffbf6f8;
  }
  uVar7 = 1;
  FUN_1007cbc0(1);
  FUN_10079a40(uVar7);
  uVar7 = FUN_1007d370();
  FUN_1007cbc0();
  pcVar3 = (code *)FUN_1007a9c0();
  iVar4 = 0;
  if (pcVar3 != (code *)0x0) {
    FUN_1007cbc0();
    uVar5 = FUN_1007af00();
    iVar4 = (*pcVar3)(piVar2,uVar7,uVar5);
  }
  uVar7 = 0;
  FUN_1007cbc0(0);
  FUN_10079a40(uVar7);
  if (iVar4 < 0) {
    if (iVar4 != -0x7ffbf6fd) {
      iVar4 = -0x7ffbf6f8;
    }
    uVar7 = 1;
    FUN_1007cbc0(1);
    FUN_10079a40(uVar7);
    FUN_1007cbc0();
    pcVar3 = (code *)FUN_1007aa40();
    if (pcVar3 != (code *)0x0) {
      FUN_1007cbc0();
      uVar7 = FUN_1007af80();
      (*pcVar3)(uVar7);
    }
    uVar7 = 0;
    FUN_1007cbc0(0);
    FUN_10079a40(uVar7);
    FUN_10099260();
    FUN_10098630();
    return iVar4;
  }
  uVar7 = 1;
  FUN_1007cbc0(1);
  FUN_10079bc0(uVar7);
  return 0;
}


/* END FUNCTION 0x1007e8e0 */

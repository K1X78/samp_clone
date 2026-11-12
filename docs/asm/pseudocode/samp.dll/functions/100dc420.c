/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dc420
 * Name: FUN_100dc420
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100dc420(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  undefined8 uVar7;
  
  iVar2 = *param_1;
  uVar7 = FUN_100d8500();
  iVar4 = *(int *)(iVar2 + 0x1f8);
  bVar6 = 0 < iVar4;
  iVar3 = *(int *)(iVar2 + 0x1fc);
  if (0 < iVar3) {
    bVar6 = bVar6 | 2;
  }
  iVar5 = iVar4;
  if ((bVar6 != 1) &&
     ((bVar6 == 2 || ((iVar5 = 300000, bVar6 == 3 && (iVar5 = iVar4, iVar3 <= iVar4)))))) {
    iVar5 = iVar3;
  }
  iVar4 = FUN_100d8520(uVar7,*(undefined4 *)(iVar2 + 0x790),*(undefined4 *)(iVar2 + 0x794));
  iVar5 = iVar5 - iVar4;
  if ((iVar5 == 0) || (iVar5 < 0)) {
    FUN_100d8ba0(iVar2,"Connection time-out");
    return 0x1c;
  }
  iVar4 = FUN_100cfb70(*param_2);
  param_1[0xc6] = iVar4;
  iVar4 = *param_2;
  piVar1 = param_1 + 0x68;
  param_1[0x16] = iVar4;
  param_1[0x17] = 0;
  *piVar1 = -1;
  param_1[0x69] = -1;
  if (*(int *)(iVar4 + 0x1c) != 0) {
    iVar5 = iVar5 / 2;
  }
  param_1[199] = iVar5;
  if (iVar4 == 0) {
    iVar4 = 7;
  }
  else {
    do {
      iVar4 = FUN_100dc120(param_1[0x16],piVar1);
      if (iVar4 == 0) break;
      iVar3 = *(int *)(param_1[0x16] + 0x1c);
      param_1[0x16] = iVar3;
    } while (iVar3 != 0);
  }
  if (*piVar1 == -1) {
    if (iVar4 == 0) {
      return 7;
    }
  }
  else {
    *(int *)(iVar2 + 0x4b74) = *(int *)(iVar2 + 0x4b74) + 1;
    FUN_100d66d0(*param_1,200,4);
    iVar4 = 0;
  }
  return iVar4;
}


/* END FUNCTION 0x100dc420 */

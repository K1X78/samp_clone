/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10081c60
 * Name: FUN_10081c60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_10081c60(int *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 unaff_ESI;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int local_14;
  int *apiStack_10 [4];
  
  if (param_1 == (int *)0x0) {
    return 0x80070057;
  }
  FUN_1007cbc0();
  cVar1 = FUN_10079a80();
  if (cVar1 != '\0') {
    return 0x80004005;
  }
  FUN_1007cbc0();
  FUN_100799c0();
  FUN_1007cbc0();
  cVar1 = FUN_10079800();
  if (cVar1 == '\0') {
    FUN_1007cbc0();
    cVar1 = FUN_10079980();
    if (cVar1 != '\0') {
      return 0x80004005;
    }
    uVar2 = FUN_10081510("Direct3D Window",0,0,0);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  puVar3 = operator_new(0x48);
  if (puVar3 != (undefined4 *)0x0) {
    puVar5 = puVar3;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    piVar7 = &local_14;
    uVar6 = 0;
    local_14 = 0;
    iVar4 = (**(code **)(*param_1 + 0x48))(param_1,0,0);
    piVar8 = piVar7;
    if (-1 < iVar4) {
      apiStack_10[0] = (int *)0x0;
      iVar4 = (**(code **)(*piVar7 + 0x2c))(piVar7,&DAT_1012004c,apiStack_10);
      if ((-1 < iVar4) &&
         ((**(code **)(*apiStack_10[0] + 0x24))(apiStack_10[0],puVar3 + 4),
         apiStack_10[0] != (int *)0x0)) {
        (**(code **)(*apiStack_10[0] + 8))(apiStack_10[0]);
        apiStack_10[0] = (int *)0x0;
      }
      piVar8 = (int *)0x0;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 8))(piVar7);
        piVar8 = (int *)0x0;
      }
    }
    (**(code **)(*param_1 + 0x24))(param_1,&stack0xffffffdc);
    *puVar3 = uVar6;
    puVar3[1] = piVar8;
    FUN_1007e860(*puVar3,piVar8,puVar3[6],puVar3[0xc],puVar3 + 2);
    puVar3[3] = unaff_ESI;
    uVar2 = FUN_1007f770(puVar3,param_1,0,0);
    return uVar2 & (-1 < (int)uVar2) - 1;
  }
  return 0x8007000e;
}


/* END FUNCTION 0x10081c60 */

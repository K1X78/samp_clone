/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044d340
 * Name: FUN_0044d340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0044d340(int *param_1,int param_2,int *param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_10;
  int local_8;
  int local_4;
  
  iVar3 = *param_1;
  iVar7 = *(int *)(iVar3 + 0x4c);
  iVar8 = 0;
  local_10 = 0;
  local_8 = -1;
  if (*(int *)(iVar3 + 0x8c) == 0) {
    *(undefined4 *)(iVar3 + 0xe0) = 0;
  }
  param_1[1] = 0;
  param_1[0x7f] = param_2;
  iVar5 = FUN_004108d0(FUN_004125b0);
  if (iVar5 == 0) {
    *(undefined1 *)(iVar3 + 0x1e) = 1;
    return 7;
  }
  uVar1 = *(undefined1 *)(iVar3 + 0xea);
  if (*(int *)(iVar3 + 0xf8) != 0) {
    *(undefined1 *)(iVar3 + 0xea) = 1;
  }
  cVar2 = *(char *)(iVar3 + 0x1e);
  while( true ) {
    if ((cVar2 != '\0') || (*(char *)(param_2 + iVar8) == '\0')) goto LAB_0044d495;
    param_1[0x7d] = param_2 + iVar8;
    uVar6 = FUN_00410a30(&local_4);
    iVar5 = local_4;
    iVar8 = iVar8 + uVar6;
    param_1[0x7e] = uVar6;
    if (iVar7 < iVar8) break;
    if (local_4 == 1) {
      param_1[0x7f] = iVar8 + param_2;
LAB_0044d45a:
      FUN_0044d270(param_1[0x7d],param_1[0x7e],(int)param_1);
      local_8 = iVar5;
      if (param_1[1] != 0) goto LAB_0044d495;
    }
    else {
      if (local_4 == 0x94) {
        FUN_00408130(iVar3);
        iVar7 = FUN_00418920((undefined **)"unrecognized token: \"%T\"");
        *param_3 = iVar7;
        local_10 = 1;
        goto LAB_0044d495;
      }
      if (local_4 != 0x95) goto LAB_0044d45a;
      if (*(int *)(iVar3 + 0xe0) != 0) {
        FUN_00418b00((undefined **)"interrupt");
        param_1[1] = 9;
        goto LAB_0044d495;
      }
    }
    cVar2 = *(char *)(iVar3 + 0x1e);
  }
  param_1[1] = 0x12;
LAB_0044d495:
  if (((*(char *)(iVar8 + param_2) == '\0') && (local_10 == 0)) && (param_1[1] == 0)) {
    if (local_8 != 1) {
      FUN_0044d270(param_1[0x7d],param_1[0x7e],(int)param_1);
      param_1[0x7f] = iVar8 + param_2;
    }
    FUN_0044d270(param_1[0x7d],param_1[0x7e],(int)param_1);
  }
  FUN_00417940(FUN_004080d0);
  *(undefined1 *)(iVar3 + 0xea) = uVar1;
  if (*(char *)(iVar3 + 0x1e) != '\0') {
    param_1[1] = 7;
  }
  if (((param_1[1] != 0) && (param_1[1] != 0x65)) && (param_1[2] == 0)) {
    FUN_00411540();
    FUN_0041db50((undefined **)&DAT_004b23ac);
  }
  if (param_1[2] != 0) {
    *param_3 = param_1[2];
    FUN_00418ab0(param_1[1],(undefined **)&DAT_004b23ac);
    local_10 = local_10 + 1;
    param_1[2] = 0;
  }
  if ((param_1[3] != 0) && (0 < param_1[0x10])) {
    if (*(char *)((int)param_1 + 0x13) != '\0') goto LAB_0044d5cd;
    FUN_00415250();
    param_1[3] = 0;
  }
  if (*(char *)((int)param_1 + 0x13) == '\0') {
    FUN_00408130(iVar3);
    param_1[0x65] = 0;
    param_1[100] = 0;
  }
LAB_0044d5cd:
  FUN_00408130(iVar3);
  if ((char)param_1[0x85] == '\0') {
    FUN_0041aca0((int *)param_1[0x80]);
  }
  FUN_00416c30();
  FUN_00408130(iVar3);
  FUN_00408130(iVar3);
  iVar7 = param_1[0x68];
  while (iVar7 != 0) {
    param_1[0x68] = *(int *)param_1[0x68];
    FUN_00408130(iVar3);
    iVar7 = param_1[0x68];
  }
  iVar3 = param_1[0x89];
  while (iVar3 != 0) {
    piVar4 = (int *)param_1[0x89];
    param_1[0x89] = piVar4[0x12];
    FUN_0041aca0(piVar4);
    iVar3 = param_1[0x89];
  }
  if ((local_10 != 0) && (param_1[1] == 0)) {
    param_1[1] = 1;
  }
  return local_10;
}


/* END FUNCTION 0x0044d340 */

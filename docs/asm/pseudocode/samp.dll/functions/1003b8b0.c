/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003b8b0
 * Name: FUN_1003b8b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003b8b0(undefined4 *param_1,int *param_2,uint *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int local_20 [8];
  
  piVar5 = local_20;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = *param_2;
    param_2 = param_2 + 1;
    piVar5 = piVar5 + 1;
  }
  puVar6 = param_4;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *param_1;
    param_1 = param_1 + 1;
    puVar6 = puVar6 + 1;
  }
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  iVar3 = 1;
  if (((local_20[7] & 0x80000000U) == 0) && (cVar1 = FUN_100399e0(param_4,local_20), cVar1 != '\0'))
  {
    iVar2 = 7;
    do {
      if (param_4[iVar2] != 0) break;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    iVar4 = iVar2;
    if (-1 < iVar2) {
      do {
        if (local_20[iVar4] != 0) break;
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      if (iVar2 != iVar4) {
        iVar3 = (iVar2 - iVar4) * 0x20;
        FUN_10039900(local_20,iVar3);
        iVar3 = iVar3 + 1;
      }
    }
    while (((local_20[7] & 0x80000000U) == 0 &&
           (cVar1 = FUN_100399e0(param_4,local_20), cVar1 != '\0'))) {
      FUN_10039d60(local_20);
      iVar3 = iVar3 + 1;
    }
    cVar1 = FUN_100399e0(local_20,param_4);
    while (cVar1 != '\0') {
      FUN_10039dd0(local_20);
      iVar3 = iVar3 + -1;
      cVar1 = FUN_100399e0(local_20,param_4);
    }
  }
  else {
    cVar1 = FUN_100399e0(local_20,param_4);
    if (cVar1 != '\0') {
      FUN_10039dd0(local_20);
      iVar3 = 0;
    }
  }
  iVar2 = 0;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    iVar2 = iVar2 + 1;
    cVar1 = FUN_100399e0(local_20,param_4);
    if (cVar1 == '\0') {
      FUN_10039b40(param_4,local_20);
      FUN_10039900(param_3,iVar2);
      iVar2 = 0;
      *param_3 = *param_3 | 1;
    }
    FUN_10039dd0(local_20);
  }
  FUN_10039900(param_3,iVar2);
  return;
}


/* END FUNCTION 0x1003b8b0 */

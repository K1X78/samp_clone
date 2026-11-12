/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003ba40
 * Name: FUN_1003ba40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003ba40(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_10 [4];
  
  local_10[0] = *param_2;
  local_10[1] = param_2[1];
  local_10[2] = param_2[2];
  iVar1 = param_2[3];
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  iVar5 = 1;
  param_3[3] = param_1[3];
  local_10[3] = iVar1;
  if ((iVar1 < 0) || (cVar2 = FUN_100395b0(param_3,local_10), cVar2 == '\0')) {
    cVar2 = FUN_100395b0(local_10,param_3);
    if (cVar2 != '\0') {
      return;
    }
  }
  else {
    iVar3 = 3;
    do {
      if (param_3[iVar3] != 0) break;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    iVar4 = iVar3;
    if (-1 < iVar3) {
      do {
        if (local_10[iVar4] != 0) break;
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      if (iVar3 != iVar4) {
        iVar5 = (iVar3 - iVar4) * 0x20;
        FUN_10039f70(local_10,iVar5);
        iVar5 = iVar5 + 1;
        iVar1 = local_10[3];
      }
    }
    while ((-1 < iVar1 && (cVar2 = FUN_100395b0(param_3,local_10), cVar2 != '\0'))) {
      FUN_1003a000(local_10);
      iVar5 = iVar5 + 1;
      iVar1 = local_10[3];
    }
    cVar2 = FUN_100395b0(local_10,param_3);
    while (cVar2 != '\0') {
      FUN_10039ac0(local_10);
      iVar5 = iVar5 + -1;
      cVar2 = FUN_100395b0(local_10,param_3);
    }
    if (iVar5 == 0) {
      return;
    }
  }
  do {
    cVar2 = FUN_100395b0(local_10,param_3);
    if (cVar2 == '\0') {
      FUN_10039790(param_3,local_10);
    }
    FUN_10039ac0(local_10);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}


/* END FUNCTION 0x1003ba40 */

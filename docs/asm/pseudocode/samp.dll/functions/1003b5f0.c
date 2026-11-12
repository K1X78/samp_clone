/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003b5f0
 * Name: FUN_1003b5f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003b5f0(undefined4 *param_1,int *param_2,uint *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_10 [4];
  
  local_10[0] = *param_2;
  local_10[1] = param_2[1];
  local_10[2] = param_2[2];
  iVar4 = param_2[3];
  *param_4 = *param_1;
  param_4[1] = param_1[1];
  param_4[2] = param_1[2];
  param_4[3] = param_1[3];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  iVar5 = 1;
  local_10[3] = iVar4;
  if ((iVar4 < 0) || (cVar1 = FUN_100395b0(param_4,local_10), cVar1 == '\0')) {
    cVar1 = FUN_100395b0(local_10,param_4);
    if (cVar1 != '\0') {
      FUN_10039ac0(local_10);
      iVar5 = 0;
    }
  }
  else {
    iVar2 = 3;
    do {
      if (param_4[iVar2] != 0) break;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    iVar3 = iVar2;
    if (-1 < iVar2) {
      do {
        if (local_10[iVar3] != 0) break;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
      if (iVar2 != iVar3) {
        iVar5 = (iVar2 - iVar3) * 0x20;
        FUN_10039f70(local_10,iVar5);
        iVar5 = iVar5 + 1;
        iVar4 = local_10[3];
      }
    }
    while ((-1 < iVar4 && (cVar1 = FUN_100395b0(param_4,local_10), cVar1 != '\0'))) {
      FUN_1003a000(local_10);
      iVar5 = iVar5 + 1;
      iVar4 = local_10[3];
    }
    cVar1 = FUN_100395b0(local_10,param_4);
    while (cVar1 != '\0') {
      FUN_10039ac0(local_10);
      iVar5 = iVar5 + -1;
      cVar1 = FUN_100395b0(local_10,param_4);
    }
  }
  iVar4 = 0;
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    iVar4 = iVar4 + 1;
    cVar1 = FUN_100395b0(local_10,param_4);
    if (cVar1 == '\0') {
      FUN_10039790(param_4,local_10);
      FUN_10039f70(param_3,iVar4);
      iVar4 = 0;
      *param_3 = *param_3 | 1;
    }
    FUN_10039ac0(local_10);
  }
  FUN_10039f70(param_3,iVar4);
  return;
}


/* END FUNCTION 0x1003b5f0 */

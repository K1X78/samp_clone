/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003af40
 * Name: FUN_1003af40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003af40(undefined4 *param_1,int *param_2,uint *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int local_40 [16];
  
  piVar5 = local_40;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = *param_2;
    param_2 = param_2 + 1;
    piVar5 = piVar5 + 1;
  }
  puVar6 = param_4;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *param_1;
    param_1 = param_1 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar7 = param_3;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  iVar3 = 1;
  if (((local_40[0xf] & 0x80000000U) == 0) &&
     (cVar1 = FUN_10039bd0(param_4,local_40), cVar1 != '\0')) {
    iVar2 = 0xf;
    do {
      if (param_4[iVar2] != 0) break;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    iVar4 = iVar2;
    if (-1 < iVar2) {
      do {
        if (local_40[iVar4] != 0) break;
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      if (iVar2 != iVar4) {
        iVar3 = (iVar2 - iVar4) * 0x20;
        FUN_10039c10(local_40,iVar3);
        iVar3 = iVar3 + 1;
      }
    }
    while (((local_40[0xf] & 0x80000000U) == 0 &&
           (cVar1 = FUN_10039bd0(param_4,local_40), cVar1 != '\0'))) {
      FUN_10039ca0(local_40);
      iVar3 = iVar3 + 1;
    }
    cVar1 = FUN_10039bd0(local_40,param_4);
    while (cVar1 != '\0') {
      FUN_10039cd0(local_40);
      iVar3 = iVar3 + -1;
      cVar1 = FUN_10039bd0(local_40,param_4);
    }
  }
  else {
    cVar1 = FUN_10039bd0(local_40,param_4);
    if (cVar1 != '\0') {
      FUN_10039cd0(local_40);
      iVar3 = 0;
    }
  }
  iVar2 = 0;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    iVar2 = iVar2 + 1;
    cVar1 = FUN_10039bd0(local_40,param_4);
    if (cVar1 == '\0') {
      FUN_10039d00(param_4,local_40);
      FUN_10039c10(param_3,iVar2);
      iVar2 = 0;
      *param_3 = *param_3 | 1;
    }
    FUN_10039cd0(local_40);
  }
  FUN_10039c10(param_3,iVar2);
  return;
}


/* END FUNCTION 0x1003af40 */

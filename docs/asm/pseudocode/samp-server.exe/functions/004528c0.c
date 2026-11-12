/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004528c0
 * Name: FUN_004528c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004528c0(uint *param_1,uint *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint local_20 [8];
  
  puVar6 = local_20;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar6 = param_3;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *param_1;
    param_1 = param_1 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar4 = 1;
  if (((local_20[7] & 0x80000000) == 0) &&
     (uVar2 = FUN_004512c0((int)param_3,(int)local_20), (char)uVar2 != '\0')) {
    iVar3 = 7;
    do {
      if (param_3[iVar3] != 0) break;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    iVar5 = iVar3;
    if (-1 < iVar3) {
      do {
        if (local_20[iVar5] != 0) break;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      if (iVar3 != iVar5) {
        uVar2 = (iVar3 - iVar5) * 0x20;
        FUN_004511e0(local_20,uVar2);
        iVar4 = uVar2 + 1;
      }
    }
    while (((local_20[7] & 0x80000000) == 0 &&
           (uVar2 = FUN_004512c0((int)param_3,(int)local_20), (char)uVar2 != '\0'))) {
      FUN_00451530(local_20);
      iVar4 = iVar4 + 1;
    }
    uVar2 = FUN_004512c0((int)local_20,(int)param_3);
    cVar1 = (char)uVar2;
    while (cVar1 != '\0') {
      FUN_004515a0(local_20);
      iVar4 = iVar4 + -1;
      uVar2 = FUN_004512c0((int)local_20,(int)param_3);
      cVar1 = (char)uVar2;
    }
    if (iVar4 == 0) {
      return;
    }
  }
  else {
    uVar2 = FUN_004512c0((int)local_20,(int)param_3);
    if ((char)uVar2 != '\0') {
      return;
    }
  }
  do {
    uVar2 = FUN_004512c0((int)local_20,(int)param_3);
    if ((char)uVar2 == '\0') {
      FUN_00451340(param_3,local_20);
    }
    FUN_004515a0(local_20);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


/* END FUNCTION 0x004528c0 */

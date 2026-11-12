/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00452770
 * Name: FUN_00452770
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00452770(uint *param_1,uint *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint local_40 [16];
  
  puVar6 = local_40;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar6 = param_3;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *param_1;
    param_1 = param_1 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar4 = 1;
  if (((local_40[0xf] & 0x80000000) == 0) &&
     (uVar2 = FUN_004513a0((int)param_3,(int)local_40), (char)uVar2 != '\0')) {
    iVar3 = 0xf;
    do {
      if (param_3[iVar3] != 0) break;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    iVar5 = iVar3;
    if (-1 < iVar3) {
      do {
        if (local_40[iVar5] != 0) break;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      if (iVar3 != iVar5) {
        uVar2 = (iVar3 - iVar5) * 0x20;
        FUN_004513e0(local_40,uVar2);
        iVar4 = uVar2 + 1;
      }
    }
    while (((local_40[0xf] & 0x80000000) == 0 &&
           (uVar2 = FUN_004513a0((int)param_3,(int)local_40), (char)uVar2 != '\0'))) {
      FUN_00451470((int)local_40);
      iVar4 = iVar4 + 1;
    }
    uVar2 = FUN_004513a0((int)local_40,(int)param_3);
    cVar1 = (char)uVar2;
    while (cVar1 != '\0') {
      FUN_004514a0((int)local_40);
      iVar4 = iVar4 + -1;
      uVar2 = FUN_004513a0((int)local_40,(int)param_3);
      cVar1 = (char)uVar2;
    }
    if (iVar4 == 0) {
      return;
    }
  }
  else {
    uVar2 = FUN_004513a0((int)local_40,(int)param_3);
    if ((char)uVar2 != '\0') {
      return;
    }
  }
  do {
    uVar2 = FUN_004513a0((int)local_40,(int)param_3);
    if ((char)uVar2 == '\0') {
      FUN_004514d0(param_3,local_40);
    }
    FUN_004514a0((int)local_40);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


/* END FUNCTION 0x00452770 */

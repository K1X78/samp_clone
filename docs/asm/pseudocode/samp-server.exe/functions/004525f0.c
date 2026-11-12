/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004525f0
 * Name: FUN_004525f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004525f0(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint local_40 [16];
  
  puVar7 = local_40;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar7 = param_4;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *param_1;
    param_1 = param_1 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar7 = param_3;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  iVar5 = 1;
  if (((local_40[0xf] & 0x80000000) == 0) &&
     (uVar2 = FUN_004513a0((int)param_4,(int)local_40), (char)uVar2 != '\0')) {
    iVar3 = 0xf;
    do {
      if (param_4[iVar3] != 0) break;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    iVar6 = iVar3;
    if (-1 < iVar3) {
      do {
        if (local_40[iVar6] != 0) break;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
      if (iVar3 != iVar6) {
        uVar2 = (iVar3 - iVar6) * 0x20;
        FUN_004513e0(local_40,uVar2);
        iVar5 = uVar2 + 1;
      }
    }
    while (((local_40[0xf] & 0x80000000) == 0 &&
           (uVar2 = FUN_004513a0((int)param_4,(int)local_40), (char)uVar2 != '\0'))) {
      FUN_00451470((int)local_40);
      iVar5 = iVar5 + 1;
    }
    uVar2 = FUN_004513a0((int)local_40,(int)param_4);
    cVar1 = (char)uVar2;
    while (cVar1 != '\0') {
      FUN_004514a0((int)local_40);
      iVar5 = iVar5 + -1;
      uVar2 = FUN_004513a0((int)local_40,(int)param_4);
      cVar1 = (char)uVar2;
    }
  }
  else {
    uVar2 = FUN_004513a0((int)local_40,(int)param_4);
    if ((char)uVar2 != '\0') {
      FUN_004514a0((int)local_40);
      iVar5 = 0;
    }
  }
  uVar2 = 0;
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    uVar2 = uVar2 + 1;
    uVar4 = FUN_004513a0((int)local_40,(int)param_4);
    if ((char)uVar4 == '\0') {
      FUN_004514d0(param_4,local_40);
      FUN_004513e0(param_3,uVar2);
      uVar2 = 0;
      *param_3 = *param_3 | 1;
    }
    FUN_004514a0((int)local_40);
  }
  FUN_004513e0(param_3,uVar2);
  return;
}


/* END FUNCTION 0x004525f0 */

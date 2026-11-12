/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00452f60
 * Name: FUN_00452f60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00452f60(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint local_20 [8];
  
  puVar7 = local_20;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar7 = param_4;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *param_1;
    param_1 = param_1 + 1;
    puVar7 = puVar7 + 1;
  }
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  iVar5 = 1;
  if (((local_20[7] & 0x80000000) == 0) &&
     (uVar2 = FUN_004512c0((int)param_4,(int)local_20), (char)uVar2 != '\0')) {
    iVar3 = 7;
    do {
      if (param_4[iVar3] != 0) break;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    iVar6 = iVar3;
    if (-1 < iVar3) {
      do {
        if (local_20[iVar6] != 0) break;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
      if (iVar3 != iVar6) {
        uVar2 = (iVar3 - iVar6) * 0x20;
        FUN_004511e0(local_20,uVar2);
        iVar5 = uVar2 + 1;
      }
    }
    while (((local_20[7] & 0x80000000) == 0 &&
           (uVar2 = FUN_004512c0((int)param_4,(int)local_20), (char)uVar2 != '\0'))) {
      FUN_00451530(local_20);
      iVar5 = iVar5 + 1;
    }
    uVar2 = FUN_004512c0((int)local_20,(int)param_4);
    cVar1 = (char)uVar2;
    while (cVar1 != '\0') {
      FUN_004515a0(local_20);
      iVar5 = iVar5 + -1;
      uVar2 = FUN_004512c0((int)local_20,(int)param_4);
      cVar1 = (char)uVar2;
    }
  }
  else {
    uVar2 = FUN_004512c0((int)local_20,(int)param_4);
    if ((char)uVar2 != '\0') {
      FUN_004515a0(local_20);
      iVar5 = 0;
    }
  }
  uVar2 = 0;
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    uVar2 = uVar2 + 1;
    uVar4 = FUN_004512c0((int)local_20,(int)param_4);
    if ((char)uVar4 == '\0') {
      FUN_00451340(param_4,local_20);
      FUN_004511e0(param_3,uVar2);
      uVar2 = 0;
      *param_3 = *param_3 | 1;
    }
    FUN_004515a0(local_20);
  }
  FUN_004511e0(param_3,uVar2);
  return;
}


/* END FUNCTION 0x00452f60 */

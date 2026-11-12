/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00451620
 * Name: FUN_00451620
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00451620(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint local_40 [8];
  uint local_20 [8];
  
  puVar4 = param_1;
  puVar6 = local_20;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar4 = param_1;
  puVar6 = local_40;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar5 = 0;
  param_1[7] = 0;
  uVar3 = 0;
  do {
    uVar7 = 0x20;
    for (uVar2 = local_20[uVar3]; uVar2 != 0; uVar2 = uVar2 >> 1) {
      if ((uVar2 & 1) != 0) {
        if (uVar5 != 0) {
          FUN_004511e0(local_40,uVar5);
          uVar5 = 0;
        }
        FUN_00451180(param_1,local_40);
      }
      uVar5 = uVar5 + 1;
      uVar7 = uVar7 + 0xffff;
    }
    uVar5 = uVar5 + (uVar7 & 0xffff);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  return;
}


/* END FUNCTION 0x00451620 */

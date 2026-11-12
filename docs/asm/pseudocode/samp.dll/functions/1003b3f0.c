/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003b3f0
 * Name: FUN_1003b3f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003b3f0(uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint local_80 [16];
  uint local_40 [16];
  
  puVar5 = param_1;
  puVar6 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = param_1;
  puVar6 = local_80;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar1 = 0;
  puVar5 = param_1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uVar4 = 0;
  do {
    uVar7 = 0x20;
    for (uVar3 = local_40[uVar4]; uVar3 != 0; uVar3 = uVar3 >> 1) {
      if ((uVar3 & 1) != 0) {
        if (iVar1 != 0) {
          FUN_10039c10(local_80,iVar1);
          iVar1 = 0;
        }
        FUN_10039ef0(param_1,local_80);
      }
      iVar1 = iVar1 + 1;
      uVar7 = uVar7 + 0xffff;
    }
    iVar1 = iVar1 + (uVar7 & 0xffff);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x10);
  return;
}


/* END FUNCTION 0x1003b3f0 */

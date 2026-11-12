/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003b4a0
 * Name: FUN_1003b4a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003b4a0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 local_40 [16];
  
  puVar5 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *param_1;
    param_1 = param_1 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar1 = 0;
  puVar5 = param_3;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uVar4 = 0;
  do {
    uVar6 = 0x20;
    for (uVar3 = *(uint *)(param_2 + uVar4 * 4); uVar3 != 0; uVar3 = uVar3 >> 1) {
      if ((uVar3 & 1) != 0) {
        if (iVar1 != 0) {
          FUN_10039c10(local_40,iVar1);
          iVar1 = 0;
        }
        FUN_10039ef0(param_3,local_40);
      }
      iVar1 = iVar1 + 1;
      uVar6 = uVar6 + 0xffff;
    }
    iVar1 = iVar1 + (uVar6 & 0xffff);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x10);
  return;
}


/* END FUNCTION 0x1003b4a0 */

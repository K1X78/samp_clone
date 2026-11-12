/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003a040
 * Name: FUN_1003a040
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003a040(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 local_20 [8];
  
  puVar4 = param_1;
  puVar5 = local_20;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  iVar1 = 0;
  param_1[7] = 0;
  uVar3 = 0;
  do {
    uVar6 = 0x20;
    for (uVar2 = *(uint *)(param_2 + uVar3 * 4); uVar2 != 0; uVar2 = uVar2 >> 1) {
      if ((uVar2 & 1) != 0) {
        if (iVar1 != 0) {
          FUN_10039900(local_20,iVar1);
          iVar1 = 0;
        }
        FUN_10039850(param_1,local_20);
      }
      iVar1 = iVar1 + 1;
      uVar6 = uVar6 + 0xffff;
    }
    iVar1 = iVar1 + (uVar6 & 0xffff);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  return;
}


/* END FUNCTION 0x1003a040 */

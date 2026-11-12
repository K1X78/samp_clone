/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003bce0
 * Name: FUN_1003bce0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003bce0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 local_20 [8];
  
  puVar4 = local_20;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  iVar1 = 0;
  param_3[7] = 0;
  uVar3 = 0;
  do {
    uVar5 = 0x20;
    for (uVar2 = *(uint *)(param_2 + uVar3 * 4); uVar2 != 0; uVar2 = uVar2 >> 1) {
      if ((uVar2 & 1) != 0) {
        if (iVar1 != 0) {
          FUN_10039900(local_20,iVar1);
          iVar1 = 0;
        }
        FUN_10039850(param_3,local_20);
      }
      iVar1 = iVar1 + 1;
      uVar5 = uVar5 + 0xffff;
    }
    iVar1 = iVar1 + (uVar5 & 0xffff);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  return;
}


/* END FUNCTION 0x1003bce0 */

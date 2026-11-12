/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10027310
 * Name: FUN_10027310
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_10027310(uint param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 1) + -1;
  uVar2 = *(int *)(param_2 + 1) / 2;
  uVar1 = *(uint *)(param_2 + 5 + uVar2 * 4);
  uVar3 = 0;
  while( true ) {
    if (param_1 == uVar1) {
      *param_3 = uVar2;
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
    if (param_1 < uVar1) {
      iVar4 = uVar2 - 1;
    }
    else {
      uVar3 = uVar2 + 1;
    }
    uVar2 = (int)(iVar4 - uVar3) / 2 + uVar3;
    if (iVar4 < (int)uVar3) break;
    uVar1 = *(uint *)(param_2 + 5 + uVar2 * 4);
  }
  *param_3 = uVar3;
  return uVar2 & 0xffffff00;
}


/* END FUNCTION 0x10027310 */

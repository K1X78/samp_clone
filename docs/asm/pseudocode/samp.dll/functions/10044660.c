/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10044660
 * Name: FUN_10044660
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_10044660(ushort param_1,int param_2,uint *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 1) + -1;
  uVar2 = *(int *)(param_2 + 1) / 2;
  uVar1 = *(ushort *)(param_2 + 5 + uVar2 * 2);
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
    uVar1 = *(ushort *)(param_2 + 5 + uVar2 * 2);
  }
  *param_3 = uVar3;
  return uVar2 & 0xffffff00;
}


/* END FUNCTION 0x10044660 */

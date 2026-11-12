/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10032800
 * Name: FUN_10032800
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_10032800(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      return 1;
    }
  }
  else {
    iVar1 = FUN_10032800(*(int *)(param_1 + 4));
    uVar3 = iVar1 + 1;
  }
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = FUN_10032800(*(int *)(param_1 + 8));
    uVar2 = iVar1 + 1;
  }
  if (uVar3 <= uVar2) {
    uVar3 = uVar2;
  }
  return uVar3;
}


/* END FUNCTION 0x10032800 */

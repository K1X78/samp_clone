/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004a120
 * Name: FUN_1004a120
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_1004a120(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar1 <= uVar2) {
    return uVar2 - uVar1;
  }
  return (*(int *)(param_1 + 0xc) - uVar1) + uVar2;
}


/* END FUNCTION 0x1004a120 */

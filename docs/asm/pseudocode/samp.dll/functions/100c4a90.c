/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c4a90
 * Name: FUN_100c4a90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c4a90(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 100) == 0) {
    FUN_100c3fe0(param_1);
    FUN_100c3f90(param_1);
  }
  iVar1 = *(int *)(param_1 + 0x2c) + -1;
  *(int *)(param_1 + 0x376ad) = iVar1;
  *(int *)(param_1 + 0x32e65) = iVar1;
  FUN_100c2680(param_1 + 0x30d29);
  FUN_100c2680(param_1 + 0x30d29);
  return;
}


/* END FUNCTION 0x100c4a90 */

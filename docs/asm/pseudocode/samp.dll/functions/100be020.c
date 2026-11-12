/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100be020
 * Name: FUN_100be020
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100be020(int param_1,int param_2)

{
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - param_2;
  return;
}


/* END FUNCTION 0x100be020 */

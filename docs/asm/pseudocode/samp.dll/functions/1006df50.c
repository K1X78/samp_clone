/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006df50
 * Name: FUN_1006df50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1006df50(int param_1)

{
  if ((*(int *)(param_1 + 0xc) == 0) && (FUN_1006dad0(), *(int *)(param_1 + 0xc) == 0)) {
    return;
  }
  (**(code **)(**(int **)(param_1 + 0xc) + 0x14))(*(int **)(param_1 + 0xc));
  return;
}


/* END FUNCTION 0x1006df50 */

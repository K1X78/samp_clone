/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dd9e0
 * Name: FUN_100dd9e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100dd9e0(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c) = 0;
    FUN_100dd9a0();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


/* END FUNCTION 0x100dd9e0 */

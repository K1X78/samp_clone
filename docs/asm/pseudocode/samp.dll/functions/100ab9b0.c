/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ab9b0
 * Name: FUN_100ab9b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __fastcall FUN_100ab9b0(int param_1)

{
  if (*(int *)(param_1 + 0x2a4) == 0) {
    return (float10)0.0;
  }
  return (float10)*(float *)(*(int *)(param_1 + 0x2a4) + 0x548);
}


/* END FUNCTION 0x100ab9b0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b6de0
 * Name: FUN_100b6de0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __fastcall FUN_100b6de0(int param_1)

{
  if (*(int *)(param_1 + 0x4c) != 0) {
    return (float10)*(float *)(*(int *)(param_1 + 0x4c) + 0x4c0);
  }
  return (float10)0.0;
}


/* END FUNCTION 0x100b6de0 */

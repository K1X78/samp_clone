/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ad510
 * Name: FUN_100ad510
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __fastcall FUN_100ad510(int param_1)

{
  if (*(int *)(param_1 + 0x2a4) != 0) {
    return (float10)*(float *)(*(int *)(*(int *)(param_1 + 0x2a4) + 0x480) + 0x54);
  }
  return (float10)0.0;
}


/* END FUNCTION 0x100ad510 */

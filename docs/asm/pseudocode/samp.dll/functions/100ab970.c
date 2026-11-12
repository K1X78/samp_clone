/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ab970
 * Name: FUN_100ab970
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __fastcall FUN_100ab970(int param_1)

{
  if (*(int *)(param_1 + 0x2a4) == 0) {
    return (float10)0.0;
  }
  return (float10)*(float *)(*(int *)(param_1 + 0x2a4) + 0x540);
}


/* END FUNCTION 0x100ab970 */

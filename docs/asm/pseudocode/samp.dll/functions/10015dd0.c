/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10015dd0
 * Name: FUN_10015dd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __fastcall FUN_10015dd0(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    fVar1 = (float10)FUN_1009ef00();
    return fVar1;
  }
  return (float10)10000.0;
}


/* END FUNCTION 0x10015dd0 */

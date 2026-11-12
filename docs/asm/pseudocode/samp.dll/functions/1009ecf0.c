/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009ecf0
 * Name: FUN_1009ecf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __fastcall FUN_1009ecf0(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    return (float10)0.0;
  }
  fVar1 = (float)(*(code *)0x536be0)(*(int *)(param_1 + 0x40),0);
  return (float10)fVar1;
}


/* END FUNCTION 0x1009ecf0 */

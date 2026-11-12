/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b44e0
 * Name: FUN_100b44e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 FUN_100b44e0(float param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)param_1;
  if ((float10)180.0 < fVar1) {
    fVar1 = fVar1 - (float10)360.0;
  }
  if (fVar1 < (float10)-180.0) {
    fVar1 = fVar1 + (float10)360.0;
  }
  return fVar1;
}


/* END FUNCTION 0x100b44e0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b54b0
 * Name: FUN_100b54b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 FUN_100b54b0(float param_1)

{
  if ((param_1 <= 360.0) && (0.0 <= param_1)) {
    if (180.0 < param_1) {
      return -((float10)3.1415927 -
              ((float10)param_1 - (float10)180.0) * (float10)3.1415927 * (float10)0.0055555557);
    }
    return (float10)param_1 * (float10)3.1415927 * (float10)0.0055555557;
  }
  return (float10)0.0;
}


/* END FUNCTION 0x100b54b0 */

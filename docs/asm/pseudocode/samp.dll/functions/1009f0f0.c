/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009f0f0
 * Name: FUN_1009f0f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 FUN_1009f0f0(float param_1,float param_2,float param_3)

{
  undefined1 local_40 [48];
  float local_10;
  float local_c;
  float local_8;
  
  FUN_1009e950(local_40);
  return SQRT(((float10)local_8 - (float10)param_3) * ((float10)local_8 - (float10)param_3) +
              ((float10)local_c - (float10)param_2) * ((float10)local_c - (float10)param_2) +
              ((float10)local_10 - (float10)param_1) * ((float10)local_10 - (float10)param_1));
}


/* END FUNCTION 0x1009f0f0 */

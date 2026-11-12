/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00489970
 * Name: FUN_00489970
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __thiscall FUN_00489970(float *param_1,float param_2,float param_3,float param_4)

{
  return SQRT(((float10)*param_1 - (float10)param_2) * ((float10)*param_1 - (float10)param_2) +
              ((float10)param_1[1] - (float10)param_3) * ((float10)param_1[1] - (float10)param_3) +
              ((float10)param_1[2] - (float10)param_4) * ((float10)param_1[2] - (float10)param_4));
}


/* END FUNCTION 0x00489970 */

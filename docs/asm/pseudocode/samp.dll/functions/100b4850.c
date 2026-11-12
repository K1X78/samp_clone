/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b4850
 * Name: FUN_100b4850
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100b4850(float *param_1,float *param_2,float *param_3)

{
  *param_1 = *param_2 * *param_3 + param_2[4] * param_3[1] + param_2[8] * param_3[2] + param_2[0xc];
  param_1[1] = param_2[1] * *param_3 + param_2[5] * param_3[1] + param_2[9] * param_3[2] +
               param_2[0xd];
  param_1[2] = param_2[2] * *param_3 + param_2[6] * param_3[1] + param_2[10] * param_3[2] +
               param_2[0xe];
  return;
}


/* END FUNCTION 0x100b4850 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009d540
 * Name: FUN_1009d540
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_1009d540(float *param_1)

{
  return SQRT(((float10)param_1[2] - (float10)_DAT_00b6f9d4) *
              ((float10)param_1[2] - (float10)_DAT_00b6f9d4) +
              ((float10)param_1[1] - (float10)_DAT_00b6f9d0) *
              ((float10)param_1[1] - (float10)_DAT_00b6f9d0) +
              ((float10)*param_1 - (float10)_DAT_00b6f9cc) *
              ((float10)*param_1 - (float10)_DAT_00b6f9cc));
}


/* END FUNCTION 0x1009d540 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10025fc0
 * Name: FUN_10025fc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10025fc0(undefined4 *param_1)

{
  if (param_1[3] != 0) {
    _free((void *)*param_1);
  }
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


/* END FUNCTION 0x10025fc0 */

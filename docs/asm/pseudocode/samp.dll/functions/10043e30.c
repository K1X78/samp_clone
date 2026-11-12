/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10043e30
 * Name: FUN_10043e30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_10043e30(undefined4 *param_1)

{
  void *pvVar1;
  
  param_1[3] = 0x10;
  pvVar1 = operator_new(0x80);
  *param_1 = pvVar1;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}


/* END FUNCTION 0x10043e30 */

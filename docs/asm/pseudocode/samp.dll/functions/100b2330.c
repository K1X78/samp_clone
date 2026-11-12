/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b2330
 * Name: FUN_100b2330
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_100b2330(undefined4 *param_1)

{
  FUN_100b2180();
  *param_1 = &PTR_FUN_1011f450;
  param_1[2] = 0;
  FUN_100b21b0(0x70);
  (*(code *)0x67b4e0)(0,0x41200000,0,0);
  return param_1;
}


/* END FUNCTION 0x100b2330 */

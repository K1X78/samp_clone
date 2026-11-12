/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b2460
 * Name: FUN_100b2460
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_100b2460(undefined4 *param_1)

{
  undefined4 extraout_ECX;
  
  FUN_100b2180();
  *param_1 = &PTR_FUN_1011f488;
  param_1[2] = 0;
  FUN_100b21b0(0xc);
  (*(code *)0x634ef0)(extraout_ECX);
  return param_1;
}


/* END FUNCTION 0x100b2460 */

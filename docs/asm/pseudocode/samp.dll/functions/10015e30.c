/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10015e30
 * Name: FUN_10015e30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_10015e30(undefined2 *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_100a6f70(*param_1);
  return uVar1 >> 8 | 0xff000000;
}


/* END FUNCTION 0x10015e30 */

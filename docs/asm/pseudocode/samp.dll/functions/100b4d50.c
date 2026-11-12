/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b4d50
 * Name: FUN_100b4d50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100b4d50(undefined4 param_1,undefined4 *param_2)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 *local_c;
  code *local_8;
  
  local_c = &local_1c;
  local_8 = (code *)((-(uint)(DAT_102ac9b8 != 1) & 0x40) + 0x7eb5c0);
  (*local_8)(local_c,param_1);
  *param_2 = local_10;
  param_2[1] = local_1c;
  param_2[2] = local_18;
  param_2[3] = local_14;
  return;
}


/* END FUNCTION 0x100b4d50 */

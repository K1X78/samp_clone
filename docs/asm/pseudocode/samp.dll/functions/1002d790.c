/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002d790
 * Name: FUN_1002d790
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_1002d790(undefined4 *param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  *param_1 = &PTR_LAB_10118e24;
  FUN_1002d610();
  *(undefined4 *)((int)param_1 + 0x19) = 0;
  *(undefined2 *)((int)param_1 + 0x17) = 0;
  local_8 = 0;
  local_4 = 0;
  FUN_1002c580(&local_4,&local_8);
  return param_1;
}


/* END FUNCTION 0x1002d790 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b0ea0
 * Name: FUN_100b0ea0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100b0ea0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101166f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_1011f24c;
  local_4 = 0;
  FUN_100b0ba0();
  *param_1 = &PTR_LAB_1011e30c;
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100b0ea0 */

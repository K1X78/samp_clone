/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10042640
 * Name: FUN_10042640
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10042640(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10115308;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_1011b1d0;
  param_1[1] = &PTR_LAB_1011b0c0;
  local_4 = 0;
  FUN_10040950();
  *param_1 = &PTR_LAB_1011af98;
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10042640 */

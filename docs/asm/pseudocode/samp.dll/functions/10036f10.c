/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10036f10
 * Name: FUN_10036f10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_10036f10(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10114c26;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_1011ab34;
  FUN_10036bf0();
  local_4 = 0;
  FUN_10036bf0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_10036a00();
  param_1[1] = 0;
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x10036f10 */

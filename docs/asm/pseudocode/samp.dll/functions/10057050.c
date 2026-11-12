/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10057050
 * Name: FUN_10057050
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10057050(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10115dab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_1011b3ec;
  local_4 = 0;
  FUN_10056cc0();
  local_4 = 0xffffffff;
  FUN_10056b80();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10057050 */

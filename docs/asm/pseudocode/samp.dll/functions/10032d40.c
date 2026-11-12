/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10032d40
 * Name: FUN_10032d40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10032d40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10114b08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_10119214;
  local_4 = 0;
  FUN_10032890();
  local_4 = 0xffffffff;
  FUN_10032d30();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10032d40 */

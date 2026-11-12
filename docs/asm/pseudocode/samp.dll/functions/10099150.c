/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10099150
 * Name: FUN_10099150
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10099150(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101164be;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  FUN_100986f0();
  thunk_FUN_10095ba0(0);
  thunk_FUN_10095c30(0);
  thunk_FUN_10095cc0(0);
  thunk_FUN_10095cc0(0);
  thunk_FUN_10095c30(0);
  thunk_FUN_10095ba0(0);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10099150 */

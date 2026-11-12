/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10083940
 * Name: FUN_10083940
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10083940(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1011633c;
  local_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &local_c;
  FUN_10083900();
  thunk_FUN_10082690(0);
  thunk_FUN_10082600(0);
  thunk_FUN_10082570(0);
  thunk_FUN_100824e0(0);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10083940 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002e650
 * Name: FUN_1002e650
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1002e650(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10114798;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_1002e5c0();
  local_4 = 0xffffffff;
  FUN_1002e3e0();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1002e650 */

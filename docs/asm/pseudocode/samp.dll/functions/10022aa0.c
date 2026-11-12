/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10022aa0
 * Name: FUN_10022aa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10022aa0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101140d8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_10022570();
  local_4 = 0xffffffff;
  FUN_10021990();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10022aa0 */

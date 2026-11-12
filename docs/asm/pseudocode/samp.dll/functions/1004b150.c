/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004b150
 * Name: FUN_1004b150
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1004b150(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10115688;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_1004adf0();
  local_4 = 0xffffffff;
  FUN_1004a150();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1004b150 */

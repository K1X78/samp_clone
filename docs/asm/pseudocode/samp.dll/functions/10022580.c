/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10022580
 * Name: FUN_10022580
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10022580(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10114098;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_10021980();
  local_4 = 0xffffffff;
  FUN_10021a20();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10022580 */

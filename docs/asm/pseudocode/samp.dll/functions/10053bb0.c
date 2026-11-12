/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10053bb0
 * Name: FUN_10053bb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10053bb0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10115b28;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_10053920();
  local_4 = 0xffffffff;
  FUN_100537b0();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10053bb0 */

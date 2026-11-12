/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10054740
 * Name: FUN_10054740
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10054740(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10115c08;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_10054590();
  local_4 = 0xffffffff;
  FUN_100542a0();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10054740 */

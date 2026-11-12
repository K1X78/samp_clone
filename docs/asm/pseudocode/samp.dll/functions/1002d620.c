/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002d620
 * Name: FUN_1002d620
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1002d620(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101146d8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_1002d2a0();
  local_4 = 0xffffffff;
  FUN_1002d2c0();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1002d620 */

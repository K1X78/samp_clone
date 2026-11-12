/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003c740
 * Name: FUN_1003c740
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003c740(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10114f48;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_1003acb0();
  local_4 = 0xffffffff;
  FUN_10039520();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1003c740 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10099b20
 * Name: FUN_10099b20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10099b20(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101164fb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_10099450();
  local_4 = 0xffffffff;
  FUN_1008c6b0();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10099b20 */

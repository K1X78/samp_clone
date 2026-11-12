/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004eff0
 * Name: FUN_1004eff0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1004eff0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10115868;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_1004e6d0();
  local_4 = 0xffffffff;
  FUN_10020550();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1004eff0 */

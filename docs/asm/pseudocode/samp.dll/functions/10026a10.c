/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10026a10
 * Name: FUN_10026a10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10026a10(void)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101143f8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_10026730();
  local_4 = 0xffffffff;
  FUN_100269f0();
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x10026a10 */

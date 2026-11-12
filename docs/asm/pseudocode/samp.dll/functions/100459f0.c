/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100459f0
 * Name: FUN_100459f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100459f0(void)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101153a8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_100448d0();
  local_4 = 0xffffffff;
  FUN_100459d0();
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x100459f0 */

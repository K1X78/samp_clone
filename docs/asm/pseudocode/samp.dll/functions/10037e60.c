/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10037e60
 * Name: FUN_10037e60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10037e60(void)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10114e89;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  FUN_100511a0();
  local_4 = local_4 & 0xffffff00;
  FUN_1001f390();
  local_4 = 0xffffffff;
  FUN_10049cb0();
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x10037e60 */

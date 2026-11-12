/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10029cf0
 * Name: FUN_10029cf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10029cf0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10114543;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_10029c60();
  local_4 = local_4 & 0xffffff00;
  FUN_10028070();
  local_4 = 0xffffffff;
  FUN_10029c80();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10029cf0 */

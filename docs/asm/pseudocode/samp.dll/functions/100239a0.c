/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100239a0
 * Name: FUN_100239a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100239a0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101141c3;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_100233a0();
  local_4 = local_4 & 0xffffff00;
  FUN_10022470();
  local_4 = 0xffffffff;
  FUN_10023080();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100239a0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100221d0
 * Name: FUN_100221d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100221d0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10114038;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_100216b0();
  local_4 = 0xffffffff;
  FUN_100206d0();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100221d0 */

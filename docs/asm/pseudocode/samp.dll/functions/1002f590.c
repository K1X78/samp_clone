/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002f590
 * Name: FUN_1002f590
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1002f590(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10114858;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_1002f100();
  local_4 = 0xffffffff;
  FUN_1002ef60();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1002f590 */

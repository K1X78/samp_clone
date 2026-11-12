/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10047ac0
 * Name: FUN_10047ac0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10047ac0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101154a8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_10046d30();
  local_4 = 0xffffffff;
  FUN_10045c30();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10047ac0 */

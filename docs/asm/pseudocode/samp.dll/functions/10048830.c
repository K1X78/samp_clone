/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10048830
 * Name: FUN_10048830
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10048830(void)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101154c8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  thunk_FUN_10046d30();
  local_4 = 0xffffffff;
  FUN_10047ac0();
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x10048830 */

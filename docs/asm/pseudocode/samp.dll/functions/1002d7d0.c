/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002d7d0
 * Name: FUN_1002d7d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1002d7d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101146fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_10118e24;
  local_4 = 0;
  FUN_1002d5a0();
  local_4 = 0xffffffff;
  FUN_1002d620();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1002d7d0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10030000
 * Name: FUN_10030000
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10030000(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101148fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_10118ea0;
  local_4 = 0;
  FUN_1002f6d0();
  local_4 = 0xffffffff;
  FUN_1002fef0();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10030000 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00459f10
 * Name: FUN_00459f10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00459f10(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b1058;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004baf18;
  param_1[2] = &PTR_LAB_004bae08;
  local_4 = 0;
  FUN_00458230(param_1 + 2);
  *param_1 = &PTR_LAB_004bace0;
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00459f10 */

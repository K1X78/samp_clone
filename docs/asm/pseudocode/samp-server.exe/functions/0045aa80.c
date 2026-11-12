/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045aa80
 * Name: FUN_0045aa80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_0045aa80(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b1058;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_004bace0;
  local_4 = 0;
  FUN_00454fa0(param_1 + 2);
  param_1[2] = &PTR_LAB_004bae08;
  param_1[899] = 0;
  *(undefined1 *)(param_1 + 900) = 0;
  *(undefined1 *)((int)param_1 + 0xe11) = 0;
  param_1[0x382] = 0;
  *param_1 = &PTR_FUN_004baf18;
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x0045aa80 */

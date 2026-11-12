/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10064bf0
 * Name: FUN_10064bf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall
FUN_10064bf0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10115fc8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_1011bab4;
  FUN_10063f00(param_2,param_3,param_4);
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x10064bf0 */

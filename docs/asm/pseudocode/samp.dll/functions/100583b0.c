/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100583b0
 * Name: FUN_100583b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_100583b0(undefined4 *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10115e68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  exception(param_2);
  *param_1 = &PTR_FUN_1011b410;
  param_1[9] = 0xf;
  param_1[8] = 0;
  local_4 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_1000b3a0(param_2 + 0xc,0,0xffffffff);
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x100583b0 */

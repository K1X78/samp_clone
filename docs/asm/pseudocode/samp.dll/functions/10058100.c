/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10058100
 * Name: FUN_10058100
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_10058100(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10115e08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100fad6d();
  *param_1 = &PTR_FUN_1011b410;
  param_1[8] = 0;
  param_1[9] = 0xf;
  local_4 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_1000b3a0(param_2,0,0xffffffff);
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x10058100 */

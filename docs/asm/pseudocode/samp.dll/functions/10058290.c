/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10058290
 * Name: FUN_10058290
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_10058290(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10115e48;
  local_c = ExceptionList;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  ExceptionList = &local_c;
  FUN_1000b490("internal error",0xe);
  local_4 = 0;
  FUN_10058100(local_28);
  if (0xf < local_10) {
    _free(local_24);
  }
  param_1[0xb] = param_3;
  param_1[10] = param_2;
  *param_1 = &PTR_FUN_1011b430;
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x10058290 */

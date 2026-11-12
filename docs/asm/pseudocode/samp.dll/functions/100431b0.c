/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100431b0
 * Name: FUN_100431b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_100431b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10115328;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_1011af98;
  local_4 = 0;
  FUN_1003d910();
  param_1[1] = &PTR_LAB_1011b0c0;
  *(undefined4 *)((int)param_1 + 0xdee) = 0;
  *(undefined1 *)((int)param_1 + 0xdf2) = 0;
  *(undefined1 *)((int)param_1 + 0xdf3) = 0;
  *(undefined4 *)((int)param_1 + 0xdea) = 0;
  *param_1 = &PTR_FUN_1011b1d0;
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x100431b0 */

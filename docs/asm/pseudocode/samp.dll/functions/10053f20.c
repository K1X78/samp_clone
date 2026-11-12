/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10053f20
 * Name: FUN_10053f20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_10053f20(undefined4 param_1)

{
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10115b93;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_10053e20();
  local_4 = 0;
  local_18 = 0;
  local_14 = (void *)0x0;
  FUN_10053700(&local_14,&local_18);
  local_14 = operator_new(0x604);
  local_4._0_1_ = 1;
  if (local_14 == (void *)0x0) {
    local_14 = (void *)0x0;
  }
  else {
    local_14 = (void *)FUN_10026220();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_10026a80(&DAT_1013fdd0);
  local_18 = 0;
  FUN_10053e80(&local_18,&local_14);
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x10053f20 */

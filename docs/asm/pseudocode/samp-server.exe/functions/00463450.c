/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00463450
 * Name: FUN_00463450
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_00463450(undefined4 *param_1)

{
  int local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1313;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_00463350(param_1);
  local_4 = 0;
  local_18 = 0;
  local_14 = (undefined4 *)0x0;
  FUN_00462de0((int *)&local_14,&local_18);
  local_14 = operator_new(0x804);
  local_4._0_1_ = 1;
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14 = (undefined4 *)FUN_0044e1c0(local_14);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0044e700(local_14,0x4ce240);
  local_18 = 0;
  FUN_004633b0(param_1,&local_18,&local_14);
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x00463450 */

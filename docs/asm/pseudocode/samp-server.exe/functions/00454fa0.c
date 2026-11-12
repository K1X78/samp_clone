/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00454fa0
 * Name: FUN_00454fa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_00454fa0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b0f93;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004baaa8;
  FUN_0044d8a0(param_1 + 3);
  local_4._0_1_ = 1;
  FUN_0044d8a0(param_1 + 0x48);
  FUN_0045d790(param_1 + 0xd0);
  local_4._0_1_ = 3;
  _eh_vector_constructor_iterator_(param_1 + 0xd3,0x18,1,FUN_00462980);
  local_4._0_1_ = 4;
  FUN_00462980((LPCRITICAL_SECTION)(param_1 + 0xdf));
  local_4._0_1_ = 5;
  FUN_00462980((LPCRITICAL_SECTION)(param_1 + 0xe5));
  FUN_0045bc60(param_1 + 0xeb);
  FUN_0045bc60(param_1 + 0xee);
  local_4._0_1_ = 8;
  FUN_00450990(param_1 + 0xf1);
  local_4._0_1_ = 9;
  FUN_00450b90(param_1 + 0x1fd);
  local_4._0_1_ = 10;
  FUN_00460a60(param_1 + 0x203);
  FUN_004522a0((int)(param_1 + 0x30f));
  local_4._0_1_ = 0xc;
  FUN_00450d50(param_1 + 0x374);
  local_4._0_1_ = 0xd;
  FUN_0044ea10(param_1 + 0x37a);
  local_4 = CONCAT31(local_4._1_3_,0xe);
  FUN_00463580();
  FUN_00463750();
  *(undefined1 *)((int)param_1 + 0xd95) = 0;
  puVar2 = param_1 + 0xf7;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x1fc] = 0;
  param_1[0x1fb] = 0;
  param_1[0x1fa] = 0;
  param_1[0x1f9] = 0;
  param_1[0x1f7] = 0;
  param_1[0x1f8] = 0;
  param_1[0x303] = 0x240;
  *(undefined1 *)(param_1 + 0x304) = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined2 *)((int)param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[0xcf] = 0;
  param_1[0xdb] = 0;
  param_1[0xda] = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  param_1[0x306] = 0xffffffff;
  param_1[0x8d] = DAT_004cac3c;
  *(undefined2 *)(param_1 + 0x8e) = DAT_004cac40;
  *(undefined8 *)(param_1 + 0x30c) = 0;
  *(undefined1 *)(param_1 + 0x371) = 0;
  *(undefined1 *)((int)param_1 + 0xc27) = 0;
  *(undefined1 *)((int)param_1 + 0x33a) = 0;
  param_1[0x30a] = 0;
  param_1[0x372] = 0;
  param_1[0x373] = 0;
  *(undefined2 *)(param_1 + 0x30e) = 0;
  *(undefined2 *)((int)param_1 + 0xc3a) = 0;
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x00454fa0 */

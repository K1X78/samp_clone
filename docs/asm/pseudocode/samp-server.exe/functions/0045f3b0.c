/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045f3b0
 * Name: FUN_0045f3b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_0045f3b0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b124e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0045bc60(param_1);
  local_4 = 0;
  FUN_0044ea10(param_1 + 3);
  FUN_0045f2e0(param_1 + 7);
  FUN_0045d760((int)(param_1 + 0x10));
  local_4._0_1_ = 3;
  FUN_0044ea10(param_1 + 0x16);
  local_4._0_1_ = 4;
  _eh_vector_constructor_iterator_(param_1 + 0x1a,0x10,4,FUN_0044ea10);
  FUN_0045d790(param_1 + 0x2a);
  local_4._0_1_ = 6;
  FUN_0044d8d0(param_1 + 0x30,0x240);
  local_4._0_1_ = 7;
  FUN_0045b3c0(param_1 + 0x109);
  local_4._0_1_ = 8;
  FUN_004637d0((int)(param_1 + 0x121));
  FUN_0045bc60(param_1 + 0x1c3);
  local_4._0_1_ = 10;
  FUN_0044ea80(param_1 + 0x1ca);
  local_4 = CONCAT31(local_4._1_3_,0xb);
  *(undefined1 *)(param_1 + 0x1c2) = 0;
  uVar1 = FUN_00491e10();
  *(undefined8 *)(param_1 + 0x1c6) = 0;
  param_1[0xb8] = uVar1;
  param_1[0x1c9] = 0;
  param_1[0x1c8] = 0;
  FUN_0045dd40(param_1);
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x0045f3b0 */

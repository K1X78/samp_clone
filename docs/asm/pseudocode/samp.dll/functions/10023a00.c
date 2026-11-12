/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10023a00
 * Name: FUN_10023a00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_10023a00(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 local_22;
  undefined1 local_21;
  undefined4 *local_20;
  undefined1 local_1a [7];
  undefined1 local_13 [7];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101141f1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_10118640;
  local_20 = param_1;
  FUN_10020790();
  local_4 = 0;
  FUN_10023280();
  FUN_100216c0();
  local_4 = CONCAT31(local_4._1_3_,2);
  param_1[2] = 0;
  *(undefined1 *)((int)param_1 + 0x4d) = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  uVar1 = FUN_10020540();
  uVar1 = FUN_10020540(uVar1);
  FUN_10020860(uVar1);
  FUN_10020690(local_13,local_1a);
  uVar1 = FUN_10020540();
  uVar1 = FUN_10020540(uVar1);
  FUN_10020890(uVar1);
  local_22 = 0;
  local_21 = 0;
  FUN_100208c0(&local_21,&local_22);
  local_21 = 0;
  local_22 = 0;
  FUN_100222a0(&local_22,&local_21);
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x10023a00 */

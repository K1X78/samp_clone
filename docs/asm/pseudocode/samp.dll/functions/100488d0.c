/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100488d0
 * Name: FUN_100488d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_100488d0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011559e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10043cf0();
  local_4 = 0;
  FUN_1002e3b0();
  FUN_10048800();
  FUN_10046c00();
  local_4._0_1_ = 3;
  FUN_1002e3b0();
  local_4._0_1_ = 4;
  _eh_vector_constructor_iterator_(param_1 + 100,0x10,4,FUN_1002e3b0,FUN_1002e3e0);
  FUN_100458a0();
  local_4._0_1_ = 6;
  FUN_1001f220(0x240);
  local_4._0_1_ = 7;
  FUN_10043e30();
  local_4._0_1_ = 8;
  FUN_10056410();
  FUN_10044100();
  local_4._0_1_ = 10;
  FUN_1002e550();
  *(undefined8 *)(param_1 + 0x6e2) = 0;
  local_4 = CONCAT31(local_4._1_3_,0xb);
  *(undefined1 *)(param_1 + 0x6d5) = 0;
  *(undefined4 *)(param_1 + 0x2d3) = 10000;
  *(undefined4 *)(param_1 + 0x6ee) = 0;
  *(undefined4 *)(param_1 + 0x6ea) = 0;
  FUN_10047240();
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x100488d0 */

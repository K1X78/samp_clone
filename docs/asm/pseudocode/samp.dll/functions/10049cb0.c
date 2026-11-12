/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10049cb0
 * Name: FUN_10049cb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10049cb0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1011566e;
  local_c = ExceptionList;
  local_4 = 0xb;
  ExceptionList = &local_c;
  FUN_10049c80(1);
  local_4._0_1_ = 10;
  FUN_1002e650();
  local_4._0_1_ = 9;
  FUN_10044110();
  local_4._0_1_ = 8;
  FUN_10056440();
  local_4._0_1_ = 7;
  FUN_10043e60();
  local_4._0_1_ = 6;
  FUN_1001f390();
  local_4._0_1_ = 5;
  FUN_10046c30();
  local_4._0_1_ = 4;
  _eh_vector_destructor_iterator_(param_1 + 100,0x10,4,FUN_1002e3e0);
  local_4._0_1_ = 3;
  FUN_1002e3e0();
  local_4._0_1_ = 2;
  FUN_10048880();
  local_4._0_1_ = 1;
  FUN_10048830();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_1002e3e0();
  local_4 = 0xffffffff;
  FUN_10043d00();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10049cb0 */

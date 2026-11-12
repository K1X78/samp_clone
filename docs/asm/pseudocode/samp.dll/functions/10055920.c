/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10055920
 * Name: FUN_10055920
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_10055920(int param_1)

{
  WSADATA local_19c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10115d14;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100552d0();
  local_4 = 0;
  FUN_100553d0();
  local_4._0_1_ = 1;
  FUN_100553d0();
  local_4._0_1_ = 2;
  FUN_10055590();
  local_4._0_1_ = 3;
  FUN_10055590();
  local_4._0_1_ = 4;
  FUN_10055590();
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_10055750();
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  WSAStartup(0x202,&local_19c);
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x10055920 */

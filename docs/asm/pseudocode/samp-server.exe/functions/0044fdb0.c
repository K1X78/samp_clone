/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044fdb0
 * Name: FUN_0044fdb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_0044fdb0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b0d79;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0045f3b0((undefined4 *)(param_1 + 0x10));
  local_4 = 0;
  FUN_0044d8a0((undefined4 *)(param_1 + 0x784));
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00460a60((undefined4 *)(param_1 + 0x8b0));
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x0044fdb0 */

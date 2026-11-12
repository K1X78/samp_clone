/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10055dc0
 * Name: FUN_10055dc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10055dc0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10115d70;
  local_c = ExceptionList;
  local_4 = 6;
  ExceptionList = &local_c;
  FUN_100559f0();
  local_4._0_1_ = 5;
  FUN_100557c0();
  local_4._0_1_ = 4;
  FUN_10055600();
  local_4._0_1_ = 3;
  FUN_10055600();
  local_4._0_1_ = 2;
  FUN_10055600();
  local_4._0_1_ = 1;
  FUN_10055440();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_10055440();
  local_4 = 0xffffffff;
  FUN_100552e0();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10055dc0 */

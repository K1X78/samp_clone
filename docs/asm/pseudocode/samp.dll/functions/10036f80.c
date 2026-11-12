/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10036f80
 * Name: FUN_10036f80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10036f80(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10114c51;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_1011ab34;
  local_4 = 2;
  if (param_1[1] != 0) {
    FUN_100378b0(param_1[1]);
  }
  local_4._0_1_ = 1;
  FUN_10036a80();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_10036c20();
  local_4 = 0xffffffff;
  FUN_10036c20();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10036f80 */

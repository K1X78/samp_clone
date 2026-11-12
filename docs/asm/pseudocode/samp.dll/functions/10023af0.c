/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10023af0
 * Name: FUN_10023af0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10023af0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10114221;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_10118640;
  local_4 = 2;
  if ((void *)param_1[2] != (void *)0x0) {
    _free((void *)param_1[2]);
  }
  local_4._0_1_ = 1;
  FUN_10022230();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_100239a0();
  local_4 = 0xffffffff;
  FUN_100221d0();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10023af0 */

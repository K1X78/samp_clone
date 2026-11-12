/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10062a60
 * Name: FUN_10062a60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10062a60(void *param_1,UINT_PTR param_2,undefined4 *param_3)

{
  BOOL BVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10115f48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100635c0();
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  local_4 = 0;
  param_3[4] = 0;
  BVar1 = IsBadReadPtr(param_1,param_2);
  if (BVar1 == 0) {
    thunk_FUN_10063d30(param_1,param_2);
    FUN_10063ce0(param_3);
  }
  local_4 = 0xffffffff;
  FUN_10063550();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10062a60 */

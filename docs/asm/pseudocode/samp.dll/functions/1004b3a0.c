/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004b3a0
 * Name: FUN_1004b3a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_1004b3a0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10115716;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1004a8c0();
  local_4 = 0;
  FUN_1004aa10();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_10049f00();
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x1004b3a0 */

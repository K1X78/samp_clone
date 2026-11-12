/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10037e00
 * Name: FUN_10037e00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_10037e00(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10114e59;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100488d0();
  local_4 = 0;
  FUN_1001f1f0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_100510f0();
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x10037e00 */

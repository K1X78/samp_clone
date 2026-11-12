/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10036a00
 * Name: FUN_10036a00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_10036a00(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10114bf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100204d0();
  local_4 = 0;
  *param_1 = &PTR_FUN_1011a9bc;
  FUN_100203f0(1,"SetPassword","Changes the console password to whatever.");
  FUN_100203f0(0,"ClearPassword","Removes the console passwords.");
  FUN_100203f0(0,"GetPassword","Gets the console password.");
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x10036a00 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10030e40
 * Name: FUN_10030e40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10030e40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10114a08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_10118fc4;
  local_4 = 0;
  FUN_10030cd0();
  local_4 = 0xffffffff;
  FUN_100204f0();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10030e40 */

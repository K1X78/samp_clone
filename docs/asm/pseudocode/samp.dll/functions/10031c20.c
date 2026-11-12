/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10031c20
 * Name: FUN_10031c20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10031c20(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10114aab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_101191cc;
  local_4 = 0;
  FUN_10031760();
  local_4 = 0xffffffff;
  FUN_10031480();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10031c20 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004cae0
 * Name: FUN_1004cae0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1004cae0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101157f6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_1011b358;
  local_4 = 1;
  FUN_1004c7c0();
  local_4 = local_4 & 0xffffff00;
  FUN_1004b2d0();
  local_4 = 0xffffffff;
  FUN_1004b250();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1004cae0 */

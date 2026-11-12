/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b23b0
 * Name: FUN_100b23b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100b23b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10116718;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_1011f450;
  local_4 = 0;
  if (param_1[2] != 0) {
    *(undefined4 *)(*(int *)(*(int *)(param_1[2] + 0x2a4) + 0x47c) + 0x10) = 0;
  }
  FUN_100b2200();
  FUN_100b21a0();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100b23b0 */

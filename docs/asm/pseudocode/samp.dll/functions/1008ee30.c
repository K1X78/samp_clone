/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008ee30
 * Name: FUN_1008ee30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1008ee30(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10116408;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_1011d5f0;
  local_4 = 0;
  FUN_1009b440();
  FUN_1008de00();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1008ee30 */

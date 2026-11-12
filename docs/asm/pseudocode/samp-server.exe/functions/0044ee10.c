/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044ee10
 * Name: FUN_0044ee10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0044ee10(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b0d28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_004b9fbc;
  local_4 = 0;
  FUN_0044ed70(param_1);
  local_4 = 0xffffffff;
  FUN_0044ee00(param_1);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x0044ee10 */

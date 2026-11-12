/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045f360
 * Name: FUN_0045f360
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0045f360(void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b1198;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0045e5a0(param_1);
  local_4 = 0xffffffff;
  FUN_0045c840((int)param_1);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x0045f360 */

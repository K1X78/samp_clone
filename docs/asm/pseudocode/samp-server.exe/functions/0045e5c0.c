/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045e5c0
 * Name: FUN_0045e5c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0045e5c0(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b1158;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0045d830(param_1);
  local_4 = 0xffffffff;
  FUN_0045c960(param_1);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x0045e5c0 */

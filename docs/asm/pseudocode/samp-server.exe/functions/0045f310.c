/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045f310
 * Name: FUN_0045f310
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0045f310(int *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b1178;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  thunk_FUN_0045d830();
  local_4 = 0xffffffff;
  FUN_0045e5c0(param_1);
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x0045f310 */

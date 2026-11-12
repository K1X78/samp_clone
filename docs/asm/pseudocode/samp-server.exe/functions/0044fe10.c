/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044fe10
 * Name: FUN_0044fe10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0044fe10(int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_004b0d79;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  FUN_00460b00(param_1 + 0x8b0);
  local_4 = local_4 & 0xffffff00;
  FUN_0044d9b0(param_1 + 0x784);
  local_4 = 0xffffffff;
  FUN_00460940((undefined4 *)(param_1 + 0x10));
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x0044fe10 */

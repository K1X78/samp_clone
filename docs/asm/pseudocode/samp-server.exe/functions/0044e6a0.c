/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044e6a0
 * Name: FUN_0044e6a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0044e6a0(int *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b0cc8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_0045ba30(param_1);
  local_4 = 0xffffffff;
  FUN_0045c710(param_1);
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x0044e6a0 */

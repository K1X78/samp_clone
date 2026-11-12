/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00481510
 * Name: FUN_00481510
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00481510(undefined4 *param_1)

{
  SOCKET *_Memory;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b1756;
  pvStack_c = ExceptionList;
  _Memory = (SOCKET *)*param_1;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if (_Memory != (SOCKET *)0x0) {
    ExceptionList = &pvStack_c;
    FUN_004688a0(_Memory);
    _free(_Memory);
    *param_1 = 0;
  }
  if (0xf < (uint)param_1[0x11]) {
    _free((void *)param_1[0xc]);
  }
  param_1[0x11] = 0xf;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (0xf < (uint)param_1[10]) {
    _free((void *)param_1[5]);
  }
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x00481510 */

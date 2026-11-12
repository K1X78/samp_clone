/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10013e10
 * Name: FUN_10013e10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10013e10(int param_1)

{
  void *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1011331b;
  local_c = ExceptionList;
  _Memory = *(void **)(param_1 + 8);
  local_4 = 0;
  ExceptionList = &local_c;
  if (_Memory != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_100162c0();
    _free(_Memory);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (0xf < *(uint *)(param_1 + 0x28)) {
    _free(*(void **)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xf;
  *(undefined1 *)(param_1 + 0x14) = 0;
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10013e10 */

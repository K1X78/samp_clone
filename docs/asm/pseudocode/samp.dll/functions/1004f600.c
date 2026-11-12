/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004f600
 * Name: FUN_1004f600
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1004f600(void)

{
  void *_Memory;
  uint uVar1;
  int local_18;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101158c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1004e6c0();
  uVar1 = 0;
  local_4 = 0;
  FUN_1004f060(&local_18);
  if (local_14 != 0) {
    do {
      _Memory = *(void **)(local_18 + uVar1 * 4);
      if (_Memory != (void *)0x0) {
        FUN_1004eff0();
        _free(_Memory);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < local_14);
  }
  local_4 = 0xffffffff;
  FUN_1004e6d0();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1004f600 */

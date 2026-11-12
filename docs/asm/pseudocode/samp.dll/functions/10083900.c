/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10083900
 * Name: FUN_10083900
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10083900(int param_1)

{
  void *_Memory;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x55)) {
    do {
      _Memory = *(void **)(*(int *)(param_1 + 0x51) + iVar1 * 4);
      if (_Memory != (void *)0x0) {
        FUN_10083750();
        _free(_Memory);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x55));
  }
  thunk_FUN_10082690(0);
  return;
}


/* END FUNCTION 0x10083900 */

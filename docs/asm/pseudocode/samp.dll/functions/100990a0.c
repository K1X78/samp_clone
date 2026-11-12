/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100990a0
 * Name: FUN_100990a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100990a0(int *param_1)

{
  void *_Memory;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_1[1]) {
    do {
      _Memory = *(void **)(*param_1 + iVar1 * 4);
      if (_Memory != (void *)0x0) {
        if (*(void **)((int)_Memory + 0x11) != (void *)0x0) {
          _free(*(void **)((int)_Memory + 0x11));
          *(undefined4 *)((int)_Memory + 0x11) = 0;
        }
        _free(_Memory);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[1]);
  }
  thunk_FUN_10095d50(0);
  return 0;
}


/* END FUNCTION 0x100990a0 */

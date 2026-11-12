/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10028b70
 * Name: FUN_10028b70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10028b70(int *param_1)

{
  void *_Memory;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1[1] != 0) {
    do {
      _Memory = *(void **)(*param_1 + uVar1 * 4);
      if (_Memory != (void *)0x0) {
        thunk_FUN_10026ed0();
        _free(_Memory);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_1[1]);
  }
  thunk_FUN_10026fb0();
  _free(param_1);
  return;
}


/* END FUNCTION 0x10028b70 */

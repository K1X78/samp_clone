/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008c210
 * Name: FUN_1008c210
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1008c210(int param_1)

{
  void *_Memory;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x259)) {
    do {
      _Memory = *(void **)(*(int *)(param_1 + 0x255) + iVar1 * 4);
      if (_Memory != (void *)0x0) {
        _free(_Memory);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x259));
  }
  thunk_FUN_10086770(0);
  FUN_100886d0(0,1);
  *(undefined4 *)(param_1 + 0x152) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x156) = 0xffffffff;
  return;
}


/* END FUNCTION 0x1008c210 */

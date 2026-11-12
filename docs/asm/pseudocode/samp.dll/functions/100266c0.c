/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100266c0
 * Name: FUN_100266c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100266c0(int *param_1)

{
  void *_Memory;
  int iVar1;
  
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      _free((void *)param_1[1]);
      param_1[1] = 0;
      *param_1 = 0;
      param_1[2] = 0;
      return;
    }
    *(undefined4 *)(*(int *)(param_1[2] + 4) + 8) = *(undefined4 *)(param_1[2] + 8);
    *(undefined4 *)(*(int *)(param_1[2] + 8) + 4) = *(undefined4 *)(param_1[2] + 4);
    _Memory = (void *)param_1[2];
    iVar1 = *(int *)((int)_Memory + 8);
    if (_Memory == (void *)param_1[1]) {
      param_1[1] = iVar1;
    }
    _free(_Memory);
    *param_1 = *param_1 + -1;
    param_1[2] = iVar1;
  }
  return;
}


/* END FUNCTION 0x100266c0 */

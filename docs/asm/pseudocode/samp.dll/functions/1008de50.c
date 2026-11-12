/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008de50
 * Name: FUN_1008de50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_1008de50(undefined4 *param_1,undefined4 param_2)

{
  void *_Memory;
  int iVar1;
  undefined4 *puVar2;
  
  FUN_1008dcc0(0);
  param_1[6] = param_2;
  *param_1 = &PTR_FUN_1011d3b0;
  param_1[0xc] = 1;
  puVar2 = (undefined4 *)((int)param_1 + 0x4d);
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  iVar1 = 0;
  if (0 < (int)param_1[9]) {
    do {
      _Memory = *(void **)(param_1[8] + iVar1 * 4);
      if (_Memory != (void *)0x0) {
        _free(_Memory);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[9]);
  }
  thunk_FUN_10086650(0);
  return param_1;
}


/* END FUNCTION 0x1008de50 */

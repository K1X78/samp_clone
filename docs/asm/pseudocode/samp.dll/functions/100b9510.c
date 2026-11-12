/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b9510
 * Name: FUN_100b9510
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100b9510(undefined **param_1)

{
  int *piVar1;
  undefined **local_4;
  
  piVar1 = (int *)param_1[0xc];
  *param_1 = (undefined *)&PTR_FUN_1011f8a0;
  local_4 = param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xc] = (undefined *)0x0;
  }
  if (param_1[3] != (undefined *)0x0) {
    local_4 = &PTR_LAB_1011f8c8;
    D3DXFrameDestroy(param_1[3],&local_4);
    param_1[3] = (undefined *)0x0;
  }
  if (param_1[4] != (undefined *)0x0) {
    _free(param_1[4]);
    param_1[4] = (undefined *)0x0;
  }
  param_1[1] = (undefined *)0x0;
  return;
}


/* END FUNCTION 0x100b9510 */

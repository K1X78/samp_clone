/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001f220
 * Name: FUN_1001f220
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_1001f220(undefined4 *param_1,size_t param_2)

{
  void *pvVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  if ((int)param_2 < 0x101) {
    param_1[3] = (int)param_1 + 0x11;
    param_1[1] = 0x800;
    *(undefined1 *)(param_1 + 4) = 1;
    return param_1;
  }
  pvVar1 = _malloc(param_2);
  param_1[3] = pvVar1;
  param_1[1] = param_2 * 8;
  *(undefined1 *)(param_1 + 4) = 1;
  return param_1;
}


/* END FUNCTION 0x1001f220 */

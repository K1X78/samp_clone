/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10026e70
 * Name: FUN_10026e70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 * __thiscall
FUN_10026e70(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (param_4 == 0) {
    FUN_10026d30(param_2);
    *param_1 = 0;
    return param_1;
  }
  if (param_4 == 1) {
    FUN_10026d50(param_3);
    *param_1 = 0;
    return param_1;
  }
  FUN_10026db0(param_3,param_2);
  *param_1 = 0;
  return param_1;
}


/* END FUNCTION 0x10026e70 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006c730
 * Name: FUN_1006c730
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_1006c730(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  D3DXCreateSprite(param_2,param_1 + 2);
  return param_1;
}


/* END FUNCTION 0x1006c730 */

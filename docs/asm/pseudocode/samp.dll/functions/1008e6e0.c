/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008e6e0
 * Name: FUN_1008e6e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_1008e6e0(undefined4 *param_1,undefined4 param_2)

{
  FUN_1008dcc0(0);
  param_1[6] = param_2;
  *param_1 = &PTR_FUN_1011d500;
  param_1[0xc] = 5;
  *(undefined4 *)((int)param_1 + 0x51) = 0;
  *(undefined4 *)((int)param_1 + 0x55) = 100;
  *(undefined4 *)((int)param_1 + 0x4d) = 0x32;
  *(undefined1 *)((int)param_1 + 0x65) = 0;
  *(undefined1 *)((int)param_1 + 0x76) = 0;
  return param_1;
}


/* END FUNCTION 0x1008e6e0 */

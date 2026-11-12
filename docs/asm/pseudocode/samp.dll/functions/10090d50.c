/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10090d50
 * Name: FUN_10090d50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_10090d50(undefined4 *param_1,undefined4 param_2)

{
  FUN_1008df20(0);
  *param_1 = &PTR_FUN_1011d6a0;
  FUN_1008e750(param_2);
  *(undefined4 *)((int)param_1 + 0x255) = 0;
  *(undefined4 *)((int)param_1 + 0x259) = 0;
  *(undefined4 *)((int)param_1 + 0x25d) = 0;
  param_1[6] = param_2;
  *(undefined4 *)((int)param_1 + 0x152) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x156) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x85) = 0;
  param_1[0xc] = 4;
  *(undefined4 *)((int)param_1 + 0x15a) = 100;
  param_1[0x84] = 0x10;
  return param_1;
}


/* END FUNCTION 0x10090d50 */

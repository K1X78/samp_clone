/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10020b90
 * Name: FUN_10020b90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_10020b90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 1) = (undefined2)param_3;
  *(char *)((int)param_1 + 6) = (char)((uint)param_3 >> 0x10);
  *(undefined2 *)((int)param_1 + 7) = param_4;
  return;
}


/* END FUNCTION 0x10020b90 */

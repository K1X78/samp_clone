/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10020bd0
 * Name: FUN_10020bd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10020bd0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)((int)param_2 + 6);
  *(undefined1 *)(param_1 + 0x17) = 1;
  return;
}


/* END FUNCTION 0x10020bd0 */

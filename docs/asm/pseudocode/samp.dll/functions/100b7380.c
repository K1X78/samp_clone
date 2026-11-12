/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b7380
 * Name: FUN_100b7380
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100b7380(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x4f8) = 2;
    *(undefined4 *)(param_1 + 0x60) = 1;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x4f8) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}


/* END FUNCTION 0x100b7380 */

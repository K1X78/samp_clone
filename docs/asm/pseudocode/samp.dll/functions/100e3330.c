/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e3330
 * Name: FUN_100e3330
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100e3330(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 < 0) {
    *(undefined4 *)(param_1 + 0x728) = 0;
    *(undefined4 *)(param_1 + 0x72c) = 0;
    *(uint *)(param_1 + 0x758) = *(uint *)(param_1 + 0x758) & 0xffffffbf;
    return;
  }
  *(undefined4 *)(param_1 + 0x728) = param_2;
  *(int *)(param_1 + 0x72c) = param_3;
  *(uint *)(param_1 + 0x758) = *(uint *)(param_1 + 0x758) | 0x40;
  return;
}


/* END FUNCTION 0x100e3330 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e3390
 * Name: FUN_100e3390
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100e3390(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 < 0) {
    *(undefined4 *)(param_1 + 0x730) = 0;
    *(undefined4 *)(param_1 + 0x734) = 0;
    *(uint *)(param_1 + 0x758) = *(uint *)(param_1 + 0x758) & 0xffffffdf;
    return;
  }
  *(undefined4 *)(param_1 + 0x730) = param_2;
  *(int *)(param_1 + 0x734) = param_3;
  *(uint *)(param_1 + 0x758) = *(uint *)(param_1 + 0x758) | 0x20;
  return;
}


/* END FUNCTION 0x100e3390 */

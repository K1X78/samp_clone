/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f14f0
 * Name: FUN_100f14f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100f14f0(int param_1)

{
  int *piVar1;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
     (((piVar1 = *(int **)(param_1 + 0x1c), piVar1 != (int *)0x0 && (*piVar1 == param_1)) &&
      ((0x3f33 < piVar1[1] && (piVar1[1] < 0x3f54)))))) {
    return (piVar1[0x1c] - (int)piVar1) + -0x534 >> 2;
  }
  return -1;
}


/* END FUNCTION 0x100f14f0 */

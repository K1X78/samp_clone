/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f1460
 * Name: FUN_100f1460
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100f1460(int param_1)

{
  int *piVar1;
  
  if ((((param_1 == 0) || (*(int *)(param_1 + 0x20) == 0)) || (*(int *)(param_1 + 0x24) == 0)) ||
     (((piVar1 = *(int **)(param_1 + 0x1c), piVar1 == (int *)0x0 || (*piVar1 != param_1)) ||
      ((piVar1[1] < 0x3f34 || (0x3f53 < piVar1[1])))))) {
    return -0x10000;
  }
  if (piVar1[1] == 0x3f43) {
    return piVar1[0x6f2] * 0x10000 + piVar1[0x11];
  }
  if (piVar1[1] == 0x3f4c) {
    return piVar1[0x6f2] * 0x10000 + (piVar1[0x6f3] - piVar1[0x11]);
  }
  return piVar1[0x6f2] << 0x10;
}


/* END FUNCTION 0x100f1460 */

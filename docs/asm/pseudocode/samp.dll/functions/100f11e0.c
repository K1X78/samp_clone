/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f11e0
 * Name: FUN_100f11e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100f11e0(int param_1)

{
  int *piVar1;
  
  if (((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
      ((piVar1 = *(int **)(param_1 + 0x1c), piVar1 != (int *)0x0 && (*piVar1 == param_1)))) &&
     ((0x3f33 < piVar1[1] && (piVar1[1] < 0x3f54)))) {
    if ((piVar1[1] == 0x3f41) && (piVar1[0x10] == 0)) {
      return 1;
    }
    return 0;
  }
  return 0xfffffffe;
}


/* END FUNCTION 0x100f11e0 */

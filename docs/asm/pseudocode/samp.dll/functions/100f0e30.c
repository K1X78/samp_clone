/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f0e30
 * Name: FUN_100f0e30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100f0e30(int param_1)

{
  int *piVar1;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) &&
      (*(code **)(param_1 + 0x24) != (code *)0x0)) &&
     (((piVar1 = *(int **)(param_1 + 0x1c), piVar1 != (int *)0x0 && (*piVar1 == param_1)) &&
      ((0x3f33 < piVar1[1] && (piVar1[1] < 0x3f54)))))) {
    if (piVar1[0xe] != 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),piVar1[0xe]);
    }
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return 0;
  }
  return 0xfffffffe;
}


/* END FUNCTION 0x100f0e30 */

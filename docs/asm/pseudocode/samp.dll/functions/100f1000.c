/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f1000
 * Name: FUN_100f1000
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100f1000(int param_1,int param_2)

{
  int *piVar1;
  
  if (((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
      ((piVar1 = *(int **)(param_1 + 0x1c), piVar1 != (int *)0x0 && (*piVar1 == param_1)))) &&
     ((0x3f33 < piVar1[1] && ((piVar1[1] < 0x3f54 && ((*(byte *)(piVar1 + 3) & 2) != 0)))))) {
    piVar1[9] = param_2;
    *(undefined4 *)(param_2 + 0x30) = 0;
    return 0;
  }
  return 0xfffffffe;
}


/* END FUNCTION 0x100f1000 */

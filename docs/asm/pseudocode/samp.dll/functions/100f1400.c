/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f1400
 * Name: FUN_100f1400
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100f1400(int param_1,int param_2)

{
  int *piVar1;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
     (((piVar1 = *(int **)(param_1 + 0x1c), piVar1 != (int *)0x0 && (*piVar1 == param_1)) &&
      ((0x3f33 < piVar1[1] && (piVar1[1] < 0x3f54)))))) {
    if (param_2 != 0) {
      piVar1[3] = piVar1[3] | 4;
      return 0;
    }
    piVar1[3] = piVar1[3] & 0xfffffffb;
    return 0;
  }
  return 0xfffffffe;
}


/* END FUNCTION 0x100f1400 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ef2e0
 * Name: FUN_100ef2e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100ef2e0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
     (((piVar1 = *(int **)(param_1 + 0x1c), piVar1 != (int *)0x0 && (*piVar1 == param_1)) &&
      ((0x3f33 < piVar1[1] && (piVar1[1] < 0x3f54)))))) {
    piVar1[0xb] = 0;
    piVar1[0xc] = 0;
    piVar1[0xd] = 0;
    uVar2 = FUN_100ef240(param_1);
    return uVar2;
  }
  return 0xfffffffe;
}


/* END FUNCTION 0x100ef2e0 */

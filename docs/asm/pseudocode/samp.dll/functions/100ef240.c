/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ef240
 * Name: FUN_100ef240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100ef240(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
     (((piVar2 = *(int **)(param_1 + 0x1c), piVar2 != (int *)0x0 && (*piVar2 == param_1)) &&
      ((0x3f33 < piVar2[1] && (piVar2[1] < 0x3f54)))))) {
    piVar2[8] = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (piVar2[3] != 0) {
      *(uint *)(param_1 + 0x30) = piVar2[3] & 1;
    }
    piVar1 = piVar2 + 0x14d;
    piVar2[2] = 0;
    piVar2[4] = 0;
    piVar2[9] = 0;
    piVar2[0xf] = 0;
    piVar2[0x10] = 0;
    piVar2[1] = 0x3f34;
    piVar2[6] = 0x8000;
    piVar2[0x1c] = (int)piVar1;
    piVar2[0x15] = (int)piVar1;
    piVar2[0x14] = (int)piVar1;
    piVar2[0x6f1] = 1;
    piVar2[0x6f2] = -1;
    return 0;
  }
  return 0xfffffffe;
}


/* END FUNCTION 0x100ef240 */

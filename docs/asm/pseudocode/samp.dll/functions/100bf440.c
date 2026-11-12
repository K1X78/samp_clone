/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bf440
 * Name: FUN_100bf440
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100bf440(int param_1,undefined4 *param_2)

{
  *param_2 = &LAB_100be4f0;
  param_2[1] = &LAB_100be010;
  param_2[2] = &LAB_100be000;
  if (*(char *)(param_1 + 0x1d) == '\0') {
    param_2[3] = FUN_100bee00;
    param_2[4] = FUN_100bf310;
    return;
  }
  if (*(int *)(param_1 + 0x48) == 2) {
    param_2[3] = FUN_100be980;
    param_2[4] = &LAB_100bf050;
    return;
  }
  if (*(int *)(param_1 + 0x48) == 3) {
    param_2[3] = FUN_100beab0;
    param_2[4] = FUN_100bf180;
    return;
  }
  param_2[3] = FUN_100bec40;
  param_2[4] = FUN_100bf230;
  return;
}


/* END FUNCTION 0x100bf440 */

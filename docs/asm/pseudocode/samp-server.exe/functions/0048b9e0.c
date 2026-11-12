/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048b9e0
 * Name: FUN_0048b9e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0048b9e0(int param_1,undefined4 *param_2)

{
  *param_2 = &LAB_0048acf0;
  param_2[1] = &LAB_0048a840;
  param_2[2] = &LAB_0048a830;
  if (*(char *)(param_1 + 0x1d) == '\0') {
    param_2[3] = FUN_0048b560;
    param_2[4] = FUN_0048b930;
    return;
  }
  if (*(int *)(param_1 + 0x48) == 2) {
    param_2[3] = FUN_0048b180;
    param_2[4] = &LAB_0048b710;
    return;
  }
  if (*(int *)(param_1 + 0x48) == 3) {
    param_2[3] = FUN_0048b210;
    param_2[4] = FUN_0048b7a0;
    return;
  }
  param_2[3] = FUN_0048b3a0;
  param_2[4] = FUN_0048b850;
  return;
}


/* END FUNCTION 0x0048b9e0 */

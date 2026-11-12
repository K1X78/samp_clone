/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10063ce0
 * Name: FUN_10063ce0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10063ce0(int param_1,undefined4 *param_2)

{
  if (*(char *)(param_1 + 0x65) != '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 100) == '\0') {
    FUN_10063c20();
    *(undefined1 *)(param_1 + 100) = 1;
  }
  *param_2 = *(undefined4 *)(param_1 + 4);
  param_2[1] = *(undefined4 *)(param_1 + 8);
  param_2[2] = *(undefined4 *)(param_1 + 0xc);
  param_2[3] = *(undefined4 *)(param_1 + 0x10);
  param_2[4] = *(undefined4 *)(param_1 + 0x14);
  return 1;
}


/* END FUNCTION 0x10063ce0 */

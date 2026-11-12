/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cf040
 * Name: FUN_100cf040
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100cf040(int param_1,undefined4 *param_2,int param_3)

{
  if (param_3 != 0) {
    if (*(int *)(param_1 + 0x1e8) == 3) {
      *param_2 = *(undefined4 *)(param_1 + 0x198);
      return 0x10000;
    }
    if (*(int *)(param_1 + 0x1e8) == 2) {
      *param_2 = *(undefined4 *)(param_1 + 0x198);
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x100cf040 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009c180
 * Name: FUN_1009c180
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1009c180(int param_1,char param_2)

{
  if (*(int *)(param_1 + 0x48) != 0) {
    *(char *)(param_1 + 0x55) = param_2;
    if (param_2 != '\0') {
      FUN_100b1f10(&DAT_1011e294,*(undefined4 *)(param_1 + 0x44),1,1,1,1,1);
      return;
    }
    FUN_100b1f10(&DAT_1011e294,*(undefined4 *)(param_1 + 0x44),0,0,0,1,0);
  }
  return;
}


/* END FUNCTION 0x1009c180 */

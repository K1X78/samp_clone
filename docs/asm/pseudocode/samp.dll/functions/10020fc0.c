/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10020fc0
 * Name: FUN_10020fc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10020fc0(undefined4 *param_1,char param_2)

{
  if (param_1[2] != 0) {
    if ((0x200 < (uint)param_1[2]) && (param_2 == '\0')) {
      _free((void *)*param_1);
      param_1[2] = 0;
      *param_1 = 0;
    }
    param_1[1] = 0;
  }
  return;
}


/* END FUNCTION 0x10020fc0 */

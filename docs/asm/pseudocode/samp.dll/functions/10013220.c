/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10013220
 * Name: FUN_10013220
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10013220(int *param_1,int param_2)

{
  if ((((0 < *param_1) && (-1 < param_2)) && (param_2 < 0x1000)) && (param_1[param_2 + 1] != 0)) {
    FUN_100b1f10(&DAT_10118158,param_1[param_2 + 1]);
    param_1[param_2 + 1] = 0;
    param_1[param_2 + 0x2001] = 0;
    param_1[param_2 + 0x1001] = -1;
    *param_1 = *param_1 + -1;
  }
  return;
}


/* END FUNCTION 0x10013220 */

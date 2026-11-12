/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10066d10
 * Name: FUN_10066d10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10066d10(int *param_1,int param_2)

{
  if ((9 < param_2) && (param_2 < 0x65)) {
    *param_1 = param_2;
    FUN_10066c70();
    *(undefined4 *)((int)param_1 + 0x63da) = 1;
  }
  return;
}


/* END FUNCTION 0x10066d10 */

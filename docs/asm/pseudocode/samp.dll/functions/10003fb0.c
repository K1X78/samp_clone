/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10003fb0
 * Name: FUN_10003fb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10003fb0(int *param_1,int param_2)

{
  if (param_2 != 0) {
    if (*param_1 != 0) {
      FUN_100abc30();
      FUN_100afb50(param_1[0x54]);
    }
    *(undefined4 *)((int)param_1 + 0x143) = 1;
  }
  return;
}


/* END FUNCTION 0x10003fb0 */

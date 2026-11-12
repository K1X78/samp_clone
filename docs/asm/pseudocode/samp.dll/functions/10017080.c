/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10017080
 * Name: FUN_10017080
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10017080(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_100aef40(0,0,0);
    FUN_100afbd0();
  }
  if (*(char *)(param_1 + 0x1a) != ' ') {
    *(undefined1 *)(param_1 + 0x1a) = 0x20;
  }
  FUN_10015c60();
  return;
}


/* END FUNCTION 0x10017080 */

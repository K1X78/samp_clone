/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ad000
 * Name: FUN_100ad000
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100ad000(int param_1)

{
  if (*(int *)(param_1 + 0x2b9) != 0) {
    FUN_100b1f10(&DAT_1011f15c,*(int *)(param_1 + 0x2b9),0,0,0,0);
    FUN_100b1f10(&DAT_1011f1d4,*(undefined4 *)(param_1 + 0x2b9));
    *(undefined4 *)(param_1 + 0x2b9) = 0;
  }
  return;
}


/* END FUNCTION 0x100ad000 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a9a20
 * Name: FUN_100a9a20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100a9a20(int param_1)

{
  if ((*(int *)(param_1 + 0x118b) != 0) && (*(int *)(param_1 + 0x118f) != 0)) {
    FUN_100a87f0();
    if (*(char *)(param_1 + 0x1193) != '\0') {
      FUN_100a8c30();
    }
  }
  *(undefined4 *)(param_1 + 0x118f) = 1;
  return;
}


/* END FUNCTION 0x100a9a20 */

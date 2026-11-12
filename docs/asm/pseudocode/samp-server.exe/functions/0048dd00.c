/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048dd00
 * Name: FUN_0048dd00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0048dd00(int param_1)

{
  if (*(int *)(param_1 + 0x90) == 0) {
    if (*(int *)(param_1 + 200) != 0) {
      *(undefined4 *)(param_1 + 0x90) = 9;
    }
    if (*(int *)(param_1 + 300) != 0) {
      *(undefined4 *)(param_1 + 0x90) = 8;
    }
    if (*(int *)(param_1 + 0x90) != 0) {
      *(undefined4 *)(param_1 + 0x6c) = 1;
    }
  }
  return;
}


/* END FUNCTION 0x0048dd00 */

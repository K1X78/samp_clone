/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c3f00
 * Name: FUN_100c3f00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100c3f00(int param_1)

{
  if (*(int *)(param_1 + 0x90) == 0) {
    if (*(int *)(param_1 + 0xc1) != 0) {
      *(undefined4 *)(param_1 + 0x90) = 9;
    }
    if (*(int *)(param_1 + 0x121) != 0) {
      *(undefined4 *)(param_1 + 0x90) = 8;
    }
    if (*(int *)(param_1 + 0x90) != 0) {
      *(undefined4 *)(param_1 + 0x6c) = 1;
    }
  }
  return;
}


/* END FUNCTION 0x100c3f00 */

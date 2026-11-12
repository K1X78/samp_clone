/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100162c0
 * Name: FUN_100162c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100162c0(int param_1)

{
  if (*(int *)(param_1 + 0x1f9) != 0) {
    FUN_100a0ce0(*(int *)(param_1 + 0x1f9));
    *(undefined4 *)(param_1 + 0x1f9) = 0;
  }
  *(undefined4 *)(param_1 + 0x1e9) = 0;
  if (*(int *)(param_1 + 4) != 0) {
    FUN_100a0050(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


/* END FUNCTION 0x100162c0 */

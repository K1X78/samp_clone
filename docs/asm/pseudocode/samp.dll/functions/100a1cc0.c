/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a1cc0
 * Name: FUN_100a1cc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100a1cc0(int param_1)

{
  if (*(int *)(param_1 + 0x31) != 0) {
    FUN_100b1f10();
    *(undefined4 *)(param_1 + 0x31) = 0;
  }
  *(undefined4 *)(param_1 + 0x29) = 0;
  FUN_100b1f10(&DAT_1011e768,*(undefined1 *)(param_1 + 0x28),(double)*(float *)(param_1 + 0xc),
               (double)*(float *)(param_1 + 0x10),(double)*(float *)(param_1 + 0x14),
               (double)*(float *)(param_1 + 0x18),(double)*(float *)(param_1 + 0x1c),
               (double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
               (undefined4 *)(param_1 + 0x31));
  *(undefined4 *)(param_1 + 0x29) = 1;
  return;
}


/* END FUNCTION 0x100a1cc0 */

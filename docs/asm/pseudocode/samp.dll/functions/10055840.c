/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10055840
 * Name: FUN_10055840
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10055840(int param_1)

{
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  *(undefined1 *)(*(int *)(param_1 + 0xc) + 4) = 1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 5);
  return;
}


/* END FUNCTION 0x10055840 */

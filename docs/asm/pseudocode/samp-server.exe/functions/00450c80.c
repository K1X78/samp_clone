/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00450c80
 * Name: FUN_00450c80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00450c80(int param_1)

{
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x2c) = 1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x30);
  return;
}


/* END FUNCTION 0x00450c80 */

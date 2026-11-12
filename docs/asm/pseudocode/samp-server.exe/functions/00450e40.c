/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00450e40
 * Name: FUN_00450e40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00450e40(int param_1)

{
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  *(undefined1 *)(*(int *)(param_1 + 0xc) + 4) = 1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 8);
  return;
}


/* END FUNCTION 0x00450e40 */

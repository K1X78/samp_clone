/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00490990
 * Name: FUN_00490990
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00490990(int param_1)

{
  if (0xf < *(uint *)(param_1 + 0x24)) {
    _free(*(void **)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x24) = 0xf;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}


/* END FUNCTION 0x00490990 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042e3e0
 * Name: FUN_0042e3e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0042e3e0(int param_1)

{
  if ((*(byte *)(param_1 + 0x1c) & 0x40) != 0) {
    FUN_0042e390();
  }
  if ((*(byte *)(param_1 + 0x1c) & 0x20) != 0) {
    FUN_0040ac90();
  }
  *(undefined1 *)(param_1 + 0x1e) = 5;
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xbf01 | 1;
  return;
}


/* END FUNCTION 0x0042e3e0 */

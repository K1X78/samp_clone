/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040a370
 * Name: FUN_0040a370
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040a370(int param_1)

{
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xdf;
  if ((*(ushort *)(param_1 + 0x14) & 2) == 0) {
    *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) | 2;
    FUN_0040a0a0(param_1);
    return;
  }
  return;
}


/* END FUNCTION 0x0040a370 */

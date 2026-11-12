/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040b8f0
 * Name: FUN_0040b8f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040b8f0(int param_1)

{
  if (((*(ushort *)(param_1 + 0x14) & 2) != 0) && (*(int *)(*(int *)(param_1 + 0x10) + 100) == 0)) {
    *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) | 0x20;
  }
  return;
}


/* END FUNCTION 0x0040b8f0 */

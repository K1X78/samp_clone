/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040fda0
 * Name: FUN_0040fda0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040fda0(int param_1,undefined4 param_2)

{
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0xc)) {
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
    *(short *)(param_1 + 0x20) = (short)param_2;
    FUN_0040fda0(*(int *)(param_1 + 8),param_2);
  }
  return;
}


/* END FUNCTION 0x0040fda0 */

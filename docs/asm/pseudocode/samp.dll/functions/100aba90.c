/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100aba90
 * Name: FUN_100aba90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_100aba90(int param_1)

{
  if (*(int *)(param_1 + 0x2a4) == 0) {
    return 0;
  }
  return *(uint *)(*(int *)(param_1 + 0x2a4) + 0x46c) >> 8 & 1;
}


/* END FUNCTION 0x100aba90 */

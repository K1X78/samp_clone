/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100be500
 * Name: FUN_100be500
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_100be500(int param_1)

{
  return (*(int *)(param_1 + 4) - *(int *)(param_1 + 0x50)) - 1U & 0xfffffc00;
}


/* END FUNCTION 0x100be500 */

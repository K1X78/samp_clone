/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ad480
 * Name: FUN_100ad480
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100ad480(int param_1)

{
  if ((*(int *)(param_1 + 0x2a4) != 0) && ((*(byte *)(*(int *)(param_1 + 0x2a4) + 0x46c) & 3) != 0))
  {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100ad480 */

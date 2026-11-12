/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ab9f0
 * Name: FUN_100ab9f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100ab9f0(int param_1)

{
  if (*(int *)(param_1 + 0x2a4) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x2a4) + 0x46c);
}


/* END FUNCTION 0x100ab9f0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b7200
 * Name: FUN_100b7200
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100b7200(int param_1)

{
  if (*(int *)(param_1 + 0x4c) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x86c);
  }
  return 0;
}


/* END FUNCTION 0x100b7200 */

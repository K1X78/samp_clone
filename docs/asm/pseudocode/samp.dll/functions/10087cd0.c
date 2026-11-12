/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10087cd0
 * Name: FUN_10087cd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_10087cd0(int param_1)

{
  if (*(int *)(param_1 + 0x152) < 0) {
    return 0;
  }
  return *(undefined4 *)
          (*(int *)(*(int *)(param_1 + 0x255) + *(int *)(param_1 + 0x152) * 4) + 0x100);
}


/* END FUNCTION 0x10087cd0 */

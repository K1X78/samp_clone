/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10086b40
 * Name: FUN_10086b40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10086b40(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x13a) == 0) {
    return 0;
  }
  return *(undefined4 *)
          (*(int *)(*(int *)(param_1 + 0x13a) + 0x14) +
          *(int *)(*(int *)(param_1 + 0x152) + param_2 * 4) * 4);
}


/* END FUNCTION 0x10086b40 */

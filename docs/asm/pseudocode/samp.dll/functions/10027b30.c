/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10027b30
 * Name: FUN_10027b30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10027b30(int param_1,uint param_2)

{
  if (*(uint *)(param_1 + 0x1c) <= param_2) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x20 + param_2 * 0x24);
}


/* END FUNCTION 0x10027b30 */

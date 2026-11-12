/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ea070
 * Name: FUN_100ea070
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100ea070(int param_1)

{
  if ((*(int *)(param_1 + 0x628) != 0) && (*(int *)(*(int *)(param_1 + 0x628) + 0x401c) != 2)) {
    return 0;
  }
  return 1;
}


/* END FUNCTION 0x100ea070 */

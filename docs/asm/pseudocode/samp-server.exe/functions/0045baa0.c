/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045baa0
 * Name: FUN_0045baa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0045baa0(int param_1,int param_2)

{
  if ((0 < param_2) && (*(int *)(*(int *)(param_1 + 0xcc + param_2 * 4) + 4) < 0x20)) {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x0045baa0 */

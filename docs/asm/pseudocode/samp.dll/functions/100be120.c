/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100be120
 * Name: FUN_100be120
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool FUN_100be120(int *param_1)

{
  if (*(char *)((int)param_1 + 0x1f) != '\0') {
    return false;
  }
  return (uint)((param_1[0xf] + param_1[0xd]) - *param_1) <= (uint)param_1[0x11];
}


/* END FUNCTION 0x100be120 */

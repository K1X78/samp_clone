/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10099900
 * Name: FUN_10099900
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_10099900(int param_1)

{
  if (param_1 == 1) {
    return "D3DDEVTYPE_HA";
  }
  if (param_1 != 2) {
    if (param_1 != 3) {
      return "Unknown devType";
    }
    return "D3DDEVTYPE_SW";
  }
  return "D3DDEVTYPE_REF";
}


/* END FUNCTION 0x10099900 */

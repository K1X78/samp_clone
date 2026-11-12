/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10099ab0
 * Name: FUN_10099ab0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_10099ab0(uint param_1)

{
  if (param_1 < 5) {
    if (param_1 == 4) {
      return "D3DPRESENT_INTERVAL_THREE";
    }
    if (param_1 == 0) {
      return "D3DPRESENT_INTERVAL_DEFAULT";
    }
    if (param_1 == 1) {
      return "D3DPRESENT_INTERVAL_ONE";
    }
    if (param_1 == 2) {
      return "D3DPRESENT_INTERVAL_TWO";
    }
  }
  else {
    if (param_1 == 8) {
      return "D3DPRESENT_INTERVAL_FOUR";
    }
    if (param_1 == 0x80000000) {
      return "D3DPRESENT_INTERVAL_IMMEDIATE";
    }
  }
  return "Unknown PresentInterval";
}


/* END FUNCTION 0x10099ab0 */

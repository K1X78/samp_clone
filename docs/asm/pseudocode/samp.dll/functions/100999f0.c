/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100999f0
 * Name: FUN_100999f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_100999f0(undefined4 param_1)

{
  switch(param_1) {
  case 0x10:
    return "Pure hardware vertex processing";
  default:
    return "Unknown vertex processing type";
  case 0x20:
    return "Software vertex processing";
  case 0x40:
    return "Hardware vertex processing";
  case 0x80:
    return "Mixed vertex processing";
  }
}


/* END FUNCTION 0x100999f0 */

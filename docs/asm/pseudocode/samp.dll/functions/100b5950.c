/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b5950
 * Name: FUN_100b5950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100b5950(char param_1)

{
  if ((((param_1 < '0') || ('9' < param_1)) && ((param_1 < 'A' || ('F' < param_1)))) &&
     ((param_1 < 'a' || ('f' < param_1)))) {
    return 0;
  }
  return 1;
}


/* END FUNCTION 0x100b5950 */

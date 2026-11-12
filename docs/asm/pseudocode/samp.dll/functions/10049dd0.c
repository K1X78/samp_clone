/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10049dd0
 * Name: FUN_10049dd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_10049dd0(uint *param_1,uint *param_2)

{
  if (*param_1 < *param_2) {
    return 0xffffffff;
  }
  return (uint)(*param_1 != *param_2);
}


/* END FUNCTION 0x10049dd0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10044590
 * Name: FUN_10044590
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_10044590(ushort *param_1,ushort *param_2)

{
  if (*param_1 < *param_2) {
    return 0xffffffff;
  }
  return (uint)(*param_1 != *param_2);
}


/* END FUNCTION 0x10044590 */

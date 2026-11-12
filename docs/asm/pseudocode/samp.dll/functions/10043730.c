/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10043730
 * Name: FUN_10043730
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_10043730(uint *param_1,int *param_2)

{
  if (*param_1 < *(uint *)(*param_2 + 0x13)) {
    return 0xffffffff;
  }
  return (uint)(*param_1 != *(uint *)(*param_2 + 0x13));
}


/* END FUNCTION 0x10043730 */

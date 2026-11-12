/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bc710
 * Name: FUN_100bc710
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100bc710(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_100bc150(param_2,0xc);
    FUN_100bc150(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x14));
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + *(int *)(param_2 + 0x14) + 0xc;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100bc710 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d8570
 * Name: FUN_100d8570
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100d8570(int param_1,int param_2,int param_3,int param_4)

{
  param_1 = param_1 - param_3;
  if (0x862 < param_1) {
    return 0x7fffffff;
  }
  if (param_1 < -0x862) {
    return -0x80000000;
  }
  return (param_1 * 1000000 - param_4) + param_2;
}


/* END FUNCTION 0x100d8570 */

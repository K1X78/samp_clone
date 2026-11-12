/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ba100
 * Name: FUN_100ba100
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100ba100(int param_1,int param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -8) {
    param_3[-2] = *(undefined4 *)(param_2 + -8);
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    param_3 = param_3 + -2;
  }
  return;
}


/* END FUNCTION 0x100ba100 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b86b0
 * Name: FUN_100b86b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100b86b0(undefined4 param_1,undefined4 *param_2)

{
  if ((void *)*param_2 != (void *)0x0) {
    _free((void *)*param_2);
    *param_2 = 0;
  }
  _free(param_2);
  return 0;
}


/* END FUNCTION 0x100b86b0 */

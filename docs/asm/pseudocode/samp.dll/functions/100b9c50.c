/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b9c50
 * Name: FUN_100b9c50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100b9c50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
  }
  return;
}


/* END FUNCTION 0x100b9c50 */

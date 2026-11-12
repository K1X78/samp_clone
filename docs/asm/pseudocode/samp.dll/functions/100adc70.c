/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100adc70
 * Name: FUN_100adc70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100adc70(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x2a4) != 0) {
    *(undefined4 *)(param_1 + 0x48) = param_2;
    FUN_100b1f10(&DAT_1011f198,*(undefined4 *)(param_1 + 0x44),param_2);
  }
  return;
}


/* END FUNCTION 0x100adc70 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100adc20
 * Name: FUN_100adc20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100adc20(int param_1)

{
  if ((*(int *)(param_1 + 0x2a4) != 0) &&
     (DAT_102a92a0 = *(int *)(*(int *)(*(int *)(param_1 + 0x2a4) + 0x47c) + 0x2c), DAT_102a92a0 != 0
     )) {
    (*(code *)0x639330)(1);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2a4) + 0x47c) + 0x2c) = 0;
  }
  return;
}


/* END FUNCTION 0x100adc20 */

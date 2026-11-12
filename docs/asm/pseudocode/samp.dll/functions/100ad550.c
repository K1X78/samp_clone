/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ad550
 * Name: FUN_100ad550
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100ad550(int param_1,float param_2)

{
  if (((param_2 <= 100.0) && (-100.0 <= param_2)) && (*(int *)(param_1 + 0x2a4) != 0)) {
    *(float *)(*(int *)(*(int *)(param_1 + 0x2a4) + 0x480) + 0x54) = param_2;
  }
  return;
}


/* END FUNCTION 0x100ad550 */

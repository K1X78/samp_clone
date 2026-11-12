/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b7440
 * Name: FUN_100b7440
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100b7440(int param_1,float param_2)

{
  if (((param_2 <= 100.0) && (-100.0 <= param_2)) && (*(int *)(param_1 + 0x4c) != 0)) {
    *(float *)(*(int *)(param_1 + 0x4c) + 0x5a4) = param_2;
  }
  return;
}


/* END FUNCTION 0x100b7440 */

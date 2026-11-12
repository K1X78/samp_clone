/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100aba70
 * Name: FUN_100aba70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100aba70(int param_1,byte param_2)

{
  if (*(int *)(param_1 + 0x2a4) != 0) {
    *(uint *)(*(int *)(param_1 + 0x2a4) + 0x530) = (uint)param_2;
  }
  return;
}


/* END FUNCTION 0x100aba70 */

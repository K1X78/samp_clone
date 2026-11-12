/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10014390
 * Name: FUN_10014390
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10014390(int param_1,int param_2)

{
  if ((param_2 == 0) && (*(int *)(param_1 + 0x1f9) != 0)) {
    FUN_100a0ce0(*(int *)(param_1 + 0x1f9));
    *(undefined4 *)(param_1 + 0x1f9) = 0;
  }
  *(int *)(param_1 + 0x1e9) = param_2;
  return;
}


/* END FUNCTION 0x10014390 */

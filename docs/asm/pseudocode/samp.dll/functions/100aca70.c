/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100aca70
 * Name: FUN_100aca70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100aca70(int param_1,int param_2)

{
  *(int *)(param_1 + 0x2e2) = param_2;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x2f7) = 1;
    *(undefined1 *)(param_1 + 0x2f6) = 1;
    *(undefined1 *)(param_1 + 0x2f8) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x2f7) = 0;
  *(undefined1 *)(param_1 + 0x2f6) = 0;
  *(undefined1 *)(param_1 + 0x2f8) = 0;
  return;
}


/* END FUNCTION 0x100aca70 */

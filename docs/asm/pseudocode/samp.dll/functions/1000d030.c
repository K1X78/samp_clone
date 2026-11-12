/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000d030
 * Name: FUN_1000d030
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1000d030(int param_1,int param_2)

{
  *(int *)(param_1 + 0x21b) = param_2;
  if (*(int *)(param_1 + 4) == param_2) {
    *(undefined1 *)(param_1 + 0x21f) = 1;
    FUN_1000cbf0();
    if (*(int *)(param_1 + 0x213) == 0) {
      *(undefined4 *)(param_1 + 0x213) = 2;
    }
  }
  return;
}


/* END FUNCTION 0x1000d030 */

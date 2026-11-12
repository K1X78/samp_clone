/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006df10
 * Name: FUN_1006df10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1006df10(int param_1)

{
  if ((*(int *)(param_1 + 0xc) == 0) || (*(int *)(param_1 + 0x10) == 0)) {
    FUN_1006dad0();
    if (*(int *)(param_1 + 0xc) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      return;
    }
  }
  (**(code **)(**(int **)(param_1 + 0xc) + 0x10))(*(int **)(param_1 + 0xc));
  (**(code **)(**(int **)(param_1 + 0x10) + 0x14))(*(int **)(param_1 + 0x10));
  return;
}


/* END FUNCTION 0x1006df10 */

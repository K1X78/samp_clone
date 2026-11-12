/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10037050
 * Name: FUN_10037050
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10037050(int param_1)

{
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x24))(1000,0);
    if (*(uint *)(param_1 + 0x14) != 0) {
      if (0x20 < *(uint *)(param_1 + 0x14)) {
        _free(*(void **)(param_1 + 8));
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    if (*(uint *)(param_1 + 0x24) != 0) {
      if (0x20 < *(uint *)(param_1 + 0x24)) {
        _free(*(void **)(param_1 + 0x18));
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
  }
  return;
}


/* END FUNCTION 0x10037050 */

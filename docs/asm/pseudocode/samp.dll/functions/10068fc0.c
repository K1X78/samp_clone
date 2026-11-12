/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10068fc0
 * Name: FUN_10068fc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10068fc0(int param_1)

{
  if (*(int *)(param_1 + 0x14e0) != 0) {
    if (*(int **)(param_1 + 8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 8) + 0x24))();
      (**(code **)(**(int **)(param_1 + 8) + 0x38))(0);
      (**(code **)(**(int **)(param_1 + 8) + 0x40))(0);
    }
    FUN_100a0530(0,1);
    *(undefined4 *)(param_1 + 0x14e0) = 0;
  }
  return;
}


/* END FUNCTION 0x10068fc0 */

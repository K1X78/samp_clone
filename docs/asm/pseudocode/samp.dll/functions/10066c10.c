/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10066c10
 * Name: FUN_10066c10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10066c10(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x63be);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x63be) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x63ba);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x63ba) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x63b6);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x63b6) = 0;
  }
  return;
}


/* END FUNCTION 0x10066c10 */

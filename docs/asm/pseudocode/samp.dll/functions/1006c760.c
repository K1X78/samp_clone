/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006c760
 * Name: FUN_1006c760
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1006c760(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    _free(*(void **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


/* END FUNCTION 0x1006c760 */

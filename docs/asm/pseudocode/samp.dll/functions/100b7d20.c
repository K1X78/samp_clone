/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b7d20
 * Name: FUN_100b7d20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100b7d20(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x8f);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x8f) = 0;
  }
  return;
}


/* END FUNCTION 0x100b7d20 */

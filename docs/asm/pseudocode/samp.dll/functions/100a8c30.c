/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a8c30
 * Name: FUN_100a8c30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100a8c30(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x40);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0x863c40)) {
    piVar1[7] = piVar1[7] | 0x10000000;
    (**(code **)(**(int **)(param_1 + 0x40) + 0x4c))();
    *(undefined1 *)(param_1 + 0x1194) = 1;
  }
  return;
}


/* END FUNCTION 0x100a8c30 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009f5d0
 * Name: FUN_1009f5d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1009f5d0(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x40);
  if (((piVar1 != (int *)0x0) && (piVar1[6] != 0)) && (*piVar1 != 0x863c40)) {
    (*(code *)0x732b00)(piVar1[6],param_2);
  }
  return;
}


/* END FUNCTION 0x1009f5d0 */

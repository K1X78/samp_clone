/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10091330
 * Name: FUN_10091330
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_10091330(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x208);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x208) = 0;
  }
  return 0;
}


/* END FUNCTION 0x10091330 */

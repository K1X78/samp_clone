/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10069580
 * Name: FUN_10069580
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10069580(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x137);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x137) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x13b);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x13b) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x13f);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x13f) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x143);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x143) = 0;
  }
  return;
}


/* END FUNCTION 0x10069580 */

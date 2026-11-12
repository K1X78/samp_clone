/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10086a60
 * Name: FUN_10086a60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10086a60(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1[6]) {
    do {
      piVar1 = *(int **)(*(int *)(param_1[5] + iVar2 * 4) + 0x104);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x40))(piVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[6]);
  }
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
  }
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
  }
  return;
}


/* END FUNCTION 0x10086a60 */

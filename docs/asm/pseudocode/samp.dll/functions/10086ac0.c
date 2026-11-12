/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10086ac0
 * Name: FUN_10086ac0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10086ac0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + iVar3 * 4);
      piVar2 = *(int **)(iVar1 + 0x104);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        *(undefined4 *)(iVar1 + 0x104) = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x18));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + iVar3 * 4);
      piVar2 = *(int **)(iVar1 + 0x104);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        *(undefined4 *)(iVar1 + 0x104) = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xc));
  }
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


/* END FUNCTION 0x10086ac0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100986f0
 * Name: FUN_100986f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100986f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[4] + -1;
  if (-1 < iVar3) {
    iVar2 = iVar3 * 0x114;
    do {
      piVar1 = *(int **)(param_1[3] + 0x110 + iVar2);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(param_1[3] + 0x110 + iVar2) = 0;
      }
      FUN_10095ac0(iVar3);
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + -0x114;
    } while (-1 < iVar3);
  }
  iVar3 = param_1[7] + -1;
  if (-1 < iVar3) {
    iVar2 = iVar3 * 0x3c;
    do {
      piVar1 = *(int **)(param_1[6] + 0x38 + iVar2);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(param_1[6] + 0x38 + iVar2) = 0;
      }
      FUN_10095b20(iVar3);
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + -0x3c;
    } while (-1 < iVar3);
  }
  iVar3 = param_1[1] + -1;
  if (-1 < iVar3) {
    iVar2 = iVar3 * 0x130;
    do {
      piVar1 = *(int **)(iVar2 + 300 + *param_1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(iVar2 + 300 + *param_1) = 0;
      }
      FUN_10095a60(iVar3);
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + -0x130;
    } while (-1 < iVar3);
  }
  return 0;
}


/* END FUNCTION 0x100986f0 */

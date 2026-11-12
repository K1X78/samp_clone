/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10098630
 * Name: FUN_10098630
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_10098630(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_1[4]) {
    iVar2 = 0;
    do {
      piVar1 = *(int **)(iVar2 + 0x110 + param_1[3]);
      (**(code **)(*piVar1 + 0x114))(piVar1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x114;
    } while (iVar3 < param_1[4]);
  }
  iVar3 = 0;
  if (0 < param_1[7]) {
    iVar2 = 0;
    do {
      piVar1 = *(int **)(iVar2 + 0x38 + param_1[6]);
      (**(code **)(*piVar1 + 0x40))(piVar1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x3c;
    } while (iVar3 < param_1[7]);
  }
  iVar3 = param_1[1] + -1;
  if (-1 < iVar3) {
    iVar2 = iVar3 * 0x130;
    do {
      if (*(int *)(iVar2 + 0x124 + *param_1) == 0) {
        piVar1 = *(int **)(iVar2 + *param_1 + 300);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          *(undefined4 *)(iVar2 + 300 + *param_1) = 0;
        }
        FUN_10095a60(iVar3);
      }
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + -0x130;
    } while (-1 < iVar3);
  }
  return 0;
}


/* END FUNCTION 0x10098630 */

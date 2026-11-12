/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e0b20
 * Name: FUN_100e0b20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e0b20(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)(*(code *)PTR__malloc_101554b8)(0x1c);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  iVar2 = (*(code *)PTR___strdup_101554c4)(param_3);
  if (iVar2 == 0) {
    (*(code *)PTR__free_101554bc)(piVar1);
    return 0;
  }
  if (param_1 != 2) {
    (*(code *)PTR__free_101554bc)(iVar2);
    (*(code *)PTR__free_101554bc)(piVar1);
    return 0;
  }
  piVar1[4] = *param_2;
  piVar1[3] = (int)(piVar1 + 5);
  *piVar1 = iVar2;
  piVar1[1] = 0;
  *(undefined2 *)(piVar1 + 2) = 2;
  *(undefined2 *)((int)piVar1 + 10) = 4;
  piVar1[5] = (int)(piVar1 + 4);
  *(undefined4 *)(piVar1[3] + 4) = 0;
  uVar3 = FUN_100e09f0(piVar1,param_4);
  (*(code *)PTR__free_101554bc)(iVar2);
  (*(code *)PTR__free_101554bc)(piVar1);
  return uVar3;
}


/* END FUNCTION 0x100e0b20 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e5510
 * Name: FUN_100e5510
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e5510(int *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  uVar2 = param_1[2];
  if (~param_3 < uVar2) {
    (*(code *)PTR__free_101554bc)(*param_1);
    *param_1 = 0;
    (*(code *)PTR__free_101554bc)(param_1);
    return 0x1b;
  }
  iVar1 = *param_1;
  if ((iVar1 == 0) || (param_1[1] - 1U < uVar2 + param_3)) {
    if ((param_3 < 0x80000000) && ((uVar2 < 0x80000000 && (uVar2 * 2 <= ~(param_3 * 2))))) {
      iVar3 = (uVar2 + param_3) * 2;
    }
    else {
      iVar3 = -1;
    }
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR__malloc_101554b8)(iVar3);
    }
    else {
      iVar1 = FUN_100d9990(iVar1);
    }
    if (iVar1 == 0) {
      (*(code *)PTR__free_101554bc)(param_1);
      return 0x1b;
    }
    *param_1 = iVar1;
    param_1[1] = iVar3;
  }
  puVar4 = (undefined4 *)(*param_1 + param_1[2]);
  for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar2 = param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  param_1[2] = param_1[2] + param_3;
  return 0;
}


/* END FUNCTION 0x100e5510 */

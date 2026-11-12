/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e4280
 * Name: FUN_100e4280
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e4280(int *param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar2 = (*(code *)param_1[1])(param_2,param_3,param_1[4]);
  piVar1 = *(int **)(iVar2 * 0x10 + *param_1);
  iVar2 = iVar2 * 0x10 + *param_1;
  do {
    if (piVar1 == (int *)0x0) {
LAB_100e42e5:
      iVar3 = (*(code *)PTR__malloc_101554b8)(param_3 + 0x18);
      if (iVar3 != 0) {
        puVar5 = (undefined4 *)(iVar3 + 0x14);
        for (uVar4 = param_3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = *param_2;
          param_2 = param_2 + 1;
          puVar5 = puVar5 + 1;
        }
        for (uVar4 = param_3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar5 = *(undefined1 *)param_2;
          param_2 = (undefined4 *)((int)param_2 + 1);
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        *(uint *)(iVar3 + 0x10) = param_3;
        *(undefined4 *)(iVar3 + 0xc) = param_4;
        FUN_100e8960(iVar2,*(undefined4 *)(iVar2 + 4),iVar3,iVar3);
        param_1[5] = param_1[5] + 1;
        return param_4;
      }
      return 0;
    }
    iVar3 = (*(code *)param_1[2])(*piVar1 + 0x14,*(undefined4 *)(*piVar1 + 0x10),param_2,param_3);
    if (iVar3 != 0) {
      FUN_100e89e0(iVar2,piVar1,param_1);
      param_1[5] = param_1[5] + -1;
      goto LAB_100e42e5;
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
}


/* END FUNCTION 0x100e4280 */

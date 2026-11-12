/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e09f0
 * Name: FUN_100e09f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100e09f0(undefined4 *param_1,u_short param_2)

{
  short sVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  u_short uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int local_4;
  
  puVar3 = param_1;
  local_4 = 0;
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  puVar7 = *(undefined4 **)param_1[3];
  if (puVar7 != (undefined4 *)0x0) {
    param_1 = (undefined4 *)0x0;
    iVar8 = 0;
    while( true ) {
      iVar5 = (*(code *)PTR__calloc_101554c8)(1,0x20);
      if (iVar5 == 0) break;
      iVar6 = (*(code *)PTR___strdup_101554c4)(*puVar3);
      *(int *)(iVar5 + 0x14) = iVar6;
      if (iVar6 == 0) {
        (*(code *)PTR__free_101554bc)(iVar5);
        break;
      }
      iVar6 = (*(code *)PTR__calloc_101554c8)(1,0x10);
      *(int *)(iVar5 + 0x18) = iVar6;
      if (iVar6 == 0) {
        (*(code *)PTR__free_101554bc)(*(undefined4 *)(iVar5 + 0x14));
        (*(code *)PTR__free_101554bc)(iVar5);
        break;
      }
      if (local_4 == 0) {
        local_4 = iVar5;
      }
      if (iVar8 != 0) {
        *(int *)(iVar8 + 0x1c) = iVar5;
      }
      sVar1 = *(short *)(puVar3 + 2);
      *(int *)(iVar5 + 4) = (int)sVar1;
      *(undefined4 *)(iVar5 + 8) = 1;
      *(undefined4 *)(iVar5 + 0x10) = 0x10;
      if (sVar1 == 2) {
        puVar2 = *(undefined2 **)(iVar5 + 0x18);
        *(undefined4 *)(puVar2 + 2) = *puVar7;
        *puVar2 = *(undefined2 *)(puVar3 + 2);
        uVar4 = htons(param_2);
        puVar2[1] = uVar4;
      }
      puVar7 = *(undefined4 **)((int)param_1 + 4 + puVar3[3]);
      param_1 = (undefined4 *)((int)param_1 + 4);
      iVar8 = iVar5;
      if (puVar7 == (undefined4 *)0x0) {
        return local_4;
      }
    }
    FUN_100e07d0(local_4);
  }
  return 0;
}


/* END FUNCTION 0x100e09f0 */

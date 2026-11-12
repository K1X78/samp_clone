/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ebbb0
 * Name: FUN_100ebbb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100ebbb0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  char acStack_80 [128];
  
  iVar2 = *param_2;
  puVar3 = (undefined4 *)FUN_100ebaa0(param_2,*(undefined4 *)(iVar2 + 0x838));
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(*(code *)PTR__malloc_101554b8)(0x18);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = 0;
      *puVar3 = 0;
      FUN_100e8940(puVar3 + 2,&LAB_100eb8a0);
      FUN_100eba40(0x80);
      if (*(int *)(iVar2 + 0x6c) != 0) {
        FUN_100dec30(iVar2,5,2);
      }
      pcVar4 = acStack_80;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      iVar5 = FUN_100e4280(*(undefined4 *)(iVar2 + 0x838),acStack_80,
                           (int)pcVar4 - (int)(acStack_80 + 1),puVar3);
      if (*(int *)(iVar2 + 0x6c) != 0) {
        FUN_100dec70(iVar2,5);
      }
      if (iVar5 != 0) goto LAB_100ebc9d;
      FUN_100e8a60(puVar3 + 2,0);
      (*(code *)PTR__free_101554bc)(puVar3);
    }
    return 0x1b;
  }
LAB_100ebc9d:
  if (*(int *)(iVar2 + 0x6c) != 0) {
    FUN_100dec30(iVar2,5,2);
  }
  FUN_100e8960(puVar3 + 2,puVar3[3],param_2,param_2 + 1);
  param_2[0x18b] = (int)puVar3;
  puVar3[1] = puVar3[1] + 1;
  if (*(int *)(iVar2 + 0x6c) != 0) {
    FUN_100dec70(iVar2,5);
  }
  param_2[0x13] = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return 0;
}


/* END FUNCTION 0x100ebbb0 */

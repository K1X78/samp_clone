/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cf260
 * Name: FUN_100cf260
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100cf260(int param_1,int param_2,char *param_3,char *param_4,uint param_5)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = (*(code *)PTR__malloc_101554b8)(pcVar2 + param_5 + (2 - (int)(param_3 + 1)));
  if (iVar3 == 0) {
    return 0x1b;
  }
  FUN_100cc780(iVar3,pcVar2 + param_5 + (2 - (int)(param_3 + 1)),&DAT_101240f4,param_3);
  iVar4 = iVar3 - (int)(param_3 + 1);
  pcVar6 = pcVar2 + iVar4 + 1;
  for (uVar5 = param_5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)param_4;
    param_4 = param_4 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar5 = param_5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar6 = *param_4;
    param_4 = param_4 + 1;
    pcVar6 = pcVar6 + 1;
  }
  pcVar2[param_5 + iVar4 + 1] = '\0';
  iVar4 = FUN_100d9b30(*(undefined4 *)(*(int *)(param_1 + 0x4bf4) + param_2 * 4),iVar3);
  if (iVar4 == 0) {
    (*(code *)PTR__free_101554bc)(iVar3);
    FUN_100d9bb0(*(undefined4 *)(*(int *)(param_1 + 0x4bf4) + param_2 * 4));
    *(undefined4 *)(*(int *)(param_1 + 0x4bf4) + param_2 * 4) = 0;
    return 0x1b;
  }
  *(int *)(*(int *)(param_1 + 0x4bf4) + param_2 * 4) = iVar4;
  return 0;
}


/* END FUNCTION 0x100cf260 */

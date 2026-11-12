/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e3c50
 * Name: FUN_100e3c50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e3c50(char *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  
  iVar8 = 0;
  iVar6 = 0;
  *param_2 = 0;
  *param_3 = 0;
  pcVar3 = param_1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  uVar4 = (int)pcVar3 - (int)(param_1 + 1);
  if ((uVar4 != 0) && ((uVar4 & 3) == 0)) {
    cVar2 = *param_1;
    while ((cVar2 != '=' && (cVar2 != '\0'))) {
      iVar1 = iVar8 + 1;
      iVar8 = iVar8 + 1;
      cVar2 = param_1[iVar1];
    }
    if ((param_1[iVar8] == '=') && (iVar6 = 1, param_1[iVar8 + 1] == '=')) {
      iVar6 = 2;
    }
    if (iVar8 + iVar6 == uVar4) {
      uVar4 = uVar4 >> 2;
      iVar6 = uVar4 * 3 - iVar6;
      puVar5 = (undefined1 *)(*(code *)PTR__malloc_101554b8)(iVar6 + 1);
      if (puVar5 == (undefined1 *)0x0) {
        return 0x1b;
      }
      uVar7 = 0;
      puVar9 = puVar5;
      if (uVar4 != 0) {
        do {
          iVar8 = FUN_100e3b90(puVar9);
          if (iVar8 == 0) {
            (*(code *)PTR__free_101554bc)(puVar5);
            return 0x3d;
          }
          puVar9 = puVar9 + iVar8;
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar4);
      }
      *puVar9 = 0;
      *param_2 = puVar5;
      *param_3 = iVar6;
      return 0;
    }
  }
  return 0x3d;
}


/* END FUNCTION 0x100e3c50 */

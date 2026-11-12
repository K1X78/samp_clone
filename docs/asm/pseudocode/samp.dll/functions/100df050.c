/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100df050
 * Name: FUN_100df050
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_100df050(void)

{
  undefined **ppuVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined **ppuVar7;
  char *pcVar8;
  char *pcVar9;
  
  pcVar9 = (char *)0x0;
  ppuVar7 = &PTR_PTR_10125a58;
  do {
    puVar3 = (undefined4 *)*ppuVar7;
    iVar4 = FUN_100de830(*puVar3,"identity");
    if (iVar4 == 0) {
      pcVar5 = (char *)*puVar3;
      pcVar8 = pcVar5 + 1;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      pcVar9 = pcVar5 + (int)(pcVar9 + (2 - (int)pcVar8));
    }
    ppuVar1 = ppuVar7 + 1;
    ppuVar7 = ppuVar7 + 1;
  } while (*ppuVar1 != (undefined *)0x0);
  if (pcVar9 != (char *)0x0) {
    pcVar9 = (char *)(*(code *)PTR__malloc_101554b8)(pcVar9);
    if (pcVar9 != (char *)0x0) {
      ppuVar7 = &PTR_PTR_10125a58;
      pcVar8 = pcVar9;
      do {
        puVar3 = (undefined4 *)*ppuVar7;
        iVar4 = FUN_100de830(*puVar3,"identity");
        if (iVar4 == 0) {
          pcVar5 = (char *)*puVar3;
          pcVar6 = pcVar8;
          do {
            cVar2 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            *pcVar6 = cVar2;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          do {
            pcVar5 = pcVar8;
            pcVar8 = pcVar5 + 1;
          } while (*pcVar5 != '\0');
          *pcVar5 = ',';
          pcVar5[1] = ' ';
          pcVar8 = pcVar5 + 2;
        }
        ppuVar1 = ppuVar7 + 1;
        ppuVar7 = ppuVar7 + 1;
      } while (*ppuVar1 != (undefined *)0x0);
      pcVar8[-2] = '\0';
    }
    return pcVar9;
  }
  pcVar9 = (char *)(*(code *)PTR___strdup_101554c4)("identity");
  return pcVar9;
}


/* END FUNCTION 0x100df050 */

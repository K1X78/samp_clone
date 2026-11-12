/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e8e50
 * Name: FUN_100e8e50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e8e50(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_100e8a60(param_2,0);
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_100e8940(param_2,&LAB_100e8b60);
    pcVar3 = (char *)*param_1;
    while (pcVar3 != (char *)0x0) {
      pcVar5 = pcVar3 + 1;
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      iVar4 = (*(code *)PTR__malloc_101554b8)(pcVar3 + (0x10 - (int)pcVar5));
      if (iVar4 == 0) {
        FUN_100e8a60(param_2,0);
        return 3;
      }
      pcVar5 = (char *)*param_1;
      pcVar3 = (char *)(iVar4 + 0xc);
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        *pcVar3 = cVar2;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      FUN_100e8960(param_2,*(undefined4 *)(param_2 + 4),iVar4,iVar4);
      puVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      pcVar3 = (char *)*puVar1;
    }
  }
  return 0;
}


/* END FUNCTION 0x100e8e50 */

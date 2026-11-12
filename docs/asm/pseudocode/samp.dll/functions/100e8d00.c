/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e8d00
 * Name: FUN_100e8d00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e8d00(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_100e8a60(param_2,0);
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_100e8940(param_2,&LAB_100e8b50);
    pcVar3 = (char *)*param_1;
    while (pcVar3 != (char *)0x0) {
      pcVar6 = pcVar3 + 1;
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      iVar4 = (*(code *)PTR__malloc_101554b8)(pcVar3 + (0x10 - (int)pcVar6));
      if (iVar4 == 0) {
        FUN_100e8a60(param_2,0);
        return 3;
      }
      pcVar3 = (char *)*param_1;
      pcVar6 = (char *)(iVar4 + 0xe);
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        *pcVar6 = cVar2;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      pcVar3 = _strchr((char *)(iVar4 + 0xe),0x3a);
      if (pcVar3 == (char *)0x0) {
        *(undefined2 *)(iVar4 + 0xc) = 0x50;
      }
      else {
        *pcVar3 = '\0';
        lVar5 = _strtol(pcVar3 + 1,(char **)0x0,10);
        *(short *)(iVar4 + 0xc) = (short)lVar5;
      }
      FUN_100e8960(param_2,*(undefined4 *)(param_2 + 4),iVar4,iVar4);
      puVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      pcVar3 = (char *)*puVar1;
    }
  }
  return 0;
}


/* END FUNCTION 0x100e8d00 */

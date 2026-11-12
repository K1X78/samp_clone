/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d2100
 * Name: FUN_100d2100
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_100d2100(undefined4 param_1,int param_2,char *param_3,undefined4 *param_4,undefined4 *param_5)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  
  pcVar10 = param_3;
  *param_4 = 0;
  *param_5 = 0xffffffff;
  if (*param_3 != ':') {
    puVar9 = &DAT_10117f50;
    if (*(int *)(param_2 + 0x2a8) == 0) {
      puVar9 = &DAT_10117a39;
      puVar3 = &DAT_10117a39;
    }
    else {
      puVar3 = &DAT_101183f8;
    }
    pcVar6 = (char *)FUN_100cd220("%s%s%s",puVar3,*(undefined4 *)(param_2 + 0xa0),puVar9);
    if (pcVar6 == (char *)0x0) {
      return 0x1b;
    }
    pcVar4 = pcVar6;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar5 = FUN_100de8c0(pcVar10,pcVar6,(int)pcVar4 - (int)(pcVar6 + 1));
    (*(code *)PTR__free_101554bc)(pcVar6);
    pcVar10 = pcVar10 + ((int)pcVar4 - (int)(pcVar6 + 1));
    if ((iVar5 == 0) || (*pcVar10 != ':')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
  }
  pcVar10 = pcVar10 + 1;
  if (*pcVar10 != ':') {
    pcVar6 = _strchr(pcVar10,0x3a);
    if (pcVar6 == (char *)0x0) {
      return 0;
    }
    param_3 = (char *)0x0;
    lVar7 = _strtol(pcVar10,&param_3,10);
    if (param_3 != pcVar6) {
      return 0;
    }
    if (lVar7 != *(int *)(param_2 + 0x100)) {
      return 0;
    }
  }
  uVar8 = FUN_100d1f40(param_1,param_4,param_5);
  return uVar8;
}


/* END FUNCTION 0x100d2100 */

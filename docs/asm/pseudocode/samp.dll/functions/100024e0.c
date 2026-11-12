/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100024e0
 * Name: FUN_100024e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100024e0(int param_1,int param_2,char *param_3,char *param_4,char *param_5)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  void *pvVar6;
  char *_Str;
  long lVar7;
  uint uVar8;
  int iVar9;
  
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = _malloc((size_t)(pcVar2 + (0x100 - (int)(param_3 + 1))));
  iVar9 = (int)pcVar2 - (int)param_3;
  do {
    cVar1 = *param_3;
    param_3[iVar9] = cVar1;
    param_3 = param_3 + 1;
  } while (cVar1 != '\0');
  *(int *)(param_1 + 6) = param_2;
  pcVar3 = param_5;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = _malloc((size_t)(pcVar3 + (1 - (int)(param_5 + 1))));
  *(char **)(param_1 + 0x16) = pcVar3;
  do {
    cVar1 = *param_5;
    param_5 = param_5 + 1;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (param_2 == 2) {
    pcVar3 = param_4;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = _malloc((size_t)(pcVar3 + (1 - (int)(param_4 + 1))));
    *(char **)(param_1 + 0x12) = pcVar3;
    do {
      cVar1 = *param_4;
      param_4 = param_4 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  pcVar3 = _strchr(pcVar2,0x2f);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = pcVar2 + -1;
    do {
      pcVar5 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar5 != '\0');
    pcVar3[0] = '/';
    pcVar3[1] = '\0';
    pcVar3 = _strchr(pcVar2,0x2f);
  }
  uVar4 = (int)pcVar3 - (int)pcVar2;
  pcVar5 = _malloc(uVar4 + 1);
  *(char **)(param_1 + 10) = pcVar5;
  pcVar3 = pcVar2;
  for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar8 = uVar4 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar5 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined1 *)(uVar4 + *(int *)(param_1 + 10)) = 0;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pvVar6 = _malloc((size_t)(pcVar3 + (-uVar4 - (int)(pcVar2 + 1)) + 1));
  *(void **)(param_1 + 0xe) = pvVar6;
  pcVar5 = _strchr(pcVar2,0x2f);
  pcVar3 = *(char **)(param_1 + 0xe);
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = _strchr(*(char **)(param_1 + 10),0x3a);
  if (pcVar3 != (char *)0x0) {
    pcVar5 = pcVar3;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    _Str = _malloc((int)pcVar5 - (int)(pcVar3 + 1));
    pcVar5 = pcVar3 + 1;
    iVar9 = (int)_Str - (int)pcVar5;
    do {
      cVar1 = *pcVar5;
      pcVar5[iVar9] = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    *pcVar3 = '\0';
    lVar7 = _atol(_Str);
    *(short *)(param_1 + 4) = (short)lVar7;
    _free(_Str);
    _free(pcVar2);
    return;
  }
  *(undefined2 *)(param_1 + 4) = 0x50;
  _free(pcVar2);
  return;
}


/* END FUNCTION 0x100024e0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100edd40
 * Name: FUN_100edd40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_100edd40(char *param_1)

{
  char cVar1;
  char *_Str;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcStack_c;
  
  iVar6 = 0;
  _Str = (char *)(*(code *)PTR___strdup_101554c4)();
  if (_Str == (char *)0x0) {
    return (char *)0x0;
  }
  pcVar2 = _strstr(_Str,"//");
  pcStack_c = _Str;
  if (pcVar2 != (char *)0x0) {
    pcStack_c = pcVar2 + 2;
  }
  if (*param_1 == '/') {
    if (param_1[1] == '/') {
      param_1 = param_1 + 2;
      *pcStack_c = '\0';
    }
    else {
      pcVar2 = _strchr(pcStack_c,0x2f);
      pcVar3 = _strchr(pcStack_c,0x3f);
      if (pcVar2 == (char *)0x0) {
        if (pcVar3 != (char *)0x0) {
          *pcVar3 = '\0';
        }
      }
      else {
        if ((pcVar3 != (char *)0x0) && (pcVar3 < pcVar2)) {
          pcVar2 = pcVar3;
        }
        *pcVar2 = '\0';
      }
    }
  }
  else {
    pcVar2 = _strchr(pcStack_c,0x3f);
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = '\0';
    }
    if ((*param_1 != '?') && (pcVar2 = _strrchr(pcStack_c,0x2f), pcVar2 != (char *)0x0)) {
      *pcVar2 = '\0';
    }
    pcStack_c = _strchr(pcStack_c,0x2f);
    if (pcStack_c == (char *)0x0) {
      pcStack_c = (char *)0x0;
    }
    else {
      pcStack_c = pcStack_c + 1;
    }
    if (*param_1 == '.') {
      if (param_1[1] == '/') {
        param_1 = param_1 + 2;
      }
      cVar1 = *param_1;
      for (; ((cVar1 == '.' && (param_1[1] == '.')) && (param_1[2] == '/')); param_1 = param_1 + 3)
      {
        cVar1 = param_1[3];
        iVar6 = iVar6 + 1;
      }
    }
    if (pcStack_c != (char *)0x0) {
      while (iVar6 != 0) {
        iVar6 = iVar6 + -1;
        pcVar2 = _strrchr(pcStack_c,0x2f);
        if (pcVar2 == (char *)0x0) {
          *pcStack_c = '\0';
          break;
        }
        *pcVar2 = '\0';
      }
    }
  }
  iVar6 = FUN_100edc40();
  pcVar2 = _Str;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar4 = (int)pcVar2 - (int)(_Str + 1);
  pcVar2 = (char *)(*(code *)PTR__malloc_101554b8)(uVar4 + 2 + iVar6);
  if (pcVar2 != (char *)0x0) {
    pcVar3 = _Str;
    pcVar7 = pcVar2;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar7 = pcVar7 + 1;
    }
    if (((*param_1 != '/') && ((pcStack_c == (char *)0x0 || (*pcStack_c != '\0')))) &&
       (*param_1 != '?')) {
      pcVar2[uVar4] = '/';
    }
    FUN_100edc90();
    (*(code *)PTR__free_101554bc)(_Str);
    return pcVar2;
  }
  (*(code *)PTR__free_101554bc)(_Str);
  return (char *)0x0;
}


/* END FUNCTION 0x100edd40 */

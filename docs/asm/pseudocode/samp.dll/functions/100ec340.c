/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ec340
 * Name: FUN_100ec340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_100ec340(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *_Str;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)(*(code *)PTR__malloc_101554b8)(pcVar2 + (1 - (int)(param_1 + 1)));
  if (pcVar2 == (char *)0x0) {
    return (char *)0x0;
  }
  _Str = (char *)(*(code *)PTR___strdup_101554c4)(param_1);
  if (_Str == (char *)0x0) {
    (*(code *)PTR__free_101554bc)(pcVar2);
    return (char *)0x0;
  }
  if (*_Str == '\0') {
    (*(code *)PTR__free_101554bc)(pcVar2);
    return _Str;
  }
  pcVar3 = _strchr(_Str,0x3f);
  pcVar6 = pcVar2;
  pcVar7 = _Str;
  if (pcVar3 != (char *)0x0) {
    *pcVar3 = '\0';
  }
  do {
    iVar4 = _strncmp("./",pcVar7,2);
    if (iVar4 == 0) {
      pcVar7 = pcVar7 + 2;
    }
    else {
      iVar4 = _strncmp("../",pcVar7,3);
      if (iVar4 == 0) {
        pcVar7 = pcVar7 + 3;
      }
      else {
        iVar4 = _strncmp("/./",pcVar7,3);
        if (iVar4 == 0) {
          pcVar7 = pcVar7 + 2;
        }
        else {
          iVar4 = 3;
          bVar10 = true;
          pcVar8 = "/.";
          pcVar9 = pcVar7;
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            bVar10 = *pcVar8 == *pcVar9;
            pcVar8 = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
          } while (bVar10);
          if (bVar10) {
            pcVar7[1] = '/';
            pcVar7 = pcVar7 + 1;
          }
          else {
            iVar4 = _strncmp("/../",pcVar7,4);
            if (iVar4 == 0) {
              pcVar7 = pcVar7 + 3;
              do {
                if (pcVar6 <= pcVar2) break;
                pcVar8 = pcVar6 + -1;
                pcVar6 = pcVar6 + -1;
              } while (*pcVar8 != '/');
              *pcVar6 = '\0';
            }
            else {
              iVar4 = 4;
              bVar10 = true;
              pcVar8 = "/..";
              pcVar9 = pcVar7;
              do {
                if (iVar4 == 0) break;
                iVar4 = iVar4 + -1;
                bVar10 = *pcVar8 == *pcVar9;
                pcVar8 = pcVar8 + 1;
                pcVar9 = pcVar9 + 1;
              } while (bVar10);
              if (bVar10) {
                pcVar7[2] = '/';
                pcVar7 = pcVar7 + 2;
                do {
                  if (pcVar6 <= pcVar2) break;
                  pcVar8 = pcVar6 + -1;
                  pcVar6 = pcVar6 + -1;
                } while (*pcVar8 != '/');
                *pcVar6 = '\0';
              }
              else {
                iVar4 = 2;
                bVar10 = true;
                pcVar8 = ".";
                pcVar9 = pcVar7;
                do {
                  if (iVar4 == 0) break;
                  iVar4 = iVar4 + -1;
                  bVar10 = *pcVar8 == *pcVar9;
                  pcVar8 = pcVar8 + 1;
                  pcVar9 = pcVar9 + 1;
                } while (bVar10);
                if (!bVar10) {
                  iVar4 = 3;
                  bVar10 = true;
                  pcVar8 = "..";
                  pcVar9 = pcVar7;
                  do {
                    if (iVar4 == 0) break;
                    iVar4 = iVar4 + -1;
                    bVar10 = *pcVar8 == *pcVar9;
                    pcVar8 = pcVar8 + 1;
                    pcVar9 = pcVar9 + 1;
                  } while (bVar10);
                  if (!bVar10) {
                    do {
                      *pcVar6 = *pcVar7;
                      pcVar8 = pcVar7 + 1;
                      pcVar6 = pcVar6 + 1;
                      pcVar7 = pcVar7 + 1;
                      if (*pcVar8 == '\0') break;
                    } while (*pcVar8 != '/');
                    *pcVar6 = '\0';
                    goto LAB_100ec4f2;
                  }
                }
                *pcVar7 = '\0';
                *pcVar2 = '\0';
              }
            }
          }
        }
      }
    }
LAB_100ec4f2:
    if (*pcVar7 == '\0') {
      if (pcVar3 != (char *)0x0) {
        param_1 = param_1 + ((int)pcVar3 - (int)_Str);
        pcVar7 = param_1;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        pcVar3 = param_1;
        for (uVar5 = (uint)(pcVar7 + (1 - (int)(param_1 + 1))) >> 2; uVar5 != 0; uVar5 = uVar5 - 1)
        {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar6 = pcVar6 + 4;
        }
        for (uVar5 = (uint)(pcVar7 + (1 - (int)(param_1 + 1))) & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar6 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar6 = pcVar6 + 1;
        }
      }
      (*(code *)PTR__free_101554bc)(_Str);
      return pcVar2;
    }
  } while( true );
}


/* END FUNCTION 0x100ec340 */

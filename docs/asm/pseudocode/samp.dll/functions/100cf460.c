/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cf460
 * Name: FUN_100cf460
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100cf460(undefined4 param_1,char *param_2,char *param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  FILE *_File;
  long lVar6;
  uint _ElementSize;
  size_t sVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  int local_14;
  char *local_10;
  int iStack_c;
  char *pcStack_8;
  uint uStack_4;
  
  uVar8 = param_4;
  pcVar5 = param_2;
  pcVar9 = (char *)0x0;
  local_10 = (char *)0x0;
  local_14 = 0x5a;
  if (param_2 == (char *)0x0) {
    return 0;
  }
  if (param_3 == (char *)0x0) {
    return 0x5a;
  }
  if (param_4 == 0) {
    return 0x5a;
  }
  iVar2 = _strncmp(param_2,"sha256//",8);
  if (iVar2 == 0) {
    if (*(int *)(PTR_DAT_10155510 + 0x5c) == 0) {
      return 0x5a;
    }
    iVar2 = (*(code *)PTR__malloc_101554b8)(0x20);
    if (iVar2 != 0) {
      (**(code **)(PTR_DAT_10155510 + 0x5c))(param_3,uVar8,iVar2,0x20);
      iVar3 = FUN_100e3f20(param_1,iVar2,0x20,&param_2,&iStack_c);
      (*(code *)PTR__free_101554bc)(iVar2);
      if (iVar3 != 0) {
        return iVar3;
      }
      FUN_100d8ae0(param_1,"\t public key hash: sha256//%s\n",param_2);
      pcVar9 = pcVar5;
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + (1 - (int)(pcVar5 + 1));
      pcVar4 = (char *)(*(code *)PTR__malloc_101554b8)(pcVar9);
      pcStack_8 = pcVar4;
      if (pcVar4 != (char *)0x0) {
        pcVar10 = pcVar4;
        for (uVar8 = (uint)pcVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar8 = (uint)pcVar9 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar10 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar10 = pcVar10 + 1;
        }
        do {
          pcVar5 = _strstr(pcVar4,";sha256//");
          if (pcVar5 != (char *)0x0) {
            *pcVar5 = '\0';
          }
          pcVar9 = pcVar4 + 8;
          do {
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar1 != '\0');
          if (iStack_c == (int)pcVar9 - (int)(pcVar4 + 9)) {
            bVar11 = true;
            iVar2 = iStack_c;
            pcVar9 = param_2;
            pcVar4 = pcVar4 + 8;
            do {
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              bVar11 = *pcVar9 == *pcVar4;
              pcVar9 = pcVar9 + 1;
              pcVar4 = pcVar4 + 1;
            } while (bVar11);
            if (bVar11) {
              local_14 = 0;
              break;
            }
          }
          if (pcVar5 == (char *)0x0) break;
          *pcVar5 = ';';
          pcVar4 = _strstr(pcVar5,"sha256//");
        } while (pcVar4 != (char *)0x0);
        (*(code *)PTR__free_101554bc)(param_2);
        param_2 = (char *)0x0;
        (*(code *)PTR__free_101554bc)(pcStack_8);
        return local_14;
      }
      (*(code *)PTR__free_101554bc)(param_2);
    }
    return 0x1b;
  }
  _File = (FILE *)FUN_100f9cc9(pcVar5,&DAT_10118e1c);
  if (_File == (FILE *)0x0) {
    return 0x5a;
  }
  iVar2 = _fseek(_File,0,2);
  if (iVar2 == 0) {
    lVar6 = _ftell(_File);
    iVar2 = _fseek(_File,0,0);
    if (((((iVar2 == 0) && (-1 < lVar6)) && (lVar6 < 0x100001)) &&
        ((_ElementSize = FUN_100d9a70(lVar6,lVar6 >> 0x1f), uVar8 <= _ElementSize &&
         (pcVar9 = (char *)(*(code *)PTR__malloc_101554b8)(_ElementSize + 1), pcVar9 != (char *)0x0)
         ))) && (sVar7 = _fread(pcVar9,_ElementSize,1,_File), sVar7 == 1)) {
      pcVar5 = pcVar9;
      if (uVar8 != _ElementSize) {
        pcVar9[_ElementSize] = '\0';
        iVar2 = FUN_100cf390(&local_10,&uStack_4);
        if ((iVar2 != 0) || (pcVar5 = local_10, uVar8 != uStack_4)) goto LAB_100cf6ea;
      }
      bVar11 = true;
      pcVar4 = param_3;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar11 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar11);
      if (bVar11) {
        local_14 = 0;
      }
    }
  }
LAB_100cf6ea:
  (*(code *)PTR__free_101554bc)(pcVar9);
  (*(code *)PTR__free_101554bc)(local_10);
  local_10 = (char *)0x0;
  _fclose(_File);
  return local_14;
}


/* END FUNCTION 0x100cf460 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002b6c0
 * Name: FUN_1002b6c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1002b6c0(char *param_1,char *param_2,char param_3,char param_4,char param_5,
                 undefined4 param_6)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 *_Memory;
  FILE *_File;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  undefined4 uVar15;
  int local_50c;
  char *local_500;
  int local_4fc;
  uint local_4f8;
  uint local_4f4;
  uint local_4f0;
  int local_4ec;
  void *local_4e8 [46];
  byte local_430 [16];
  uint local_420;
  char local_41c [260];
  char local_318 [259];
  char cStack_215;
  char local_214 [520];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101145c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1002ada0();
  local_4 = 0;
  FUN_10053260();
  local_4 = CONCAT31(local_4._1_3_,1);
  local_500 = operator_new(0x208);
  if (param_1 == (char *)0x0) {
    local_318[0] = '\0';
  }
  else {
    iVar13 = -(int)param_1;
    do {
      cVar1 = *param_1;
      param_1[(int)(local_318 + iVar13)] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
  }
  pcVar9 = local_318;
  do {
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  local_50c = (int)pcVar9 - (int)(local_318 + 1);
  if (local_50c == 0) {
    *local_500 = '\0';
  }
  else {
    pcVar9 = local_318;
    iVar13 = (int)local_500 - (int)pcVar9;
    do {
      cVar1 = *pcVar9;
      pcVar9[iVar13] = cVar1;
      pcVar9 = pcVar9 + 1;
      pcVar4 = local_500;
    } while (cVar1 != '\0');
    do {
      pcVar9 = pcVar4;
      pcVar4 = pcVar9 + 1;
    } while (*pcVar9 != '\0');
    pcVar4 = local_500;
    if (pcVar9[-1] != '/') {
      do {
        pcVar9 = pcVar4;
        pcVar4 = pcVar9 + 1;
      } while (*pcVar9 != '\0');
      if (pcVar9[-1] != '\\') {
        pcVar9 = local_500 + -1;
        do {
          pcVar4 = pcVar9 + 1;
          pcVar9 = pcVar9 + 1;
        } while (*pcVar4 != '\0');
        pcVar9[0] = '/';
        pcVar9[1] = '\0';
        local_50c = local_50c + 1;
      }
    }
  }
  pcVar9 = param_2;
  if (param_2 != (char *)0x0) {
    do {
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar10 = (int)pcVar9 - (int)param_2;
    pcVar9 = local_500 + -1;
    do {
      pcVar4 = pcVar9 + 1;
      pcVar9 = pcVar9 + 1;
    } while (*pcVar4 != '\0');
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar10 = uVar10 & 3; pcVar4 = local_500, uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar9 = *param_2;
      param_2 = param_2 + 1;
      pcVar9 = pcVar9 + 1;
    }
    do {
      pcVar9 = pcVar4;
      pcVar4 = pcVar9 + 1;
    } while (*pcVar9 != '\0');
    pcVar4 = local_500;
    if (pcVar9[-1] != '/') {
      do {
        pcVar9 = pcVar4;
        pcVar4 = pcVar9 + 1;
      } while (*pcVar9 != '\0');
      if (pcVar9[-1] != '\\') {
        pcVar9 = local_500 + -1;
        do {
          pcVar4 = pcVar9 + 1;
          pcVar9 = pcVar9 + 1;
        } while (*pcVar4 != '\0');
        pcVar9[0] = '/';
        pcVar9[1] = '\0';
      }
    }
  }
  FUN_1002adf0(&local_500);
  uVar11 = local_4f8;
  uVar10 = local_4f0;
  while( true ) {
    if (local_4f4 < uVar11) {
      iVar13 = uVar10 - uVar11;
    }
    else {
      iVar13 = -uVar11;
    }
    if (local_4f4 + iVar13 == 0) goto LAB_1002bc71;
    local_4f8 = uVar11 + 1;
    if (local_4f8 == uVar10) {
      pcVar9 = *(char **)(local_4fc + -4 + uVar10 * 4);
      local_4f8 = 0;
    }
    else if (local_4f8 == 0) {
      pcVar9 = *(char **)(local_4fc + -4 + uVar10 * 4);
    }
    else {
      pcVar9 = *(char **)(local_4fc + -4 + local_4f8 * 4);
    }
    uVar11 = local_4f8;
    pcVar4 = local_214 + -(int)pcVar9;
    pcVar2 = pcVar9;
    do {
      cVar1 = *pcVar2;
      pcVar4[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = &cStack_215;
    do {
      pcVar14 = pcVar2;
      pcVar2 = pcVar14 + 1;
    } while (pcVar14[1] != '\0');
    builtin_strncpy(pcVar14 + 1,"*.*",4);
    local_500 = pcVar4;
    iVar13 = __findfirst(local_214,local_430);
    local_4ec = iVar13;
    if (iVar13 == -1) break;
    __findnext(iVar13,local_430);
    iVar3 = __findnext(iVar13,local_430);
    while (iVar3 != -1) {
      pcVar2 = pcVar9;
      if ((local_430[0] & 0x16) == 0) {
        do {
          cVar1 = *pcVar2;
          pcVar4[(int)pcVar2] = cVar1;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        pcVar4 = local_41c;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        uVar5 = (int)pcVar4 - (int)local_41c;
        pcVar4 = &cStack_215;
        do {
          pcVar2 = pcVar4 + 1;
          pcVar4 = pcVar4 + 1;
        } while (*pcVar2 != '\0');
        pcVar2 = local_41c;
        for (uVar12 = uVar5 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
          pcVar2 = pcVar2 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar4 = *pcVar2;
          pcVar2 = pcVar2 + 1;
          pcVar4 = pcVar4 + 1;
        }
        uVar5 = local_420;
        if ((param_4 != '\0') && (param_3 != '\0')) {
          uVar5 = local_420 + 0x14;
        }
        _Memory = operator_new(uVar5);
        _File = (FILE *)FUN_100f9cc9(local_214,&DAT_10118e1c);
        puVar7 = _Memory;
        if ((param_4 != '\0') && (param_3 != '\0')) {
          puVar7 = _Memory + 5;
        }
        _fread(puVar7,local_420,1,_File);
        _fclose(_File);
        uVar15 = param_6;
        if (param_4 == '\0') {
          if (param_3 == '\0') {
            uVar5 = 0;
            puVar7 = (undefined4 *)0x0;
            goto LAB_1002bb07;
          }
          FUN_100511b0();
          FUN_10052e00(_Memory,local_420);
          FUN_10052fb0();
          uVar5 = 0x14;
          uVar12 = local_420;
          puVar7 = (undefined4 *)FUN_10053250(0x14,local_420,param_6);
          pcVar4 = local_214 + local_50c;
        }
        else {
          puVar7 = _Memory;
          if (param_3 == '\0') {
            pcVar4 = local_214 + local_50c;
            uVar5 = local_420;
            uVar12 = local_420;
          }
          else {
            FUN_100511b0();
            FUN_10052e00(_Memory + 5,local_420);
            FUN_10052fb0();
            puVar6 = (undefined4 *)FUN_10053250();
            *_Memory = *puVar6;
            _Memory[1] = puVar6[1];
            _Memory[2] = puVar6[2];
            _Memory[3] = puVar6[3];
            _Memory[4] = puVar6[4];
            uVar5 = local_420 + 0x14;
LAB_1002bb07:
            pcVar4 = local_214 + local_50c;
            uVar12 = local_420;
          }
        }
        FUN_1002b560(pcVar4,puVar7,uVar5,uVar12,uVar15);
        _free(_Memory);
        pcVar4 = local_500;
        iVar13 = local_4ec;
      }
      else if ((((local_430[0] & 0x10) != 0) && ((local_430[0] & 6) == 0)) && (param_5 != '\0')) {
        local_4e8[0] = operator_new(0x208);
        pcVar4 = pcVar9;
        do {
          cVar1 = *pcVar4;
          pcVar4[(int)local_4e8[0] - (int)pcVar9] = cVar1;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        pcVar4 = local_41c;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        uVar10 = (int)pcVar4 - (int)local_41c;
        pcVar4 = (char *)((int)local_4e8[0] + -1);
        do {
          pcVar2 = pcVar4 + 1;
          pcVar4 = pcVar4 + 1;
        } while (*pcVar2 != '\0');
        pcVar2 = local_41c;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
          pcVar2 = pcVar2 + 4;
          pcVar4 = pcVar4 + 4;
        }
        puVar8 = (undefined2 *)((int)local_4e8[0] + -1);
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar4 = *pcVar2;
          pcVar2 = pcVar2 + 1;
          pcVar4 = pcVar4 + 1;
        }
        do {
          pcVar4 = (char *)((int)puVar8 + 1);
          puVar8 = (undefined2 *)((int)puVar8 + 1);
        } while (*pcVar4 != '\0');
        *puVar8 = 0x2f;
        FUN_1002adf0(local_4e8);
        uVar11 = local_4f8;
        uVar10 = local_4f0;
        pcVar4 = local_500;
        iVar13 = local_4ec;
      }
      iVar3 = __findnext(iVar13,local_430);
    }
    FUN_100fa041(iVar13);
    _free(pcVar9);
  }
  FUN_100fa041(0xffffffff);
  _free(pcVar9);
  uVar5 = 0;
  puVar7 = (undefined4 *)(local_4fc + uVar11 * 4);
  while( true ) {
    if (local_4f4 < uVar11) {
      iVar13 = uVar10 - uVar11;
    }
    else {
      iVar13 = -uVar11;
    }
    if (local_4f4 + iVar13 <= uVar5) break;
    if (uVar11 + uVar5 < uVar10) {
      _free((void *)*puVar7);
      uVar5 = uVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    else {
      _free(*(void **)(local_4fc + ((uVar11 - uVar10) + uVar5) * 4));
      uVar5 = uVar5 + 1;
      puVar7 = puVar7 + 1;
    }
  }
LAB_1002bc71:
  local_4 = local_4 & 0xffffff00;
  FUN_10053270();
  local_4 = 0xffffffff;
  FUN_1002add0();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1002b6c0 */

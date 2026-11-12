/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002c140
 * Name: FUN_1002c140
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1002c140(int *param_1,char *param_2,char param_3,char param_4,char param_5)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char *pcVar5;
  FILE *_File;
  long lVar6;
  void *pvVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  uint local_2cc;
  char local_20d;
  char local_20c [512];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101145fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10053260();
  iVar11 = 0;
  local_4 = 0;
  local_2cc = 0;
  if (param_1[1] != 0) {
    do {
      _free(*(void **)(*param_1 + 4 + iVar11));
      pcVar4 = param_2;
      do {
        cVar1 = *pcVar4;
        pcVar4[(int)(local_20c + -(int)param_2)] = cVar1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      pcVar4 = local_20c;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (pcVar4[(int)(local_20c + (-1 - (int)(local_20c + 1)))] != '/') {
        pcVar4 = local_20c;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (pcVar4[(int)(local_20c + (-1 - (int)(local_20c + 1)))] != '\\') {
          pcVar4 = &local_20d;
          do {
            pcVar5 = pcVar4 + 1;
            pcVar4 = pcVar4 + 1;
          } while (*pcVar5 != '\0');
          pcVar4[0] = '/';
          pcVar4[1] = '\0';
        }
      }
      pcVar4 = *(char **)(*param_1 + iVar11);
      pcVar5 = pcVar4;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar13 = &local_20d;
      do {
        pcVar12 = pcVar13 + 1;
        pcVar13 = pcVar13 + 1;
      } while (*pcVar12 != '\0');
      pcVar12 = pcVar4;
      for (uVar9 = (uint)((int)pcVar5 - (int)pcVar4) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = (int)pcVar5 - (int)pcVar4 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar13 + 1;
      }
      _File = (FILE *)FUN_100f9cc9(local_20c,&DAT_10118e1c);
      if (_File == (FILE *)0x0) {
        if (param_5 == '\0') goto LAB_1002c411;
        _free(*(void **)(*param_1 + iVar11));
        FUN_1002b4d0(local_2cc);
      }
      else if ((param_4 == '\0') && (param_3 == '\0')) {
        *(undefined4 *)(*param_1 + 4 + iVar11) = 0;
        *(undefined4 *)(*param_1 + 8 + iVar11) = 0;
      }
      else {
        _fseek(_File,0,2);
        iVar2 = *param_1;
        lVar6 = _ftell(_File);
        *(long *)(iVar2 + iVar11 + 0xc) = lVar6;
        _fseek(_File,0,0);
        if (param_4 == '\0') {
          *(undefined4 *)(*param_1 + iVar11 + 8) = *(undefined4 *)(*param_1 + 0xc + iVar11);
          pvVar7 = operator_new(*(uint *)(*param_1 + 0xc + iVar11));
          *(void **)(*param_1 + 4 + iVar11) = pvVar7;
          _fread(*(void **)(*param_1 + 4 + iVar11),*(size_t *)(*param_1 + 0xc + iVar11),1,_File);
        }
        else {
          if (param_3 == '\0') {
            *(undefined4 *)(*param_1 + 8 + iVar11) = 0x14;
            uVar9 = *(uint *)(*param_1 + 0xc + iVar11);
            if (uVar9 < 0x14) {
              pvVar7 = operator_new(0x14);
              *(void **)(*param_1 + 4 + iVar11) = pvVar7;
            }
            else {
              pvVar7 = operator_new(uVar9);
              *(void **)(*param_1 + 4 + iVar11) = pvVar7;
            }
            _fread(*(void **)(*param_1 + 4 + iVar11),*(size_t *)(*param_1 + 0xc + iVar11),1,_File);
            FUN_100511b0();
            iVar2 = *param_1;
            iVar10 = *(int *)(iVar2 + 4 + iVar11);
          }
          else {
            pvVar7 = operator_new(*(int *)(*param_1 + 0xc + iVar11) + 0x14);
            *(void **)(*param_1 + 4 + iVar11) = pvVar7;
            _fread((void *)(*(int *)(*param_1 + 4 + iVar11) + 0x14),
                   *(size_t *)(*param_1 + 0xc + iVar11),1,_File);
            FUN_100511b0();
            iVar2 = *param_1;
            iVar10 = *(int *)(iVar2 + 4 + iVar11) + 0x14;
          }
          FUN_10052e00(iVar10,*(undefined4 *)(iVar2 + iVar11 + 0xc));
          FUN_10052fb0();
          iVar2 = *param_1;
          puVar8 = (undefined4 *)FUN_10053250();
          puVar3 = *(undefined4 **)(iVar2 + iVar11 + 4);
          *puVar3 = *puVar8;
          puVar3[1] = puVar8[1];
          puVar3[2] = puVar8[2];
          puVar3[3] = puVar8[3];
          puVar3[4] = puVar8[4];
        }
        _fclose(_File);
LAB_1002c411:
        local_2cc = local_2cc + 1;
        iVar11 = iVar11 + 0x11;
      }
    } while (local_2cc < (uint)param_1[1]);
  }
  local_4 = 0xffffffff;
  FUN_10053270();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1002c140 */

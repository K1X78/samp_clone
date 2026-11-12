/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002bec0
 * Name: FUN_1002bec0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_1002bec0(int *param_1,char *param_2,undefined4 param_3,char param_4,char param_5)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  FILE *_File;
  void *_DstBuf;
  int *piVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int *piVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int local_2d0;
  uint local_2cc;
  char local_20d;
  char local_20c [512];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101145db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10053260();
  local_4 = 0;
  local_2cc = 0;
  if (param_1[1] != 0) {
    local_2d0 = 0;
    pcVar2 = param_2;
    do {
      do {
        cVar1 = *pcVar2;
        pcVar2[(int)(local_20c + -(int)param_2)] = cVar1;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      pcVar2 = local_20c;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      if (pcVar2[(int)(local_20c + (-1 - (int)(local_20c + 1)))] != '/') {
        pcVar2 = local_20c;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        if (pcVar2[(int)(local_20c + (-1 - (int)(local_20c + 1)))] != '\\') {
          pcVar2 = &local_20d;
          do {
            pcVar3 = pcVar2 + 1;
            pcVar2 = pcVar2 + 1;
          } while (*pcVar3 != '\0');
          pcVar2[0] = '/';
          pcVar2[1] = '\0';
        }
      }
      pcVar2 = *(char **)(*param_1 + local_2d0);
      pcVar3 = pcVar2;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      pcVar8 = &local_20d;
      do {
        pcVar7 = pcVar8 + 1;
        pcVar8 = pcVar8 + 1;
      } while (*pcVar7 != '\0');
      pcVar7 = pcVar2;
      for (uVar5 = (uint)((int)pcVar3 - (int)pcVar2) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = (int)pcVar3 - (int)pcVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      _File = (FILE *)FUN_100f9cc9(local_20c,&DAT_10118e1c);
      if (_File == (FILE *)0x0) {
        uVar11 = *(undefined4 *)(*param_1 + local_2d0);
        uVar12 = 0;
        uVar13 = 0;
        uVar5 = 0;
        uVar14 = 0;
LAB_1002c0d7:
        FUN_1002b560(uVar11,uVar12,uVar13,uVar5,uVar14);
      }
      else {
        _fseek(_File,0,2);
        uVar5 = _ftell(_File);
        _fseek(_File,0,0);
        if ((uVar5 != *(uint *)(local_2d0 + 0xc + *param_1)) && (param_4 == '\0')) {
          uVar11 = *(undefined4 *)(local_2d0 + *param_1);
          uVar14 = 0;
          uVar13 = 0;
          uVar12 = 0;
          goto LAB_1002c0d7;
        }
        _DstBuf = operator_new(uVar5);
        _fread(_DstBuf,uVar5,1,_File);
        _fclose(_File);
        FUN_100511b0();
        FUN_10052e00(_DstBuf,uVar5);
        FUN_10052fb0();
        _free(_DstBuf);
        if (uVar5 != *(uint *)(local_2d0 + *param_1 + 0xc)) {
LAB_1002c0aa:
          uVar14 = 0;
          if (param_5 == '\0') {
            iVar6 = *param_1;
            uVar13 = 0x14;
            uVar12 = FUN_10053250(0x14,uVar5,0);
            uVar11 = *(undefined4 *)(iVar6 + local_2d0);
          }
          else {
            uVar11 = *(undefined4 *)(local_2d0 + *param_1);
            uVar13 = 0;
            uVar12 = 0;
          }
          goto LAB_1002c0d7;
        }
        piVar9 = *(int **)(local_2d0 + *param_1 + 4);
        piVar4 = (int *)FUN_10053250();
        iVar6 = 5;
        bVar10 = true;
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          bVar10 = *piVar4 == *piVar9;
          piVar4 = piVar4 + 1;
          piVar9 = piVar9 + 1;
        } while (bVar10);
        if (!bVar10) goto LAB_1002c0aa;
      }
      local_2cc = local_2cc + 1;
      local_2d0 = local_2d0 + 0x11;
      pcVar2 = param_2;
    } while (local_2cc < (uint)param_1[1]);
  }
  local_4 = 0xffffffff;
  FUN_10053270();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1002bec0 */

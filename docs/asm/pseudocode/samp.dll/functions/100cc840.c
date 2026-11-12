/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cc840
 * Name: FUN_100cc840
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100cc840(undefined4 param_1,code *param_2,char *param_3)

{
  double dVar1;
  char cVar2;
  int *piVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  int extraout_ECX;
  char *pcVar12;
  uint uVar13;
  char *pcVar14;
  byte *pbVar15;
  uint uVar16;
  undefined1 *puVar17;
  bool bVar18;
  longlong lVar19;
  undefined8 uVar20;
  int local_f94;
  uint uStack_f8c;
  int iStack_f88;
  uint uStack_f80;
  char *local_f7c;
  int iStack_f78;
  undefined4 *local_f74;
  undefined2 uStack_f70;
  undefined4 uStack_f6e;
  undefined4 uStack_f6a;
  undefined4 uStack_f66;
  undefined4 uStack_f62;
  undefined4 uStack_f5e;
  undefined4 uStack_f5a;
  undefined4 uStack_f56;
  undefined2 uStack_f52;
  undefined4 uStack_f4c;
  char acStack_f48 [324];
  char acStack_e04 [4];
  undefined4 local_e00 [128];
  uint local_c00 [4];
  undefined8 uStack_bf0;
  
  iStack_f78 = 0;
  local_f7c = "0123456789abcdefghijklmnopqrstuvwxyz";
  local_f94 = 0;
  iVar7 = FUN_100cc090();
  if (iVar7 != 0) {
    return -1;
  }
  local_f74 = local_e00;
  cVar6 = *param_3;
  do {
    if (cVar6 == '\0') {
      return local_f94;
    }
    cVar6 = *param_3;
    if (cVar6 == '%') {
      if (param_3[1] == '%') {
        param_3 = param_3 + 2;
        iVar7 = (*param_2)(0x25);
        if (iVar7 == -1) {
          return local_f94;
        }
        local_f94 = local_f94 + 1;
      }
      else {
        iVar8 = FUN_100cbf90();
        iVar7 = iStack_f78;
        if (iVar8 != 0) {
          iVar7 = iVar8 + -1;
        }
        uVar13 = local_c00[iVar7 * 6 + 2];
        uVar10 = uVar13;
        iVar8 = iStack_f78 + 1;
        if ((local_c00[iVar7 * 6 + 1] & 0x4000) != 0) {
          uVar10 = *(uint *)(&uStack_bf0 + uVar13 * 3);
          iVar8 = iStack_f78 + 2;
          if ((int)uVar10 < 0) {
            local_c00[iVar7 * 6 + 1] = local_c00[iVar7 * 6 + 1] & 0xfffffeff | 4;
            uVar10 = -uVar10;
          }
        }
        iStack_f78 = iVar8;
        uVar16 = local_c00[iVar7 * 6 + 1];
        cVar6 = (char)(uVar16 >> 8);
        if ((uVar16 & 0x10000) == 0) {
          if (-1 < cVar6) goto LAB_100cc9a0;
          uStack_f8c = local_c00[iVar7 * 6 + 3];
        }
        else {
          uStack_f8c = *(uint *)(&uStack_bf0 + local_c00[iVar7 * 6 + 3] * 3);
          iStack_f78 = iStack_f78 + 1;
          if ((int)uStack_f8c < 0) {
LAB_100cc9a0:
            uStack_f8c = 0xffffffff;
          }
        }
        uStack_f80 = uVar16 >> 3 & 1;
        switch(local_c00[iVar7 * 6]) {
        case 1:
          pcVar9 = *(char **)(&uStack_bf0 + iVar7 * 3);
          if (pcVar9 == (char *)0x0) {
            if ((uStack_f8c == 0xffffffff) || (4 < (int)uStack_f8c)) {
              pcVar9 = "(nil)";
              local_c00[iVar7 * 6 + 1] = uVar16 & 0xfffffff7;
              uStack_f8c = 5;
            }
            else {
              pcVar9 = "";
              uStack_f8c = 0;
            }
LAB_100ccb68:
            uVar13 = uStack_f8c;
            uStack_f8c = uVar13;
          }
          else {
            if (uStack_f8c == 0xffffffff) {
              pcVar14 = pcVar9;
              do {
                cVar6 = *pcVar14;
                pcVar14 = pcVar14 + 1;
              } while (cVar6 != '\0');
              uStack_f8c = (int)pcVar14 - (int)(pcVar9 + 1);
            }
            uVar13 = 0x7fffffff;
            if (uStack_f8c < 0x80000000) goto LAB_100ccb68;
          }
          uVar16 = local_c00[iVar7 * 6 + 1];
          iVar7 = uVar10 - uVar13;
          uVar13 = uVar16 & 8;
          if (uVar13 != 0) {
            iVar8 = (*param_2)(0x22);
            if (iVar8 == -1) {
              return local_f94;
            }
            local_f94 = local_f94 + 1;
          }
          uVar16 = uVar16 & 4;
          if (uVar16 == 0) {
            while (0 < iVar7) {
              iVar7 = iVar7 + -1;
              iVar8 = (*param_2)(0x20);
              if (iVar8 == -1) {
                return local_f94;
              }
              local_f94 = local_f94 + 1;
            }
            iVar7 = iVar7 + -1;
          }
          while (uStack_f8c != 0) {
            uStack_f8c = uStack_f8c - 1;
            if (*pcVar9 == '\0') break;
            iVar8 = (*param_2)(*pcVar9);
            pcVar9 = pcVar9 + 1;
            if (iVar8 == -1) {
              return local_f94;
            }
            local_f94 = local_f94 + 1;
          }
          if (uVar16 != 0) {
            while (0 < iVar7) {
              iVar7 = iVar7 + -1;
              iVar8 = (*param_2)(0x20);
              if (iVar8 == -1) {
                return local_f94;
              }
              local_f94 = local_f94 + 1;
            }
          }
          if (uVar13 != 0) {
            iVar7 = (*param_2)(0x22);
            if (iVar7 == -1) {
              return local_f94;
            }
            local_f94 = local_f94 + 1;
          }
          break;
        case 2:
          uVar13 = *(uint *)(&uStack_bf0 + iVar7 * 3);
          if (uVar13 == 0) {
            iVar7 = uVar10 - 5;
            if ((uVar16 & 4) != 0) {
              while (0 < iVar7) {
                iVar7 = iVar7 + -1;
                iVar8 = (*param_2)(0x20);
                if (iVar8 == -1) {
                  return local_f94;
                }
                local_f94 = local_f94 + 1;
              }
              iVar7 = iVar7 + -1;
            }
            puVar17 = &DAT_10123ee4;
            do {
              iVar8 = (*param_2)(*puVar17);
              if (iVar8 == -1) {
                return local_f94;
              }
              pcVar9 = puVar17 + 1;
              local_f94 = local_f94 + 1;
              puVar17 = puVar17 + 1;
            } while (*pcVar9 != '\0');
            if ((uVar16 & 4) == 0) {
              while (0 < iVar7) {
                iVar7 = iVar7 + -1;
                iVar8 = (*param_2)(0x20);
                if (iVar8 == -1) {
                  return local_f94;
                }
                local_f94 = local_f94 + 1;
              }
            }
          }
          else {
            iStack_f88 = 0x10;
            local_f7c = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            if ((uVar16 & 0x1000) == 0) {
              local_f7c = "0123456789abcdefghijklmnopqrstuvwxyz";
            }
            iVar7 = 0;
            uStack_f80 = 1;
            bVar4 = false;
LAB_100ccca6:
            if (uStack_f8c == 0xffffffff) {
              uStack_f8c = 1;
            }
            pcVar9 = acStack_e04;
            lVar5 = CONCAT44(iVar7,uVar13);
            if ((iVar7 != 0) || (lVar5 = CONCAT44(iVar7,uVar13), uVar13 != 0)) {
              do {
                lVar19 = __aulldvrm(lVar5,iStack_f88,0);
                uStack_f4c = (int)lVar5;
                *pcVar9 = local_f7c[extraout_ECX];
                pcVar9 = pcVar9 + -1;
                lVar5 = lVar19;
              } while (lVar19 != 0);
            }
            pcVar14 = pcVar9 + (uVar10 - (int)acStack_e04);
            pcVar12 = pcVar9 + (uStack_f8c - (int)acStack_e04);
            if ((uStack_f80 == 0) || (iStack_f88 != 8)) {
LAB_100ccd1c:
              if (0 < (int)pcVar12) goto LAB_100ccd20;
            }
            else {
              if ((int)pcVar12 < 1) {
                *pcVar9 = '0';
                pcVar9 = pcVar9 + -1;
                pcVar14 = pcVar14 + -1;
                goto LAB_100ccd1c;
              }
LAB_100ccd20:
              pcVar14 = pcVar14 + -(int)pcVar12;
              if (0 < (int)pcVar12) {
                do {
                  *pcVar9 = '0';
                  pcVar9 = pcVar9 + -1;
                  pcVar12 = pcVar12 + -1;
                } while (pcVar12 != (char *)0x0);
              }
            }
            if ((uStack_f80 != 0) && (iStack_f88 == 0x10)) {
              pcVar14 = pcVar14 + -2;
            }
            if ((bVar4) || ((uVar16 & 3) != 0)) {
              pcVar14 = pcVar14 + -1;
            }
            uVar13 = uVar16 & 4;
            if ((uVar13 == 0) && ((uVar16 & 0x100) == 0)) {
              while (0 < (int)pcVar14) {
                pcVar14 = pcVar14 + -1;
                iVar7 = (*param_2)(0x20);
                if (iVar7 == -1) {
                  return local_f94;
                }
                local_f94 = local_f94 + 1;
              }
              pcVar14 = pcVar14 + -1;
            }
            if (bVar4) {
              uVar20 = CONCAT44(param_1,0x2d);
LAB_100ccdc8:
              iVar7 = (*param_2)(uVar20);
              if (iVar7 == -1) {
                return local_f94;
              }
              local_f94 = local_f94 + 1;
            }
            else {
              if ((uVar16 & 2) != 0) {
                uVar20 = CONCAT44(param_1,0x2b);
                goto LAB_100ccdc8;
              }
              if ((uVar16 & 1) != 0) {
                uVar20 = CONCAT44(param_1,0x20);
                goto LAB_100ccdc8;
              }
            }
            if ((uStack_f80 != 0) && (iStack_f88 == 0x10)) {
              iVar7 = (*param_2)(0x30);
              if (iVar7 == -1) {
                return local_f94;
              }
              if ((uVar16 & 0x1000) == 0) {
                uVar20 = CONCAT44(param_1,0x78);
              }
              else {
                uVar20 = CONCAT44(param_1,0x58);
              }
              iVar7 = (*param_2)(uVar20);
              if (iVar7 == -1) {
                return local_f94 + 1;
              }
              local_f94 = local_f94 + 2;
            }
            if ((uVar13 == 0) && ((uVar16 & 0x100) != 0)) {
              while (0 < (int)pcVar14) {
                pcVar14 = pcVar14 + -1;
                iVar7 = (*param_2)(0x30);
                if (iVar7 == -1) {
                  return local_f94;
                }
                local_f94 = local_f94 + 1;
              }
              pcVar14 = pcVar14 + -1;
            }
            pcVar9 = pcVar9 + 1;
            if (pcVar9 <= acStack_e04) {
              do {
                iVar7 = (*param_2)(*pcVar9);
                if (iVar7 == -1) {
                  return local_f94;
                }
                local_f94 = local_f94 + 1;
                pcVar9 = pcVar9 + 1;
              } while (pcVar9 <= acStack_e04);
            }
            if (uVar13 != 0) {
              while (0 < (int)pcVar14) {
                pcVar14 = pcVar14 + -1;
                iVar7 = (*param_2)(0x20);
                if (iVar7 == -1) {
                  return local_f94;
                }
                local_f94 = local_f94 + 1;
              }
            }
          }
          break;
        case 3:
          uVar13 = *(uint *)(&uStack_bf0 + iVar7 * 3);
          iVar7 = *(int *)((int)&uStack_bf0 + iVar7 * 0x18 + 4);
          if ((uVar16 & 0x20000) == 0) {
            if ((uVar16 & 0x400) == 0) {
              if ((uVar16 & 0x800) == 0) {
                iStack_f88 = 10;
                if ((((uVar16 & 0x200) == 0) && (iVar7 < 1)) && (iVar7 < 0)) {
                  bVar18 = uVar13 != 0;
                  uVar13 = -uVar13;
                  bVar4 = true;
                  iVar7 = -(iVar7 + (uint)bVar18);
                }
                else {
                  bVar4 = false;
                }
              }
              else {
                local_f7c = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                if ((uVar16 & 0x1000) == 0) {
                  local_f7c = "0123456789abcdefghijklmnopqrstuvwxyz";
                }
                iStack_f88 = 0x10;
                bVar4 = false;
              }
            }
            else {
              iStack_f88 = 8;
              bVar4 = false;
            }
            goto LAB_100ccca6;
          }
          if ((uVar16 & 4) == 0) {
            while (uVar10 = uVar10 - 1, 0 < (int)uVar10) {
              iVar7 = (*param_2)(0x20);
              if (iVar7 == -1) {
                return local_f94;
              }
              local_f94 = local_f94 + 1;
            }
          }
          iVar7 = (*param_2)(uVar13 & 0xff);
          if (iVar7 == -1) {
            return local_f94;
          }
          local_f94 = local_f94 + 1;
          if ((uVar16 & 4) != 0) {
            while (uVar10 = uVar10 - 1, 0 < (int)uVar10) {
              iVar7 = (*param_2)(0x20);
              if (iVar7 == -1) {
                return local_f94;
              }
              local_f94 = local_f94 + 1;
            }
          }
          break;
        case 4:
          if ((uVar16 & 0x40) == 0) {
            if ((uVar16 & 0x20) == 0) {
              if ((uVar16 & 0x10) == 0) {
                **(int **)(&uStack_bf0 + iVar7 * 3) = local_f94;
              }
              else {
                **(undefined2 **)(&uStack_bf0 + iVar7 * 3) = (undefined2)local_f94;
              }
            }
            else {
              **(int **)(&uStack_bf0 + iVar7 * 3) = local_f94;
            }
          }
          else {
            piVar3 = *(int **)(&uStack_bf0 + iVar7 * 3);
            *piVar3 = local_f94;
            piVar3[1] = local_f94 >> 0x1f;
          }
          break;
        case 7:
          uStack_f6e = 0;
          uStack_f6a = 0;
          uStack_f66 = 0;
          uStack_f62 = 0;
          uStack_f5e = 0;
          uStack_f5a = 0;
          uStack_f56 = 0;
          uStack_f52 = 0;
          pcVar9 = (char *)&uStack_f70;
          uStack_f70 = 0x25;
          pbVar15 = (byte *)((int)&uStack_f70 + 1);
          do {
            cVar2 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 != '\0');
          iVar8 = 0x20 - ((int)pcVar9 - ((int)&uStack_f70 + 1));
          uVar10 = uVar13;
          if (((uVar16 & 0x2000) == 0) && (uVar10 = 0xffffffff, (uVar16 & 0x4000) != 0)) {
            uVar10 = *(uint *)(&uStack_bf0 + uVar13 * 3);
          }
          uVar13 = 0xffffffff;
          if (cVar6 < '\0') {
            uVar13 = local_c00[iVar7 * 6 + 3];
          }
          else if ((uVar16 & 0x10000) != 0) {
            uVar13 = *(uint *)(&uStack_bf0 + local_c00[iVar7 * 6 + 3] * 3);
          }
          if ((uVar16 & 4) != 0) {
            uStack_f70 = 0x2d25;
            pbVar15 = (byte *)&uStack_f6e;
          }
          if ((uVar16 & 2) != 0) {
            *pbVar15 = 0x2b;
            pbVar15 = pbVar15 + 1;
          }
          if ((uVar16 & 1) != 0) {
            *pbVar15 = 0x20;
            pbVar15 = pbVar15 + 1;
          }
          if ((uVar16 & 8) != 0) {
            *pbVar15 = 0x23;
            pbVar15 = pbVar15 + 1;
          }
          *pbVar15 = 0;
          if (-1 < (int)uVar10) {
            if (0x145 < (int)uVar10) {
              uVar10 = 0x145;
            }
            iVar11 = FUN_100cc780(pbVar15,iVar8,&DAT_10123f10,uVar10);
            pbVar15 = pbVar15 + iVar11;
            iVar8 = iVar8 - iVar11;
          }
          if (-1 < (int)uVar13) {
            iVar11 = 0x144;
            for (dVar1 = (double)(&uStack_bf0)[iVar7 * 3]; 10.0 <= dVar1; dVar1 = dVar1 * 0.1) {
              iVar11 = iVar11 + -1;
            }
            if (iVar11 < (int)uVar13) {
              uVar13 = iVar11 - 1;
            }
            iVar8 = FUN_100cc780(pbVar15,iVar8,&DAT_10123ef4,uVar13);
            pbVar15 = pbVar15 + iVar8;
          }
          if ((uVar16 & 0x20) != 0) {
            *pbVar15 = 0x6c;
            pbVar15 = pbVar15 + 1;
          }
          if ((uVar16 & 0x40000) == 0) {
            if ((uVar16 & 0x80000) == 0) {
              *pbVar15 = 0x66;
            }
            else {
              *pbVar15 = ~(byte)(uVar16 >> 7) & 0x20 | 0x47;
            }
          }
          else {
            *pbVar15 = ~(byte)(uVar16 >> 7) & 0x20 | 0x45;
          }
          uVar20 = (&uStack_bf0)[iVar7 * 3];
          pbVar15[1] = 0;
          _sprintf(acStack_f48,(char *)&uStack_f70,uVar20);
          pcVar9 = acStack_f48;
          cVar6 = acStack_f48[0];
          while (cVar6 != '\0') {
            iVar7 = (*param_2)(*pcVar9);
            if (iVar7 == -1) {
              return local_f94;
            }
            pcVar14 = pcVar9 + 1;
            local_f94 = local_f94 + 1;
            pcVar9 = pcVar9 + 1;
            cVar6 = *pcVar14;
          }
        }
        param_3 = (char *)*local_f74;
        local_f74 = local_f74 + 1;
      }
    }
    else {
      do {
        iVar7 = (*param_2)(cVar6);
        if (iVar7 == -1) {
          return local_f94;
        }
        local_f94 = local_f94 + 1;
        param_3 = param_3 + 1;
        cVar6 = *param_3;
        if (cVar6 == '\0') {
          return local_f94;
        }
      } while (cVar6 != '%');
    }
    cVar6 = *param_3;
  } while( true );
}


/* END FUNCTION 0x100cc840 */

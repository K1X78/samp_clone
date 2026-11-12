/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d4120
 * Name: FUN_100d4120
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100d4120(int param_1,int param_2,uint *param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  char *pcVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  undefined4 *puVar11;
  ulong uVar12;
  uint *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  byte *pbVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  bool bVar19;
  char *pcVar20;
  char *local_24;
  byte *local_20;
  char local_14 [4];
  char local_10 [16];
  
  local_20 = *(byte **)(param_1 + 0x4ad4);
  bVar19 = false;
  *param_3 = 0;
  bVar4 = false;
  bVar3 = false;
  pcVar5 = _strpbrk(*(char **)(param_1 + 0x700),"\r\n");
  if (pcVar5 != (char *)0x0) {
    FUN_100d8ba0(param_1,"Illegal characters found in URL");
    return 3;
  }
  cVar1 = **(char **)(param_1 + 0x700);
  if (cVar1 == ':') {
    FUN_100d8ba0(param_1,"Bad URL, colon is first character");
    return 3;
  }
  if ((((cVar1 < 'a') || ('z' < cVar1)) && ((cVar1 < 'A' || ('Z' < cVar1)))) ||
     ((((*(char **)(param_1 + 0x700))[1] != ':' || (*(int *)(param_1 + 0x5bc) == 0)) ||
      (iVar6 = FUN_100de830(*(int *)(param_1 + 0x5bc),&DAT_10124ae4), iVar6 == 0)))) {
    iVar6 = 0;
    do {
      cVar1 = *(char *)(*(int *)(param_1 + 0x700) + iVar6);
      if ((cVar1 == '\0') || (cVar1 == '/')) break;
      if (cVar1 == ':') {
        bVar19 = true;
        bVar3 = true;
        iVar6 = FUN_100de8c0(*(int *)(param_1 + 0x700),"file:",5);
        if (iVar6 == 0) goto LAB_100d42a2;
        pcVar5 = *(char **)(param_1 + 0x700);
        pcVar20 = "%*15[^\n/:]:%[^\n]";
        goto LAB_100d422a;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x10);
  }
  if ((*(int *)(param_1 + 0x5bc) == 0) ||
     (iVar6 = FUN_100de830(*(int *)(param_1 + 0x5bc),&DAT_10124ae4), iVar6 == 0)) {
LAB_100d42a2:
    *local_20 = 0;
    iVar6 = _sscanf(*(char **)(param_1 + 0x700),"%15[^\n/:]:%3[/]%[^\n/?#]%[^\n]",local_10,local_14,
                    *(undefined4 *)(param_2 + 0xa0),local_20);
    if (iVar6 == 2) goto LAB_100d42d5;
    if (iVar6 < 3) {
      iVar6 = _sscanf(*(char **)(param_1 + 0x700),"%[^\n/?#]%[^\n]",*(undefined4 *)(param_2 + 0xa0),
                      local_20);
      if (iVar6 < 1) goto LAB_100d485f;
      local_24 = *(char **)(param_1 + 0x5bc);
      if (local_24 == (char *)0x0) {
        iVar6 = thunk_FUN_100de8c0(&DAT_101249f8,*(undefined4 *)(param_2 + 0xa0),4);
        if (iVar6 == 0) {
          iVar6 = thunk_FUN_100de8c0("DICT.",*(undefined4 *)(param_2 + 0xa0),5);
          if (iVar6 == 0) {
            iVar6 = thunk_FUN_100de8c0("LDAP.",*(undefined4 *)(param_2 + 0xa0),5);
            if (iVar6 == 0) {
              iVar6 = thunk_FUN_100de8c0("IMAP.",*(undefined4 *)(param_2 + 0xa0),5);
              if (iVar6 == 0) {
                iVar6 = thunk_FUN_100de8c0("SMTP.",*(undefined4 *)(param_2 + 0xa0),5);
                if (iVar6 == 0) {
                  iVar6 = thunk_FUN_100de8c0("POP3.",*(undefined4 *)(param_2 + 0xa0),5);
                  local_24 = "pop3";
                  if (iVar6 == 0) {
                    local_24 = "http";
                  }
                  goto LAB_100d457a;
                }
                local_24 = "smtp";
                *param_3 = 1;
              }
              else {
                local_24 = "IMAP";
                *param_3 = 1;
              }
            }
            else {
              local_24 = "LDAP";
              *param_3 = 1;
            }
          }
          else {
            local_24 = "DICT";
            *param_3 = 1;
          }
        }
        else {
          local_24 = "ftp";
          *param_3 = 1;
        }
      }
      else {
LAB_100d457a:
        *param_3 = 1;
      }
    }
    else {
      pcVar5 = local_14;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      uVar8 = (int)pcVar5 - (int)(local_14 + 1);
      local_24 = local_10;
      if (uVar8 != 2) {
        puVar14 = &DAT_101249a0;
        if (uVar8 < 2) {
          puVar14 = &DAT_10117a39;
        }
        FUN_100d8ae0(param_1,"Unwillingly accepted illegal URL using %d slash%s!\n",uVar8,puVar14);
        if (*(int *)(param_1 + 0x704) != 0) {
          (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x700));
        }
        iVar6 = FUN_100cd220("%s://%s%s",local_10,*(undefined4 *)(param_2 + 0xa0),local_20);
        *(int *)(param_1 + 0x700) = iVar6;
        if (iVar6 == 0) {
          return 0x1b;
        }
        *(undefined4 *)(param_1 + 0x704) = 1;
      }
    }
  }
  else {
    pcVar5 = *(char **)(param_1 + 0x700);
    pcVar20 = "%[^\n]";
LAB_100d422a:
    iVar6 = _sscanf(pcVar5,pcVar20,local_20);
    if (iVar6 != 1) {
LAB_100d42d5:
      FUN_100d8ba0(param_1,"Bad URL");
      return 3;
    }
    if (bVar19) {
      if (*local_20 == 0x2f) {
        if (local_20[1] == 0x2f) {
          if ((local_20[2] == 0x2f) && (local_20[3] == 0x2f)) {
            FUN_100d8ba0(param_1,"SMB shares are not supported in file: URLs.");
            return 3;
          }
          bVar2 = local_20[2];
          pbVar16 = local_20 + 2;
          if ((bVar2 != 0x2f) &&
             (((((char)bVar2 < 'a' || ('z' < (char)bVar2)) &&
               (((char)bVar2 < 'A' || ('Z' < (char)bVar2)))) ||
              (((local_20[3] != 0x3a && (local_20[3] != 0x7c)) ||
               ((local_20[4] != 0x2f && (local_20[4] != 0)))))))) {
            iVar6 = thunk_FUN_100de8c0("localhost/",pbVar16,10);
            if ((iVar6 == 0) && (iVar6 = thunk_FUN_100de8c0("127.0.0.1/",pbVar16,10), iVar6 == 0)) {
              FUN_100d8ba0(param_1,
                           "Invalid file://hostname/, expected localhost or 127.0.0.1 or none");
              return 3;
            }
            pbVar16 = local_20 + 0xb;
          }
          if (pbVar16[1] == 0x2f) {
            pbVar16 = pbVar16 + 1;
          }
          pbVar7 = pbVar16;
          do {
            bVar2 = *pbVar7;
            pbVar7 = pbVar7 + 1;
          } while (bVar2 != 0);
          _memmove(local_20,pbVar16,(size_t)(pbVar7 + (1 - (int)(pbVar16 + 1))));
        }
        goto LAB_100d43a5;
      }
    }
    else {
LAB_100d43a5:
      if (*local_20 == 0x2f) {
        bVar2 = local_20[1];
        if (((('`' < (char)bVar2) && ((char)bVar2 < '{')) ||
            (('@' < (char)bVar2 && ((char)bVar2 < '[')))) &&
           (((local_20[2] == 0x3a || (local_20[2] == 0x7c)) &&
            ((local_20[3] == 0x2f || (local_20[3] == 0)))))) {
          pbVar16 = local_20 + 1;
          do {
            bVar2 = *pbVar16;
            pbVar16 = pbVar16 + 1;
          } while (bVar2 != 0);
          _memmove(local_20,local_20 + 1,(size_t)(pbVar16 + (1 - (int)(local_20 + 2))));
        }
      }
    }
    local_24 = "file";
    *param_3 = (uint)!bVar3;
  }
  pcVar5 = _strchr(*(char **)(param_2 + 0xa0),0x40);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = *(char **)(param_2 + 0xa0);
  }
  else {
    pcVar5 = pcVar5 + 1;
  }
  pbVar16 = (byte *)_strchr(pcVar5,0x3f);
  if (pbVar16 == (byte *)0x0) {
    if (*local_20 == 0) {
      local_20[0] = 0x2f;
      local_20[1] = 0;
      goto LAB_100d46a7;
    }
  }
  else {
    pbVar7 = pbVar16;
    do {
      bVar2 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar2 != 0);
    uVar8 = (int)pbVar7 - (int)(pbVar16 + 1);
    pbVar7 = local_20;
    do {
      bVar2 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar2 != 0);
    _memmove(local_20 + uVar8 + 1,local_20,(size_t)(pbVar7 + (1 - (int)(local_20 + 1))));
    pbVar7 = pbVar16;
    pbVar9 = local_20 + 1;
    for (uVar15 = uVar8 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar7;
      pbVar7 = pbVar7 + 4;
      pbVar9 = pbVar9 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pbVar9 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      pbVar9 = pbVar9 + 1;
    }
    *local_20 = 0x2f;
    *pbVar16 = 0;
LAB_100d46a7:
    bVar4 = true;
  }
  if (*local_20 == 0x2f) {
    if (*(int *)(param_1 + 0x6dc) == 0) {
      pbVar9 = (byte *)FUN_100ec340(local_20);
      pbVar16 = pbVar9;
      pbVar7 = local_20;
      if (pbVar9 == (byte *)0x0) {
        return 0x1b;
      }
      do {
        bVar2 = *pbVar16;
        bVar19 = bVar2 < *pbVar7;
        if (bVar2 != *pbVar7) {
LAB_100d472f:
          iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
          goto LAB_100d4734;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar16[1];
        bVar19 = bVar2 < pbVar7[1];
        if (bVar2 != pbVar7[1]) goto LAB_100d472f;
        pbVar16 = pbVar16 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar2 != 0);
      iVar6 = 0;
LAB_100d4734:
      if (iVar6 != 0) {
        (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x4ad0));
        *(byte **)(param_1 + 0x4ad0) = pbVar9;
        *(byte **)(param_1 + 0x4ad4) = pbVar9;
        local_20 = pbVar9;
        goto LAB_100d477e;
      }
      (*(code *)PTR__free_101554bc)(pbVar9);
    }
    if (!bVar4) goto LAB_100d48f9;
  }
  else {
    pbVar16 = local_20;
    do {
      bVar2 = *pbVar16;
      pbVar16 = pbVar16 + 1;
    } while (bVar2 != 0);
    _memmove(local_20 + 1,local_20,(size_t)(pbVar16 + (1 - (int)(local_20 + 1))));
    *local_20 = 0x2f;
  }
LAB_100d477e:
  pbVar16 = local_20;
  do {
    bVar2 = *pbVar16;
    pbVar16 = pbVar16 + 1;
  } while (bVar2 != 0);
  pcVar20 = *(char **)(param_2 + 0xa0);
  pcVar5 = pcVar20 + 1;
  do {
    cVar1 = *pcVar20;
    pcVar20 = pcVar20 + 1;
  } while (cVar1 != '\0');
  uVar8 = (int)pcVar20 - (int)pcVar5;
  if (*param_3 == 0) {
    pcVar5 = local_24;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar6 = (int)pcVar5 - (int)(local_24 + 1);
    iVar10 = thunk_FUN_100de8c0(local_24,*(undefined4 *)(param_1 + 0x700),iVar6);
    if (iVar10 == 0) {
LAB_100d485f:
      FUN_100d8ba0(param_1,"<url> malformed");
      return 3;
    }
    iVar10 = thunk_FUN_100de8c0(&DAT_10124910,*(int *)(param_1 + 0x700) + iVar6,3);
    if (iVar10 == 0) {
      iVar10 = thunk_FUN_100de8c0("file:",*(undefined4 *)(param_1 + 0x700),5);
      if (iVar10 == 0) goto LAB_100d485f;
      uVar8 = (*(char *)(*(int *)(param_1 + 0x700) + 5) == '/') + 1 + uVar8 + iVar6;
    }
    else {
      uVar8 = uVar8 + iVar6 + 3;
    }
  }
  puVar11 = (undefined4 *)
            (*(code *)PTR__malloc_101554b8)(pbVar16 + uVar8 + (1 - (int)(local_20 + 1)));
  if (puVar11 == (undefined4 *)0x0) {
    return 0x1b;
  }
  puVar17 = *(undefined4 **)(param_1 + 0x700);
  puVar18 = puVar11;
  for (uVar15 = uVar8 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  for (uVar15 = uVar8 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined1 *)puVar18 = *(undefined1 *)puVar17;
    puVar17 = (undefined4 *)((int)puVar17 + 1);
    puVar18 = (undefined4 *)((int)puVar18 + 1);
  }
  pbVar7 = local_20;
  pbVar9 = (byte *)((int)puVar11 + uVar8);
  for (uVar15 = (uint)(pbVar16 + (1 - (int)(local_20 + 1))) >> 2; uVar15 != 0; uVar15 = uVar15 - 1)
  {
    *(undefined4 *)pbVar9 = *(undefined4 *)pbVar7;
    pbVar7 = pbVar7 + 4;
    pbVar9 = pbVar9 + 4;
  }
  for (uVar8 = (uint)(pbVar16 + (1 - (int)(local_20 + 1))) & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pbVar9 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    pbVar9 = pbVar9 + 1;
  }
  if (*(int *)(param_1 + 0x704) != 0) {
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x700));
    *(undefined4 *)(param_1 + 0x700) = 0;
    *(undefined4 *)(param_1 + 0x704) = 0;
  }
  FUN_100d8ae0(param_1,"Rebuilt URL to: %s\n",puVar11);
  *(undefined4 **)(param_1 + 0x700) = puVar11;
  *(undefined4 *)(param_1 + 0x704) = 1;
LAB_100d48f9:
  iVar6 = FUN_100d1470(param_2,local_24);
  if ((iVar6 == 0) && (iVar6 = FUN_100d3fa0(param_1,param_4,param_5,param_6), iVar6 == 0)) {
    if ((**(char **)(param_2 + 0xa0) == '[') &&
       (pcVar5 = _strchr(*(char **)(param_2 + 0xa0),0x25), pcVar5 != (char *)0x0)) {
      iVar10 = 3;
      iVar6 = _strncmp("%25",pcVar5,3);
      if (iVar6 != 0) {
        FUN_100d8ae0(param_1,"Please URL encode %% as %%25, see RFC 6874.\n");
        iVar10 = 1;
      }
      uVar12 = _strtoul(pcVar5 + iVar10,(char **)&param_3,10);
      if ((char)*param_3 == ']') {
        puVar13 = param_3;
        do {
          uVar8 = *puVar13;
          puVar13 = (uint *)((int)puVar13 + 1);
        } while ((char)uVar8 != '\0');
        _memmove(pcVar5,param_3,(size_t)((int)puVar13 + (1 - (int)((int)param_3 + 1))));
        *(ulong *)(param_2 + 0x90) = uVar12;
      }
      else {
        FUN_100d8ae0(param_1,"Invalid IPv6 address format\n");
      }
    }
    if (*(int *)(param_1 + 0x688) != 0) {
      *(int *)(param_2 + 0x90) = *(int *)(param_1 + 0x688);
    }
    pcVar5 = _strchr((char *)local_20,0x23);
    if (pcVar5 != (char *)0x0) {
      *pcVar5 = '\0';
      pcVar5 = _strchr(*(char **)(param_1 + 0x700),0x23);
      if (pcVar5 != (char *)0x0) {
        *pcVar5 = '\0';
      }
    }
    iVar6 = 0;
  }
  return iVar6;
}


/* END FUNCTION 0x100d4120 */

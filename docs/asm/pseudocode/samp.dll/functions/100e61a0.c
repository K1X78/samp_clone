/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e61a0
 * Name: FUN_100e61a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100e61a0(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  int *piVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  uint uVar16;
  char *pcVar17;
  undefined1 *puVar18;
  int iVar19;
  int *piVar20;
  int *piVar21;
  int iVar22;
  uint uVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  char *pcVar26;
  char *pcVar27;
  char *pcVar28;
  undefined4 *puVar29;
  bool bVar30;
  undefined8 uVar31;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  int local_4c;
  char *local_48;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  char *local_38;
  char *local_34;
  undefined1 *puStack_30;
  uint local_24;
  int iStack_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  undefined1 local_c;
  undefined4 local_b;
  undefined4 local_7;
  
  piVar6 = param_1;
  iVar22 = param_1[0x28];
  iVar3 = *param_1;
  local_48 = *(char **)(iVar3 + 0x4ad4);
  local_b = 0;
  local_7 = 0;
  local_c = 0;
  iVar9 = *(int *)(iVar3 + 1000);
  *param_2 = 1;
  bVar5 = false;
  local_34 = "";
  local_4c = 0;
  local_14 = 0;
  local_1c = 0;
  local_18 = 0;
  if (0x13 < param_1[0x60]) {
    return 1;
  }
  if (param_1[0x18c] == 3) {
    param_1[0x60] = 0x14;
    return 1;
  }
  piVar4 = *(int **)(iVar3 + 0x140);
  if (*(int *)(iVar3 + 0x4868) == 0) {
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(iVar3 + 0x486c));
    iVar8 = (*(code *)PTR___strdup_101554c4)(param_1[0x28]);
    *(int *)(iVar3 + 0x486c) = iVar8;
    if (iVar8 == 0) {
      return 0x1b;
    }
    *(int *)(iVar3 + 0x4870) = param_1[0x40];
  }
  piVar1 = piVar4 + 8;
  *piVar1 = 0;
  piVar4[9] = 0;
  puVar2 = (uint *)(piVar4 + 10);
  *puVar2 = 0;
  piVar4[0xb] = 0;
  piVar21 = param_1 + 200;
  param_1 = (int *)iVar9;
  if (((*(byte *)(*piVar21 + 0x40) & 7) != 0) && (*(int *)(iVar3 + 0x540) != 0)) {
    param_1 = (int *)0x5;
  }
  pcVar26 = *(char **)(iVar3 + 0x5b8);
  if (pcVar26 != (char *)0x0) goto LAB_100e62ff;
  if (*(int *)(iVar3 + 0x53c) == 0) {
    switch(param_1) {
    case (int *)0x2:
    case (int *)0x3:
    case (int *)0x4:
      pcVar26 = "POST";
      break;
    case (int *)0x5:
      pcVar26 = "PUT";
      break;
    case (int *)0x6:
      goto switchD_100e62de_caseD_6;
    case (int *)0x7:
      pcVar26 = "OPTIONS";
      break;
    default:
      pcVar26 = "GET";
    }
  }
  else {
switchD_100e62de_caseD_6:
    pcVar26 = "HEAD";
  }
LAB_100e62ff:
  iVar9 = FUN_100ec550(piVar6,"User-Agent:");
  if (iVar9 != 0) {
    (*(code *)PTR__free_101554bc)(piVar6[0xce]);
    piVar6[0xce] = 0;
  }
  iVar9 = FUN_100e4de0(piVar6,pcVar26,local_48,0);
  if (iVar9 != 0) {
    return iVar9;
  }
  if ((((*(int *)(iVar3 + 0x496c) == 0) && (*(int *)(iVar3 + 0x4984) == 0)) ||
      (param_1 == (int *)0x1)) || (param_1 == (int *)0x6)) {
    piVar6[0xb2] = 0;
  }
  else {
    piVar6[0xb2] = 1;
  }
  (*(code *)PTR__free_101554bc)(piVar6[0xd2]);
  piVar6[0xd2] = 0;
  if ((*(int *)(iVar3 + 0x708) == 0) || (iVar9 = FUN_100ec550(piVar6,"Referer:"), iVar9 != 0)) {
    piVar6[0xd2] = 0;
  }
  else {
    iVar9 = FUN_100cd220("Referer: %s\r\n",*(undefined4 *)(iVar3 + 0x708));
    piVar6[0xd2] = iVar9;
    if (iVar9 == 0) {
      return 0x1b;
    }
  }
  if ((*(int *)(iVar3 + 0x5b0) != 0) && (iVar9 = FUN_100ec550(piVar6,"Cookie:"), iVar9 == 0)) {
    local_4c = *(int *)(iVar3 + 0x5b0);
  }
  iVar9 = FUN_100ec550(piVar6,"Accept-Encoding:");
  if ((iVar9 == 0) && (*(int *)(iVar3 + 0x5c4) != 0)) {
    (*(code *)PTR__free_101554bc)(piVar6[0xcf]);
    piVar6[0xcf] = 0;
    iVar9 = FUN_100cd220("Accept-Encoding: %s\r\n",*(undefined4 *)(iVar3 + 0x5c4));
    piVar6[0xcf] = iVar9;
    if (iVar9 == 0) {
      return 0x1b;
    }
  }
  else {
    (*(code *)PTR__free_101554bc)(piVar6[0xcf]);
    piVar6[0xcf] = 0;
  }
  iVar9 = FUN_100ec550(piVar6,&DAT_10127640);
  if ((iVar9 == 0) && (*(int *)(iVar3 + 0x528) != 0)) {
    iVar9 = FUN_100ec550(piVar6,"Connection:");
    (*(code *)PTR__free_101554bc)(piVar6[0xd6]);
    piVar6[0xd6] = 0;
    if (iVar9 == 0) {
      iVar9 = (*(code *)PTR___strdup_101554c4)("Connection: TE\r\nTE: gzip\r\n");
    }
    else {
      iVar9 = FUN_100cd220("%s, TE\r\nTE: gzip\r\n",iVar9);
    }
    piVar6[0xd6] = iVar9;
    if (iVar9 == 0) {
      return 0x1b;
    }
  }
  if (param_1 == (int *)0x3) {
    piVar21 = piVar4 + 0xc;
    FUN_100de5a0(piVar21);
    iVar9 = FUN_100f5b90(iVar3,piVar21,*(undefined4 *)(iVar3 + 0x240),
                         *(undefined4 *)(iVar3 + 0x4b10));
    if (iVar9 != 0) {
      return iVar9;
    }
    *piVar4 = (int)piVar21;
LAB_100e6530:
    if (*piVar4 != 0) {
      iVar9 = FUN_100ec550(piVar6,"Content-Type:");
      *(uint *)(*piVar4 + 0x48) = *(uint *)(*piVar4 + 0x48) | 2;
      if (iVar9 == 0) {
        pcVar11 = (char *)0x0;
        if (*(int *)(*piVar4 + 0xc) == 4) {
          pcVar11 = "multipart/form-data";
        }
      }
      else {
        pcVar11 = (char *)(iVar9 + 0xd);
        cVar7 = *(char *)(iVar9 + 0xd);
        while (cVar7 == ' ') {
          pcVar12 = pcVar11 + 1;
          pcVar11 = pcVar11 + 1;
          cVar7 = *pcVar12;
        }
      }
      FUN_100dde80(*piVar4,*(undefined4 *)(iVar3 + 0x238),0);
      iVar9 = FUN_100de240(*piVar4,pcVar11,0,1);
      FUN_100dde80(*piVar4,0,0);
      if (iVar9 != 0) {
        return iVar9;
      }
      iVar9 = FUN_100ddf80(*piVar4);
      if (iVar9 != 0) {
        return iVar9;
      }
      uVar31 = FUN_100de090(*piVar4);
      *(undefined8 *)(piVar4 + 2) = uVar31;
    }
  }
  else {
    if (param_1 == (int *)0x4) {
      *piVar4 = iVar3 + 0x248;
      goto LAB_100e6530;
    }
    *piVar4 = 0;
  }
  iVar9 = FUN_100ec550(piVar6,"Transfer-Encoding:");
  if (iVar9 == 0) {
    if (((*(byte *)(piVar6[200] + 0x40) & 3) == 0) ||
       ((((param_1 != (int *)0x4 && (param_1 != (int *)0x3)) || (-1 < piVar4[3])) &&
        ((*(int *)(iVar3 + 0x540) == 0 ||
         ((*(uint *)(iVar3 + 0x4b00) & *(uint *)(iVar3 + 0x4b04)) != 0xffffffff)))))) {
      *(undefined4 *)(iVar3 + 0x134) = 0;
    }
    else if (piVar6[0xb2] == 0) {
      iVar9 = FUN_100e5880(piVar6);
      if (iVar9 == 0) {
        FUN_100d8ba0(iVar3,"Chunky upload is not supported by HTTP 1.0");
        return 0x19;
      }
      *(undefined4 *)(iVar3 + 0x134) = 1;
    }
    if (*(int *)(iVar3 + 0x134) != 0) {
      local_34 = "Transfer-Encoding: chunked\r\n";
    }
  }
  else {
    uVar10 = FUN_100e55e0(iVar9,"Transfer-Encoding:","chunked");
    *(undefined4 *)(iVar3 + 0x134) = uVar10;
  }
  (*(code *)PTR__free_101554bc)(piVar6[0xd3]);
  piVar6[0xd3] = 0;
  pcVar11 = (char *)FUN_100ec550(piVar6,"Host:");
  if ((pcVar11 == (char *)0x0) ||
     ((*(int *)(iVar3 + 0x4868) != 0 &&
      (iVar9 = FUN_100de830(*(undefined4 *)(iVar3 + 0x486c),piVar6[0x28]), iVar9 == 0)))) {
    if ((((*(uint *)(piVar6[0xc9] + 0x40) & 2) == 0) || (piVar6[0x40] != 0x1bb)) &&
       (((*(uint *)(piVar6[0xc9] + 0x40) & 1) == 0 || (piVar6[0x40] != 0x50)))) {
      puVar25 = &DAT_10117f50;
      if (piVar6[0xaa] == 0) {
        puVar25 = &DAT_10117a39;
        puVar24 = &DAT_10117a39;
      }
      else {
        puVar24 = &DAT_101183f8;
      }
      iVar9 = FUN_100cd220("Host: %s%s%s:%hu\r\n",puVar24,iVar22,puVar25,piVar6[0x40]);
    }
    else {
      puVar25 = &DAT_10117f50;
      if (piVar6[0xaa] == 0) {
        puVar25 = &DAT_10117a39;
        puVar24 = &DAT_10117a39;
      }
      else {
        puVar24 = &DAT_101183f8;
      }
      iVar9 = FUN_100cd220("Host: %s%s%s\r\n",puVar24,iVar22,puVar25);
    }
    piVar6[0xd3] = iVar9;
    if (iVar9 == 0) {
      return 0x1b;
    }
  }
  else {
    pcVar12 = (char *)FUN_100e4840(pcVar11);
    if (pcVar12 == (char *)0x0) {
      return 0x1b;
    }
    if (*pcVar12 == '\0') {
      (*(code *)PTR__free_101554bc)(pcVar12);
    }
    else {
      if (*pcVar12 == '[') {
        pcVar13 = pcVar12;
        do {
          cVar7 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar7 != '\0');
        _memmove(pcVar12,pcVar12 + 1,(size_t)(pcVar13 + (-1 - (int)(pcVar12 + 1))));
        pcVar13 = _strchr(pcVar12,0x5d);
      }
      else {
        pcVar13 = _strchr(pcVar12,0x3a);
      }
      if (pcVar13 != (char *)0x0) {
        *pcVar13 = '\0';
      }
      (*(code *)PTR__free_101554bc)(piVar6[0xd4]);
      piVar6[0xd4] = (int)pcVar12;
    }
    iVar9 = 6;
    bVar30 = true;
    pcVar12 = "Host:";
    pcVar13 = pcVar11;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      bVar30 = *pcVar12 == *pcVar13;
      pcVar12 = pcVar12 + 1;
      pcVar13 = pcVar13 + 1;
    } while (bVar30);
    if (bVar30) {
      piVar6[0xd3] = 0;
    }
    else {
      iVar9 = FUN_100cd220(&DAT_1012727c,pcVar11);
      piVar6[0xd3] = iVar9;
      if (iVar9 == 0) {
        return 0x1b;
      }
    }
  }
  if ((piVar6[0xa6] != 0) && (piVar6[0xb1] == 0)) {
    if ((char *)piVar6[0x29] != (char *)piVar6[0x28]) {
      pcVar11 = *(char **)(iVar3 + 0x700);
      pcVar12 = _strstr(pcVar11,(char *)piVar6[0x29]);
      if (pcVar12 != (char *)0x0) {
        pcVar14 = (char *)piVar6[0x29];
        pcVar13 = pcVar14 + 1;
        do {
          cVar7 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar7 != '\0');
        pcVar15 = (char *)piVar6[0x28];
        pcVar17 = pcVar15 + 1;
        do {
          cVar7 = *pcVar15;
          pcVar15 = pcVar15 + 1;
        } while (cVar7 != '\0');
        uVar16 = (int)pcVar15 - (int)pcVar17;
        pcVar17 = pcVar11;
        do {
          cVar7 = *pcVar17;
          pcVar17 = pcVar17 + 1;
        } while (cVar7 != '\0');
        iVar9 = -((int)pcVar14 - (int)pcVar13) - (int)(pcVar11 + 1);
        pcVar15 = (char *)(*(code *)PTR__malloc_101554b8)(pcVar17 + uVar16 + iVar9 + 1);
        if (pcVar15 == (char *)0x0) {
          return 0x1b;
        }
        pcVar27 = pcVar11;
        pcVar28 = pcVar15;
        for (uVar23 = (uint)((int)pcVar12 - (int)pcVar11) >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
          *(undefined4 *)pcVar28 = *(undefined4 *)pcVar27;
          pcVar27 = pcVar27 + 4;
          pcVar28 = pcVar28 + 4;
        }
        for (uVar23 = (int)pcVar12 - (int)pcVar11 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
          *pcVar28 = *pcVar27;
          pcVar27 = pcVar27 + 1;
          pcVar28 = pcVar28 + 1;
        }
        pcVar27 = (char *)piVar6[0x28];
        pcVar28 = pcVar12 + ((int)pcVar15 - (int)pcVar11);
        for (uVar23 = uVar16 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
          *(undefined4 *)pcVar28 = *(undefined4 *)pcVar27;
          pcVar27 = pcVar27 + 4;
          pcVar28 = pcVar28 + 4;
        }
        for (uVar23 = uVar16 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
          *pcVar28 = *pcVar27;
          pcVar27 = pcVar27 + 1;
          pcVar28 = pcVar28 + 1;
        }
        pcVar13 = pcVar12 + ((int)pcVar14 - (int)pcVar13);
        pcVar14 = pcVar12 + uVar16 + ((int)pcVar15 - (int)pcVar11);
        for (uVar23 = (uint)(pcVar11 + (int)(pcVar17 + (iVar9 - (int)pcVar12) + 1)) >> 2;
            uVar23 != 0; uVar23 = uVar23 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar16 = (uint)(pcVar11 + (int)(pcVar17 + (iVar9 - (int)pcVar12) + 1)) & 3; uVar16 != 0
            ; uVar16 = uVar16 - 1) {
          *pcVar14 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar14 = pcVar14 + 1;
        }
        if (*(int *)(iVar3 + 0x704) != 0) {
          (*(code *)PTR__free_101554bc)(*(undefined4 *)(iVar3 + 0x700));
          *(undefined4 *)(iVar3 + 0x700) = 0;
          *(undefined4 *)(iVar3 + 0x704) = 0;
        }
        *(char **)(iVar3 + 0x700) = pcVar15;
        *(undefined4 *)(iVar3 + 0x704) = 1;
      }
    }
    local_48 = *(char **)(iVar3 + 0x700);
    iVar9 = thunk_FUN_100de8c0("ftp://",local_48,6);
    if (iVar9 != 0) {
      if ((*(int *)(iVar3 + 0x59c) != 0) &&
         ((pcVar11 = _strstr(local_48,";type="), pcVar11 == (char *)0x0 ||
          ((((pcVar11[6] != '\0' && (pcVar11[7] == '\0')) &&
            (cVar7 = FUN_100de810(pcVar11[6]), cVar7 != 'A')) && ((cVar7 != 'D' && (cVar7 != 'I'))))
          )))) {
        puVar29 = (undefined4 *)&local_c;
        pcVar11 = local_48;
        if (**(char **)(iVar3 + 0x4ad4) == '\0') {
          do {
            pcVar12 = pcVar11;
            pcVar11 = pcVar12 + 1;
          } while (*pcVar12 != '\0');
          if (pcVar12[-1] != '/') {
            local_c = 0x2f;
            puVar29 = &local_b;
          }
        }
        FUN_100cc780(puVar29,8,";type=%c",(*(int *)(iVar3 + 0x508) == 0) * '\b' + 'a');
      }
      if ((piVar6[0xa8] != 0) && (piVar6[0xb8] == 0)) {
        bVar5 = true;
      }
    }
  }
  iVar9 = FUN_100ec550(piVar6,"Accept:");
  piVar4[6] = ~-(uint)(iVar9 != 0) & 0x10127578;
  if (((param_1 == (int *)0x2) || (param_1 == (int *)0x5)) &&
     (iVar9 = *(int *)(iVar3 + 0x4aec), *(int *)(iVar3 + 0x4ae8) != 0 || iVar9 != 0)) {
    if ((iVar9 < 1) && (iVar9 < 0)) {
      *(undefined4 *)(iVar3 + 0x4ae8) = 0;
      *(undefined4 *)(iVar3 + 0x4aec) = 0;
    }
    if ((*(int *)(iVar3 + 0x4ae8) != 0 || *(int *)(iVar3 + 0x4aec) != 0) &&
       (*(int *)(iVar3 + 0x4868) == 0)) {
      if ((code *)piVar6[0xf1] == (code *)0x0) {
        iVar9 = 2;
LAB_100e6bae:
        local_24 = 0;
        iStack_20 = 0;
        if (iVar9 != 2) {
          FUN_100d8ba0(iVar3,"Could not seek stream");
          return 0x1a;
        }
        do {
          uVar16 = *(uint *)(iVar3 + 0x4d0);
          uVar23 = *(uint *)(iVar3 + 0x4ae8) - local_24;
          iVar9 = (*(int *)(iVar3 + 0x4aec) - iStack_20) -
                  (uint)(*(uint *)(iVar3 + 0x4ae8) < local_24);
          if ((iVar9 < (int)uVar16 >> 0x1f) ||
             ((iVar9 <= (int)uVar16 >> 0x1f && (uVar23 <= uVar16)))) {
            uVar16 = FUN_100d9a70(uVar23,iVar9);
          }
          uVar23 = (**(code **)(iVar3 + 0x4b10))
                             (*(undefined4 *)(iVar3 + 0x854),1,uVar16,
                              *(undefined4 *)(iVar3 + 0x4b14));
          bVar30 = CARRY4(local_24,uVar23);
          local_24 = local_24 + uVar23;
          iStack_20 = iStack_20 + (uint)bVar30;
          if ((uVar23 == 0) || (uVar16 < uVar23)) {
            FUN_100d8ba0(iVar3,"Could only read %I64d bytes from the input",local_24,iStack_20);
            return 0x1a;
          }
        } while ((iStack_20 <= *(int *)(iVar3 + 0x4aec)) &&
                ((iStack_20 < *(int *)(iVar3 + 0x4aec) || (local_24 < *(uint *)(iVar3 + 0x4ae8)))));
      }
      else {
        iVar9 = (*(code *)piVar6[0xf1])
                          (piVar6[0xf2],*(int *)(iVar3 + 0x4ae8),*(int *)(iVar3 + 0x4aec),0);
        if (iVar9 != 0) goto LAB_100e6bae;
      }
      iVar9 = *(int *)(iVar3 + 0x4b04);
      uVar16 = *(uint *)(iVar3 + 0x4b00);
      if ((-1 < iVar9) && ((0 < iVar9 || (uVar16 != 0)))) {
        iVar8 = uVar16 - *(uint *)(iVar3 + 0x4ae8);
        iVar9 = (iVar9 - *(int *)(iVar3 + 0x4aec)) - (uint)(uVar16 < *(uint *)(iVar3 + 0x4ae8));
        *(int *)(iVar3 + 0x4b00) = iVar8;
        *(int *)(iVar3 + 0x4b04) = iVar9;
        if ((iVar9 < 1) && ((iVar9 < 0 || (iVar8 == 0)))) {
          FUN_100d8ba0(iVar3,"File already completely uploaded");
          return 0x12;
        }
      }
    }
  }
  if (*(int *)(iVar3 + 0x4adc) != 0) {
    if (((param_1 == (int *)0x1) || (param_1 == (int *)0x6)) &&
       (iVar9 = FUN_100ec550(piVar6,"Range:"), iVar9 == 0)) {
      (*(code *)PTR__free_101554bc)(piVar6[0xd1]);
      iVar9 = FUN_100cd220("Range: bytes=%s\r\n",*(undefined4 *)(iVar3 + 0x4ae4));
      piVar6[0xd1] = iVar9;
    }
    else if (((param_1 == (int *)0x2) || (param_1 == (int *)0x5)) &&
            (iVar9 = FUN_100ec550(piVar6,"Content-Range:"), iVar9 == 0)) {
      (*(code *)PTR__free_101554bc)(piVar6[0xd1]);
      if ((*(int *)(iVar3 + 0x234) < 1) && (*(int *)(iVar3 + 0x234) < 0)) {
        iVar9 = *(int *)(iVar3 + 0x4b00);
        iVar9 = FUN_100cd220("Content-Range: bytes 0-%I64d/%I64d\r\n",iVar9 + -1,
                             *(int *)(iVar3 + 0x4b04) - (uint)(iVar9 == 0),iVar9,
                             *(int *)(iVar3 + 0x4b04));
      }
      else {
        uVar16 = *(uint *)(iVar3 + 0x4ae8);
        uVar23 = *(uint *)(iVar3 + 0x4b00);
        if (uVar16 == 0 && *(int *)(iVar3 + 0x4aec) == 0) {
          iVar9 = FUN_100cd220("Content-Range: bytes %s/%I64d\r\n",*(undefined4 *)(iVar3 + 0x4ae4),
                               uVar23,*(undefined4 *)(iVar3 + 0x4b04));
        }
        else {
          iVar9 = uVar23 + uVar16;
          iVar8 = *(int *)(iVar3 + 0x4b04) + *(int *)(iVar3 + 0x4aec) + (uint)CARRY4(uVar23,uVar16);
          iVar9 = FUN_100cd220("Content-Range: bytes %s%I64d/%I64d\r\n",
                               *(undefined4 *)(iVar3 + 0x4ae4),iVar9 + -1,iVar8 - (uint)(iVar9 == 0)
                               ,iVar9,iVar8);
        }
      }
      piVar6[0xd1] = iVar9;
      if (iVar9 == 0) {
        return 0x1b;
      }
    }
  }
  uVar10 = FUN_100e58c0(piVar6);
  iVar9 = (*(code *)PTR__calloc_101554c8)(1,0xc);
  if (iVar9 == 0) {
    return 0x1b;
  }
  iVar8 = FUN_100e5da0(iVar9,&DAT_10127470,pcVar26);
  if (iVar8 != 0) {
    return iVar8;
  }
  pcVar26 = *(char **)(iVar3 + 0x67c);
  if (*(char **)(iVar3 + 0x67c) == (char *)0x0) {
    pcVar26 = local_48;
  }
  if (bVar5) {
    iVar8 = FUN_100e5da0(iVar9,"ftp://%s:%s@%s",piVar6[0x5c],piVar6[0x5d],pcVar26 + 6);
  }
  else {
    pcVar11 = pcVar26;
    do {
      cVar7 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar7 != '\0');
    iVar8 = FUN_100e5510(iVar9,pcVar26,(int)pcVar11 - (int)(pcVar26 + 1));
  }
  if (iVar8 != 0) {
    return iVar8;
  }
  if (((piVar6[0xa6] == 0) || (piVar6[0xb1] != 0)) ||
     (iVar8 = FUN_100e47d0(piVar6,"Proxy-Connection:"), iVar8 != 0)) {
    local_38 = "";
  }
  else {
    local_38 = "Proxy-Connection: Keep-Alive\r\n";
  }
  if ((*(int *)(iVar3 + 0x708) == 0) ||
     (puStack_3c = (undefined1 *)piVar6[0xd2], puStack_3c == (undefined1 *)0x0)) {
    puStack_3c = &DAT_10117a39;
  }
  if (((*(char **)(iVar3 + 0x5c4) == (char *)0x0) || (**(char **)(iVar3 + 0x5c4) == '\0')) ||
     (puStack_40 = (undefined1 *)piVar6[0xcf], puStack_40 == (undefined1 *)0x0)) {
    puStack_40 = &DAT_10117a39;
  }
  local_48 = (char *)piVar6[0xd6];
  if (local_48 == (undefined1 *)0x0) {
    local_48 = "";
  }
  puStack_58 = (undefined1 *)piVar4[6];
  if (puStack_58 == (undefined1 *)0x0) {
    puStack_58 = &DAT_10117a39;
  }
  if (((*(char **)(iVar3 + 0x630) == (char *)0x0) || (**(char **)(iVar3 + 0x630) == '\0')) ||
     (puStack_5c = (undefined1 *)piVar6[0xce], puStack_5c == (undefined1 *)0x0)) {
    puStack_5c = &DAT_10117a39;
  }
  if ((*(int *)(iVar3 + 0x4adc) == 0) ||
     (puStack_30 = (undefined1 *)piVar6[0xd1], puStack_30 == (undefined1 *)0x0)) {
    puStack_30 = &DAT_10117a39;
  }
  puVar25 = (undefined1 *)piVar6[0xd0];
  if (puVar25 == (undefined1 *)0x0) {
    puVar25 = &DAT_10117a39;
  }
  puVar24 = (undefined1 *)piVar6[0xcd];
  if (puVar24 == (undefined1 *)0x0) {
    puVar24 = &DAT_10117a39;
  }
  puVar18 = (undefined1 *)piVar6[0xd3];
  if (puVar18 == (undefined1 *)0x0) {
    puVar18 = &DAT_10117a39;
  }
  iVar8 = FUN_100e5da0(iVar9,"%s HTTP/%s\r\n%s%s%s%s%s%s%s%s%s%s%s",&local_c,uVar10,puVar18,puVar24,
                       puVar25,puStack_30,puStack_5c,puStack_58,local_48,puStack_40,puStack_3c,
                       local_38,local_34);
  (*(code *)PTR__free_101554bc)(piVar6[0xd0]);
  piVar6[0xd0] = 0;
  (*(code *)PTR__free_101554bc)(piVar6[0xcd]);
  piVar6[0xcd] = 0;
  if (iVar8 != 0) {
    return iVar8;
  }
  if ((((*(byte *)(piVar6[200] + 0x44) & 1) == 0) && (piVar6[0x60] != 0x14)) &&
     (*(int *)(iVar3 + 0x3ec) == 3)) {
    return 1;
  }
  if ((*(int *)(iVar3 + 0x718) != 0) || (local_4c != 0)) {
    puStack_58 = (undefined1 *)0x0;
    iVar8 = 0;
    if (*(int *)(iVar3 + 0x718) != 0) {
      FUN_100dec30(iVar3,2,2);
      iVar19 = piVar6[0xd4];
      if (piVar6[0xd4] == 0) {
        iVar19 = iVar22;
      }
      piVar20 = (int *)FUN_100db1d0(*(undefined4 *)(iVar3 + 0x718),iVar19,
                                    *(undefined4 *)(iVar3 + 0x4ad4),
                                    *(uint *)(piVar6[200] + 0x40) >> 1 & 1);
      FUN_100dec70(iVar3,2);
      piVar21 = piVar20;
      if (piVar20 != (int *)0x0) {
        do {
          if (piVar21[2] != 0) {
            if (puStack_58 == (undefined1 *)0x0) {
              iVar8 = FUN_100e5da0(iVar9,"Cookie: ");
              if (iVar8 != 0) break;
              puVar25 = &DAT_10117a39;
            }
            else {
              puVar25 = &DAT_101273f0;
            }
            iVar8 = FUN_100e5da0(iVar9,"%s%s=%s",puVar25,piVar21[1],piVar21[2]);
            if (iVar8 != 0) break;
            puStack_58 = (undefined1 *)((int)puStack_58 + 1);
          }
          piVar21 = (int *)*piVar21;
        } while (piVar21 != (int *)0x0);
        FUN_100dacd0(piVar20);
      }
    }
    if ((local_4c != 0) && (iVar8 == 0)) {
      if (puStack_58 == (undefined1 *)0x0) {
        iVar22 = FUN_100e5da0(iVar9,"Cookie: ");
        if (iVar22 != 0) {
          return iVar22;
        }
        puVar25 = &DAT_10117a39;
      }
      else {
        puVar25 = &DAT_101273f0;
      }
      iVar8 = FUN_100e5da0(iVar9,&DAT_1011c92c,puVar25,local_4c);
      puStack_58 = (undefined1 *)((int)puStack_58 + 1);
    }
    if (puStack_58 != (undefined1 *)0x0) {
      if (iVar8 != 0) {
        return iVar8;
      }
      iVar8 = FUN_100e5510(iVar9,&DAT_101185d0,2);
    }
    if (iVar8 != 0) {
      return iVar8;
    }
  }
  iVar22 = FUN_100e5900(iVar3,iVar9);
  if (iVar22 != 0) {
    return iVar22;
  }
  iVar22 = FUN_100e5f20(piVar6,0,iVar9);
  if (iVar22 != 0) {
    return iVar22;
  }
  piVar21 = piVar4 + 4;
  *piVar21 = 0;
  FUN_100e3390(iVar3,0xffffffff,0xffffffff);
  switch(param_1) {
  case (int *)0x2:
    if (piVar6[0xb2] == 0) {
      local_1c = *(uint *)(iVar3 + 0x4b00);
      local_18 = *(uint *)(iVar3 + 0x4b04);
      if ((local_1c & local_18) != 0xffffffff) goto LAB_100e7599;
    }
    else {
      local_1c = 0;
      local_18 = 0;
LAB_100e7599:
      if (((*(int *)(iVar3 + 0x134) == 0) &&
          ((piVar6[0xb2] != 0 || (iVar22 = FUN_100ec550(piVar6,"Content-Length:"), iVar22 == 0))))
         && (iVar22 = FUN_100e5da0(iVar9,"Content-Length: %I64d\r\n",local_1c,local_18), iVar22 != 0
            )) {
        return iVar22;
      }
    }
    iVar22 = FUN_100ec550(piVar6,"Content-Type:");
    if ((iVar22 == 0) &&
       (iVar22 = FUN_100e5da0(iVar9,"Content-Type: application/x-www-form-urlencoded\r\n"),
       iVar22 != 0)) {
      return iVar22;
    }
    iVar22 = FUN_100ec550(piVar6,"Expect:");
    if (iVar22 == 0) {
      if (((int)local_18 < 1) &&
         ((((int)local_18 < 0 || (local_1c < 0x401)) && (-1 < (int)local_18)))) {
        *(undefined4 *)(iVar3 + 0x4ac8) = 0;
      }
      else {
        iVar22 = FUN_100e5e90(iVar9);
        if (iVar22 != 0) {
          return iVar22;
        }
      }
    }
    else {
      uVar10 = FUN_100e55e0(iVar22,"Expect:","100-continue");
      *(undefined4 *)(iVar3 + 0x4ac8) = uVar10;
    }
    if (*(int *)(iVar3 + 0x188) == 0) {
      iVar22 = FUN_100e5510(iVar9,&DAT_101185d0,2);
      if (iVar22 != 0) {
        return iVar22;
      }
      if ((*(int *)(iVar3 + 0x134) == 0) || (piVar6[0xb2] == 0)) {
        if (*(int *)(iVar3 + 0x4b00) != 0 || *(int *)(iVar3 + 0x4b04) != 0) {
          uVar16 = local_1c;
          uVar23 = local_18;
          if (local_1c == 0 && local_18 == 0) {
            uVar16 = 0xffffffff;
            uVar23 = 0xffffffff;
          }
          FUN_100e3390(iVar3,uVar16,uVar23);
          if (piVar6[0xb2] == 0) {
            *piVar21 = (int)piVar21;
            piVar4[2] = local_1c;
            piVar4[3] = local_18;
          }
        }
      }
      else {
        iVar22 = FUN_100e5510(iVar9,"0\r\n\r\n",5);
        if (iVar22 != 0) {
          return iVar22;
        }
      }
    }
    else if (((piVar6[0x60] == 0x14) || (*(int *)(iVar3 + 0x4ac8) != 0)) ||
            ((0 < (int)local_18 || ((-1 < (int)local_18 && (0xffff < local_1c)))))) {
      piVar4[3] = local_18;
      piVar4[2] = local_1c;
      *piVar21 = *(int *)(iVar3 + 0x188);
      piVar4[0x6c] = 2;
      *(undefined1 **)(iVar3 + 0x4b10) = &LAB_100e51d0;
      *(int **)(iVar3 + 0x4b14) = piVar6;
      FUN_100e3390(iVar3,piVar4[2],piVar4[3]);
      iVar22 = FUN_100e5510(iVar9,&DAT_101185d0,2);
      if (iVar22 != 0) {
        return iVar22;
      }
    }
    else {
      iVar22 = FUN_100e5510(iVar9,&DAT_101185d0,2);
      if (iVar22 != 0) {
        return iVar22;
      }
      if (*(int *)(iVar3 + 0x134) == 0) {
        iVar22 = FUN_100e5510(iVar9,*(undefined4 *)(iVar3 + 0x188),local_1c);
        local_14 = local_1c;
      }
      else {
        if (local_1c == 0 && local_18 == 0) {
LAB_100e774c:
          iVar22 = FUN_100e5510(iVar9,"0\r\n\r\n",5);
        }
        else {
          iVar22 = FUN_100e5da0(iVar9,&DAT_1012734c,local_1c);
          if (iVar22 == 0) {
            iVar22 = FUN_100e5510(iVar9,*(undefined4 *)(iVar3 + 0x188),local_1c);
            if (iVar22 == 0) {
              iVar22 = FUN_100e5510(iVar9,&DAT_101185d0,2);
            }
            local_14 = local_1c + 2;
            if (iVar22 == 0) goto LAB_100e774c;
          }
        }
        local_14 = local_14 + 5;
      }
      if (iVar22 != 0) {
        return iVar22;
      }
      FUN_100e3390(iVar3,local_1c,local_18);
    }
    iVar22 = FUN_100e5320(iVar9,piVar6,iVar3 + 0x4b68,local_14,0);
    if (iVar22 != 0) {
      FUN_100d8ba0(iVar3,"Failed sending HTTP POST request");
      return iVar22;
    }
    FUN_100ee2c0(piVar6,0,0xffffffff,0xffffffff,1,piVar1,(*piVar21 != 0) - 1,
                 -(uint)(*piVar21 != 0) & (uint)puVar2);
    break;
  case (int *)0x3:
  case (int *)0x4:
    if (piVar6[0xb2] == 0) {
      local_1c = piVar4[2];
      local_18 = piVar4[3];
      if ((((local_1c & local_18) != 0xffffffff) && (*(int *)(iVar3 + 0x134) == 0)) &&
         ((iVar22 = FUN_100ec550(piVar6,"Content-Length:"), iVar22 == 0 &&
          (iVar22 = FUN_100e5da0(iVar9,"Content-Length: %I64d\r\n",local_1c,local_18), iVar22 != 0))
         )) {
        return iVar22;
      }
      for (puVar29 = *(undefined4 **)(*piVar4 + 0x28); puVar29 != (undefined4 *)0x0;
          puVar29 = (undefined4 *)puVar29[1]) {
        iVar22 = FUN_100e5da0(iVar9,&DAT_1012727c,*puVar29);
        if (iVar22 != 0) {
          return iVar22;
        }
      }
      iVar22 = FUN_100ec550(piVar6,"Expect:");
      if (iVar22 == 0) {
        if (((int)local_18 < 1) &&
           ((((int)local_18 < 0 || (local_1c < 0x401)) && (-1 < (int)local_18)))) {
          *(undefined4 *)(iVar3 + 0x4ac8) = 0;
        }
        else {
          iVar22 = FUN_100e5e90(iVar9);
          if (iVar22 != 0) {
            return iVar22;
          }
        }
      }
      else {
        uVar10 = FUN_100e55e0(iVar22,"Expect:","100-continue");
        *(undefined4 *)(iVar3 + 0x4ac8) = uVar10;
      }
      iVar22 = FUN_100e5510(iVar9,&DAT_101185d0,2);
      if (iVar22 != 0) {
        return iVar22;
      }
      FUN_100e3390(iVar3,local_1c,local_18);
      *(code **)(iVar3 + 0x4b10) = FUN_100ddf60;
      *(int *)(iVar3 + 0x4b14) = *piVar4;
      piVar4[0x6c] = 2;
      iVar22 = FUN_100e5320(iVar9,piVar6,iVar3 + 0x4b68,0,0);
      if (iVar22 != 0) {
        FUN_100d8ba0(iVar3,"Failed sending POST request");
        return iVar22;
      }
      if (local_1c == 0 && local_18 == 0) {
        FUN_100ee2c0(piVar6,0,0xffffffff,0xffffffff,1,piVar1,0xffffffff,0);
      }
      else {
        FUN_100ee2c0(piVar6,0,0xffffffff,0xffffffff,1,piVar1,0,puVar2);
      }
    }
    else {
      iVar22 = FUN_100e5da0(iVar9,"Content-Length: 0\r\n\r\n");
      if (iVar22 != 0) {
        return iVar22;
      }
      iVar22 = FUN_100e5320(iVar9,piVar6,iVar3 + 0x4b68,0,0);
      if (iVar22 != 0) {
        FUN_100d8ba0(iVar3,"Failed sending POST request");
        return iVar22;
      }
      FUN_100ee2c0(piVar6,0,0xffffffff,0xffffffff,1,piVar1,0xffffffff,0);
    }
    break;
  case (int *)0x5:
    if (piVar6[0xb2] == 0) {
      local_1c = *(uint *)(iVar3 + 0x4b00);
      local_18 = *(uint *)(iVar3 + 0x4b04);
      if ((local_1c & local_18) != 0xffffffff) goto LAB_100e721b;
    }
    else {
      local_1c = 0;
      local_18 = 0;
LAB_100e721b:
      if ((*(int *)(iVar3 + 0x134) == 0) &&
         (((piVar6[0xb2] != 0 || (iVar22 = FUN_100ec550(piVar6,"Content-Length:"), iVar22 == 0)) &&
          (iVar22 = FUN_100e5da0(iVar9,"Content-Length: %I64d\r\n",local_1c,local_18), iVar22 != 0))
         )) {
        return iVar22;
      }
    }
    if ((local_1c != 0 || local_18 != 0) && (iVar22 = FUN_100e5e90(iVar9), iVar22 != 0)) {
      return iVar22;
    }
    iVar22 = FUN_100e5510(iVar9,&DAT_101185d0,2);
    if (iVar22 != 0) {
      return iVar22;
    }
    FUN_100e3390(iVar3,local_1c,local_18);
    iVar22 = FUN_100e5320(iVar9,piVar6,iVar3 + 0x4b68,0,0);
    if (iVar22 != 0) {
      FUN_100d8ba0(iVar3,"Failed sending PUT request");
      return iVar22;
    }
    if (local_1c == 0 && local_18 == 0) {
      FUN_100ee2c0(piVar6,0,0xffffffff,0xffffffff,1,piVar1,0xffffffff,0);
    }
    else {
      FUN_100ee2c0(piVar6,0,0xffffffff,0xffffffff,1,piVar1,0,puVar2);
    }
    break;
  default:
    iVar22 = FUN_100e5510(iVar9,&DAT_101185d0,2);
    if (iVar22 != 0) {
      return iVar22;
    }
    iVar22 = FUN_100e5320(iVar9,piVar6,iVar3 + 0x4b68,0,0);
    if (iVar22 != 0) {
      FUN_100d8ba0(iVar3,"Failed sending HTTP request");
      return iVar22;
    }
    FUN_100ee2c0(piVar6,0,0xffffffff,0xffffffff,1,piVar1,(*piVar21 != 0) - 1,
                 -(uint)(*piVar21 != 0) & (uint)puVar2);
  }
  param_1 = (int *)0x0;
  if (*puVar2 != 0 || piVar4[0xb] != 0) {
    FUN_100e32a0(iVar3,*puVar2,piVar4[0xb]);
    iVar22 = FUN_100e33f0(piVar6);
    if (iVar22 != 0) {
      param_1 = (int *)0x2a;
    }
    iVar22 = piVar4[0xb];
    if (((int)local_18 <= iVar22) && (((int)local_18 < iVar22 || (local_1c <= *puVar2)))) {
      FUN_100d8ae0(iVar3,"upload completely sent off: %I64d out of %I64d bytes\n",*puVar2,iVar22,
                   local_1c,local_18);
      *(undefined4 *)(iVar3 + 0x114) = 1;
      *(uint *)(iVar3 + 0x110) = *(uint *)(iVar3 + 0x110) & 0xfffffffd;
      *(undefined4 *)(iVar3 + 0xf4) = 0;
      FUN_100d6810(iVar3,0);
    }
  }
  if ((piVar6[0x60] == 0x14) && (*(int *)(iVar3 + 0x134) != 0)) {
    *(undefined4 *)(iVar3 + 0x134) = 0;
  }
  return (int)param_1;
}


/* END FUNCTION 0x100e61a0 */

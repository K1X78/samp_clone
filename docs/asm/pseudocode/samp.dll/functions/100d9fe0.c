/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d9fe0
 * Name: FUN_100d9fe0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 *
FUN_100d9fe0(undefined4 param_1,undefined4 *param_2,int param_3,char *param_4,byte *param_5,
            char *param_6)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  char *pcVar12;
  int iVar13;
  byte *pbVar14;
  int *piVar15;
  undefined4 *puVar16;
  uint uVar17;
  char *pcVar18;
  undefined4 *puVar19;
  bool bVar20;
  bool bVar21;
  char *pcStack_2018;
  undefined4 *puStack_2014;
  undefined4 *local_2010;
  uint uStack_200c;
  uint local_2008;
  undefined1 auStack_2004 [4];
  char acStack_2000 [4095];
  byte abStack_1001 [4093];
  undefined4 uStack_4;
  
  uStack_4 = 0x100d9fea;
  local_2010 = (undefined4 *)0x0;
  local_2008 = FID_conflict___time32(0);
  bVar21 = false;
  puVar5 = (undefined4 *)(*(code *)PTR__calloc_101554c8)(1,0x40);
  if (puVar5 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  if (param_3 == 0) {
    puStack_2014 = (undefined4 *)0x0;
    iVar7 = _strncmp(param_4,"#HttpOnly_",10);
    if (iVar7 == 0) {
      param_4 = param_4 + 10;
      puVar5[0xe] = 1;
    }
    if (*param_4 == '#') goto LAB_100da648;
    pcVar6 = _strchr(param_4,0xd);
    if (pcVar6 != (char *)0x0) {
      *pcVar6 = '\0';
    }
    pcVar6 = _strchr(param_4,10);
    if (pcVar6 != (char *)0x0) {
      *pcVar6 = '\0';
    }
    pcVar6 = (char *)FUN_100ee790(param_4,&DAT_10125084,&puStack_2014);
    pcStack_2018 = (char *)0x0;
    if (pcVar6 == (char *)0x0) goto LAB_100da60d;
    do {
      if (bVar21) break;
      switch(pcStack_2018) {
      case (char *)0x0:
        if (*pcVar6 == '.') {
          pcVar6 = pcVar6 + 1;
        }
        iVar7 = (*(code *)PTR___strdup_101554c4)(pcVar6);
        puVar5[5] = iVar7;
        goto LAB_100da7cf;
      case (char *)0x1:
        iVar7 = FUN_100de830(pcVar6,&DAT_1012507c);
        puVar5[9] = (uint)(iVar7 != 0);
        break;
      case (char *)0x2:
        iVar7 = 5;
        bVar20 = true;
        pcVar12 = "TRUE";
        pcVar18 = pcVar6;
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          bVar20 = *pcVar12 == *pcVar18;
          pcVar12 = pcVar12 + 1;
          pcVar18 = pcVar18 + 1;
        } while (bVar20);
        if (!bVar20) {
          iVar7 = 6;
          bVar20 = true;
          pcVar12 = "FALSE";
          pcVar18 = pcVar6;
          do {
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            bVar20 = *pcVar12 == *pcVar18;
            pcVar12 = pcVar12 + 1;
            pcVar18 = pcVar18 + 1;
          } while (bVar20);
          if (!bVar20) {
            iVar7 = (*(code *)PTR___strdup_101554c4)(pcVar6);
            puVar5[3] = iVar7;
            if (iVar7 == 0) goto LAB_100da7d3;
            iVar7 = FUN_100d9e50();
            puVar5[4] = iVar7;
            goto LAB_100da7cf;
          }
        }
        iVar7 = (*(code *)PTR___strdup_101554c4)(&DAT_10117694);
        puVar5[3] = iVar7;
        if (iVar7 == 0) {
          bVar21 = true;
        }
        iVar7 = (*(code *)PTR___strdup_101554c4)(&DAT_10117694);
        puVar5[4] = iVar7;
        if (iVar7 == 0) {
          bVar21 = true;
        }
        pcStack_2018 = (char *)0x3;
      case (char *)0x3:
        iVar7 = FUN_100de830(pcVar6,&DAT_1012507c);
        puVar5[0xc] = (uint)(iVar7 != 0);
        break;
      case (char *)0x4:
        iVar7 = FUN_100eef50(pcVar6,0,10,puVar5 + 6);
        if (iVar7 == 0) break;
        goto LAB_100da7d3;
      case (char *)0x5:
        iVar7 = (*(code *)PTR___strdup_101554c4)(pcVar6);
        puVar5[1] = iVar7;
        goto LAB_100da7cf;
      case (char *)0x6:
        iVar7 = (*(code *)PTR___strdup_101554c4)(pcVar6);
        puVar5[2] = iVar7;
LAB_100da7cf:
        if (iVar7 == 0) {
LAB_100da7d3:
          bVar21 = true;
        }
      }
      pcVar6 = (char *)FUN_100ee790(0,&DAT_10125084,&puStack_2014);
      pcStack_2018 = (char *)((int)pcStack_2018 + 1);
    } while (pcVar6 != (char *)0x0);
    if (pcStack_2018 == (char *)0x6) {
      iVar7 = (*(code *)PTR___strdup_101554c4)(&DAT_10117a39);
      puVar5[2] = iVar7;
      if (iVar7 == 0) goto LAB_100da60d;
      pcStack_2018 = (char *)0x7;
    }
    if ((bVar21) || (pcStack_2018 != (char *)0x7)) goto LAB_100da60d;
  }
  else {
    pcVar6 = param_4;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    puStack_2014 = puVar5;
    if (5000 < (uint)((int)pcVar6 - (int)(param_4 + 1))) {
LAB_100da648:
      (*(code *)PTR__free_101554bc)(puVar5);
      return (undefined4 *)0x0;
    }
    pcStack_2018 = _strchr(param_4,0x3b);
    cVar2 = *param_4;
    while ((cVar2 != '\0' && ((cVar2 == ' ' || (cVar2 == '\t'))))) {
      pcVar6 = param_4 + 1;
      param_4 = param_4 + 1;
      cVar2 = *pcVar6;
    }
LAB_100da080:
    abStack_1001[1] = 0;
    acStack_2000[0] = '\0';
    iVar7 = _sscanf(param_4,"%4095[^;\r\n=] =%4095[^;\r\n]",acStack_2000,abStack_1001 + 1);
    if (iVar7 < 1) {
LAB_100da42e:
      if ((pcStack_2018 == (char *)0x0) || (*pcStack_2018 == '\0')) goto LAB_100da1dd;
      cVar2 = pcStack_2018[1];
      while ((param_4 = pcStack_2018 + 1, cVar2 != '\0' && ((cVar2 == ' ' || (cVar2 == '\t'))))) {
        pcStack_2018 = param_4;
        cVar2 = param_4[1];
      }
      pcStack_2018 = _strchr(param_4,0x3b);
      if ((pcStack_2018 == (char *)0x0) &&
         ((*param_4 == '\0' || (pcStack_2018 = _strchr(param_4,0), pcStack_2018 == (char *)0x0))))
      goto LAB_100da1dd;
      goto LAB_100da080;
    }
    pbVar8 = abStack_1001 + 1;
    do {
      bVar3 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (bVar3 != 0);
    uVar9 = (int)pbVar8 - (int)(abStack_1001 + 2);
    pcVar6 = acStack_2000;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    uVar17 = (int)pcVar6 - (int)(acStack_2000 + 1);
    param_4 = param_4 + uVar17;
    FUN_100d8ae0(param_1,"cookie size: name/val %d + %d bytes\n",uVar17,uVar9);
    if (((0xffe < uVar17) || (0xffe < uVar9)) || (0x1000 < uVar17 + uVar9)) {
      FUN_100d9c80();
      FUN_100d8ae0(param_1,"oversized cookie dropped, name/val %d + %d bytes\n",uVar17,uVar9);
      return (undefined4 *)0x0;
    }
    uStack_200c = (uint)(*param_4 == '=');
    if ((uVar17 != 0) && ((cVar2 = param_4[-1], cVar2 == ' ' || (cVar2 == '\t')))) {
      for (; (cVar2 != '\0' && (((cVar2 == ' ' || (cVar2 == '\t')) && (uVar17 != 0))));
          uVar17 = uVar17 - 1) {
        cVar2 = param_4[-2];
        param_4 = param_4 + -1;
      }
      acStack_2000[uVar17] = '\0';
    }
    for (; (uVar9 != 0 && ((abStack_1001[uVar9] == 0x20 || (abStack_1001[uVar9] == 9))));
        uVar9 = uVar9 - 1) {
      abStack_1001[uVar9] = 0;
    }
    pbVar8 = abStack_1001;
    bVar3 = abStack_1001[1];
    while ((pbVar8 = pbVar8 + 1, bVar3 != 0 && ((bVar3 == 0x20 || (bVar3 == 9))))) {
      bVar3 = pbVar8[1];
    }
    if ((puVar5[1] != 0) || (uStack_200c == 0)) {
      if (uVar9 != 0) goto LAB_100da26f;
      iVar7 = FUN_100de830("secure",acStack_2000);
      if (iVar7 == 0) {
        iVar7 = FUN_100de830("httponly",acStack_2000);
        if (iVar7 == 0) {
          if (uStack_200c != 0) goto LAB_100da26f;
        }
        else {
          puVar5[0xe] = 1;
        }
      }
      else {
        puVar5[0xc] = 1;
      }
      goto LAB_100da42e;
    }
    uVar10 = (*(code *)PTR___strdup_101554c4)(acStack_2000);
    puVar5[1] = uVar10;
    iVar7 = (*(code *)PTR___strdup_101554c4)(pbVar8);
    puVar5[2] = iVar7;
    if ((puVar5[1] != 0) && (iVar7 != 0)) {
LAB_100da26f:
      iVar7 = FUN_100de830(&DAT_10125124,acStack_2000);
      if (iVar7 == 0) {
        iVar7 = FUN_100de830("domain",acStack_2000);
        if (iVar7 == 0) {
          iVar7 = FUN_100de830("version",acStack_2000);
          if (iVar7 == 0) {
            iVar7 = FUN_100de830("max-age",acStack_2000);
            if (iVar7 == 0) {
              iVar7 = FUN_100de830("expires",acStack_2000);
              if (iVar7 == 0) goto LAB_100da42e;
              piVar15 = puVar5 + 8;
            }
            else {
              piVar15 = puVar5 + 0xb;
            }
          }
          else {
            piVar15 = puVar5 + 10;
          }
          FUN_100d9ed0(pbVar8);
          iVar7 = *piVar15;
          goto LAB_100da426;
        }
        if (*pbVar8 == 0x2e) {
          pbVar8 = pbVar8 + 1;
        }
        pcVar6 = _strchr((char *)pbVar8,0x2e);
        if ((pcVar6 == (char *)0x0) && (iVar7 = FUN_100de830("localhost",pbVar8), iVar7 == 0)) {
          param_5 = &DAT_10117f84;
          pbVar11 = &DAT_10117f84;
        }
        else {
          pbVar11 = param_5;
          if (param_5 == (byte *)0x0) {
            pbVar11 = pbVar8;
          }
        }
        iVar7 = FUN_100e0e40(2,pbVar11,auStack_2004);
        if (param_5 != (byte *)0x0) {
          pbVar11 = pbVar8;
          pbVar14 = param_5;
          if (iVar7 == 0) {
            iVar13 = FUN_100d9ce0(pbVar8);
            if (iVar13 == 0) goto LAB_100da3ac;
          }
          else {
            do {
              bVar3 = *pbVar11;
              bVar20 = bVar3 < *pbVar14;
              if (bVar3 != *pbVar14) {
LAB_100da36c:
                iVar13 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                goto LAB_100da371;
              }
              if (bVar3 == 0) break;
              bVar3 = pbVar11[1];
              bVar20 = bVar3 < pbVar14[1];
              if (bVar3 != pbVar14[1]) goto LAB_100da36c;
              pbVar11 = pbVar11 + 2;
              pbVar14 = pbVar14 + 2;
            } while (bVar3 != 0);
            iVar13 = 0;
LAB_100da371:
            if (iVar13 != 0) {
LAB_100da3ac:
              bVar21 = true;
              FUN_100d8ae0(param_1,"skipped cookie with bad tailmatch domain: %s\n",pbVar8);
              goto LAB_100da42e;
            }
          }
        }
        FUN_100d9ed0(pbVar8);
        if (puVar5[5] != 0) {
          if (iVar7 == 0) {
            puVar5[9] = 1;
          }
          goto LAB_100da42e;
        }
      }
      else {
        (*(code *)PTR__free_101554bc)(puVar5[3]);
        iVar7 = (*(code *)PTR___strdup_101554c4)(pbVar8);
        puVar5[3] = iVar7;
        if (iVar7 != 0) {
          (*(code *)PTR__free_101554bc)(puVar5[4]);
          iVar7 = FUN_100d9e50();
          puVar5[4] = iVar7;
LAB_100da426:
          if (iVar7 != 0) goto LAB_100da42e;
        }
      }
    }
    bVar21 = true;
LAB_100da1dd:
    pcVar6 = (char *)puVar5[0xb];
    if (pcVar6 == (char *)0x0) {
      if (puVar5[8] != 0) {
        iVar7 = FUN_100eeef0(puVar5[8],0);
        iVar13 = iVar7 >> 0x1f;
        puVar5[6] = iVar7;
        puVar5[7] = iVar13;
        if (iVar7 == 0) {
          puVar5[6] = 1;
        }
        else {
          if ((iVar7 < 0 && -1 < iVar13) || (-1 < iVar13)) goto LAB_100da54e;
          puVar5[6] = 0;
        }
        puVar5[7] = 0;
      }
    }
    else {
      if (*pcVar6 == '\"') {
        pcVar6 = pcVar6 + 1;
      }
      puVar1 = puVar5 + 6;
      iVar7 = FUN_100eef50(pcVar6,0,10,puVar1);
      if (iVar7 == 1) {
        *puVar1 = 0xffffffff;
        puVar5[7] = 0x7fffffff;
      }
      else if (iVar7 == 0) {
        iVar7 = puVar5[7];
        uVar9 = *puVar1;
        iVar13 = 0x7fffffff - ((int)local_2008 >> 0x1f);
        if ((iVar7 < iVar13) || ((iVar7 <= iVar13 && (uVar9 <= -local_2008 - 1)))) {
          *puVar1 = uVar9 + local_2008;
          puVar5[7] = iVar7 + ((int)local_2008 >> 0x1f) + (uint)CARRY4(uVar9,local_2008);
          puVar5 = puStack_2014;
        }
        else {
          *puVar1 = 0xffffffff;
          puVar5[7] = 0x7fffffff;
          puVar5 = puStack_2014;
        }
      }
    }
LAB_100da54e:
    if (bVar21) goto LAB_100da60d;
    if ((puVar5[5] == 0) && (param_5 != (byte *)0x0)) {
      iVar7 = (*(code *)PTR___strdup_101554c4)(param_5);
      puVar5[5] = iVar7;
      if (iVar7 == 0) goto LAB_100da60d;
    }
    if ((puVar5[3] == 0) && (param_6 != (char *)0x0)) {
      pcVar6 = _strchr(param_6,0x3f);
      if (pcVar6 == (char *)0x0) {
        pcVar6 = _strrchr(param_6,0x2f);
      }
      else {
        pcVar6 = (char *)FUN_100ee820(param_6,0x2f,(int)pcVar6 - (int)param_6);
      }
      if (pcVar6 != (char *)0x0) {
        pcVar12 = pcVar6 + (1 - (int)param_6);
        pcVar6 = (char *)(*(code *)PTR__malloc_101554b8)(pcVar6 + (2 - (int)param_6));
        puVar5[3] = pcVar6;
        if (pcVar6 == (char *)0x0) goto LAB_100da60d;
        for (uVar9 = (uint)pcVar12 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)param_6;
          param_6 = param_6 + 4;
          pcVar6 = pcVar6 + 4;
        }
        for (uVar9 = (uint)pcVar12 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar6 = *param_6;
          param_6 = param_6 + 1;
          pcVar6 = pcVar6 + 1;
        }
        pcVar12[puVar5[3]] = '\0';
        iVar7 = FUN_100d9e50();
        puVar5[4] = iVar7;
        if (iVar7 == 0) goto LAB_100da60d;
      }
    }
    if (puVar5[1] == 0) goto LAB_100da60d;
  }
  if (((param_2[2] != 0) || (param_2[4] == 0)) || (puVar5[6] != 0 || puVar5[7] != 0)) {
    puVar5[0xd] = param_2[2];
    FUN_100d9ef0(param_2);
    puVar16 = (undefined4 *)*param_2;
    do {
      puVar4 = puVar16;
      bVar21 = false;
      if (puVar4 == (undefined4 *)0x0) goto LAB_100da98b;
      iVar7 = FUN_100de830(puVar4[1],puVar5[1]);
      if (iVar7 == 0) goto LAB_100daa0c;
      iVar7 = puVar4[5];
      if (iVar7 == 0) {
LAB_100da8ca:
        bVar21 = puVar5[5] == 0;
LAB_100da8cd:
        if (bVar21) {
          iVar7 = puVar4[4];
          if (iVar7 == 0) {
LAB_100da9ff:
            if (puVar5[4] == 0) {
LAB_100da8fb:
              bVar21 = true;
              if ((puVar5[0xd] == 0) && (puVar4[0xd] != 0)) break;
              *puVar5 = *puVar4;
              (*(code *)PTR__free_101554bc)(puVar4[1]);
              (*(code *)PTR__free_101554bc)(puVar4[2]);
              (*(code *)PTR__free_101554bc)(puVar4[5]);
              (*(code *)PTR__free_101554bc)(puVar4[3]);
              (*(code *)PTR__free_101554bc)(puVar4[4]);
              (*(code *)PTR__free_101554bc)(puVar4[8]);
              (*(code *)PTR__free_101554bc)(puVar4[10]);
              (*(code *)PTR__free_101554bc)(puVar4[0xb]);
              puVar16 = puVar5;
              puVar19 = puVar4;
              for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
                *puVar19 = *puVar16;
                puVar16 = puVar16 + 1;
                puVar19 = puVar19 + 1;
              }
              (*(code *)PTR__free_101554bc)(puVar5);
              puVar16 = puVar4;
              do {
                local_2010 = puVar16;
                puVar5 = puVar4;
                puVar16 = (undefined4 *)*local_2010;
              } while ((undefined4 *)*local_2010 != (undefined4 *)0x0);
LAB_100da98b:
              if (param_2[2] != 0) {
                pcVar6 = "Replaced";
                if (!bVar21) {
                  pcVar6 = "Added";
                }
                FUN_100d8ae0(param_1,"%s cookie %s=\"%s\" for domain %s, path %s, expire %I64d\n",
                             pcVar6,puVar5[1],puVar5[2],puVar5[5],puVar5[3],puVar5[6],puVar5[7]);
              }
              if (!bVar21) {
                if (local_2010 != (undefined4 *)0x0) {
                  *local_2010 = puVar5;
                  param_2[3] = param_2[3] + 1;
                  return puVar5;
                }
                *param_2 = puVar5;
                param_2[3] = param_2[3] + 1;
              }
              return puVar5;
            }
          }
          else if (puVar5[4] == 0) {
            if (iVar7 == 0) goto LAB_100da9ff;
          }
          else {
            iVar7 = FUN_100de830(iVar7,puVar5[4]);
            if (iVar7 != 0) goto LAB_100da8fb;
          }
        }
      }
      else if (puVar5[5] == 0) {
        if (iVar7 == 0) goto LAB_100da8ca;
      }
      else {
        iVar7 = FUN_100de830(iVar7,puVar5[5]);
        if (iVar7 != 0) {
          bVar21 = puVar4[9] == puVar5[9];
          goto LAB_100da8cd;
        }
      }
LAB_100daa0c:
      puVar16 = (undefined4 *)*puVar4;
      local_2010 = puVar4;
    } while( true );
  }
LAB_100da60d:
  FUN_100d9c80();
  return (undefined4 *)0x0;
}


/* END FUNCTION 0x100d9fe0 */

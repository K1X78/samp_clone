/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049e480
 * Name: FUN_0049e480
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_0049e480(_struct_1227 param_1,u_short param_2,int *param_3,int param_4,SOCKET param_5)

{
  size_t _Size;
  byte bVar1;
  void *pvVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int *buf;
  uint *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  byte *_Memory;
  byte *pbVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ushort *puVar18;
  uint *puVar19;
  uint uVar20;
  byte *pbVar21;
  bool bVar22;
  undefined8 uVar23;
  undefined2 uVar24;
  ushort uVar25;
  uint local_24;
  undefined2 local_1c;
  undefined1 local_6 [6];
  
  if ((((param_4 < 5) || (*param_3 != 0x504d4153)) || (DAT_004fc438 == 0)) ||
     (*(int *)(DAT_004fc438 + 0x5e) != 1)) {
    return 0;
  }
  if (10 < param_4) {
    _DAT_0051c190 = 2;
    _DAT_0051c192 = htons(param_2);
    _DAT_0051c194 = param_1;
    if (DAT_004fc458 != '\0') {
      inet_ntoa((in_addr)param_1);
      FUN_00491fa0("[query:%c] from %s");
    }
    switch(*(undefined1 *)((int)param_3 + 10)) {
    case 99:
      cVar3 = FUN_00490cc0(DAT_004fc43c,"query");
      if (((cVar3 != '\0') && (uVar23 = FUN_0049e360(), (int)uVar23 == 0)) &&
         (pvVar2 = *(void **)(DAT_004fc438 + 8), pvVar2 != (void *)0x0)) {
        uVar20 = FUN_00466b10((int)pvVar2);
        if ((ushort)uVar20 < 0x65) {
          piVar5 = _malloc((uVar20 & 0xffff) * 0x1d + 0xd);
          *piVar5 = *param_3;
          piVar5[1] = param_3[1];
          *(short *)(piVar5 + 2) = (short)param_3[2];
          *(char *)((int)piVar5 + 10) = *(char *)((int)param_3 + 10);
          *(ushort *)((int)piVar5 + 0xb) = (ushort)uVar20;
          pcVar8 = (char *)((int)piVar5 + 0xd);
          uVar20 = 0;
          do {
            uVar25 = (ushort)uVar20;
            iVar15 = FUN_00463da0(pvVar2,uVar25);
            if (((iVar15 != 0) && (*(int *)((int)pvVar2 + (uVar20 & 0xffff) * 4 + 0x2de6c) == 0)) &&
               (bVar22 = FUN_00466020(uVar25), bVar22)) {
              pcVar12 = (char *)FUN_00465c30(pvVar2,uVar25);
              pcVar7 = pcVar12;
              do {
                cVar3 = *pcVar7;
                pcVar7 = pcVar7 + 1;
              } while (cVar3 != '\0');
              uVar17 = (int)pcVar7 - (int)(pcVar12 + 1);
              *pcVar8 = (char)uVar17;
              pcVar8 = pcVar8 + 1;
              pcVar7 = pcVar8;
              for (uVar16 = (uVar17 & 0xff) >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                *(undefined4 *)pcVar7 = *(undefined4 *)pcVar12;
                pcVar12 = pcVar12 + 4;
                pcVar7 = pcVar7 + 4;
              }
              for (uVar16 = uVar17 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                *pcVar7 = *pcVar12;
                pcVar12 = pcVar12 + 1;
                pcVar7 = pcVar7 + 1;
              }
              uVar10 = FUN_0046fda0(pvVar2,uVar25);
              *(undefined4 *)(pcVar8 + (uVar17 & 0xff)) = uVar10;
              pcVar8 = pcVar8 + (uVar17 & 0xff) + 4;
            }
            uVar20 = uVar20 + 1;
          } while ((int)uVar20 < 1000);
LAB_0049e9c2:
          sendto(param_5,(char *)piVar5,(int)pcVar8 - (int)piVar5,0,(sockaddr *)&DAT_0051c190,0x10);
          _free(piVar5);
          return 1;
        }
      }
      break;
    case 100:
      cVar3 = FUN_00490cc0(DAT_004fc43c,"query");
      if (((cVar3 != '\0') && (uVar23 = FUN_0049e360(), (int)uVar23 == 0)) &&
         (pvVar2 = *(void **)(DAT_004fc438 + 8), pvVar2 != (void *)0x0)) {
        uVar20 = FUN_00466b10((int)pvVar2);
        if ((ushort)uVar20 < 0x65) {
          piVar5 = _malloc((uVar20 & 0xffff) * 0x22 + 0xd);
          *piVar5 = *param_3;
          piVar5[1] = param_3[1];
          *(short *)(piVar5 + 2) = (short)param_3[2];
          *(char *)((int)piVar5 + 10) = *(char *)((int)param_3 + 10);
          *(ushort *)((int)piVar5 + 0xb) = (ushort)uVar20;
          pcVar8 = (char *)((int)piVar5 + 0xd);
          uVar20 = 0;
          do {
            uVar25 = (ushort)uVar20;
            iVar15 = FUN_00463da0(pvVar2,uVar25);
            if (((iVar15 != 0) && (*(int *)((int)pvVar2 + (uVar20 & 0xffff) * 4 + 0x2de6c) == 0)) &&
               (bVar22 = FUN_00466020(uVar25), bVar22)) {
              *pcVar8 = (char)uVar20;
              pcVar12 = (char *)FUN_00465c30(pvVar2,uVar25);
              pcVar7 = pcVar12;
              do {
                cVar3 = *pcVar7;
                pcVar7 = pcVar7 + 1;
              } while (cVar3 != '\0');
              uVar17 = (int)pcVar7 - (int)(pcVar12 + 1);
              pcVar8[1] = (char)uVar17;
              pcVar7 = pcVar8 + 2;
              for (uVar16 = (uVar17 & 0xff) >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                *(undefined4 *)pcVar7 = *(undefined4 *)pcVar12;
                pcVar12 = pcVar12 + 4;
                pcVar7 = pcVar7 + 4;
              }
              for (uVar16 = uVar17 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                *pcVar7 = *pcVar12;
                pcVar12 = pcVar12 + 1;
                pcVar7 = pcVar7 + 1;
              }
              pcVar8 = pcVar8 + 2 + (uVar17 & 0xff);
              uVar10 = FUN_0046fda0(pvVar2,uVar25);
              *(undefined4 *)pcVar8 = uVar10;
              iVar15 = *DAT_0051c18c;
              uVar24 = 0x49;
              puVar13 = (undefined4 *)(**(code **)(iVar15 + 0xe8))(local_6,uVar20);
              uVar10 = (**(code **)(iVar15 + 0x4c))
                                 (*puVar13,CONCAT22(uVar24,*(undefined2 *)(puVar13 + 1)));
              *(undefined4 *)(pcVar8 + 4) = uVar10;
              pcVar8 = pcVar8 + 8;
            }
            uVar20 = uVar20 + 1;
          } while ((int)uVar20 < 1000);
          goto LAB_0049e9c2;
        }
      }
      break;
    case 0x69:
      cVar3 = FUN_00490cc0(DAT_004fc43c,"query");
      if ((cVar3 != '\0') && (uVar23 = FUN_0049e2e0(), (int)uVar23 == 0)) {
        piVar4 = (int *)FUN_00490ba0(DAT_004fc43c,"hostname");
        piVar5 = piVar4;
        do {
          iVar15 = *piVar5;
          piVar5 = (int *)((int)piVar5 + 1);
        } while ((char)iVar15 != '\0');
        param_1 = (_struct_1227)((int)piVar5 - (int)((int)piVar4 + 1));
        if (0x32 < (uint)param_1) {
          param_1.s_b1 = '2';
          param_1.s_b2 = '\0';
          param_1.s_b3 = '\0';
          param_1.s_b4 = '\0';
        }
        puVar6 = (uint *)FUN_00490ba0(DAT_004fc43c,"gamemodetext");
        puVar19 = puVar6;
        do {
          uVar20 = *puVar19;
          puVar19 = (uint *)((int)puVar19 + 1);
        } while ((char)uVar20 != '\0');
        uVar20 = (int)puVar19 - (int)((int)puVar6 + 1);
        if (0x1e < uVar20) {
          uVar20 = 0x1e;
        }
        pcVar7 = (char *)FUN_00490ba0(DAT_004fc43c,"language");
        pcVar8 = pcVar7;
        do {
          cVar3 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar3 != '\0');
        local_24 = (int)pcVar8 - (int)(pcVar7 + 1);
        if (0x1e < local_24) {
          local_24 = 0x1e;
        }
        iVar15 = *(int *)(DAT_004fc438 + 8);
        if (iVar15 != 0) {
          iVar9 = FUN_00466b10(iVar15);
          uVar10 = FUN_00490c80(DAT_004fc43c,"maxplayers");
          iVar15 = FUN_00465fe0(iVar15);
          pcVar8 = (char *)FUN_00490ba0(DAT_004fc43c,"password");
          cVar3 = *pcVar8;
          _Size = local_24 + uVar20 + 0x1c + (int)param_1;
          buf = _malloc(_Size);
          *buf = *param_3;
          buf[1] = param_3[1];
          *(short *)(buf + 2) = (short)param_3[2];
          *(char *)((int)buf + 10) = *(char *)((int)param_3 + 10);
          *(bool *)((int)buf + 0xb) = cVar3 != '\0';
          local_1c = (undefined2)iVar9;
          *(undefined2 *)(buf + 3) = local_1c;
          *(short *)((int)buf + 0xe) = (short)uVar10 - (short)iVar15;
          *(_struct_1227 *)(buf + 4) = param_1;
          piVar5 = buf + 5;
          for (uVar17 = (uint)param_1 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *piVar5 = *piVar4;
            piVar4 = piVar4 + 1;
            piVar5 = piVar5 + 1;
          }
          for (uVar17 = (uint)param_1 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(char *)piVar5 = (char)*piVar4;
            piVar4 = (int *)((int)piVar4 + 1);
            piVar5 = (int *)((int)piVar5 + 1);
          }
          puVar11 = (uint *)((int)(buf + 5) + (int)param_1);
          *puVar11 = uVar20;
          puVar11 = puVar11 + 1;
          puVar19 = puVar11;
          for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *puVar19 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar19 = puVar19 + 1;
          }
          for (uVar17 = uVar20 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(char *)puVar19 = (char)*puVar6;
            puVar6 = (uint *)((int)puVar6 + 1);
            puVar19 = (uint *)((int)puVar19 + 1);
          }
          *(uint *)((int)puVar11 + uVar20) = local_24;
          pcVar8 = (char *)((int)puVar11 + uVar20);
          for (uVar20 = local_24 >> 2; pcVar8 = pcVar8 + 4, uVar20 != 0; uVar20 = uVar20 - 1) {
            *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
          }
          for (local_24 = local_24 & 3; local_24 != 0; local_24 = local_24 - 1) {
            *pcVar8 = *pcVar7;
            pcVar7 = pcVar7 + 1;
            pcVar8 = pcVar8 + 1;
          }
          sendto(param_5,(char *)buf,_Size,0,(sockaddr *)&DAT_0051c190,0x10);
          _free(buf);
          return 1;
        }
      }
      break;
    case 0x70:
      uVar23 = FUN_0049e2a0();
      if (((int)uVar23 == 0) && (param_4 == 0xf)) {
        sendto(param_5,(char *)param_3,0xf,0,(sockaddr *)&DAT_0051c190,0x10);
        return 1;
      }
      break;
    case 0x72:
      cVar3 = FUN_00490cc0(DAT_004fc43c,"query");
      if ((cVar3 != '\0') && (uVar23 = FUN_0049e320(), (int)uVar23 == 0)) {
        FUN_00490770(DAT_004fc43c,param_5,param_3,(sockaddr *)&DAT_0051c190,0x10);
        return 1;
      }
      break;
    case 0x78:
      cVar3 = FUN_00490cc0(DAT_004fc43c,"query");
      if (((cVar3 != '\0') && (cVar3 = FUN_00490cc0(DAT_004fc43c,"rcon"), cVar3 != '\0')) &&
         (uVar23 = FUN_0049e360(), (int)uVar23 == 0)) {
        DAT_0051c1a4 = param_3;
        DAT_004ebdf4 = param_5;
        DAT_0051c1a8 = 0xb;
        if (0xc < param_4) {
          uVar25 = *(ushort *)((int)param_3 + 0xb);
          uVar20 = (uint)uVar25;
          if ((int)(uVar20 + 0xd) <= param_4) {
            _Memory = _malloc(uVar20 + 1);
            pbVar21 = (byte *)((int)param_3 + 0xd);
            pbVar14 = _Memory;
            for (uVar17 = (uint)(uVar25 >> 2); uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pbVar14 = *(undefined4 *)pbVar21;
              pbVar21 = pbVar21 + 4;
              pbVar14 = pbVar14 + 4;
            }
            for (uVar17 = uVar20 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
              *pbVar14 = *pbVar21;
              pbVar21 = pbVar21 + 1;
              pbVar14 = pbVar14 + 1;
            }
            _Memory[uVar20] = 0;
            puVar18 = (ushort *)((byte *)((int)param_3 + 0xd) + uVar20);
            pbVar14 = (byte *)FUN_00490ba0(DAT_004fc43c,"rcon_password");
            pbVar21 = _Memory;
            do {
              bVar1 = *pbVar21;
              bVar22 = bVar1 < *pbVar14;
              if (bVar1 != *pbVar14) {
LAB_0049eb28:
                iVar15 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
                goto LAB_0049eb2d;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar21[1];
              bVar22 = bVar1 < pbVar14[1];
              if (bVar1 != pbVar14[1]) goto LAB_0049eb28;
              pbVar21 = pbVar21 + 2;
              pbVar14 = pbVar14 + 2;
            } while (bVar1 != 0);
            iVar15 = 0;
LAB_0049eb2d:
            if (iVar15 == 0) {
              if ((int)(uVar20 + 0xf) <= param_4) {
                uVar25 = *puVar18;
                uVar17 = (uint)uVar25;
                if ((int)(uVar20 + 0xf + uVar17) <= param_4) {
                  pbVar14 = _malloc(uVar17 + 1);
                  puVar18 = puVar18 + 1;
                  pbVar21 = pbVar14;
                  for (uVar20 = (uint)(uVar25 >> 2); uVar20 != 0; uVar20 = uVar20 - 1) {
                    *(undefined4 *)pbVar21 = *(undefined4 *)puVar18;
                    puVar18 = puVar18 + 2;
                    pbVar21 = pbVar21 + 4;
                  }
                  for (uVar20 = uVar17 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                    *pbVar21 = (byte)*puVar18;
                    puVar18 = (ushort *)((int)puVar18 + 1);
                    pbVar21 = pbVar21 + 1;
                  }
                  pbVar14[uVar17] = 0;
                  if (DAT_004fc43c != (void *)0x0) {
                    DAT_0051c1a0 = 1;
                    FUN_00490ce0(DAT_004fc43c,(short *)pbVar14);
                    DAT_0051c1a0 = 0;
                  }
                  _free(pbVar14);
                }
              }
            }
            else {
              inet_ntoa((in_addr)param_1);
              FUN_00491fa0("BAD RCON ATTEMPT BY: %s");
              DAT_0051c1a0 = 1;
              FUN_0049e3a0("Invalid RCON password.");
              DAT_0051c1a0 = 0;
            }
            _free(_Memory);
          }
        }
        DAT_0051c1a8 = 0;
        DAT_0051c1a4 = (int *)0x0;
        DAT_004ebdf4 = 0xffffffff;
      }
    }
  }
  return 1;
}


/* END FUNCTION 0x0049e480 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e7a40
 * Name: FUN_100e7a40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100e7a40(int param_1,int *param_2,size_t *param_3,int *param_4)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  size_t *psVar5;
  void *pvVar6;
  size_t sVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  byte *pbVar12;
  int *piVar13;
  int *piVar14;
  char local_19;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  uint local_8;
  int local_4;
  
  iVar4 = param_1;
  puVar1 = (uint *)(param_1 + 0x70);
  do {
    psVar5 = param_3;
    *(void **)(iVar4 + 0xd0) = *(void **)(iVar4 + 0xcc);
    pvVar6 = _memchr(*(void **)(iVar4 + 0xcc),10,*param_3);
    *(void **)(iVar4 + 0xd4) = pvVar6;
    if (pvVar6 == (void *)0x0) {
      iVar8 = FUN_100e5a70(*psVar5);
      if (iVar8 != 0) {
        return iVar8;
      }
      if (*(int *)(iVar4 + 0xc0) != 0) {
        return 0;
      }
      if (*(uint *)(iVar4 + 200) < 6) {
        return 0;
      }
      iVar8 = FUN_100e5a00();
      if (iVar8 != 0) {
        return 0;
      }
      *(undefined4 *)(iVar4 + 0xb8) = 0;
      *(undefined4 *)(iVar4 + 0xbc) = 2;
      return 0;
    }
    sVar7 = (int)pvVar6 + (1 - *(int *)(iVar4 + 0xcc));
    *psVar5 = *psVar5 - sVar7;
    iVar8 = *(int *)(iVar4 + 0xd4) + 1;
    *(int *)(iVar4 + 0xcc) = iVar8;
    iVar8 = FUN_100e5a70(iVar8 - *(int *)(iVar4 + 0xd0));
    if (iVar8 != 0) {
      return iVar8;
    }
    *(undefined4 *)(iVar4 + 0xd4) = *(undefined4 *)(iVar4 + 0xc4);
    *(undefined4 *)(iVar4 + 0xd8) = *(undefined4 *)(iVar4 + 0x84c);
    if (((*(int *)(iVar4 + 0xc0) == 0) && (5 < *(uint *)(iVar4 + 200))) &&
       (iVar8 = FUN_100e5a00(), iVar8 == 0)) {
      *(undefined4 *)(iVar4 + 0xb8) = 0;
      if (*param_3 != 0) {
        *(undefined4 *)(iVar4 + 0xbc) = 1;
        return 0;
      }
      *(undefined4 *)(iVar4 + 0xbc) = 2;
      *param_3 = sVar7;
      return 0;
    }
    piVar13 = param_2;
    pcVar10 = *(char **)(iVar4 + 0xd8);
    if (*pcVar10 == '\n') {
LAB_100e83eb:
      if (**(char **)(iVar4 + 0xd8) == '\n') {
        *(char **)(iVar4 + 0xd8) = *(char **)(iVar4 + 0xd8) + 1;
      }
      iVar8 = *(int *)(iVar4 + 0xe8);
      if ((iVar8 < 100) || (199 < iVar8)) {
        uVar3 = *puVar1;
        *(undefined4 *)(iVar4 + 0xb8) = 0;
        if (((uVar3 & *(uint *)(iVar4 + 0x74)) != 0xffffffff) || (*(int *)(iVar4 + 0x130) != 0))
        goto LAB_100e842e;
        if (param_2[0xa1] == 0) {
          if (((param_2[0x60] == 0xb) && ((*(uint *)(param_2[200] + 0x40) & 0x40000) == 0)) &&
             (*(int *)(iVar4 + 1000) != 6)) {
            FUN_100d8ae0(iVar4,"no chunk, no close, no size. Assume close to signal end\n");
            FUN_100dc080(piVar13,2);
          }
          goto LAB_100e842e;
        }
LAB_100e8436:
        if (((*(int *)(iVar4 + 0xe8) == 0x191) && (piVar13[0xf3] == 2)) ||
           ((*(int *)(iVar4 + 0xe8) == 0x197 && (piVar13[0x102] == 2)))) {
          FUN_100d8ae0(iVar4,"Connection closure while negotiating auth (HTTP 1.0?)\n");
          *(undefined4 *)(iVar4 + 0x498c) = 1;
        }
      }
      else {
        if (iVar8 == 100) {
          *(undefined4 *)(iVar4 + 0xb8) = 1;
          *(undefined4 *)(iVar4 + 0xc0) = 0;
          if (0 < *(int *)(iVar4 + 0xf4)) {
            *(undefined4 *)(iVar4 + 0xf4) = 0;
            *(uint *)(iVar4 + 0x110) = *(uint *)(iVar4 + 0x110) | 2;
            FUN_100d6810(iVar4,0);
            piVar13 = param_2;
          }
        }
        else if (iVar8 == 0x65) {
          if (*(int *)(iVar4 + 0xf8) == 1) {
            FUN_100d8ae0(iVar4,"Received 101\n");
            *(undefined4 *)(iVar4 + 0xf8) = 2;
            *(undefined4 *)(iVar4 + 0xb8) = 1;
            *(undefined4 *)(iVar4 + 0xc0) = 0;
            return 1;
          }
          *(undefined4 *)(iVar4 + 0xb8) = 0;
        }
        else {
          *(undefined4 *)(iVar4 + 0xb8) = 1;
          *(undefined4 *)(iVar4 + 0xc0) = 0;
        }
LAB_100e842e:
        if (piVar13[0xa1] != 0) goto LAB_100e8436;
      }
      iVar8 = *piVar13;
      iVar9 = *(int *)(iVar8 + 0xe8);
      if ((*(int *)(iVar8 + 0x51c) != 0) && (399 < iVar9)) {
        if (iVar9 == 0x191) {
          iVar9 = piVar13[0xa8];
        }
        else {
          if (iVar9 != 0x197) goto LAB_100e887d;
          iVar9 = piVar13[0xa9];
        }
        if ((iVar9 == 0) || (*(int *)(iVar8 + 0x498c) != 0)) {
LAB_100e887d:
          FUN_100d8ba0(iVar4,"The requested URL returned error: %d",*(undefined4 *)(iVar4 + 0xe8));
          return 0x16;
        }
      }
      uVar11 = 2;
      if (*(int *)(iVar4 + 0x530) != 0) {
        uVar11 = 3;
      }
      iVar9 = *(int *)(iVar4 + 0xd8) - *(int *)(iVar4 + 0x84c);
      iVar8 = FUN_100d8fc0(piVar13,uVar11,*(int *)(iVar4 + 0x84c),iVar9);
      if (iVar8 != 0) {
        return iVar8;
      }
      iVar8 = *(int *)(iVar4 + 0xa0) + iVar9;
      *(int *)(iVar4 + 0x4b64) = *(int *)(iVar4 + 0x4b64) + iVar9;
      *(int *)(iVar4 + 0xa0) = iVar8;
      if ((*(int *)(iVar4 + 0xe8) < 100) || (199 < *(int *)(iVar4 + 0xe8))) {
        iVar8 = 0;
      }
      *(int *)(iVar4 + 0xa4) = iVar8;
      iVar8 = FUN_100e5bd0(piVar13);
      if (iVar8 != 0) {
        return iVar8;
      }
      if (299 < *(int *)(iVar4 + 0xe8)) {
        if ((piVar13[0xb2] == 0) && (piVar13[0xa1] == 0)) {
          if (piVar13[0xb3] == 0) {
            if (((1 < *(int *)(iVar4 + 1000)) && (*(int *)(iVar4 + 1000) < 6)) &&
               (FUN_100d6810(iVar4,0), *(int *)(iVar4 + 0x114) == 0)) {
              if (*(int *)(iVar4 + 0x520) == 0) {
                FUN_100d8ae0(iVar4,"HTTP error before end of send, stop sending\n");
                FUN_100dc080(piVar13,2);
                *(undefined4 *)(iVar4 + 0x114) = 1;
                *(uint *)(iVar4 + 0x110) = *(uint *)(iVar4 + 0x110) & 0xfffffffd;
                if (*(int *)(iVar4 + 0x4ac8) != 0) {
                  *(undefined4 *)(iVar4 + 0xf4) = 3;
                }
              }
              else {
                FUN_100d8ae0(iVar4,"HTTP error before end of send, keep sending\n");
                if (0 < *(int *)(iVar4 + 0xf4)) {
                  *(undefined4 *)(iVar4 + 0xf4) = 0;
                  *(uint *)(iVar4 + 0x110) = *(uint *)(iVar4 + 0x110) | 2;
                }
              }
            }
            goto LAB_100e8705;
          }
        }
        else {
LAB_100e8705:
          if (piVar13[0xb3] == 0) goto LAB_100e872c;
        }
        FUN_100d8ae0(iVar4,"Keep sending data to get tossed away!\n");
        *(uint *)(iVar4 + 0x110) = *(uint *)(iVar4 + 0x110) | 2;
      }
LAB_100e872c:
      if (*(int *)(iVar4 + 0xb8) == 0) {
        if (*(int *)(iVar4 + 0x53c) == 0) {
          if (*(int *)(iVar4 + 0x130) != 0) {
            *puVar1 = 0xffffffff;
            *(undefined4 *)(iVar4 + 0x74) = 0xffffffff;
            *(undefined4 *)(iVar4 + 0x80) = 0xffffffff;
            *(undefined4 *)(iVar4 + 0x84) = 0xffffffff;
          }
        }
        else {
          *param_4 = 1;
        }
        if ((*puVar1 != 0xffffffff) || (*(int *)(iVar4 + 0x74) != -1)) {
          FUN_100e3330(iVar4,*puVar1,*(int *)(iVar4 + 0x74));
          *(uint *)(iVar4 + 0x80) = *puVar1;
          *(undefined4 *)(iVar4 + 0x84) = *(undefined4 *)(iVar4 + 0x74);
        }
        if ((*(int *)(iVar4 + 0x80) == 0) && (*(int *)(iVar4 + 0x84) == 0)) {
          *param_4 = 1;
        }
        else if (*param_4 == 0) goto LAB_100e8914;
        *(uint *)(iVar4 + 0x110) = *(uint *)(iVar4 + 0x110) & 0xfffffffe;
LAB_100e8914:
        if (*(int *)(iVar4 + 0x548) != 0) {
          FUN_100d89b0(iVar4,1,*(undefined4 *)(iVar4 + 0xd0),iVar9,piVar13);
        }
        return 0;
      }
    }
    else {
      if (*pcVar10 == '\r') {
        *(char **)(iVar4 + 0xd8) = pcVar10 + 1;
        goto LAB_100e83eb;
      }
      iVar8 = *(int *)(iVar4 + 0xc0);
      *(int *)(iVar4 + 0xc0) = iVar8 + 1;
      if (iVar8 == 0) {
        if ((*(uint *)(param_2[200] + 0x40) & 3) == 0) {
          if ((*(uint *)(param_2[200] + 0x40) & 0x40000) == 0) goto LAB_100e8844;
          piVar13 = param_2 + 0x61;
          iVar8 = _sscanf(pcVar10," RTSP/%1d.%1d%c%3d",&local_10,piVar13,&local_19,iVar4 + 0xe8);
          if ((iVar8 != 4) || (local_19 != ' ')) goto LAB_100e8844;
          piVar14 = param_2 + 0x60;
          *piVar13 = *piVar13 + local_10 * 10;
          *piVar14 = 0xb;
          local_14 = 4;
LAB_100e7c6b:
          if (local_14 == 0) {
LAB_100e8844:
            *(undefined4 *)(iVar4 + 0xb8) = 0;
            return 0;
          }
        }
        else {
          iVar8 = iVar4 + 0xe8;
          piVar14 = param_2 + 0x60;
          iVar9 = _sscanf(pcVar10," HTTP/%1d.%1d%c%3d",&local_18,piVar14,&param_1,iVar8);
          if (iVar9 == 1) {
            if ((local_18 != 2) ||
               (iVar8 = _sscanf(*(char **)(iVar4 + 0xd8)," HTTP/2 %d",iVar8), iVar8 != 1))
            goto LAB_100e8813;
            *piVar14 = 0;
            param_1 = CONCAT31(param_1._1_3_,0x20);
          }
          else {
            if (iVar9 != 4) {
              if (iVar9 != 0) goto LAB_100e8813;
              local_14 = _sscanf(*(char **)(iVar4 + 0xd8)," HTTP %3d",iVar8);
              *piVar14 = 10;
              if (local_14 == 0) {
                iVar8 = FUN_100e5a00();
                if (iVar8 == 0) goto LAB_100e7c6b;
                *(undefined4 *)(iVar4 + 0xe8) = 200;
                *piVar14 = 10;
              }
              goto LAB_100e7c77;
            }
            if ((char)param_1 != ' ') {
LAB_100e8813:
              FUN_100d8ba0(iVar4,"Unsupported HTTP version in response\n");
              return 1;
            }
          }
          iVar8 = *piVar14 + local_18 * 10;
          *piVar14 = iVar8;
          if ((*(int *)(iVar4 + 0xf8) == 2) && (iVar8 != 0x14)) {
            FUN_100d8ae0(iVar4,"Lying server, not serving HTTP/2\n");
          }
        }
LAB_100e7c77:
        piVar13 = param_2;
        *(undefined4 *)(iVar4 + 0x4b50) = *(undefined4 *)(iVar4 + 0xe8);
        *(int *)(iVar4 + 0x4b58) = *piVar14;
        if ((*(int *)(iVar4 + 0x4ac4) == 0) || (*piVar14 < *(int *)(iVar4 + 0x4ac4))) {
          *(int *)(iVar4 + 0x4ac4) = *piVar14;
        }
        if (((((*(int *)(iVar4 + 0x51c) != 0) && (iVar8 = *(int *)(iVar4 + 0xe8), 399 < iVar8)) &&
             ((iVar8 != 0x191 || (param_2[0xa8] == 0)))) &&
            ((iVar8 != 0x197 || (param_2[0xa9] == 0)))) &&
           ((*(int *)(iVar4 + 0x4ae8) == 0 && *(int *)(iVar4 + 0x4aec) == 0 ||
            ((*(int *)(iVar4 + 1000) != 1 || (iVar8 != 0x1a0)))))) {
          FUN_100e5b30(iVar4);
          return 0x16;
        }
        iVar8 = *piVar14;
        if (iVar8 == 10) {
          FUN_100d8ae0(iVar4,"HTTP 1.0, assume close after body\n");
          FUN_100dc080(piVar13,1);
        }
        else if ((iVar8 == 0x14) ||
                ((*(int *)(iVar4 + 0xf8) == 1 && (*(int *)(iVar4 + 0xe8) == 0x65)))) {
          *(undefined4 *)param_2[0x18b] = 2;
        }
        else if ((((10 < iVar8) && (param_2[0xa1] == 0)) && (param_2[0x18b] != 0)) &&
                (iVar8 = FUN_100e8c80(iVar4,param_2), iVar8 == 0)) {
          *(undefined4 *)piVar13[0x18b] = 1;
        }
        if ((*(int *)(iVar4 + 0xe8) == 0xcc) || (*(int *)(iVar4 + 0xe8) == 0x130)) {
          if (*(int *)(iVar4 + 0x3e0) != 0) {
            *(undefined4 *)(iVar4 + 0x4b60) = 1;
          }
          *puVar1 = 0;
          *(undefined4 *)(iVar4 + 0x74) = 0;
          *(undefined4 *)(iVar4 + 0x80) = 0;
          *(undefined4 *)(iVar4 + 0x84) = 0;
          *(undefined4 *)(iVar4 + 0x11c) = 1;
        }
      }
      if (((*(int *)(iVar4 + 0x11c) == 0) && (*(int *)(iVar4 + 0x57c) == 0)) &&
         (iVar8 = thunk_FUN_100de8c0("Content-Length:",*(undefined4 *)(iVar4 + 0xd8),0xf),
         iVar8 != 0)) {
        iVar8 = FUN_100eef50(*(int *)(iVar4 + 0xd8) + 0xf,0,10,&local_8);
        if (iVar8 == 0) {
          iVar8 = *(int *)(iVar4 + 0x4e4);
          if ((*(uint *)(iVar4 + 0x4e0) != 0 || iVar8 != 0) &&
             ((iVar8 < local_4 || ((iVar8 <= local_4 && (*(uint *)(iVar4 + 0x4e0) < local_8)))))) {
            FUN_100d8ba0(iVar4,"Maximum file size exceeded");
            return 0x3f;
          }
          if (local_4 < 0) {
            FUN_100dc080(param_2,2);
            FUN_100d8ae0(iVar4,"Negative content-length: %I64d, closing after transfer\n",local_8,
                         local_4);
            piVar13 = param_2;
          }
          else {
            *puVar1 = local_8;
            *(int *)(iVar4 + 0x74) = local_4;
            *(uint *)(iVar4 + 0x80) = local_8;
            *(int *)(iVar4 + 0x84) = local_4;
            FUN_100e3330(iVar4,local_8,local_4);
            piVar13 = param_2;
          }
        }
        else {
          FUN_100d8ae0(iVar4,"Illegal Content-Length: header\n");
          piVar13 = param_2;
        }
      }
      else {
        iVar8 = thunk_FUN_100de8c0("Content-Type:",*(undefined4 *)(iVar4 + 0xd8),0xd);
        if (iVar8 == 0) {
          iVar8 = thunk_FUN_100de8c0("Server:",*(undefined4 *)(iVar4 + 0xd8),7);
          piVar13 = param_2;
          if (iVar8 == 0) {
            if (((param_2[0x60] == 10) && (param_2[0xa6] != 0)) &&
               (iVar8 = FUN_100e55e0(*(undefined4 *)(iVar4 + 0xd8),"Proxy-Connection:","keep-alive")
               , iVar8 != 0)) {
              FUN_100dc080(piVar13,0);
              FUN_100d8ae0(iVar4,"HTTP/1.0 proxy connection set to keep alive!\n");
            }
            else if (((piVar13[0x60] == 0xb) && (piVar13[0xa6] != 0)) &&
                    (iVar8 = FUN_100e55e0(*(undefined4 *)(iVar4 + 0xd8),"Proxy-Connection:","close")
                    , iVar8 != 0)) {
              FUN_100dc080(piVar13,1);
              FUN_100d8ae0(iVar4,"HTTP/1.1 proxy connection set close!\n");
            }
            else if ((piVar13[0x60] == 10) &&
                    (iVar8 = FUN_100e55e0(*(undefined4 *)(iVar4 + 0xd8),"Connection:","keep-alive"),
                    iVar8 != 0)) {
              FUN_100dc080(piVar13,0);
              FUN_100d8ae0(iVar4,"HTTP/1.0 connection set to keep alive!\n");
            }
            else {
              iVar8 = FUN_100e55e0(*(undefined4 *)(iVar4 + 0xd8),"Connection:","close");
              if (iVar8 == 0) {
                iVar8 = thunk_FUN_100de8c0("Transfer-Encoding:",*(undefined4 *)(iVar4 + 0xd8),0x12);
                if (iVar8 == 0) {
                  iVar8 = thunk_FUN_100de8c0("Content-Encoding:",*(undefined4 *)(iVar4 + 0xd8),0x11)
                  ;
                  if ((iVar8 != 0) && (*(int *)(iVar4 + 0x5c4) != 0)) {
                    uVar11 = 0;
                    iVar8 = *(int *)(iVar4 + 0xd8) + 0x11;
                    goto LAB_100e80d4;
                  }
                  iVar8 = thunk_FUN_100de8c0("Content-Range:",*(undefined4 *)(iVar4 + 0xd8),0xe);
                  if (iVar8 != 0) {
                    bVar2 = *(byte *)(*(int *)(iVar4 + 0xd8) + 0xe);
                    for (pbVar12 = (byte *)(*(int *)(iVar4 + 0xd8) + 0xe);
                        ((bVar2 != 0 && (iVar8 = _isdigit((uint)bVar2), iVar8 == 0)) &&
                        (*pbVar12 != 0x2a)); pbVar12 = pbVar12 + 1) {
                      bVar2 = pbVar12[1];
                    }
                    iVar8 = _isdigit((uint)*pbVar12);
                    if (iVar8 == 0) {
                      *(undefined4 *)(iVar4 + 0x4ae8) = 0;
                      *(undefined4 *)(iVar4 + 0x4aec) = 0;
                    }
                    else {
                      iVar8 = FUN_100eef50(pbVar12,0,10,(int *)(iVar4 + 0xe0));
                      piVar13 = param_2;
                      if (((iVar8 == 0) && (*(int *)(iVar4 + 0x4ae8) == *(int *)(iVar4 + 0xe0))) &&
                         (*(int *)(iVar4 + 0x4aec) == *(int *)(iVar4 + 0xe4))) {
                        *(undefined4 *)(iVar4 + 0xdc) = 1;
                      }
                    }
                    goto LAB_100e7f4a;
                  }
                  if ((*(int *)(iVar4 + 0x718) != 0) &&
                     (iVar8 = thunk_FUN_100de8c0("Set-Cookie:",*(undefined4 *)(iVar4 + 0xd8),0xb),
                     iVar8 != 0)) {
                    FUN_100dec30(iVar4,2,2);
                    iVar8 = piVar13[0xd4];
                    if (iVar8 == 0) {
                      iVar8 = piVar13[0x28];
                    }
                    FUN_100d9fe0(iVar4,*(undefined4 *)(iVar4 + 0x718),1,*(int *)(iVar4 + 0xd8) + 0xb
                                 ,iVar8,*(undefined4 *)(iVar4 + 0x4ad4));
                    FUN_100dec70(iVar4,2);
                    goto LAB_100e7f4a;
                  }
                  iVar8 = thunk_FUN_100de8c0("Last-Modified:",*(undefined4 *)(iVar4 + 0xd8),0xe);
                  if ((iVar8 != 0) &&
                     ((*(int *)(iVar4 + 0x3e0) != 0 || (*(int *)(iVar4 + 0x500) != 0)))) {
                    local_c = FID_conflict___time32(0);
                    uVar11 = FUN_100eeef0(*(int *)(iVar4 + 0xd8) + 0xe,&local_c);
                    *(undefined4 *)(iVar4 + 0x100) = uVar11;
                    if (*(int *)(iVar4 + 0x500) != 0) {
                      *(undefined4 *)(iVar4 + 0x4b5c) = uVar11;
                    }
                    goto LAB_100e7f4a;
                  }
                  iVar8 = thunk_FUN_100de8c0("WWW-Authenticate:",*(undefined4 *)(iVar4 + 0xd8),0x11)
                  ;
                  if (((iVar8 != 0) && (iVar8 = *(int *)(iVar4 + 0xe8), iVar8 == 0x191)) ||
                     ((iVar8 = thunk_FUN_100de8c0("Proxy-authenticate:",
                                                  *(undefined4 *)(iVar4 + 0xd8),0x13), iVar8 != 0 &&
                      (iVar8 = *(int *)(iVar4 + 0xe8), iVar8 == 0x197)))) {
                    iVar9 = FUN_100e4840(*(undefined4 *)(iVar4 + 0xd8));
                    if (iVar9 == 0) {
                      return 0x1b;
                    }
                    iVar8 = FUN_100e4f00(param_2,iVar8 == 0x197,iVar9);
                    (*(code *)PTR__free_101554bc)(iVar9);
                    piVar13 = param_2;
                    if (iVar8 != 0) {
                      return iVar8;
                    }
                    goto LAB_100e7f4a;
                  }
                  if ((((*(int *)(iVar4 + 0xe8) < 300) || (399 < *(int *)(iVar4 + 0xe8))) ||
                      (iVar8 = thunk_FUN_100de8c0("Location:",*(undefined4 *)(iVar4 + 0xd8),9),
                      iVar8 == 0)) || (*(int *)(iVar4 + 0x120) != 0)) {
                    if ((*(uint *)(piVar13[200] + 0x40) & 0x40000) != 0) {
                      return 4;
                    }
                    goto LAB_100e7f4a;
                  }
                  pcVar10 = (char *)FUN_100e4840(*(undefined4 *)(iVar4 + 0xd8));
                  if (pcVar10 == (char *)0x0) {
                    return 0x1b;
                  }
                  if (*pcVar10 == '\0') {
                    (*(code *)PTR__free_101554bc)(pcVar10);
                    goto LAB_100e7f4a;
                  }
                  *(char **)(iVar4 + 0x120) = pcVar10;
                  if (*(int *)(iVar4 + 0x524) == 0) goto LAB_100e7f4a;
                  iVar8 = (*(code *)PTR___strdup_101554c4)(pcVar10);
                  *(int *)(iVar4 + 0x124) = iVar8;
                  if (iVar8 == 0) {
                    return 0x1b;
                  }
                  iVar8 = FUN_100e4ab0(piVar13);
                }
                else {
                  uVar11 = 1;
                  iVar8 = *(int *)(iVar4 + 0xd8) + 0x12;
LAB_100e80d4:
                  iVar8 = FUN_100df340(piVar13,iVar8,uVar11);
                }
                if (iVar8 != 0) {
                  return iVar8;
                }
              }
              else {
                FUN_100dc080(piVar13,2);
              }
            }
          }
          else if (param_2[0x60] < 0x14) {
            pcVar10 = (char *)FUN_100e4840(*(undefined4 *)(iVar4 + 0xd8));
            if ((((int *)piVar13[0x18b] != (int *)0x0) && (*(int *)piVar13[0x18b] == 1)) &&
               (iVar8 = FUN_100e8de0(iVar4,pcVar10), iVar8 != 0)) {
              *(undefined4 *)piVar13[0x18b] = 0xffffffff;
            }
            goto LAB_100e7f3c;
          }
        }
        else {
          pcVar10 = (char *)FUN_100e4840(*(undefined4 *)(iVar4 + 0xd8));
          if (pcVar10 == (char *)0x0) {
            return 0x1b;
          }
          if (*pcVar10 == '\0') {
LAB_100e7f3c:
            (*(code *)PTR__free_101554bc)(pcVar10);
            piVar13 = param_2;
          }
          else {
            (*(code *)PTR__free_101554bc)(*(undefined4 *)(iVar4 + 0x4b78));
            *(char **)(iVar4 + 0x4b78) = pcVar10;
            piVar13 = param_2;
          }
        }
      }
LAB_100e7f4a:
      uVar11 = 2;
      if (*(int *)(iVar4 + 0x530) != 0) {
        uVar11 = 3;
      }
      if (*(int *)(iVar4 + 0x548) != 0) {
        FUN_100d89b0(iVar4,1,*(undefined4 *)(iVar4 + 0xd8),*(undefined4 *)(iVar4 + 200),piVar13);
      }
      iVar8 = FUN_100d8fc0(piVar13,uVar11,*(undefined4 *)(iVar4 + 0xd8),*(undefined4 *)(iVar4 + 200)
                          );
      if (iVar8 != 0) {
        return iVar8;
      }
      *(int *)(iVar4 + 0x4b64) = *(int *)(iVar4 + 0x4b64) + *(int *)(iVar4 + 200);
      *(int *)(iVar4 + 0xa0) = *(int *)(iVar4 + 0xa0) + *(int *)(iVar4 + 200);
    }
    *(undefined4 *)(iVar4 + 0xc4) = *(undefined4 *)(iVar4 + 0x84c);
    *(undefined4 *)(iVar4 + 200) = 0;
    if (**(char **)(iVar4 + 0xcc) == '\0') {
      return 0;
    }
  } while( true );
}


/* END FUNCTION 0x100e7a40 */

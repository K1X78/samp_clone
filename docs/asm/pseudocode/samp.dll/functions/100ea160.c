/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ea160
 * Name: FUN_100ea160
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100ea160(int *param_1,int param_2,char *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  int *piVar13;
  undefined1 *puStack_24;
  char *pcStack_1c;
  undefined1 *puStack_18;
  undefined *puStack_14;
  int iStack_10;
  int iStack_c;
  int local_8;
  undefined4 local_4;
  
  local_8 = param_1[param_2 + 0x66];
  iVar2 = param_1[0x18a];
  iVar3 = *param_1;
  local_4 = 0;
  bVar4 = false;
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x401c) != 2)) {
    param_1[0xba] = 0;
    do {
      if (*(int *)(iVar2 + 0x401c) == 0) {
        FUN_100d8ae0(iVar3,"Establish HTTP proxy tunnel to %s:%hu\n",param_3,param_4);
        (*(code *)PTR__free_101554bc)(*(undefined4 *)(iVar3 + 0x124));
        *(undefined4 *)(iVar3 + 0x124) = 0;
        iVar5 = FUN_100e52e0();
        if (iVar5 == 0) {
          return 0x1b;
        }
        iVar6 = FUN_100cd220("%s:%hu",param_3,param_4);
        if (iVar6 == 0) {
          FUN_100e52f0(iVar5);
          return 0x1b;
        }
        iVar7 = FUN_100e4de0(param_1,"CONNECT",iVar6,1);
        (*(code *)PTR__free_101554bc)(iVar6);
        if (iVar7 == 0) {
          pcStack_1c = "";
          puStack_18 = &DAT_10117a39;
          puStack_14 = &DAT_1012711c;
          if (param_1[0x3c] != 1) {
            puStack_14 = &DAT_10127120;
          }
          uVar9 = param_1[0xaa];
          if (param_3 != (char *)param_1[0x28]) {
            pcVar8 = _strchr(param_3,0x3a);
            uVar9 = (uint)(pcVar8 != (char *)0x0);
          }
          if (uVar9 == 0) {
            puVar12 = &DAT_10117a39;
            puVar10 = &DAT_10117a39;
          }
          else {
            puVar12 = &DAT_10117f50;
            puVar10 = &DAT_101183f8;
          }
          iVar6 = FUN_100cd220("%s%s%s:%hu",puVar10,param_3,puVar12,param_4);
          iStack_10 = iVar6;
          if (iVar6 == 0) {
            FUN_100e52f0(iVar5);
            return 0x1b;
          }
          iVar7 = FUN_100e47d0(param_1,"Host:");
          puStack_24 = (undefined1 *)0x0;
          if ((iVar7 == 0) &&
             (puStack_24 = (undefined1 *)FUN_100cd220("Host: %s\r\n",iVar6),
             puStack_24 == (undefined1 *)0x0)) {
            (*(code *)PTR__free_101554bc)(iVar6);
            FUN_100e52f0(iVar5);
            return 0x1b;
          }
          iVar6 = FUN_100e47d0(param_1,"Proxy-Connection:");
          if (iVar6 == 0) {
            pcStack_1c = "Proxy-Connection: Keep-Alive\r\n";
          }
          iVar6 = FUN_100e47d0(param_1,"User-Agent:");
          if ((iVar6 == 0) && (*(int *)(iVar3 + 0x630) != 0)) {
            puStack_18 = (undefined1 *)param_1[0xce];
          }
          puVar10 = (undefined1 *)param_1[0xcd];
          if (puVar10 == (undefined1 *)0x0) {
            puVar10 = &DAT_10117a39;
          }
          puVar12 = puStack_24;
          if (puStack_24 == (undefined1 *)0x0) {
            puVar12 = &DAT_10117a39;
          }
          iVar7 = FUN_100e5da0(iVar5,"CONNECT %s HTTP/%s\r\n%s%s%s%s",iStack_10,puStack_14,puVar12,
                               puVar10,puStack_18,pcStack_1c);
          if (puStack_24 != (undefined1 *)0x0) {
            (*(code *)PTR__free_101554bc)(puStack_24);
          }
          (*(code *)PTR__free_101554bc)(iStack_10);
          if (((iVar7 == 0) && (iVar7 = FUN_100e5f20(param_1,1,iVar5), iVar7 == 0)) &&
             (iVar7 = FUN_100e5da0(iVar5,&DAT_101185d0), iVar7 == 0)) {
            iVar7 = FUN_100e5320(iVar5,param_1,iVar3 + 0x4b68,0,param_2);
          }
          iVar5 = 0;
          if (iVar7 != 0) {
            FUN_100d8ba0(iVar3,"Failed sending CONNECT to proxy");
          }
        }
        FUN_100e52f0(iVar5);
        if (iVar7 != 0) {
          return iVar7;
        }
        *(undefined4 *)(iVar2 + 0x401c) = 1;
        *(undefined4 *)(iVar2 + 0x4000) = 0;
      }
      iVar5 = FUN_100db5d0(iVar3,0,1);
      if (iVar5 < 1) {
        FUN_100d8ba0(iVar3,"Proxy CONNECT aborted due to timeout");
        return 0x1c;
      }
      iVar5 = FUN_100dc0d0(param_1,param_2);
      if (iVar5 == 0) {
        return 0;
      }
      iVar5 = *(int *)(iVar2 + 0x4004);
      iStack_10 = 0;
      while (iVar5 != 0) {
        piVar13 = (int *)(iVar2 + 0x4000);
        if (piVar13 <= *(int **)(iVar2 + 0x400c)) {
          FUN_100d8ba0(iVar3,"CONNECT response too large!");
          return 0x38;
        }
        iVar5 = FUN_100d8800(param_1,local_8,*(int **)(iVar2 + 0x400c),1,&iStack_c);
        if (iVar5 == 0x51) {
          return 0;
        }
        iVar6 = FUN_100e33f0(param_1);
        if (iVar6 != 0) {
          return 0x2a;
        }
        if (iVar5 != 0) {
LAB_100ea526:
          *(undefined4 *)(iVar2 + 0x4004) = 0;
          break;
        }
        if (iStack_c < 1) {
          if ((*(int *)(iVar3 + 0x170) == 0) || (*(int *)(iVar3 + 0x497c) == 0)) {
            iStack_10 = 1;
            FUN_100d8ba0(iVar3,"Proxy CONNECT aborted");
          }
          else {
            param_1[0xba] = 1;
            FUN_100d8ae0(iVar3,"Proxy CONNECT connection closed\n");
          }
          goto LAB_100ea526;
        }
        if (*(int *)(iVar2 + 0x4004) < 2) {
          iVar5 = *piVar13;
          *piVar13 = iVar5 + 1;
          if (**(char **)(iVar2 + 0x400c) == '\n') {
            if (*(int *)(iVar3 + 0x548) != 0) {
              FUN_100d89b0(iVar3,1,*(undefined4 *)(iVar2 + 0x4008),iVar5 + 1,param_1);
            }
            if (*(int *)(iVar3 + 0x6e8) == 0) {
              uVar11 = 2;
              if (*(int *)(iVar3 + 0x530) != 0) {
                uVar11 = 3;
              }
              iVar5 = FUN_100d8fc0(param_1,uVar11,*(undefined4 *)(iVar2 + 0x4008),*piVar13);
              if (iVar5 != 0) {
                return iVar5;
              }
            }
            *(int *)(iVar3 + 0x4b64) = *(int *)(iVar3 + 0x4b64) + *piVar13;
            *(int *)(iVar3 + 0xa0) = *(int *)(iVar3 + 0xa0) + *piVar13;
            cVar1 = **(char **)(iVar2 + 0x4008);
            if ((cVar1 == '\r') || (cVar1 == '\n')) {
              *(int *)(iVar2 + 0x400c) = iVar2;
              if ((*(int *)(iVar3 + 0xe8) == 0x197) && (*(int *)(iVar3 + 0x498c) == 0)) {
                *(undefined4 *)(iVar2 + 0x4004) = 2;
                if (*(int *)(iVar2 + 0x4010) == 0 && *(int *)(iVar2 + 0x4014) == 0) {
                  if (*(int *)(iVar2 + 0x4018) != 0) {
                    FUN_100d8ae0(iVar3,"Ignore chunked response-body\n");
                    *(undefined4 *)(iVar3 + 0x118) = 1;
                    if (*(char *)(*(int *)(iVar2 + 0x4008) + 1) == '\n') {
                      *(int *)(iVar2 + 0x4008) = *(int *)(iVar2 + 0x4008) + 1;
                    }
                    iVar5 = FUN_100f1580(param_1,*(int *)(iVar2 + 0x4008) + 1,1,&iStack_c);
                    if (iVar5 != -1) goto LAB_100ea996;
                    FUN_100d8ae0(iVar3,"chunk reading DONE\n");
                    *(undefined4 *)(iVar2 + 0x401c) = 2;
                  }
                  goto LAB_100ea98c;
                }
                FUN_100d8ae0(iVar3,"Ignore %I64d bytes of response-body\n",*(int *)(iVar2 + 0x4010),
                             *(int *)(iVar2 + 0x4014));
              }
              else {
LAB_100ea98c:
                *(undefined4 *)(iVar2 + 0x4004) = 0;
              }
LAB_100ea996:
              if (*(int *)(iVar2 + 0x4010) == 0 && *(int *)(iVar2 + 0x4014) == 0) goto LAB_100ea9a4;
            }
            else {
              (*(char **)(iVar2 + 0x4008))[*piVar13] = '\0';
              iVar5 = thunk_FUN_100de8c0("WWW-Authenticate:",*(undefined4 *)(iVar2 + 0x4008),0x11);
              if (((iVar5 == 0) || (iVar5 = *(int *)(iVar3 + 0xe8), iVar5 != 0x191)) &&
                 ((iVar5 = thunk_FUN_100de8c0("Proxy-authenticate:",*(undefined4 *)(iVar2 + 0x4008),
                                              0x13), iVar5 == 0 ||
                  (iVar5 = *(int *)(iVar3 + 0xe8), iVar5 != 0x197)))) {
                iVar5 = thunk_FUN_100de8c0("Content-Length:",*(undefined4 *)(iVar2 + 0x4008),0xf);
                if (iVar5 == 0) {
                  iVar5 = FUN_100e55e0(*(undefined4 *)(iVar2 + 0x4008),"Connection:","close");
                  if (iVar5 == 0) {
                    iVar5 = thunk_FUN_100de8c0("Transfer-Encoding:",*(undefined4 *)(iVar2 + 0x4008),
                                               0x12);
                    if (iVar5 == 0) {
                      iVar5 = FUN_100e55e0(*(undefined4 *)(iVar2 + 0x4008),"Proxy-Connection:",
                                           "close");
                      if (iVar5 == 0) {
                        iVar5 = _sscanf(*(char **)(iVar2 + 0x4008),"HTTP/1.%d %d",&local_4,
                                        (undefined4 *)(iVar3 + 0xe8));
                        if (iVar5 == 2) {
                          *(undefined4 *)(iVar3 + 0x4b54) = *(undefined4 *)(iVar3 + 0xe8);
                        }
                      }
                      else {
                        bVar4 = true;
                      }
                    }
                    else if (*(int *)(iVar3 + 0xe8) / 100 == 2) {
                      FUN_100d8ae0(iVar3,"Ignoring Transfer-Encoding in CONNECT %03d response\n",
                                   *(int *)(iVar3 + 0xe8));
                    }
                    else {
                      iVar5 = FUN_100e55e0(*(undefined4 *)(iVar2 + 0x4008),"Transfer-Encoding:",
                                           "chunked");
                      if (iVar5 != 0) {
                        FUN_100d8ae0(iVar3,"CONNECT responded chunked\n");
                        *(undefined4 *)(iVar2 + 0x4018) = 1;
                        FUN_100f1570(param_1);
                      }
                    }
                  }
                  else {
                    bVar4 = true;
                  }
                }
                else if (*(int *)(iVar3 + 0xe8) / 100 == 2) {
                  FUN_100d8ae0(iVar3,"Ignoring Content-Length in CONNECT %03d response\n",
                               *(int *)(iVar3 + 0xe8));
                }
                else {
                  FUN_100eef50(*(int *)(iVar2 + 0x4008) + 0xf,0,10,iVar2 + 0x4010);
                }
              }
              else {
                iVar6 = FUN_100e4840(*(undefined4 *)(iVar2 + 0x4008));
                if (iVar6 == 0) {
                  return 0x1b;
                }
                iVar5 = FUN_100e4f00(param_1,iVar5 == 0x197,iVar6);
                (*(code *)PTR__free_101554bc)(iVar6);
                if (iVar5 != 0) {
                  return iVar5;
                }
              }
              *(undefined4 *)(iVar2 + 0x4000) = 0;
              *(int *)(iVar2 + 0x400c) = iVar2;
              *(int *)(iVar2 + 0x4008) = iVar2;
            }
          }
          else {
            *(char **)(iVar2 + 0x400c) = *(char **)(iVar2 + 0x400c) + 1;
          }
        }
        else {
          iVar5 = *(int *)(iVar2 + 0x4010);
          *(int *)(iVar2 + 0x400c) = iVar2;
          if (iVar5 == 0 && *(int *)(iVar2 + 0x4014) == 0) {
            puStack_14 = (undefined *)0x0;
            iVar5 = FUN_100f1580(param_1,iVar2,1,&puStack_14);
            if (iVar5 == -1) {
              FUN_100d8ae0(iVar3,"chunk reading DONE\n");
              *(undefined4 *)(iVar2 + 0x4004) = 0;
LAB_100ea9a4:
              *(undefined4 *)(iVar2 + 0x401c) = 2;
            }
          }
          else {
            iVar6 = *(int *)(iVar2 + 0x4014) - (uint)(iVar5 == 0);
            *(int *)(iVar2 + 0x4010) = iVar5 + -1;
            *(int *)(iVar2 + 0x4014) = iVar6;
            if ((iVar6 < 0) || ((iVar6 < 1 && (*(int *)(iVar2 + 0x4010) == 0)))) {
              *(undefined4 *)(iVar2 + 0x401c) = 2;
              goto LAB_100ea526;
            }
          }
        }
        iVar5 = *(int *)(iVar2 + 0x4004);
      }
      iVar5 = FUN_100e33f0(param_1);
      if (iVar5 != 0) {
        return 0x2a;
      }
      if (iStack_10 != 0) {
        return 0x38;
      }
      if (*(int *)(iVar3 + 0x4b54) / 100 == 2) {
LAB_100eaa11:
        if (bVar4) goto LAB_100eaa17;
      }
      else {
        iVar5 = FUN_100e5bd0(param_1);
        if (iVar5 != 0) {
          return iVar5;
        }
        if (param_1[0xa1] == 0) goto LAB_100eaa11;
        bVar4 = true;
LAB_100eaa17:
        if (*(int *)(iVar3 + 0x124) != 0) {
          FUN_100dbf60(param_1,param_1[param_2 + 0x66]);
          param_1[param_2 + 0x66] = -1;
          break;
        }
      }
      if (*(int *)(iVar3 + 0x124) == 0) break;
      if (*(int *)(iVar2 + 0x401c) == 2) {
        iVar5 = param_1[0x18a];
        *(undefined4 *)(iVar5 + 0x401c) = 0;
        *(undefined4 *)(iVar5 + 0x4004) = 1;
        *(int *)(iVar5 + 0x4008) = iVar5;
        *(int *)(iVar5 + 0x400c) = iVar5;
        *(undefined4 *)(iVar5 + 0x4010) = 0;
        *(undefined4 *)(iVar5 + 0x4014) = 0;
      }
    } while (*(int *)(iVar3 + 0x124) != 0);
    if (*(int *)(iVar3 + 0x4b54) / 100 == 2) {
      *(undefined4 *)(iVar2 + 0x401c) = 2;
      (*(code *)PTR__free_101554bc)(param_1[0xcd]);
      param_1[0xcd] = 0;
      *(undefined4 *)(iVar3 + 0x4980) = 1;
      FUN_100d8ae0(iVar3,"Proxy replied %d to CONNECT request\n",*(undefined4 *)(iVar3 + 0x4b54));
      *(undefined4 *)(iVar3 + 0x118) = 0;
      param_1[0xb3] = 0;
    }
    else {
      if ((bVar4) && (*(int *)(iVar3 + 0x124) != 0)) {
        param_1[0xba] = 1;
        FUN_100d8ae0(iVar3,"Connect me again please\n");
        FUN_100ea130();
      }
      else {
        (*(code *)PTR__free_101554bc)(*(undefined4 *)(iVar3 + 0x124));
        *(undefined4 *)(iVar3 + 0x124) = 0;
        FUN_100dc080(param_1,2);
        FUN_100dbf60(param_1,param_1[param_2 + 0x66]);
        param_1[param_2 + 0x66] = -1;
      }
      *(undefined4 *)(iVar2 + 0x401c) = 0;
      if (param_1[0xba] == 0) {
        FUN_100d8ba0(iVar3,"Received HTTP code %d from proxy after CONNECT",
                     *(undefined4 *)(iVar3 + 0xe8));
        return 0x38;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x100ea160 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002a2a0
 * Name: FUN_1002a2a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_1002a2a0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                   int param_6,int param_7,char *param_8,int *param_9,undefined4 param_10)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  void *_Memory;
  int iVar8;
  char *pcVar9;
  undefined4 local_550;
  undefined2 local_54c;
  int local_548;
  undefined1 local_540 [170];
  undefined1 local_496 [6];
  char local_490 [60];
  undefined1 local_454;
  char local_450 [68];
  char local_40c [1024];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011457b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10055920();
  local_4 = 0;
  cVar1 = FUN_10056340(0,0);
  if (cVar1 == '\0') {
    local_4 = 0xffffffff;
    FUN_10055dc0();
    pcVar2 = "Unknown error starting TCP";
  }
  else {
    puVar3 = (undefined4 *)FUN_10055ab0(local_496,param_1,param_2);
    local_550 = *puVar3;
    local_54c = *(undefined2 *)(puVar3 + 1);
    cVar1 = FUN_100331a0(&DAT_1013c668);
    if (cVar1 == '\0') {
      iVar4 = FUN_1002e2b0();
      uVar5 = FUN_1002e2b0();
      if (uVar5 < iVar4 + 3000U) {
        do {
          iVar6 = FUN_10055c60();
          if (iVar6 != 0) {
            if ((char)param_10 != '\0') {
              _printf("%s",*(undefined4 *)(iVar6 + 0x10));
            }
            break;
          }
          FUN_10043560(0xfa);
          uVar5 = FUN_1002e2b0();
        } while (uVar5 < iVar4 + 3000U);
        if (iVar6 != 0) {
          FUN_10055bf0("HELO\r\n",6,local_550,local_54c);
          pcVar2 = (char *)FUN_10029f40(local_540,&local_550,param_10);
          if (pcVar2 == (char *)0x0) {
            if (param_3 == 0) {
              _sprintf(local_40c,"MAIL From: <>\r\n");
            }
            else {
              _sprintf(local_40c,"MAIL From: <%s>\r\n",param_3);
            }
            pcVar2 = local_40c;
            do {
              cVar1 = *pcVar2;
              pcVar2 = pcVar2 + 1;
            } while (cVar1 != '\0');
            FUN_10055bf0(local_40c,(int)pcVar2 - (int)(local_40c + 1),local_550,local_54c);
            pcVar2 = (char *)FUN_10029f40(local_540,&local_550,param_10);
            if (pcVar2 == (char *)0x0) {
              if (param_4 == 0) {
                _sprintf(local_40c,"RCPT TO: <>\r\n");
              }
              else {
                _sprintf(local_40c,"RCPT TO: <%s>\r\n",param_4);
              }
              pcVar2 = local_40c;
              do {
                cVar1 = *pcVar2;
                pcVar2 = pcVar2 + 1;
              } while (cVar1 != '\0');
              FUN_10055bf0(local_40c,(int)pcVar2 - (int)(local_40c + 1),local_550,local_54c);
              pcVar2 = (char *)FUN_10029f40(local_540,&local_550,param_10);
              if (pcVar2 == (char *)0x0) {
                FUN_10055bf0("DATA\r\n",6,local_550,local_54c);
                pcVar2 = (char *)FUN_10029f40(local_540,&local_550,param_10);
                if (pcVar2 == (char *)0x0) {
                  if (param_7 != 0) {
                    _sprintf(local_40c,"Subject: %s\r\n",param_7);
                    pcVar2 = local_40c;
                    do {
                      cVar1 = *pcVar2;
                      pcVar2 = pcVar2 + 1;
                    } while (cVar1 != '\0');
                    FUN_10055bf0(local_40c,(int)pcVar2 - (int)(local_40c + 1),local_550,local_54c);
                  }
                  if (param_5 != 0) {
                    _sprintf(local_40c,"From: %s\r\n",param_5);
                    pcVar2 = local_40c;
                    do {
                      cVar1 = *pcVar2;
                      pcVar2 = pcVar2 + 1;
                    } while (cVar1 != '\0');
                    FUN_10055bf0(local_40c,(int)pcVar2 - (int)(local_40c + 1),local_550,local_54c);
                  }
                  if (param_6 != 0) {
                    _sprintf(local_40c,"To: %s\r\n",param_6);
                    pcVar2 = local_40c;
                    do {
                      cVar1 = *pcVar2;
                      pcVar2 = pcVar2 + 1;
                    } while (cVar1 != '\0');
                    FUN_10055bf0(local_40c,(int)pcVar2 - (int)(local_40c + 1),local_550,local_54c);
                  }
                  pcVar2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
                  pcVar9 = local_450;
                  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
                    pcVar2 = pcVar2 + 4;
                    pcVar9 = pcVar9 + 4;
                  }
                  *pcVar9 = *pcVar2;
                  if ((param_9 != (int *)0x0) && (param_9[1] != 0)) {
                    uVar7 = FUN_1002e2b0();
                    FUN_10043570(uVar7);
                    iVar4 = 0;
                    do {
                      uVar5 = FUN_100436c0();
                      local_490[iVar4] = local_450[uVar5 & 0x3f];
                      iVar4 = iVar4 + 1;
                    } while (iVar4 < 0x3c);
                    local_454 = 0;
                  }
                  _sprintf(local_40c,"MIME-version: 1.0\r\n");
                  pcVar2 = local_40c;
                  do {
                    cVar1 = *pcVar2;
                    pcVar2 = pcVar2 + 1;
                  } while (cVar1 != '\0');
                  FUN_10055bf0(local_40c,(int)pcVar2 - (int)(local_40c + 1),local_550,local_54c);
                  if ((param_9 != (int *)0x0) && (param_9[1] != 0)) {
                    _sprintf(local_40c,"Content-type: multipart/mixed; BOUNDARY=\"%s\"\r\n\r\n",
                             local_490);
                    pcVar2 = local_40c;
                    do {
                      cVar1 = *pcVar2;
                      pcVar2 = pcVar2 + 1;
                    } while (cVar1 != '\0');
                    FUN_10055bf0(local_40c,(int)pcVar2 - (int)(local_40c + 1),local_550,local_54c);
                    _sprintf(local_40c,
                             "This is a multi-part message in MIME format.\r\n\r\n--%s\r\n",
                             local_490);
                    pcVar2 = local_40c;
                    do {
                      cVar1 = *pcVar2;
                      pcVar2 = pcVar2 + 1;
                    } while (cVar1 != '\0');
                    FUN_10055bf0(local_40c,(int)pcVar2 - (int)(local_40c + 1),local_550,local_54c);
                  }
                  _sprintf(local_40c,"Content-Type: text/plain; charset=\"US-ASCII\"\r\n\r\n");
                  pcVar2 = local_40c;
                  do {
                    cVar1 = *pcVar2;
                    pcVar2 = pcVar2 + 1;
                  } while (cVar1 != '\0');
                  FUN_10055bf0(local_40c,(int)pcVar2 - (int)(local_40c + 1),local_550,local_54c);
                  pcVar2 = param_8;
                  do {
                    cVar1 = *pcVar2;
                    pcVar2 = pcVar2 + 1;
                  } while (cVar1 != '\0');
                  iVar4 = (int)pcVar2 - (int)(param_8 + 1);
                  local_548 = iVar4;
                  pcVar2 = operator_new(iVar4 * 3);
                  if (0 < iVar4) {
                    *pcVar2 = *param_8;
                  }
                  iVar8 = 1;
                  iVar6 = 1;
                  if (1 < iVar4) {
                    do {
                      if ((((iVar8 < local_548 + -2) && (param_8[iVar8 + -1] == '\n')) &&
                          (param_8[iVar8] == '.')) &&
                         ((param_8[iVar8 + 1] == '\r' && (param_8[iVar8 + 2] == '\n')))) {
LAB_1002a8c0:
                        builtin_strncpy(pcVar2 + iVar6,"..\r\n",4);
                        iVar6 = iVar6 + 4;
                        iVar8 = iVar8 + 2;
                      }
                      else if ((((local_548 + -3 < iVar8) ||
                                ((param_8[iVar8 + -1] != '\n' || (param_8[iVar8] != '.')))) ||
                               (param_8[iVar8 + 1] != '.')) ||
                              ((param_8[iVar8 + 2] != '\r' || (param_8[iVar8 + 3] != '\n')))) {
                        if ((iVar8 < local_548 + -1) &&
                           (((param_8[iVar8 + -1] == '\n' && (param_8[iVar8] == '.')) &&
                            (param_8[iVar8 + 1] == '\n')))) {
                          builtin_strncpy(pcVar2 + iVar6,"..\r\n",4);
                          iVar6 = iVar6 + 4;
                          iVar8 = iVar8 + 1;
                        }
                        else {
                          if ((((iVar8 <= local_548 + -2) && (param_8[iVar8 + -1] == '\n')) &&
                              (param_8[iVar8] == '.')) &&
                             ((param_8[iVar8 + 1] == '.' && (param_8[iVar8 + 2] == '\n')))) {
                            pcVar2[iVar6] = '.';
                            iVar6 = iVar6 + 1;
                            goto LAB_1002a8c0;
                          }
                          pcVar2[iVar6] = param_8[iVar8];
                          iVar6 = iVar6 + 1;
                        }
                      }
                      else {
                        builtin_strncpy(pcVar2 + iVar6,"...\r\n",5);
                        iVar6 = iVar6 + 5;
                        iVar8 = iVar8 + 3;
                      }
                      iVar8 = iVar8 + 1;
                    } while (iVar8 < local_548);
                  }
                  pcVar2[iVar6] = '\r';
                  pcVar2[iVar6 + 1] = '\n';
                  FUN_10055bf0(pcVar2,iVar6 + 2,local_550,local_54c);
                  _free(pcVar2);
                  if ((param_9 != (int *)0x0) && (param_9[1] != 0)) {
                    iVar4 = 0;
                    if (0 < param_9[1]) {
                      iVar6 = 0;
                      do {
                        _sprintf(local_40c,"\r\n--%s\r\n",local_490);
                        pcVar2 = local_40c;
                        do {
                          cVar1 = *pcVar2;
                          pcVar2 = pcVar2 + 1;
                        } while (cVar1 != '\0');
                        FUN_10055bf0(local_40c,(int)pcVar2 - (int)(local_40c + 1),local_550,
                                     local_54c);
                        uVar7 = *(undefined4 *)(iVar6 + *param_9);
                        _sprintf(local_40c,
                                 "Content-Type: APPLICATION/Octet-Stream; SizeOnDisk=%i; name=\"%s\"\r\nContent-Transfer-Encoding: BASE64\r\nContent-Description: %s\r\n\r\n"
                                 ,*(undefined4 *)(iVar6 + 8 + *param_9),uVar7,uVar7);
                        pcVar2 = local_40c;
                        do {
                          cVar1 = *pcVar2;
                          pcVar2 = pcVar2 + 1;
                        } while (cVar1 != '\0');
                        FUN_10055bf0(local_40c,(int)pcVar2 - (int)(local_40c + 1),local_550,
                                     local_54c);
                        _Memory = operator_new((uint)(*(int *)(iVar6 + 8 + *param_9) * 3) >> 1);
                        uVar7 = FUN_1002a070(*(undefined4 *)(*param_9 + iVar6 + 4),
                                             *(undefined4 *)(*param_9 + 8 + iVar6),_Memory,local_450
                                            );
                        FUN_10055bf0(_Memory,uVar7,local_550,local_54c);
                        _free(_Memory);
                        iVar4 = iVar4 + 1;
                        iVar6 = iVar6 + 0x11;
                      } while (iVar4 < param_9[1]);
                    }
                    _sprintf(local_40c,"\r\n--%s--\r\n",local_490);
                    pcVar2 = local_40c;
                    do {
                      cVar1 = *pcVar2;
                      pcVar2 = pcVar2 + 1;
                    } while (cVar1 != '\0');
                    FUN_10055bf0(local_40c,(int)pcVar2 - (int)(local_40c + 1),local_550,local_54c);
                  }
                  _sprintf(local_40c,"\r\n.\r\n");
                  pcVar2 = local_40c;
                  do {
                    cVar1 = *pcVar2;
                    pcVar2 = pcVar2 + 1;
                  } while (cVar1 != '\0');
                  FUN_10055bf0(local_40c,(int)pcVar2 - (int)(local_40c + 1),local_550,local_54c);
                  pcVar2 = (char *)FUN_10029f40(local_540,&local_550,param_10);
                  if (pcVar2 == (char *)0x0) {
                    FUN_10055bf0("QUIT\r\n",6,local_550,local_54c);
                    FUN_10043560(0x1e);
                    if ((char)param_10 != '\0') {
                      iVar4 = FUN_10055c60();
                      while (iVar4 != 0) {
                        _printf("%s",*(undefined4 *)(iVar4 + 0x10));
                        iVar4 = FUN_10055c60();
                      }
                    }
                    FUN_100559f0();
                    local_4 = 0xffffffff;
                    FUN_10055dc0();
                    ExceptionList = local_c;
                    return (char *)0x0;
                  }
                }
              }
            }
          }
          local_4 = 0xffffffff;
          FUN_10055dc0();
          ExceptionList = local_c;
          return pcVar2;
        }
      }
      local_4 = 0xffffffff;
      FUN_10055dc0();
      pcVar2 = "Timeout while waiting for initial data from server.";
    }
    else {
      local_4 = 0xffffffff;
      FUN_10055dc0();
      pcVar2 = "Failed to connect to host";
    }
  }
  ExceptionList = local_c;
  return pcVar2;
}


/* END FUNCTION 0x1002a2a0 */

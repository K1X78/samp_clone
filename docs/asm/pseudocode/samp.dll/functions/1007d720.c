/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007d720
 * Name: FUN_1007d720
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1007d720(void)

{
  char *_Str1;
  float fVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  undefined4 uVar9;
  float fVar10;
  char *local_108;
  float local_104;
  char local_100 [256];
  
  local_108 = GetCommandLineA();
  cVar2 = *local_108;
  if (cVar2 == '\"') {
    cVar2 = local_108[1];
    while (local_108 = local_108 + 1, cVar2 != '\0') {
      if (cVar2 == '\"') {
        local_108 = local_108 + 1;
        goto LAB_1007d783;
      }
      cVar2 = local_108[1];
    }
    if (*local_108 == '\"') {
      local_108 = local_108 + 1;
    }
  }
  else {
    while (' ' < cVar2) {
      pcVar3 = local_108 + 1;
      local_108 = local_108 + 1;
      cVar2 = *pcVar3;
    }
  }
LAB_1007d783:
  do {
    cVar2 = *local_108;
    while( true ) {
      if (cVar2 == '\0') {
        return;
      }
      if (' ' < cVar2) break;
      cVar2 = local_108[1];
      local_108 = local_108 + 1;
    }
    cVar2 = *local_108;
    if (cVar2 == '\0') {
      return;
    }
    if ((cVar2 == '/') || (cVar2 == '-')) {
      local_108 = local_108 + 1;
    }
    _Str1 = local_108;
    pcVar3 = local_100;
    iVar7 = 0x100;
    iVar6 = (int)"adapter" - (int)pcVar3;
    do {
      if (pcVar3[iVar6] == '\0') {
        if (iVar7 != 0) goto LAB_1007d7e4;
        break;
      }
      *pcVar3 = pcVar3[iVar6];
      pcVar3 = pcVar3 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    pcVar3 = pcVar3 + -1;
LAB_1007d7e4:
    *pcVar3 = '\0';
    pcVar3 = local_100;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    iVar6 = __strnicmp(local_108,local_100,(int)pcVar3 - (int)(local_100 + 1));
    pcVar5 = local_100;
    if (iVar6 == 0) {
      cVar2 = FUN_1007bd20(&local_108,pcVar5,(int)pcVar3 - (int)(local_100 + 1));
      if (cVar2 != '\0') {
        lVar4 = _atol(local_100);
        FUN_1007cbc0(lVar4);
        FUN_1007a080(lVar4);
      }
      goto LAB_1007d783;
    }
    iVar6 = 0x100;
    do {
      if (pcVar5[(int)"windowed" - (int)local_100] == '\0') {
        if (iVar6 != 0) goto LAB_1007d86c;
        break;
      }
      *pcVar5 = pcVar5[(int)"windowed" - (int)local_100];
      pcVar5 = pcVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    pcVar5 = pcVar5 + -1;
LAB_1007d86c:
    *pcVar5 = '\0';
    pcVar3 = local_100;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    iVar6 = __strnicmp(_Str1,local_100,(int)pcVar3 - (int)(local_100 + 1));
    if (iVar6 == 0) {
      uVar9 = 1;
      FUN_1007cbc0(1);
      FUN_1007a100(uVar9);
      local_108 = _Str1 + ((int)pcVar3 - (int)(local_100 + 1));
    }
    else {
      pcVar3 = local_100;
      iVar7 = 0x100;
      iVar6 = (int)"fullscreen" - (int)pcVar3;
      do {
        if (pcVar3[iVar6] == '\0') {
          if (iVar7 != 0) goto LAB_1007d8d4;
          break;
        }
        *pcVar3 = pcVar3[iVar6];
        pcVar3 = pcVar3 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      pcVar3 = pcVar3 + -1;
LAB_1007d8d4:
      *pcVar3 = '\0';
      pcVar3 = local_100;
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      iVar6 = __strnicmp(_Str1,local_100,(int)pcVar3 - (int)(local_100 + 1));
      if (iVar6 == 0) {
        uVar9 = 1;
        FUN_1007cbc0(1);
        FUN_1007a180(uVar9);
        local_108 = _Str1 + ((int)pcVar3 - (int)(local_100 + 1));
      }
      else {
        pcVar3 = local_100;
        iVar7 = 0x100;
        iVar6 = (int)"forcehal" - (int)pcVar3;
        do {
          if (pcVar3[iVar6] == '\0') {
            if (iVar7 != 0) goto LAB_1007d944;
            break;
          }
          *pcVar3 = pcVar3[iVar6];
          pcVar3 = pcVar3 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        pcVar3 = pcVar3 + -1;
LAB_1007d944:
        *pcVar3 = '\0';
        pcVar3 = local_100;
        do {
          cVar2 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar2 != '\0');
        iVar6 = __strnicmp(_Str1,local_100,(int)pcVar3 - (int)(local_100 + 1));
        if (iVar6 == 0) {
          uVar9 = 1;
          FUN_1007cbc0(1);
          FUN_1007a400(uVar9);
          local_108 = _Str1 + ((int)pcVar3 - (int)(local_100 + 1));
        }
        else {
          pcVar3 = local_100;
          iVar7 = 0x100;
          iVar6 = (int)"forceref" - (int)pcVar3;
          do {
            if (pcVar3[iVar6] == '\0') {
              if (iVar7 != 0) goto LAB_1007d9b4;
              break;
            }
            *pcVar3 = pcVar3[iVar6];
            pcVar3 = pcVar3 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          pcVar3 = pcVar3 + -1;
LAB_1007d9b4:
          *pcVar3 = '\0';
          pcVar3 = local_100;
          do {
            cVar2 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar2 != '\0');
          iVar6 = __strnicmp(_Str1,local_100,(int)pcVar3 - (int)(local_100 + 1));
          if (iVar6 == 0) {
            uVar9 = 1;
            FUN_1007cbc0(1);
            FUN_1007a480(uVar9);
            local_108 = _Str1 + ((int)pcVar3 - (int)(local_100 + 1));
          }
          else {
            pcVar3 = local_100;
            iVar7 = 0x100;
            iVar6 = (int)"forcepurehwvp" - (int)pcVar3;
            do {
              if (pcVar3[iVar6] == '\0') {
                if (iVar7 != 0) goto LAB_1007da24;
                break;
              }
              *pcVar3 = pcVar3[iVar6];
              pcVar3 = pcVar3 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            pcVar3 = pcVar3 + -1;
LAB_1007da24:
            *pcVar3 = '\0';
            pcVar3 = local_100;
            do {
              cVar2 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar2 != '\0');
            iVar6 = __strnicmp(_Str1,local_100,(int)pcVar3 - (int)(local_100 + 1));
            if (iVar6 == 0) {
              uVar9 = 1;
              FUN_1007cbc0(1);
              FUN_1007a500(uVar9);
              local_108 = _Str1 + ((int)pcVar3 - (int)(local_100 + 1));
            }
            else {
              pcVar3 = local_100;
              iVar7 = 0x100;
              iVar6 = (int)"forcehwvp" - (int)pcVar3;
              do {
                if (pcVar3[iVar6] == '\0') {
                  if (iVar7 != 0) goto LAB_1007da94;
                  break;
                }
                *pcVar3 = pcVar3[iVar6];
                pcVar3 = pcVar3 + 1;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
              pcVar3 = pcVar3 + -1;
LAB_1007da94:
              *pcVar3 = '\0';
              pcVar3 = local_100;
              do {
                cVar2 = *pcVar3;
                pcVar3 = pcVar3 + 1;
              } while (cVar2 != '\0');
              iVar6 = __strnicmp(_Str1,local_100,(int)pcVar3 - (int)(local_100 + 1));
              if (iVar6 == 0) {
                uVar9 = 1;
                FUN_1007cbc0(1);
                FUN_1007a580(uVar9);
                local_108 = _Str1 + ((int)pcVar3 - (int)(local_100 + 1));
              }
              else {
                pcVar3 = local_100;
                iVar7 = 0x100;
                iVar6 = (int)"forceswvp" - (int)pcVar3;
                do {
                  if (pcVar3[iVar6] == '\0') {
                    if (iVar7 != 0) goto LAB_1007db04;
                    break;
                  }
                  *pcVar3 = pcVar3[iVar6];
                  pcVar3 = pcVar3 + 1;
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
                pcVar3 = pcVar3 + -1;
LAB_1007db04:
                *pcVar3 = '\0';
                pcVar3 = local_100;
                do {
                  cVar2 = *pcVar3;
                  pcVar3 = pcVar3 + 1;
                } while (cVar2 != '\0');
                iVar6 = __strnicmp(_Str1,local_100,(int)pcVar3 - (int)(local_100 + 1));
                if (iVar6 == 0) {
                  uVar9 = 1;
                  FUN_1007cbc0(1);
                  FUN_1007a600(uVar9);
                  local_108 = _Str1 + ((int)pcVar3 - (int)(local_100 + 1));
                }
                else {
                  pcVar3 = local_100;
                  iVar7 = 0x100;
                  iVar6 = (int)"width" - (int)pcVar3;
                  do {
                    if (pcVar3[iVar6] == '\0') {
                      if (iVar7 != 0) goto LAB_1007db74;
                      break;
                    }
                    *pcVar3 = pcVar3[iVar6];
                    pcVar3 = pcVar3 + 1;
                    iVar7 = iVar7 + -1;
                  } while (iVar7 != 0);
                  pcVar3 = pcVar3 + -1;
LAB_1007db74:
                  *pcVar3 = '\0';
                  pcVar3 = local_100;
                  do {
                    cVar2 = *pcVar3;
                    pcVar3 = pcVar3 + 1;
                  } while (cVar2 != '\0');
                  iVar6 = __strnicmp(_Str1,local_100,(int)pcVar3 - (int)(local_100 + 1));
                  pcVar5 = local_100;
                  if (iVar6 == 0) {
                    cVar2 = FUN_1007bd20(&local_108,pcVar5,(int)pcVar3 - (int)(local_100 + 1));
                    if (cVar2 != '\0') {
                      lVar4 = _atol(local_100);
                      FUN_1007cbc0(lVar4);
                      FUN_1007a300(lVar4);
                    }
                  }
                  else {
                    iVar6 = 0x100;
                    do {
                      if (pcVar5[(int)"height" - (int)local_100] == '\0') {
                        if (iVar6 != 0) goto LAB_1007dbfc;
                        break;
                      }
                      *pcVar5 = pcVar5[(int)"height" - (int)local_100];
                      pcVar5 = pcVar5 + 1;
                      iVar6 = iVar6 + -1;
                    } while (iVar6 != 0);
                    pcVar5 = pcVar5 + -1;
LAB_1007dbfc:
                    *pcVar5 = '\0';
                    pcVar3 = local_100;
                    do {
                      cVar2 = *pcVar3;
                      pcVar3 = pcVar3 + 1;
                    } while (cVar2 != '\0');
                    iVar6 = __strnicmp(_Str1,local_100,(int)pcVar3 - (int)(local_100 + 1));
                    pcVar5 = local_100;
                    if (iVar6 == 0) {
                      cVar2 = FUN_1007bd20(&local_108,pcVar5,(int)pcVar3 - (int)(local_100 + 1));
                      if (cVar2 != '\0') {
                        lVar4 = _atol(local_100);
                        FUN_1007cbc0(lVar4);
                        FUN_1007a380(lVar4);
                      }
                    }
                    else {
                      iVar6 = 0x100;
                      do {
                        if (pcVar5[(int)"startx" - (int)local_100] == '\0') {
                          if (iVar6 != 0) goto LAB_1007dc84;
                          break;
                        }
                        *pcVar5 = pcVar5[(int)"startx" - (int)local_100];
                        pcVar5 = pcVar5 + 1;
                        iVar6 = iVar6 + -1;
                      } while (iVar6 != 0);
                      pcVar5 = pcVar5 + -1;
LAB_1007dc84:
                      *pcVar5 = '\0';
                      pcVar3 = local_100;
                      do {
                        cVar2 = *pcVar3;
                        pcVar3 = pcVar3 + 1;
                      } while (cVar2 != '\0');
                      iVar6 = __strnicmp(_Str1,local_100,(int)pcVar3 - (int)(local_100 + 1));
                      pcVar5 = local_100;
                      if (iVar6 == 0) {
                        cVar2 = FUN_1007bd20(&local_108,pcVar5,(int)pcVar3 - (int)(local_100 + 1));
                        if (cVar2 != '\0') {
                          lVar4 = _atol(local_100);
                          FUN_1007cbc0(lVar4);
                          FUN_1007a200(lVar4);
                        }
                      }
                      else {
                        iVar6 = 0x100;
                        do {
                          if (pcVar5[(int)"starty" - (int)local_100] == '\0') {
                            if (iVar6 != 0) goto LAB_1007dd0c;
                            break;
                          }
                          *pcVar5 = pcVar5[(int)"starty" - (int)local_100];
                          pcVar5 = pcVar5 + 1;
                          iVar6 = iVar6 + -1;
                        } while (iVar6 != 0);
                        pcVar5 = pcVar5 + -1;
LAB_1007dd0c:
                        *pcVar5 = '\0';
                        pcVar3 = local_100;
                        do {
                          cVar2 = *pcVar3;
                          pcVar3 = pcVar3 + 1;
                        } while (cVar2 != '\0');
                        iVar6 = __strnicmp(_Str1,local_100,(int)pcVar3 - (int)(local_100 + 1));
                        pcVar5 = local_100;
                        if (iVar6 == 0) {
                          cVar2 = FUN_1007bd20(&local_108,pcVar5,(int)pcVar3 - (int)(local_100 + 1))
                          ;
                          if (cVar2 != '\0') {
                            lVar4 = _atol(local_100);
                            FUN_1007cbc0(lVar4);
                            FUN_1007a280(lVar4);
                          }
                        }
                        else {
                          iVar6 = 0x100;
                          do {
                            if (pcVar5[(int)"constantframetime" - (int)local_100] == '\0') {
                              if (iVar6 != 0) goto LAB_1007dd94;
                              break;
                            }
                            *pcVar5 = pcVar5[(int)"constantframetime" - (int)local_100];
                            pcVar5 = pcVar5 + 1;
                            iVar6 = iVar6 + -1;
                          } while (iVar6 != 0);
                          pcVar5 = pcVar5 + -1;
LAB_1007dd94:
                          *pcVar5 = '\0';
                          pcVar3 = local_100;
                          do {
                            cVar2 = *pcVar3;
                            pcVar3 = pcVar3 + 1;
                          } while (cVar2 != '\0');
                          iVar6 = __strnicmp(_Str1,local_100,(int)pcVar3 - (int)(local_100 + 1));
                          pcVar5 = local_100;
                          if (iVar6 == 0) {
                            cVar2 = FUN_1007bd20(&local_108,pcVar5,
                                                 (int)pcVar3 - (int)(local_100 + 1));
                            if (cVar2 == '\0') {
                              local_104 = 0.0333;
                            }
                            else {
                              dVar8 = _strtod(local_100,(char **)0x0);
                              local_104 = (float)dVar8;
                            }
                            uVar9 = 1;
                            FUN_1007cbc0(1);
                            FUN_1007a680(uVar9);
                            fVar1 = local_104;
                            fVar10 = local_104;
                            FUN_1007cbc0(local_104);
                            FUN_1007a700(fVar10);
                            FUN_1007d580(1,fVar1);
                          }
                          else {
                            iVar6 = 0x100;
                            do {
                              if (pcVar5[(int)"quitafterframe" - (int)local_100] == '\0') {
                                if (iVar6 != 0) goto LAB_1007de45;
                                break;
                              }
                              *pcVar5 = pcVar5[(int)"quitafterframe" - (int)local_100];
                              pcVar5 = pcVar5 + 1;
                              iVar6 = iVar6 + -1;
                            } while (iVar6 != 0);
                            pcVar5 = pcVar5 + -1;
LAB_1007de45:
                            *pcVar5 = '\0';
                            pcVar3 = local_100;
                            do {
                              cVar2 = *pcVar3;
                              pcVar3 = pcVar3 + 1;
                            } while (cVar2 != '\0');
                            iVar6 = __strnicmp(_Str1,local_100,(int)pcVar3 - (int)(local_100 + 1));
                            pcVar5 = local_100;
                            if (iVar6 == 0) {
                              cVar2 = FUN_1007bd20(&local_108,pcVar5,
                                                   (int)pcVar3 - (int)(local_100 + 1));
                              if (cVar2 != '\0') {
                                lVar4 = _atol(local_100);
                                FUN_1007cbc0(lVar4);
                                FUN_1007a780(lVar4);
                              }
                            }
                            else {
                              iVar6 = 0x100;
                              do {
                                if (pcVar5[(int)"noerrormsgboxes" - (int)local_100] == '\0') {
                                  if (iVar6 != 0) goto LAB_1007decc;
                                  break;
                                }
                                *pcVar5 = pcVar5[(int)"noerrormsgboxes" - (int)local_100];
                                pcVar5 = pcVar5 + 1;
                                iVar6 = iVar6 + -1;
                              } while (iVar6 != 0);
                              pcVar5 = pcVar5 + -1;
LAB_1007decc:
                              *pcVar5 = '\0';
                              pcVar3 = local_100;
                              do {
                                cVar2 = *pcVar3;
                                pcVar3 = pcVar3 + 1;
                              } while (cVar2 != '\0');
                              iVar6 = __strnicmp(_Str1,local_100,(int)pcVar3 - (int)(local_100 + 1))
                              ;
                              if (iVar6 == 0) {
                                FUN_1007cbc0(0);
                                FUN_10079300(iVar6);
                                local_108 = _Str1 + ((int)pcVar3 - (int)(local_100 + 1));
                              }
                              else {
                                pcVar3 = local_100;
                                iVar7 = 0x100;
                                iVar6 = (int)"automation" - (int)pcVar3;
                                do {
                                  if (pcVar3[iVar6] == '\0') {
                                    if (iVar7 != 0) goto LAB_1007df34;
                                    break;
                                  }
                                  *pcVar3 = pcVar3[iVar6];
                                  pcVar3 = pcVar3 + 1;
                                  iVar7 = iVar7 + -1;
                                } while (iVar7 != 0);
                                pcVar3 = pcVar3 + -1;
LAB_1007df34:
                                *pcVar3 = '\0';
                                pcVar3 = local_100;
                                do {
                                  cVar2 = *pcVar3;
                                  pcVar3 = pcVar3 + 1;
                                } while (cVar2 != '\0');
                                iVar6 = __strnicmp(_Str1,local_100,
                                                   (int)pcVar3 - (int)(local_100 + 1));
                                if (iVar6 == 0) {
                                  uVar9 = 1;
                                  FUN_1007cbc0(1);
                                  FUN_10079f80(uVar9);
                                  local_108 = _Str1 + ((int)pcVar3 - (int)(local_100 + 1));
                                }
                                else {
                                  pcVar3 = local_100;
                                  iVar7 = 0x100;
                                  iVar6 = (int)_Str1 - (int)pcVar3;
                                  do {
                                    if (pcVar3[iVar6] == '\0') {
                                      if (iVar7 != 0) goto LAB_1007df9a;
                                      break;
                                    }
                                    *pcVar3 = pcVar3[iVar6];
                                    pcVar3 = pcVar3 + 1;
                                    iVar7 = iVar7 + -1;
                                  } while (iVar7 != 0);
                                  pcVar3 = pcVar3 + -1;
LAB_1007df9a:
                                  *pcVar3 = '\0';
                                  cVar2 = local_100[0];
                                  for (pcVar3 = local_100; (cVar2 != '\0' && (' ' < *pcVar3));
                                      pcVar3 = pcVar3 + 1) {
                                    cVar2 = pcVar3[1];
                                  }
                                  *pcVar3 = '\0';
                                  FUN_100950e0("Unrecognized flag: %s",local_100);
                                  pcVar3 = local_100;
                                  do {
                                    cVar2 = *pcVar3;
                                    pcVar3 = pcVar3 + 1;
                                  } while (cVar2 != '\0');
                                  local_108 = _Str1 + ((int)pcVar3 - (int)(local_100 + 1));
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  } while( true );
}


/* END FUNCTION 0x1007d720 */

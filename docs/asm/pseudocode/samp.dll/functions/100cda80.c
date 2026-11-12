/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cda80
 * Name: FUN_100cda80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100cda80(int param_1,uint param_2,DWORD param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint local_324;
  DWORD local_320;
  int local_314;
  int local_310;
  fd_set local_30c;
  fd_set local_208;
  fd_set local_104;
  
  uVar9 = 0;
  uVar12 = 0;
  local_320 = 0;
  if ((param_1 != 0) && (uVar3 = 0, param_2 != 0)) {
    do {
      if (*(int *)(param_1 + uVar3 * 8) != -1) {
        if (0 < (int)param_3) {
          local_320 = param_3;
          uVar12 = FUN_100d8500();
        }
        uVar7 = 0;
        local_208.fd_count = 0;
        local_30c.fd_count = 0;
        local_104.fd_count = 0;
        local_324 = 0xffffffff;
        uVar8 = 0;
        uVar11 = 0;
        uVar3 = 0xffffffff;
        do {
          uVar2 = *(uint *)(param_1 + uVar8 * 8);
          *(undefined2 *)(param_1 + 6 + uVar8 * 8) = 0;
          uVar4 = uVar3;
          if ((uVar2 != 0xffffffff) &&
             (uVar1 = *(ushort *)(param_1 + 4 + uVar8 * 8), uVar4 = local_324, (uVar1 & 7) != 0)) {
            if (uVar3 < uVar2) {
              local_324 = uVar2;
            }
            if ((uVar1 & 1) != 0) {
              uVar3 = 0;
              if (uVar7 != 0) {
                do {
                  if (local_208.fd_array[uVar3] == uVar2) break;
                  uVar3 = uVar3 + 1;
                } while (uVar3 < uVar7);
              }
              if ((uVar3 == uVar7) && (uVar7 < 0x40)) {
                local_208.fd_array[uVar3] = uVar2;
                uVar7 = local_208.fd_count + 1;
                local_208.fd_count = uVar7;
              }
            }
            if ((uVar1 & 4) != 0) {
              uVar3 = 0;
              if (uVar9 != 0) {
                do {
                  if (local_30c.fd_array[uVar3] == uVar2) break;
                  uVar3 = uVar3 + 1;
                } while (uVar3 < uVar9);
              }
              if ((uVar3 == uVar9) && (uVar9 < 0x40)) {
                local_30c.fd_array[uVar3] = uVar2;
                uVar9 = local_30c.fd_count + 1;
                local_30c.fd_count = uVar9;
              }
            }
            uVar4 = local_324;
            if ((uVar1 & 2) != 0) {
              uVar3 = 0;
              if (uVar11 != 0) {
                do {
                  if (local_104.fd_array[uVar3] == uVar2) break;
                  uVar3 = uVar3 + 1;
                } while (uVar3 < uVar11);
              }
              if ((uVar3 == uVar11) && (uVar11 < 0x40)) {
                local_104.fd_array[uVar3] = uVar2;
                uVar11 = local_104.fd_count + 1;
                local_104.fd_count = uVar11;
              }
            }
          }
          uVar8 = uVar8 + 1;
          uVar3 = uVar4;
          if (param_2 <= uVar8) {
            if (((uVar7 == 0) && (uVar9 == 0)) && (uVar11 == 0)) {
              if (param_3 != 0) {
                if ((int)param_3 < 0) {
                  WSASetLastError(0x2726);
                  return -1;
                }
                Sleep(param_3);
              }
            }
            else {
              do {
                do {
                  if ((int)param_3 < 1) {
                    if (param_3 == 0) {
                      local_310 = 0;
                      local_314 = 0;
                    }
                  }
                  else {
                    local_310 = ((int)local_320 % 1000) * 1000;
                    local_314 = (int)local_320 / 1000;
                  }
                  iVar5 = select(uVar4 + 1,(fd_set *)(-(uint)(uVar7 != 0) & (uint)&local_208),
                                 (fd_set *)(-(uint)(uVar9 != 0) & (uint)&local_30c),
                                 (fd_set *)(-(uint)(uVar11 != 0) & (uint)&local_104),
                                 (timeval *)(((int)param_3 < 0) - 1 & (uint)&local_314));
                  if ((iVar5 != -1) ||
                     ((iVar6 = WSAGetLastError(), iVar6 != 0 &&
                      ((DAT_102acc08 != 0 || (iVar6 != 0x2714)))))) {
                    if (iVar5 < 0) {
                      return -1;
                    }
                    if (iVar5 == 0) {
                      return 0;
                    }
                    iVar5 = 0;
                    pbVar10 = (byte *)(param_1 + 6);
                    do {
                      pbVar10[0] = 0;
                      pbVar10[1] = 0;
                      if (*(SOCKET *)(pbVar10 + -6) != 0xffffffff) {
                        iVar6 = __WSAFDIsSet(*(SOCKET *)(pbVar10 + -6),&local_208);
                        if (iVar6 != 0) {
                          *pbVar10 = *pbVar10 | 1;
                        }
                        iVar6 = __WSAFDIsSet(*(SOCKET *)(pbVar10 + -6),&local_30c);
                        if (iVar6 != 0) {
                          *pbVar10 = *pbVar10 | 4;
                        }
                        iVar6 = __WSAFDIsSet(*(SOCKET *)(pbVar10 + -6),&local_104);
                        if (iVar6 != 0) {
                          *pbVar10 = *pbVar10 | 2;
                        }
                        if (*(short *)pbVar10 != 0) {
                          iVar5 = iVar5 + 1;
                        }
                      }
                      pbVar10 = pbVar10 + 8;
                      param_2 = param_2 - 1;
                    } while (param_2 != 0);
                    return iVar5;
                  }
                  uVar7 = local_208.fd_count;
                  uVar9 = local_30c.fd_count;
                  uVar11 = local_104.fd_count;
                } while ((int)param_3 < 1);
                uVar13 = FUN_100d8500(uVar12);
                iVar5 = FUN_100d8520(uVar13);
                local_320 = param_3 - iVar5;
                uVar7 = local_208.fd_count;
                uVar9 = local_30c.fd_count;
                uVar11 = local_104.fd_count;
              } while (0 < (int)local_320);
            }
            return 0;
          }
        } while( true );
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  if (param_3 != 0) {
    if ((int)param_3 < 0) {
      WSASetLastError(0x2726);
      return -1;
    }
    Sleep(param_3);
  }
  return 0;
}


/* END FUNCTION 0x100cda80 */

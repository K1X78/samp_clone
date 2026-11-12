/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cd750
 * Name: FUN_100cd750
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100cd750(SOCKET param_1,uint param_2,uint param_3,DWORD param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  u_int uVar4;
  int iVar5;
  DWORD DVar6;
  u_int uVar7;
  uint uVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  DWORD local_320;
  int local_314;
  int local_310;
  fd_set local_30c;
  fd_set local_208;
  fd_set local_104;
  
  uVar10 = 0;
  local_320 = 0;
  if (((param_1 == 0xffffffff) && (param_2 == 0xffffffff)) && (param_3 == 0xffffffff)) {
    if (param_4 != 0) {
      if ((int)param_4 < 0) {
        WSASetLastError(0x2726);
        return 0xffffffff;
      }
      Sleep(param_4);
    }
  }
  else {
    if (0 < (int)param_4) {
      local_320 = param_4;
      uVar10 = FUN_100d8500();
    }
    bVar9 = param_1 != 0xffffffff;
    local_208.fd_count = 0;
    uVar8 = 0xffffffff;
    if (bVar9) {
      local_208.fd_array[0] = param_1;
      local_208.fd_count = 1;
      local_30c.fd_array[0] = param_1;
      uVar8 = param_1;
    }
    local_208.fd_count = (u_int)bVar9;
    local_30c.fd_count = (u_int)bVar9;
    uVar7 = (u_int)bVar9;
    uVar2 = (uint)bVar9;
    if (param_2 != 0xffffffff) {
      uVar1 = 0;
      if (uVar7 != 0) {
        do {
          if (local_208.fd_array[uVar1] == param_2) break;
          uVar1 = uVar1 + 1;
        } while (uVar1 < uVar7);
      }
      if ((uVar1 == uVar7) && (uVar7 < 0x40)) {
        local_208.fd_array[uVar1] = param_2;
        local_208.fd_count = local_208.fd_count + 1;
      }
      uVar7 = local_208.fd_count;
      uVar1 = 0;
      if (uVar2 != 0) {
        do {
          if (local_30c.fd_array[uVar1] == param_2) break;
          uVar1 = uVar1 + 1;
        } while (uVar1 < uVar2);
      }
      if ((uVar1 == uVar2) && (uVar2 < 0x40)) {
        local_30c.fd_array[uVar1] = param_2;
        local_30c.fd_count = local_30c.fd_count + 1;
      }
      if (uVar8 < param_2) {
        uVar8 = param_2;
      }
    }
    uVar4 = 0;
    local_104.fd_count = 0;
    if (param_3 != 0xffffffff) {
      uVar4 = 1;
      uVar2 = 0;
      local_104.fd_array[0] = param_3;
      local_104.fd_count = 1;
      if (local_30c.fd_count != 0) {
        do {
          if (local_30c.fd_array[uVar2] == param_3) break;
          uVar2 = uVar2 + 1;
        } while (uVar2 < local_30c.fd_count);
      }
      if ((uVar2 == local_30c.fd_count) && (local_30c.fd_count < 0x40)) {
        local_30c.fd_array[uVar2] = param_3;
        local_30c.fd_count = local_30c.fd_count + 1;
      }
      if (uVar8 < param_3) {
        uVar8 = param_3;
      }
    }
    DVar6 = local_320;
    do {
      do {
        if ((int)param_4 < 1) {
          if (param_4 == 0) {
            local_314 = 0;
            local_310 = 0;
          }
        }
        else {
          local_314 = (int)DVar6 / 1000;
          iVar5 = (int)DVar6 % 1000;
          DVar6 = local_320;
          local_310 = iVar5 * 1000;
        }
        iVar5 = select(uVar8 + 1,(fd_set *)(-(uint)(uVar7 != 0) & (uint)&local_208),
                       (fd_set *)(-(uint)(uVar4 != 0) & (uint)&local_104),&local_30c,
                       (timeval *)(((int)param_4 < 0) - 1 & (uint)&local_314));
        if ((iVar5 != -1) ||
           ((iVar3 = WSAGetLastError(), iVar3 != 0 && ((DAT_102acc08 != 0 || (iVar3 != 0x2714))))))
        {
          if (iVar5 < 0) {
            return 0xffffffff;
          }
          if (iVar5 == 0) {
            return 0;
          }
          uVar8 = 0;
          if (param_1 != 0xffffffff) {
            iVar5 = __WSAFDIsSet(param_1,&local_208);
            uVar8 = (uint)(iVar5 != 0);
            iVar5 = __WSAFDIsSet(param_1,&local_30c);
            if (iVar5 != 0) {
              uVar8 = uVar8 | 4;
            }
          }
          if (param_2 != 0xffffffff) {
            iVar5 = __WSAFDIsSet(param_2,&local_208);
            if (iVar5 != 0) {
              uVar8 = uVar8 | 8;
            }
            iVar5 = __WSAFDIsSet(param_2,&local_30c);
            if (iVar5 != 0) {
              uVar8 = uVar8 | 4;
            }
          }
          if (param_3 != 0xffffffff) {
            iVar5 = __WSAFDIsSet(param_3,&local_104);
            if (iVar5 != 0) {
              uVar8 = uVar8 | 2;
            }
            iVar5 = __WSAFDIsSet(param_3,&local_30c);
            if (iVar5 != 0) {
              uVar8 = uVar8 | 4;
            }
          }
          return uVar8;
        }
        uVar4 = local_104.fd_count;
        uVar7 = local_208.fd_count;
      } while ((int)param_4 < 1);
      uVar11 = FUN_100d8500(uVar10);
      iVar5 = FUN_100d8520(uVar11);
      DVar6 = param_4 - iVar5;
      uVar4 = local_104.fd_count;
      uVar7 = local_208.fd_count;
      local_320 = DVar6;
    } while (0 < (int)DVar6);
  }
  return 0;
}


/* END FUNCTION 0x100cd750 */

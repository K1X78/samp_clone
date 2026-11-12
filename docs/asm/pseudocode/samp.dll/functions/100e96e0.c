/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e96e0
 * Name: FUN_100e96e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100e96e0(char *param_1,char *param_2,char *param_3,undefined4 param_4,int param_5,
                int *param_6)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int local_2bc;
  uint local_2b8;
  int *local_2b4;
  int local_2b0;
  int local_2ac;
  int local_2a8;
  undefined4 local_2a4;
  char local_2a0 [2];
  undefined1 local_29e [4];
  undefined1 local_29a;
  undefined1 local_299;
  undefined1 local_298;
  undefined1 local_297;
  undefined1 local_296;
  undefined1 local_295;
  undefined1 local_294;
  undefined1 local_293;
  undefined1 local_292;
  undefined1 local_291;
  undefined1 local_290;
  undefined1 local_28f;
  undefined1 local_28e;
  undefined1 local_28d;
  undefined1 local_28c;
  undefined1 local_28b;
  undefined1 local_48 [68];
  
  iVar7 = param_6[param_5 + 0x66];
  iVar3 = *param_6;
  local_2b4 = (int *)(uint)(param_6[0x34] == 5);
  pcVar4 = param_3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  local_2b8 = *(uint *)(iVar3 + 0x174);
  local_2a4 = (int)pcVar4 - (int)(param_3 + 1);
  local_2a8 = 0;
  local_2b0 = iVar7;
  if (param_6[0xa6] != 0) {
    FUN_100d8ae0(iVar3,"SOCKS5: connecting to HTTP proxy %s port %d\n",param_3,param_4);
  }
  if ((local_2b4 == (int *)0x0) && (0xff < local_2a4)) {
    FUN_100d8ae0(*param_6,
                 "SOCKS5: server resolving disabled for hostnames of length > 255 [actual len=%zu]\n"
                 ,local_2a4);
    local_2b4 = (int *)0x1;
  }
  local_2bc = FUN_100db5d0(iVar3,0,1);
  if (local_2bc < 0) {
    FUN_100d8ba0(iVar3,"Connection time-out");
    return 0x1c;
  }
  FUN_100ef040(iVar7,1);
  uVar5 = FUN_100cd750(0xffffffff,0xffffffff,iVar7,local_2bc);
  if (uVar5 == 0xffffffff) {
    FUN_100d8ba0(*param_6,"SOCKS5: no connection here");
    return 7;
  }
  if (uVar5 == 0) {
    FUN_100d8ba0(*param_6,"SOCKS5: connection timeout");
    return 0x1c;
  }
  if ((uVar5 & 4) != 0) {
    FUN_100d8ba0(*param_6,"SOCKS5: error occurred during connection");
    return 7;
  }
  if ((local_2b8 & 0xfffffffa) != 0) {
    FUN_100d8ae0(*param_6,"warning: unsupported value passed to CURLOPT_SOCKS5_AUTH: %lu\n",
                 local_2b8);
  }
  if ((local_2b8 & 1) == 0) {
    param_1 = (char *)0x0;
  }
  if ((local_2b8 & 4) != 0) {
    local_2a8 = 1;
  }
  local_2a0[0] = '\x05';
  local_29e[0] = '\0';
  iVar6 = 3;
  if (local_2a8 != 0) {
    local_29e[1] = '\x01';
    iVar6 = 4;
  }
  if (param_1 != (char *)0x0) {
    local_2a0[iVar6] = '\x02';
    iVar6 = iVar6 + 1;
  }
  local_2a0[1] = (char)iVar6 - 2;
  FUN_100ef040(iVar7,0);
  FUN_100d8ae0(iVar3,"SOCKS5 communication to %s:%d\n",param_3,param_4);
  local_2b8 = FUN_100d9150(param_6,iVar7,local_2a0,(byte)local_2a0[1] + 2,&local_2ac);
  if ((local_2b8 == 0) && (local_2ac == (byte)local_2a0[1] + 2)) {
    FUN_100ef040(iVar7,1);
    uVar5 = FUN_100cd750(iVar7,0xffffffff,0xffffffff,local_2bc);
    if (uVar5 == 0xffffffff) {
      FUN_100d8ba0(*param_6,"SOCKS5 nothing to read");
      return 7;
    }
    if (uVar5 == 0) {
      FUN_100d8ba0(*param_6,"SOCKS5 read timeout");
      return 0x1c;
    }
    if ((uVar5 & 4) != 0) {
      FUN_100d8ba0(*param_6,"SOCKS5 read error occurred");
      return 0x38;
    }
    FUN_100ef040(iVar7,0);
    iVar7 = FUN_100e9120(param_6,iVar7,local_2a0,2,&local_2bc);
    if ((iVar7 == 0) && (local_2bc == 2)) {
      if (local_2a0[0] == '\x05') {
        if (local_2a0[1] != 0) {
          if ((local_2a8 == 0) || (local_2a0[1] != 1)) {
            if (local_2a0[1] != 2) {
              if ((local_2a8 == 0) && (local_2a0[1] == 1)) {
                FUN_100d8ba0(iVar3,"SOCKS5 GSSAPI per-message authentication is not supported.");
                return 7;
              }
              if (local_2a0[1] != 0xff) {
                FUN_100d8ba0(iVar3,"Undocumented SOCKS5 mode attempted to be used by server.");
                return 7;
              }
              if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
                FUN_100d8ba0(iVar3,"No authentication method was acceptable.");
                return 7;
              }
              FUN_100d8ba0(iVar3,
                           "No authentication method was acceptable. (It is quite likely that the SOCKS5 server wanted a username/password, since none was supplied to the server on this connection.)"
                          );
              return 7;
            }
            if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
              uVar5 = 0;
              uVar8 = 0;
            }
            else {
              pcVar4 = param_1;
              do {
                cVar1 = *pcVar4;
                pcVar4 = pcVar4 + 1;
              } while (cVar1 != '\0');
              uVar5 = (int)pcVar4 - (int)(param_1 + 1);
              pcVar4 = param_2;
              do {
                cVar1 = *pcVar4;
                pcVar4 = pcVar4 + 1;
              } while (cVar1 != '\0');
              uVar8 = (int)pcVar4 - (int)(param_2 + 1);
            }
            local_2a0[0] = '\x01';
            local_2a0[1] = (char)uVar5;
            if ((param_1 != (char *)0x0) && (uVar5 != 0)) {
              pcVar4 = local_29e;
              for (uVar9 = uVar5 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined4 *)pcVar4 = *(undefined4 *)param_1;
                param_1 = param_1 + 4;
                pcVar4 = pcVar4 + 4;
              }
              for (uVar9 = uVar5 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                *pcVar4 = *param_1;
                param_1 = param_1 + 1;
                pcVar4 = pcVar4 + 1;
              }
            }
            local_29e[uVar5] = (char)uVar8;
            iVar7 = local_2b0;
            if ((param_2 != (char *)0x0) && (uVar8 != 0)) {
              pcVar4 = local_29e + uVar5 + 1;
              for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined4 *)pcVar4 = *(undefined4 *)param_2;
                param_2 = param_2 + 4;
                pcVar4 = pcVar4 + 4;
              }
              for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                *pcVar4 = *param_2;
                param_2 = param_2 + 1;
                pcVar4 = pcVar4 + 1;
              }
            }
            iVar6 = uVar5 + 3 + uVar8;
            local_2b8 = FUN_100d9150(param_6,local_2b0,local_2a0,iVar6,&local_2ac);
            if ((local_2b8 != 0) || (iVar6 != local_2ac)) {
              FUN_100d8ba0(iVar3,"Failed to send SOCKS5 sub-negotiation request.");
              return 7;
            }
            iVar7 = FUN_100e9120(param_6,iVar7,local_2a0,2,&local_2bc);
            if ((iVar7 != 0) || (local_2bc != 2)) {
              FUN_100d8ba0(iVar3,"Unable to receive SOCKS5 sub-negotiation response.");
              return 7;
            }
            if (local_2a0[1] != '\0') {
              FUN_100d8ba0(iVar3,"User was rejected by the SOCKS5 server (%d %d).",local_2a0[0],
                           local_2a0[1]);
              return 7;
            }
          }
          else {
            local_2b8 = FUN_100f5f30(param_5,param_6);
            if (local_2b8 != 0) {
              FUN_100d8ba0(iVar3,"Unable to negotiate SOCKS5 GSS-API context.");
              return 7;
            }
          }
        }
        local_2a0[0] = '\x05';
        local_2a0[1] = '\x01';
        local_29e[0] = '\0';
        iVar7 = 3;
        if (local_2b4 != (int *)0x0) {
          iVar6 = FUN_100cfeb0(param_6,param_3,param_4,&local_2b4);
          if (iVar6 == -1) {
            return 6;
          }
          if ((iVar6 == 1) && (local_2b8 = FUN_100ce210(param_6,&local_2b4), local_2b8 != 0)) {
            return local_2b8;
          }
          if ((local_2b4 != (int *)0x0) && (iVar6 = *local_2b4, iVar6 != 0)) {
            FUN_100cfb90(iVar6,local_48,0x40);
            if (*(int *)(iVar6 + 4) == 2) {
              local_29e[1] = '\x01';
              iVar7 = *(int *)(iVar6 + 0x18);
              local_29e[2] = *(byte *)(iVar7 + 4);
              local_29e[3] = *(undefined1 *)(iVar7 + 5);
              local_29a = *(undefined1 *)(iVar7 + 6);
              local_299 = *(undefined1 *)(iVar7 + 7);
              iVar7 = 8;
              FUN_100d8ae0(iVar3,"SOCKS5 connect to IPv4 %s (locally resolved)\n",local_48);
            }
            else {
              iVar6 = 0;
              FUN_100d8ba0(iVar3,"SOCKS5 connection to %s not supported\n",local_48);
            }
            FUN_100d03f0(iVar3,local_2b4);
            if (iVar6 != 0) goto LAB_100e9b63;
          }
          FUN_100d8ba0(iVar3,"Failed to resolve \"%s\" for SOCKS5 connect.",param_3);
          return 6;
        }
        local_29e[1] = '\x03';
        local_29e[2] = (byte)local_2a4;
        pcVar4 = local_29e + 3;
        for (uVar5 = local_2a4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)param_3;
          param_3 = param_3 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar5 = local_2a4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar4 = *param_3;
          param_3 = param_3 + 1;
          pcVar4 = pcVar4 + 1;
        }
        iVar7 = local_2a4 + 5;
LAB_100e9b63:
        local_2a0[iVar7] = (char)((uint)param_4 >> 8);
        local_2a0[iVar7 + 1] = (char)param_4;
        if (param_6[0x186] == 0) {
          local_2b8 = FUN_100d9150(param_6,local_2b0,local_2a0,iVar7 + 2,&local_2ac);
        }
        else {
          FUN_100d8ba0(iVar3,"SOCKS5 GSS-API protection not yet implemented.");
        }
        if ((local_2b8 != 0) || (iVar7 + 2 != local_2ac)) {
          FUN_100d8ba0(iVar3,"Failed to send SOCKS5 connect request.");
          return 7;
        }
        uVar5 = 10;
        if (param_6[0x186] == 0) {
          iVar7 = FUN_100e9120(param_6,local_2b0,local_2a0,10,&local_2bc);
          if ((iVar7 == 0) && (local_2bc == 10)) {
            if (local_2a0[0] != '\x05') {
              FUN_100d8ba0(iVar3,"SOCKS5 reply has wrong version, version should be 5.");
              return 7;
            }
            if (local_29e[1] == '\x03') {
              uVar5 = local_29e[2] + 7;
            }
            else if (local_29e[1] == '\x04') {
              uVar5 = 0x16;
            }
            if ((param_6[0x186] == 0) && (10 < uVar5)) {
              iVar7 = FUN_100e9120(param_6,local_2b0,&local_296,uVar5 - 10,&local_2bc);
              if ((iVar7 != 0) || (uVar5 - 10 != local_2bc)) {
                FUN_100d8ba0(iVar3,"Failed to receive SOCKS5 connect request ack.");
                return 7;
              }
            }
            if (local_2a0[1] == '\0') {
              FUN_100d8ae0(iVar3,"SOCKS5 request granted.\n");
              FUN_100ef040(local_2b0,1);
              return 0;
            }
            if (local_29e[1] == '\x01') {
              FUN_100d8ba0(iVar3,"Can\'t complete SOCKS5 connection to %d.%d.%d.%d:%d. (%d)",
                           local_29e[2],local_29e[3],local_29a,local_299,
                           CONCAT11(local_298,local_297),local_2a0[1]);
              return 7;
            }
            if (local_29e[1] == '\x03') {
              cVar1 = local_2a0[uVar5 - 1];
              cVar2 = local_2a0[uVar5 - 2];
              local_2a0[uVar5 - 2] = '\0';
              FUN_100d8ba0(iVar3,"Can\'t complete SOCKS5 connection to %s:%d. (%d)",local_29e + 3,
                           CONCAT11(cVar2,cVar1),local_2a0[1]);
              local_2a0[uVar5 - 2] = cVar2;
              return 7;
            }
            if (local_29e[1] == '\x04') {
              FUN_100d8ba0(iVar3,
                           "Can\'t complete SOCKS5 connection to %02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%d. (%d)"
                           ,local_29e[2],local_29e[3],local_29a,local_299,local_298,local_297,
                           local_296,local_295,local_294,local_293,local_292,local_291,local_290,
                           local_28f,local_28e,local_28d,CONCAT11(local_28c,local_28b),local_2a0[1])
              ;
            }
            return 7;
          }
        }
        else {
          FUN_100d8ba0(iVar3,"SOCKS5 GSS-API protection not yet implemented.");
        }
        FUN_100d8ba0(iVar3,"Failed to receive SOCKS5 connect request ack.");
        return 7;
      }
      pcVar4 = "Received invalid version in initial SOCKS5 response.";
    }
    else {
      pcVar4 = "Unable to receive initial SOCKS5 response.";
    }
  }
  else {
    pcVar4 = "Unable to send initial SOCKS5 request.";
  }
  FUN_100d8ba0(iVar3,pcVar4);
  return 7;
}


/* END FUNCTION 0x100e96e0 */

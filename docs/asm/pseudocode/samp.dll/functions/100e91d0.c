/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e91d0
 * Name: FUN_100e91d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_100e91d0(char *param_1,char *param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  int *local_154;
  int local_150;
  uint local_14c;
  char local_148;
  undefined1 local_147;
  undefined1 local_146;
  undefined1 local_145;
  undefined1 local_144;
  undefined1 local_143;
  undefined1 local_142;
  undefined1 local_141;
  char local_140 [256];
  undefined1 local_40 [64];
  
  iVar5 = param_5[0x34];
  local_150 = param_5[param_4 + 0x66];
  uVar2 = *param_5;
  local_14c = (uint)(iVar5 == 6);
  iVar3 = FUN_100db5d0(uVar2,0,1);
  if (iVar3 < 0) {
    FUN_100d8ba0(uVar2,"Connection time-out");
    return 0x1c;
  }
  if (param_5[0xa6] != 0) {
    puVar4 = &DAT_10118170;
    if ((iVar5 == 6) == 0) {
      puVar4 = &DAT_10117a39;
    }
    FUN_100d8ae0(*param_5,"SOCKS4%s: connecting to HTTP proxy %s port %d\n",puVar4,param_2,param_3);
  }
  FUN_100ef040(local_150,0);
  FUN_100d8ae0(uVar2,"SOCKS4 communication to %s:%d\n",param_2,param_3);
  local_148 = '\x04';
  local_147 = 1;
  local_146 = (undefined1)((uint)param_3 >> 8);
  local_145 = (undefined1)param_3;
  if (local_14c == 0) {
    iVar5 = FUN_100cfeb0(param_5,param_2,param_3,&local_154);
    if (iVar5 == -1) {
      return 5;
    }
    if (iVar5 == 1) {
      FUN_100ce210(param_5,&local_154);
    }
    if ((local_154 == (int *)0x0) || (iVar5 = *local_154, iVar5 == 0)) {
LAB_100e9388:
      FUN_100d8ba0(uVar2,"Failed to resolve \"%s\" for SOCKS4 connect.",param_2);
      return 6;
    }
    FUN_100cfb90(iVar5,local_40,0x40);
    if (*(int *)(iVar5 + 4) == 2) {
      iVar3 = *(int *)(iVar5 + 0x18);
      local_144 = *(undefined1 *)(iVar3 + 4);
      local_143 = *(undefined1 *)(iVar3 + 5);
      local_142 = *(undefined1 *)(iVar3 + 6);
      local_141 = *(undefined1 *)(iVar3 + 7);
      FUN_100d8ae0(uVar2,"SOCKS4 connect to IPv4 %s (locally resolved)\n",local_40);
    }
    else {
      iVar5 = 0;
      FUN_100d8ba0(uVar2,"SOCKS4 connection to %s not supported\n",local_40);
    }
    FUN_100d03f0(uVar2,local_154);
    if (iVar5 == 0) goto LAB_100e9388;
  }
  iVar5 = local_150;
  local_140[0] = '\0';
  if (param_1 != (char *)0x0) {
    pcVar6 = param_1;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (0xfd < (uint)((int)pcVar6 - (int)(param_1 + 1))) {
      pcVar6 = "Too long SOCKS proxy name, can\'t use!\n";
      goto LAB_100e96af;
    }
    uVar10 = ((int)pcVar6 - (int)(param_1 + 1)) + 1;
    pcVar6 = local_140;
    for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar6 = *param_1;
      param_1 = param_1 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  pcVar7 = local_140;
  pcVar11 = (char *)0x0;
  pcVar6 = local_140 + 1;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if (local_14c != 0) {
    local_141 = 1;
    pcVar11 = param_2;
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    pcVar11 = pcVar11 + (1 - (int)(param_2 + 1));
    local_144 = 0;
    local_143 = local_144;
    local_142 = local_144;
    if ((int)(pcVar7 + (int)(pcVar11 + (9 - (int)pcVar6))) < 0x107) {
      pcVar8 = param_2;
      do {
        cVar1 = *pcVar8;
        pcVar8[(int)(pcVar7 + (int)(local_140 + (-(int)param_2 - (int)pcVar6) + 1))] = cVar1;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
    }
    else {
      pcVar11 = (char *)0x0;
    }
  }
  iVar3 = FUN_100d9150(param_5,local_150,&local_148,pcVar7 + (int)(pcVar11 + (9 - (int)pcVar6)),
                       &local_154);
  if ((iVar3 == 0) && (local_154 == (int *)(pcVar7 + (int)(pcVar11 + (9 - (int)pcVar6))))) {
    if ((local_14c != 0) && (pcVar11 == (char *)0x0)) {
      pcVar6 = param_2;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      iVar3 = FUN_100d9150(param_5,iVar5,param_2,pcVar6 + (1 - (int)(param_2 + 1)),&local_154);
      if ((iVar3 != 0) || (local_154 != (int *)(pcVar6 + (1 - (int)(param_2 + 1))))) {
        pcVar6 = "Failed to send SOCKS4 connect request.";
        goto LAB_100e96af;
      }
    }
    iVar3 = FUN_100e9120(param_5,iVar5,&local_148,8,&local_150);
    if ((iVar3 == 0) && (local_150 == 8)) {
      if (local_148 == '\0') {
        switch(local_147) {
        case 0x5a:
          goto switchD_100e952c_caseD_5a;
        case 0x5b:
          FUN_100d8ba0(uVar2,
                       "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected or failed."
                       ,local_144,local_143,local_142,local_141,CONCAT11(local_146,local_145),
                       local_147);
          return 7;
        case 0x5c:
          FUN_100d8ba0(uVar2,
                       "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because SOCKS server cannot connect to identd on the client."
                       ,local_144,local_143,local_142,local_141,CONCAT11(local_146,local_145),
                       local_147);
          return 7;
        case 0x5d:
          FUN_100d8ba0(uVar2,
                       "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because the client program and identd report different user-ids."
                       ,local_144,local_143,local_142,local_141,CONCAT11(local_146,local_145),
                       local_147);
          return 7;
        default:
          FUN_100d8ba0(uVar2,"Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), Unknown.",
                       local_144,local_143,local_142,local_141,CONCAT11(local_146,local_145),
                       local_147);
          return 7;
        }
      }
      pcVar6 = "SOCKS4 reply has wrong version, version should be 4.";
    }
    else {
      pcVar6 = "Failed to receive SOCKS4 connect request ack.";
    }
  }
  else {
    pcVar6 = "Failed to send SOCKS4 connect request.";
  }
LAB_100e96af:
  FUN_100d8ba0(uVar2,pcVar6);
  return 7;
switchD_100e952c_caseD_5a:
  puVar4 = &DAT_10118170;
  if (local_14c == 0) {
    puVar4 = &DAT_10117a39;
  }
  FUN_100d8ae0(uVar2,"SOCKS4%s request granted.\n",puVar4);
  FUN_100ef040(iVar5,1);
  return 0;
}


/* END FUNCTION 0x100e91d0 */

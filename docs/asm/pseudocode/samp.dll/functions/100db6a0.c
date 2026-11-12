/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100db6a0
 * Name: FUN_100db6a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100db6a0(int *param_1,SOCKET param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  sockaddr *psVar12;
  int *local_198;
  int local_194;
  uint local_190;
  int local_18c;
  sockaddr local_188 [8];
  sockaddr local_108 [16];
  
  iVar3 = *param_1;
  local_198 = (int *)0x0;
  local_194 = *(int *)(iVar3 + 0x19c);
  local_190 = (uint)*(ushort *)(iVar3 + 0x198);
  pcVar10 = *(char **)(iVar3 + 0x5c0);
  local_18c = 0;
  if ((pcVar10 == (char *)0x0) && (*(ushort *)(iVar3 + 0x198) == 0)) {
    return 0;
  }
  psVar12 = local_188;
  for (iVar9 = 0x20; iVar9 != 0; iVar9 = iVar9 + -1) {
    psVar12->sa_family = 0;
    psVar12->sa_data[0] = '\0';
    psVar12->sa_data[1] = '\0';
    psVar12 = (sockaddr *)(psVar12->sa_data + 2);
  }
  if (pcVar10 == (char *)0x0) {
LAB_100db932:
    if (param_3 != 2) goto LAB_100db953;
  }
  else {
    pcVar6 = pcVar10;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (0xfe < (uint)((int)pcVar6 - (int)(pcVar10 + 1))) goto LAB_100db932;
    puVar11 = (undefined4 *)((int)&local_108[0].sa_family + 1);
    for (iVar9 = 0x3f; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    *(undefined2 *)puVar11 = 0;
    *(undefined1 *)((int)puVar11 + 2) = 0;
    bVar4 = false;
    pcVar6 = PTR_DAT_1015551c;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    local_108[0].sa_family._0_1_ = cVar1;
    iVar9 = _strncmp(PTR_DAT_1015551c,pcVar10,(int)pcVar6 - (int)(PTR_DAT_1015551c + 1));
    if (iVar9 == 0) {
      pcVar6 = PTR_DAT_1015551c;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + ((int)pcVar6 - (int)(PTR_DAT_1015551c + 1));
      bVar4 = true;
LAB_100db776:
      iVar9 = FUN_100ef030(param_3,param_4,param_1[0x24],pcVar10,local_108,0x100);
      if (iVar9 == 0) {
        if (bVar4) {
          FUN_100d8ba0(iVar3,"Couldn\'t bind to interface \'%s\'",pcVar10);
          return 0x2d;
        }
        goto LAB_100db843;
      }
      if (iVar9 == 1) {
        return 1;
      }
      if (iVar9 != 2) {
        if (bVar4) goto LAB_100db90d;
        goto LAB_100db843;
      }
      FUN_100d8ae0(iVar3,"Local Interface %s is ip %s using address family %i\n",pcVar10,local_108,
                   param_3);
    }
    else {
      pcVar6 = PTR_DAT_10155520;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      iVar9 = _strncmp(PTR_DAT_10155520,pcVar10,(int)pcVar6 - (int)(PTR_DAT_10155520 + 1));
      if (iVar9 != 0) goto LAB_100db776;
      pcVar6 = PTR_DAT_10155520;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + ((int)pcVar6 - (int)(PTR_DAT_10155520 + 1));
LAB_100db843:
      iVar9 = param_1[0xca];
      if (param_3 == 2) {
        param_1[0xca] = 1;
      }
      iVar7 = FUN_100cfeb0(param_1,pcVar10,0,&local_198);
      if (iVar7 == 1) {
        FUN_100ce210(param_1,&local_198);
      }
      param_1[0xca] = iVar9;
      if (local_198 == (int *)0x0) {
LAB_100db90d:
        *(undefined4 *)(iVar3 + 0x48a8) = 0;
        FUN_100d8ba0(iVar3,"Couldn\'t bind to \'%s\'",pcVar10);
        return 0x2d;
      }
      FUN_100cfb90(*local_198,local_108,0x100);
      FUN_100d8ae0(iVar3,"Name \'%s\' family %i resolved to \'%s\' family %i\n",pcVar10,param_3,
                   local_108,*(undefined4 *)(*local_198 + 4));
      FUN_100d03f0(iVar3,local_198);
    }
    if ((param_3 != 2) || (iVar9 = FUN_100e0e40(2,local_108,local_188[0].sa_data + 2), iVar9 < 1))
    goto LAB_100db953;
  }
  local_188[0].sa_family = 2;
  local_188[0].sa_data._0_2_ = htons((u_short)local_190);
  local_18c = 0x10;
LAB_100db953:
  iVar9 = bind(param_2,local_188,local_18c);
  uVar5 = local_190;
  do {
    local_190 = uVar5;
    if (-1 < iVar9) {
      psVar12 = local_108;
      for (iVar9 = 0x20; iVar9 != 0; iVar9 = iVar9 + -1) {
        psVar12->sa_family = 0;
        psVar12->sa_data[0] = '\0';
        psVar12->sa_data[1] = '\0';
        psVar12 = (sockaddr *)(psVar12->sa_data + 2);
      }
      local_194 = 0x80;
      iVar9 = getsockname(param_2,local_108,&local_194);
      if (-1 < iVar9) {
        FUN_100d8ae0(iVar3,"Local port: %hu\n",local_190 & 0xffff);
        param_1[0xbb] = 1;
        return 0;
      }
      iVar9 = WSAGetLastError();
      *(int *)(iVar3 + 0x48ac) = iVar9;
      uVar8 = FUN_100c8180(param_1,iVar9);
      pcVar10 = "getsockname() failed with errno %d: %s";
LAB_100dba5f:
      FUN_100d8ba0(iVar3,pcVar10,iVar9,uVar8);
      return 0x2d;
    }
    local_194 = local_194 + -1;
    if (local_194 < 1) {
      iVar9 = WSAGetLastError();
      *(int *)(iVar3 + 0x48ac) = iVar9;
      uVar8 = FUN_100c8180(param_1,iVar9);
      pcVar10 = "bind failed with errno %d: %s";
      goto LAB_100dba5f;
    }
    FUN_100d8ae0(iVar3,"Bind to local port %hu failed, trying next\n",uVar5 & 0xffff);
    local_190 = uVar5 + 1;
    if (local_188[0].sa_family == 2) {
      local_188[0].sa_data._0_2_ = ntohs((u_short)local_190);
    }
    iVar9 = bind(param_2,local_188,local_18c);
    uVar5 = local_190;
  } while( true );
}


/* END FUNCTION 0x100db6a0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e00f0
 * Name: FUN_100e00f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100e00f0(int param_1,char *param_2,uint *param_3,int *param_4)

{
  bool bVar1;
  u_short uVar2;
  ushort uVar3;
  servent *psVar4;
  int iVar5;
  _union_1226 in;
  uint *puVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int local_1c;
  uint local_14;
  uint local_10;
  char *local_c;
  undefined4 local_8;
  _union_1226 local_4;
  
  uVar9 = 0;
  uVar11 = 0;
  uVar10 = 0;
  local_1c = 0;
  local_10 = 0;
  local_4.S_addr = 0;
  local_c = (char *)0x0;
  bVar1 = false;
  local_8 = 0;
  local_14 = 0;
  *param_4 = 0;
  if ((param_1 == 0) && (param_2 == (char *)0x0)) {
    return 0x2af9;
  }
  if (param_3 != (uint *)0x0) {
    if ((((param_3[4] != 0) || (param_3[5] != 0)) || (param_3[6] != 0)) || (param_3[7] != 0)) {
      return 0x2afb;
    }
    uVar9 = *param_3;
    if (((uVar9 & 2) != 0) && (param_1 == 0)) {
      return 0x2726;
    }
    if ((param_3[1] != 0) && (param_3[1] != 2)) {
      return 0x273f;
    }
    uVar11 = param_3[2];
    if ((((uVar11 != 0) && (uVar11 != 1)) && (uVar11 != 2)) && (uVar11 != 3)) {
      return 0x273c;
    }
    local_10 = param_3[3];
  }
  if (param_2 != (char *)0x0) {
    uVar10 = _strtoul(param_2,&local_c,10);
    if (*local_c == '\0') {
      uVar2 = htons((u_short)uVar10);
      uVar10 = (uint)uVar2;
      local_14 = uVar10;
      if (uVar11 == 0) {
        uVar11 = 1;
        bVar1 = true;
      }
    }
    else {
      if (((uVar11 == 0) || (uVar11 == 2)) &&
         (psVar4 = getservbyname(param_2,"udp"), psVar4 != (servent *)0x0)) {
        uVar10 = (uint)(ushort)psVar4->s_port;
        local_14 = uVar10;
      }
      if (((uVar11 == 0) || (uVar11 == 1)) &&
         (psVar4 = getservbyname(param_2,"tcp"), psVar4 != (servent *)0x0)) {
        uVar3 = psVar4->s_port;
        uVar10 = (uint)uVar3;
      }
      else {
        uVar3 = (ushort)local_8;
      }
      if ((short)uVar10 == 0) {
        return (-(uint)(uVar11 != 0) & 0xfffffc84) + 0x2af9;
      }
      if (uVar11 == 0) {
        uVar11 = (uVar3 == 0) + 1;
        if (uVar3 != 0) {
          bVar1 = true;
          if ((short)local_14 != 0) goto LAB_100e02ca;
        }
        bVar1 = false;
      }
    }
  }
LAB_100e02ca:
  if (param_1 == 0) {
    in.S_addr = htonl((-(uint)((uVar9 & 1) != 0) & 0x80ffffff) + 0x7f000001);
LAB_100e0377:
    puVar6 = (uint *)FUN_100dfd40(uVar11,local_10,uVar10,in);
    *param_4 = (int)puVar6;
    if (puVar6 == (uint *)0x0) {
LAB_100e03cd:
      local_1c = 8;
      goto LAB_100e0333;
    }
    if ((param_1 != 0) && (*puVar6 = *puVar6 | 4, (uVar9 & 2) != 0)) {
      pcVar7 = inet_ntoa((in_addr)in);
      uVar8 = FUN_100dfca0(pcVar7);
      *(undefined4 *)(*param_4 + 0x14) = uVar8;
      if (*(int *)(*param_4 + 0x14) == 0) goto LAB_100e03cd;
    }
  }
  else {
    iVar5 = FUN_100dfcf0(param_1,&local_4);
    in = local_4;
    if (iVar5 != 0) goto LAB_100e0377;
    if ((uVar9 & 4) != 0) {
      local_1c = 0x2af9;
      goto LAB_100e0333;
    }
    local_1c = FUN_100dfea0(param_1,uVar11,local_10,uVar10,uVar9 & 2,param_4);
    if (local_1c != 0) goto LAB_100e0333;
  }
  if (!bVar1) {
    return local_1c;
  }
  local_1c = FUN_100e0010(local_14,*param_4);
  if (local_1c == 0) {
    return 0;
  }
LAB_100e0333:
  FUN_100e00a0(*param_4);
  *param_4 = 0;
  return local_1c;
}


/* END FUNCTION 0x100e00f0 */

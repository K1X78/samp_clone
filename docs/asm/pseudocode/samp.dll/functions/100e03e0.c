/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e03e0
 * Name: FUN_100e03e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_100e03e0(short *param_1,_union_1226 param_2,int param_3,uint param_4,int param_5,uint param_6,
            uint param_7)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  servent *psVar5;
  char *pcVar6;
  char *pcVar7;
  hostent *phVar8;
  uint uVar9;
  int iVar10;
  char local_8 [8];
  
  uVar3 = param_7;
  uVar2 = param_6;
  builtin_strncpy(local_8,"65535",6);
  if ((param_1 == (short *)0x0) || (param_2.S_addr < 0x10)) {
    return 0x2afb;
  }
  if (*param_1 != 2) {
    return 0x273f;
  }
  if (((param_3 == 0) || (param_4 == 0)) && ((param_5 == 0 || (param_6 == 0)))) {
    return 0x2af9;
  }
  uVar9 = param_7 & 2;
  if ((uVar9 != 0) && ((param_7 & 4) != 0)) {
    return 0x2726;
  }
  if ((param_5 != 0) && (param_6 != 0)) {
    uVar4 = param_1[1];
    param_6 = uVar9;
    if ((param_7 & 8) == 0) {
      psVar5 = getservbyport((uint)uVar4,(char *)(-(uint)((param_7 & 0x10) != 0) & 0x10125c94));
      if ((psVar5 == (servent *)0x0) || (pcVar7 = psVar5->s_name, pcVar7 == (char *)0x0)) {
        uVar4 = ntohs(uVar4);
        goto LAB_100e04e5;
      }
    }
    else {
      uVar4 = ntohs(uVar4);
LAB_100e04e5:
      _sprintf(local_8,"%u",(uint)uVar4);
      pcVar7 = local_8;
    }
    pcVar6 = pcVar7;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (uVar2 <= (uint)((int)pcVar6 - (int)(pcVar7 + 1))) {
      return 0x2afb;
    }
    iVar10 = param_5 - (int)pcVar7;
    do {
      cVar1 = *pcVar7;
      pcVar7[iVar10] = cVar1;
      pcVar7 = pcVar7 + 1;
      uVar9 = param_6;
    } while (cVar1 != '\0');
  }
  param_6 = uVar9;
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  param_2 = (_union_1226)*(_union_1226 *)&((_union_1226 *)(param_1 + 2))->S_un_b;
  if (param_6 == 0) {
    phVar8 = gethostbyaddr((char *)&param_2,4,2);
    if ((phVar8 != (hostent *)0x0) && (pcVar7 = phVar8->h_name, pcVar7 != (char *)0x0)) {
      if (((uVar3 & 1) != 0) && (pcVar6 = _strchr(pcVar7,0x2e), pcVar6 != (char *)0x0)) {
        *pcVar6 = '\0';
      }
      goto LAB_100e05c6;
    }
    if ((uVar3 & 4) != 0) {
      iVar10 = WSAGetLastError();
      if (iVar10 == 0x2af9) {
        return 0x2af9;
      }
      if (iVar10 != 0x2afa) {
        if (iVar10 == 0x2afb) {
          return 0x2afb;
        }
        return 0x2af9;
      }
      return 0x2afa;
    }
  }
  pcVar7 = inet_ntoa((in_addr)param_2.S_un_b);
LAB_100e05c6:
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if ((uint)((int)pcVar6 - (int)(pcVar7 + 1)) < param_4) {
    param_3 = param_3 - (int)pcVar7;
    do {
      cVar1 = *pcVar7;
      pcVar7[param_3] = cVar1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    return 0;
  }
  return 0x2afb;
}


/* END FUNCTION 0x100e03e0 */

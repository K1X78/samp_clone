/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010ce63
 * Name: ___strgtold12
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl
___strgtold12(_LDBL12 *pld12,char **p_end_ptr,char *str,int mult12,int scale,int decpt,
             int implicit_E)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  byte bVar6;
  undefined4 uVar7;
  char *pcVar8;
  byte *pbVar9;
  int local_58;
  int local_50;
  uint local_4c;
  byte *local_44;
  int local_40;
  uint local_3c;
  char local_34 [23];
  char local_1d;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined4 local_12;
  ushort local_e;
  undefined4 local_8;
  
  local_8 = DAT_10155bc4;
  iVar5 = 0;
  pcVar8 = local_34;
  uVar4 = 0;
  local_50 = 1;
  local_3c = 0;
  bVar1 = false;
  bVar3 = false;
  bVar2 = false;
  local_58 = 0;
  local_40 = 0;
  local_4c = 0;
  local_44 = (byte *)str;
  for (; (((bVar6 = *str, bVar6 == 0x20 || (bVar6 == 9)) || (bVar6 == 10)) || (bVar6 == 0xd));
      str = str + 1) {
  }
LAB_1010ceba:
  bVar6 = *str;
  pbVar9 = (byte *)(str + 1);
  switch(iVar5) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_1010ced7:
      iVar5 = 3;
      goto LAB_1010d0f8;
    }
    if (bVar6 == DAT_101556dc) {
LAB_1010cee6:
      iVar5 = 5;
      str = (char *)pbVar9;
      goto LAB_1010ceba;
    }
    if (bVar6 == 0x2b) {
      uVar4 = 0;
      iVar5 = 2;
      str = (char *)pbVar9;
      goto LAB_1010ceba;
    }
    if (bVar6 == 0x2d) {
      iVar5 = 2;
      uVar4 = 0x8000;
      str = (char *)pbVar9;
      goto LAB_1010ceba;
    }
    break;
  case 1:
    iVar5 = 1;
    bVar1 = true;
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_1010ced7;
    if (bVar6 == DAT_101556dc) goto LAB_1010cf38;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) goto LAB_1010cf79;
    str = (char *)pbVar9;
    if (bVar6 != 0x30) goto LAB_1010cf52;
    goto LAB_1010ceba;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_1010ced7;
    str = (char *)local_44;
    if (bVar6 == DAT_101556dc) goto LAB_1010cee6;
    break;
  case 3:
    while (iVar5 = _isdigit((uint)bVar6), iVar5 != 0) {
      if (local_3c < 0x19) {
        local_3c = local_3c + 1;
        *pcVar8 = bVar6 - 0x30;
        pcVar8 = pcVar8 + 1;
      }
      else {
        local_40 = local_40 + 1;
      }
      bVar6 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    }
    if (bVar6 != DAT_101556dc) goto LAB_1010d028;
LAB_1010cf38:
    bVar1 = true;
    iVar5 = 4;
    str = (char *)pbVar9;
    goto LAB_1010ceba;
  case 4:
    bVar3 = true;
    if (local_3c == 0) {
      while (bVar6 == 0x30) {
        local_40 = local_40 + -1;
        bVar6 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      }
    }
    while (iVar5 = _isdigit((uint)bVar6), iVar5 != 0) {
      if (local_3c < 0x19) {
        local_3c = local_3c + 1;
        *pcVar8 = bVar6 - 0x30;
        pcVar8 = pcVar8 + 1;
        local_40 = local_40 + -1;
      }
      bVar6 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    }
LAB_1010d028:
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_1010cf79:
      bVar1 = true;
      iVar5 = 0xb;
      str = (char *)(pbVar9 + -1);
    }
    else {
LAB_1010cf52:
      bVar1 = true;
      if (((char)bVar6 < 'D') ||
         (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) {
LAB_1010d0b2:
        str = (char *)(pbVar9 + -1);
        goto LAB_1010d0b6;
      }
      iVar5 = 6;
      str = (char *)pbVar9;
    }
    goto LAB_1010ceba;
  case 5:
    bVar3 = true;
    iVar5 = _isdigit((uint)bVar6);
    str = (char *)local_44;
    if (iVar5 != 0) {
      iVar5 = 4;
      goto LAB_1010d0f8;
    }
    goto LAB_1010d0b6;
  case 6:
    local_44 = (byte *)(str + -1);
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_1010d12d;
      if (bVar6 == 0x2d) goto LAB_1010d121;
      str = (char *)local_44;
      if (bVar6 == 0x30) goto LAB_1010d090;
      goto LAB_1010d0b6;
    }
LAB_1010d0f6:
    iVar5 = 9;
LAB_1010d0f8:
    str = (char *)(pbVar9 + -1);
    goto LAB_1010ceba;
  case 7:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_1010d0f6;
    str = (char *)local_44;
    if (bVar6 != 0x30) goto LAB_1010d0b6;
LAB_1010d090:
    iVar5 = 8;
    str = (char *)pbVar9;
    goto LAB_1010ceba;
  case 8:
    bVar2 = true;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    }
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_1010d0f6;
    goto LAB_1010d0b2;
  case 9:
    bVar2 = true;
    local_58 = 0;
    goto LAB_1010d174;
  default:
    goto switchD_1010cec6_caseD_a;
  case 0xb:
    if (implicit_E != 0) {
      local_44 = (byte *)str;
      if (bVar6 == 0x2b) {
LAB_1010d12d:
        iVar5 = 7;
        str = (char *)pbVar9;
      }
      else {
        if (bVar6 != 0x2d) goto LAB_1010d0b6;
LAB_1010d121:
        local_50 = -1;
        iVar5 = 7;
        str = (char *)pbVar9;
      }
      goto LAB_1010ceba;
    }
    iVar5 = 10;
    pbVar9 = (byte *)str;
switchD_1010cec6_caseD_a:
    str = (char *)pbVar9;
    if (iVar5 != 10) goto LAB_1010ceba;
    goto LAB_1010d0b6;
  }
  if (bVar6 != 0x30) goto LAB_1010d0b6;
  iVar5 = 1;
  str = (char *)pbVar9;
  goto LAB_1010ceba;
LAB_1010d174:
  iVar5 = _isdigit((uint)bVar6);
  if (iVar5 == 0) goto LAB_1010d197;
  local_58 = (char)bVar6 + -0x30 + local_58 * 10;
  if (0x1450 < local_58) {
    local_58 = 0x1451;
    goto LAB_1010d197;
  }
  bVar6 = *pbVar9;
  pbVar9 = pbVar9 + 1;
  goto LAB_1010d174;
LAB_1010d197:
  while( true ) {
    iVar5 = _isdigit((uint)bVar6);
    if (iVar5 == 0) break;
    bVar6 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  }
  str = (char *)(pbVar9 + -1);
LAB_1010d0b6:
  *p_end_ptr = str;
  if (bVar1) {
    if (0x18 < local_3c) {
      if ('\x04' < local_1d) {
        local_1d = local_1d + '\x01';
      }
      pcVar8 = pcVar8 + -1;
      local_40 = local_40 + 1;
      local_3c = 0x18;
    }
    if (local_3c != 0) {
      while (pcVar8 = pcVar8 + -1, *pcVar8 == '\0') {
        local_3c = local_3c - 1;
        local_40 = local_40 + 1;
      }
      ___mtold12(local_34,local_3c,&local_18);
      if (local_50 < 0) {
        local_58 = -local_58;
      }
      local_58 = local_58 + local_40;
      if (!bVar2) {
        local_58 = local_58 + scale;
      }
      if (!bVar3) {
        local_58 = local_58 - decpt;
      }
      if (0x1450 < local_58) {
        uVar7 = 0;
        local_e = 0x7fff;
        local_12 = 0x80000000;
        local_18 = 0;
        local_4c = 2;
        goto LAB_1010d244;
      }
      if (-0x1451 < local_58) {
        ___multtenpow12(&local_18,local_58,mult12);
        uVar7 = CONCAT22(uStack_14,uStack_16);
        goto LAB_1010d244;
      }
      local_4c = 1;
    }
  }
  else {
    local_4c = 4;
  }
  local_18 = 0;
  local_e = 0;
  local_12 = 0;
  uVar7 = 0;
LAB_1010d244:
  *(undefined4 *)(pld12->ld12 + 6) = local_12;
  *(undefined4 *)(pld12->ld12 + 2) = uVar7;
  *(ushort *)(pld12->ld12 + 10) = local_e | uVar4;
  *(undefined2 *)pld12->ld12 = local_18;
  return local_4c;
}


/* END FUNCTION 0x1010ce63 */

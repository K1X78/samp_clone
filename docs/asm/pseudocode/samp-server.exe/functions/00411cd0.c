/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00411cd0
 * Name: FUN_00411cd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x00411eff) */

undefined4 FUN_00411cd0(void)

{
  byte bVar1;
  uint uVar2;
  byte *in_EAX;
  int iVar3;
  byte *pbVar4;
  int extraout_ECX;
  uint *unaff_EBX;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  uint *puVar8;
  byte *pbVar9;
  char *pcVar10;
  bool bVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined4 local_70;
  double local_68;
  undefined8 local_60;
  byte local_58 [32];
  uint local_38 [13];
  
  iVar5 = 0;
  local_70 = 1;
  iVar3 = -(int)in_EAX;
  do {
    if (*in_EAX == 0) break;
    iVar5 = iVar5 + 1;
    in_EAX[(int)(local_58 + iVar3)] = (&DAT_004b28c8)[*in_EAX];
    in_EAX = in_EAX + 1;
  } while (iVar5 < 0x1d);
  local_58[iVar5] = 0;
  switch(local_58[0]) {
  case 0x2b:
  case 0x2d:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    iVar3 = FUN_004085d0(&local_68);
    pbVar4 = local_58 + iVar3;
    if (*pbVar4 == 0x3a) {
      puVar8 = local_38;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      iVar3 = FUN_00407580();
      if (iVar3 != 0) {
        return 1;
      }
      FUN_004076b0();
      uVar6 = local_38[1] + -1 + (uint)(43199999 < local_38[0]);
      uVar14 = __alldiv(local_38[0] + 0xfd6cd200,uVar6,0xfad9a400,0xffffffff);
      lVar15 = __allmul((uint)uVar14,(int)((ulonglong)uVar14 >> 0x20),86400000,0);
      lVar15 = lVar15 + CONCAT44(uVar6,local_38[0] + 0xfd6cd200);
      if (local_58[0] == 0x2d) {
        lVar15 = CONCAT44(-((int)((ulonglong)lVar15 >> 0x20) + (uint)((int)lVar15 != 0)),
                          -(int)lVar15);
      }
      local_38[1] = (uint)((ulonglong)lVar15 >> 0x20);
      FUN_004076b0();
      FUN_00407aa0();
      unaff_EBX[1] = unaff_EBX[1] + local_38[1] + (uint)CARRY4(*unaff_EBX,(uint)lVar15);
      *unaff_EBX = *unaff_EBX + (uint)lVar15;
      return 0;
    }
    bVar1 = (&DAT_004b29c8)[*pbVar4];
    while ((bVar1 & 1) != 0) {
      pbVar7 = pbVar4 + 1;
      pbVar4 = pbVar4 + 1;
      bVar1 = (&DAT_004b29c8)[*pbVar7];
    }
    uVar6 = FUN_00408380((char *)pbVar4);
    if (10 < (int)uVar6) {
      return 1;
    }
    if ((int)uVar6 < 3) {
      return 1;
    }
    if (*(char *)((uVar6 - 1) + extraout_ECX) == 's') {
      *(undefined1 *)((uVar6 - 1) + extraout_ECX) = 0;
      uVar6 = uVar6 - 1;
    }
    FUN_004076b0();
    local_70 = 0;
    if (0.0 <= local_68) {
      local_60 = 0x3fe0000000000000;
    }
    else {
      local_60 = 0xbfe0000000000000;
    }
    if (uVar6 == 3) {
      iVar3 = 4;
      bVar11 = true;
      pbVar7 = &DAT_004b6c28;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar11 = *pbVar4 == *pbVar7;
        pbVar4 = pbVar4 + 1;
        pbVar7 = pbVar7 + 1;
      } while (bVar11);
joined_r0x00412152:
      if (!bVar11) {
LAB_00412311:
        FUN_00407aa0();
        return 1;
      }
LAB_00412162:
      uVar13 = FUN_004a0540();
      unaff_EBX[1] = unaff_EBX[1] + (int)(uVar13 >> 0x20) + (uint)CARRY4(*unaff_EBX,(uint)uVar13);
      *unaff_EBX = *unaff_EBX + (uint)uVar13;
      FUN_00407aa0();
      return 0;
    }
    if (uVar6 == 4) {
      iVar3 = 5;
      bVar11 = true;
      pbVar7 = pbVar4;
      pbVar9 = &DAT_004b6c18;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar11 = *pbVar7 == *pbVar9;
        pbVar7 = pbVar7 + 1;
        pbVar9 = pbVar9 + 1;
      } while (bVar11);
      if (bVar11) goto LAB_00412162;
      iVar3 = 5;
      bVar11 = true;
      pbVar7 = &DAT_004b6c2c;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar11 = *pbVar4 == *pbVar7;
        pbVar4 = pbVar4 + 1;
        pbVar7 = pbVar7 + 1;
      } while (bVar11);
      if (!bVar11) goto LAB_00412311;
      uVar13 = FUN_004a0540();
      FUN_00407a90();
      unaff_EBX[2] = unaff_EBX[2] + (int)uVar13;
      *(undefined1 *)((int)unaff_EBX + 0x2a) = 0;
      FUN_004076b0();
      if ((double)(int)uVar13 != local_68) {
LAB_004122e7:
        uVar13 = FUN_004a0540();
        uVar6 = *unaff_EBX;
        *unaff_EBX = uVar6 + (uint)uVar13;
        unaff_EBX[1] = unaff_EBX[1] + (int)(uVar13 >> 0x20) + (uint)CARRY4(uVar6,(uint)uVar13);
      }
    }
    else {
      if (uVar6 == 6) {
        pcVar10 = "@minute";
        iVar3 = 7;
        bVar11 = true;
        pbVar7 = pbVar4;
        do {
          pcVar10 = pcVar10 + 1;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar11 = *pbVar7 == *pcVar10;
          pbVar7 = pbVar7 + 1;
        } while (bVar11);
        if (bVar11) goto LAB_00412162;
        pcVar10 = "@second";
        iVar3 = 7;
        bVar11 = true;
        do {
          pcVar10 = pcVar10 + 1;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar11 = *pbVar4 == *pcVar10;
          pbVar4 = pbVar4 + 1;
        } while (bVar11);
        goto joined_r0x00412152;
      }
      if (uVar6 != 5) goto LAB_00412311;
      iVar3 = 6;
      bVar11 = true;
      pbVar7 = (byte *)"month";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar11 = *pbVar4 == *pbVar7;
        pbVar4 = pbVar4 + 1;
        pbVar7 = pbVar7 + 1;
      } while (bVar11);
      if (!bVar11) goto LAB_00412311;
      FUN_00407a90();
      uVar13 = FUN_004a0540();
      uVar6 = unaff_EBX[3] + (int)uVar13;
      unaff_EBX[3] = uVar6;
      iVar3 = uVar6 - 1;
      if ((int)uVar6 < 1) {
        iVar3 = uVar6 - 0xc;
      }
      unaff_EBX[2] = unaff_EBX[2] + iVar3 / 0xc;
      unaff_EBX[3] = uVar6 + (iVar3 / 0xc) * -0xc;
      *(undefined1 *)((int)unaff_EBX + 0x2a) = 0;
      FUN_004076b0();
      if ((double)(int)uVar13 != local_68) goto LAB_004122e7;
    }
    FUN_00407aa0();
    break;
  case 0x6c:
    iVar3 = 10;
    bVar11 = true;
    pbVar4 = local_58;
    pbVar7 = (byte *)"localtime";
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar11 = *pbVar4 == *pbVar7;
      pbVar4 = pbVar4 + 1;
      pbVar7 = pbVar7 + 1;
    } while (bVar11);
    if (bVar11) {
      FUN_004076b0();
      uVar14 = FUN_00411ba0();
      unaff_EBX[1] = unaff_EBX[1] + (int)((ulonglong)uVar14 >> 0x20) +
                     (uint)CARRY4(*unaff_EBX,(uint)uVar14);
      *unaff_EBX = *unaff_EBX + (uint)uVar14;
      FUN_00407aa0();
      return 0;
    }
    break;
  case 0x73:
    iVar3 = _strncmp((char *)local_58,"start of ",9);
    if (iVar3 == 0) {
      FUN_004078c0(unaff_EBX);
      unaff_EBX[8] = 0;
      unaff_EBX[9] = 0;
      iVar3 = 6;
      bVar11 = true;
      *(undefined1 *)((int)unaff_EBX + 0x29) = 1;
      unaff_EBX[6] = 0;
      unaff_EBX[5] = 0;
      *(undefined1 *)((int)unaff_EBX + 0x2b) = 0;
      *(undefined1 *)((int)unaff_EBX + 0x2a) = 0;
      pbVar4 = local_58 + 9;
      pbVar7 = (byte *)"month";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar11 = *pbVar4 == *pbVar7;
        pbVar4 = pbVar4 + 1;
        pbVar7 = pbVar7 + 1;
      } while (bVar11);
      if (bVar11) {
        unaff_EBX[4] = 1;
        return 0;
      }
      iVar3 = 5;
      bVar11 = true;
      pbVar4 = local_58 + 9;
      pbVar7 = &DAT_004b6c2c;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar11 = *pbVar4 == *pbVar7;
        pbVar4 = pbVar4 + 1;
        pbVar7 = pbVar7 + 1;
      } while (bVar11);
      if (bVar11) {
        FUN_004078c0(unaff_EBX);
        unaff_EBX[3] = 1;
        unaff_EBX[4] = 1;
        return 0;
      }
      iVar3 = 4;
      bVar11 = true;
      pbVar4 = local_58 + 9;
      pbVar7 = &DAT_004b6c28;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar11 = *pbVar4 == *pbVar7;
        pbVar4 = pbVar4 + 1;
        pbVar7 = pbVar7 + 1;
      } while (bVar11);
      if (bVar11) {
        return 0;
      }
    }
    break;
  case 0x75:
    iVar3 = 10;
    bVar11 = true;
    pbVar4 = local_58;
    pbVar7 = (byte *)"unixepoch";
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar11 = *pbVar4 == *pbVar7;
      pbVar4 = pbVar4 + 1;
      pbVar7 = pbVar7 + 1;
    } while (bVar11);
    if ((bVar11) && (*(char *)((int)unaff_EBX + 0x2a) != '\0')) {
      lVar15 = __alldiv(*unaff_EBX + 0xa8c0,unaff_EBX[1] + (uint)(0xffff573f < *unaff_EBX),0x15180,0
                       );
      lVar15 = lVar15 + 0xbfc83e532200;
LAB_00411db7:
      *(longlong *)unaff_EBX = lVar15;
      FUN_00407aa0();
      return 0;
    }
    iVar3 = 4;
    bVar11 = true;
    pbVar4 = local_58;
    pbVar7 = &DAT_004b6c5c;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar11 = *pbVar4 == *pbVar7;
      pbVar4 = pbVar4 + 1;
      pbVar7 = pbVar7 + 1;
    } while (bVar11);
    if (bVar11) {
      FUN_004076b0();
      lVar15 = FUN_00411ba0();
      uVar6 = *unaff_EBX;
      *unaff_EBX = uVar6 - (uint)lVar15;
      unaff_EBX[1] = (unaff_EBX[1] - (int)((ulonglong)lVar15 >> 0x20)) -
                     (uint)(uVar6 < (uint)lVar15);
      FUN_00407aa0();
      lVar12 = FUN_00411ba0();
      *(longlong *)unaff_EBX = (lVar15 - lVar12) + *(longlong *)unaff_EBX;
      return 0;
    }
    break;
  case 0x77:
    iVar3 = _strncmp((char *)local_58,"weekday ",8);
    if ((iVar3 == 0) && (iVar3 = FUN_004085d0(&local_68), 0 < iVar3)) {
      uVar13 = FUN_004a0540();
      uVar6 = (uint)uVar13;
      if ((local_68 == (double)(int)uVar6) && ((-1 < (int)uVar6 && (local_68 < 7.0)))) {
        FUN_00407a90();
        *(undefined1 *)((int)unaff_EBX + 0x2b) = 0;
        *(undefined1 *)((int)unaff_EBX + 0x2a) = 0;
        FUN_004076b0();
        uVar2 = *unaff_EBX;
        uVar14 = __alldiv(uVar2 + 0x7b98a00,unaff_EBX[1] + (uint)(0xf84675ff < uVar2),86400000,0);
        lVar15 = __allrem((uint)uVar14,(uint)((ulonglong)uVar14 >> 0x20),7,0);
        if ((int)uVar6 < lVar15) {
          lVar15 = lVar15 + -7;
        }
        lVar15 = __allmul(uVar6 - (uint)lVar15,
                          (((int)uVar6 >> 0x1f) - (int)((ulonglong)lVar15 >> 0x20)) -
                          (uint)(uVar6 < (uint)lVar15),86400000,0);
        lVar15 = lVar15 + CONCAT44(unaff_EBX[1],uVar2);
        goto LAB_00411db7;
      }
    }
  }
  return local_70;
}


/* END FUNCTION 0x00411cd0 */

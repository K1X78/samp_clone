/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00410a30
 * Name: FUN_00410a30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00410a30(int *param_1)

{
  undefined1 uVar1;
  byte *in_EAX;
  uint uVar2;
  undefined3 extraout_var;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  uVar5 = (uint)*in_EAX;
  switch(uVar5) {
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0x20:
    uVar5 = 1;
    bVar3 = (&DAT_004b29c8)[in_EAX[1]];
    while ((bVar3 & 1) != 0) {
      iVar6 = uVar5 + 1;
      uVar5 = uVar5 + 1;
      bVar3 = (&DAT_004b29c8)[in_EAX[iVar6]];
    }
    *param_1 = 0x95;
    return uVar5;
  case 0x21:
    uVar2 = 2;
    if (in_EAX[1] == 0x3d) {
      *param_1 = 0x4b;
      return uVar2;
    }
    break;
  case 0x22:
  case 0x27:
  case 0x60:
    uVar2 = 1;
    bVar3 = in_EAX[1];
    while (uVar4 = (uint)bVar3, uVar4 != 0) {
      if (uVar4 == uVar5) {
        if (in_EAX[uVar2 + 1] != uVar5) break;
        uVar2 = uVar2 + 1;
      }
      iVar6 = uVar2 + 1;
      uVar2 = uVar2 + 1;
      bVar3 = in_EAX[iVar6];
    }
    if (uVar4 == 0x27) {
      *param_1 = 0x5e;
      return uVar2 + 1;
    }
    if (uVar4 != 0) {
      *param_1 = 0x1a;
      return uVar2 + 1;
    }
    break;
  case 0x23:
    uVar5 = 1;
    if (((&DAT_004b29c8)[in_EAX[1]] & 4) != 0) {
      do {
        iVar6 = uVar5 + 1;
        uVar5 = uVar5 + 1;
      } while (((&DAT_004b29c8)[in_EAX[iVar6]] & 4) != 0);
      if (1 < (int)uVar5) {
        *param_1 = 0x84;
        return uVar5;
      }
    }
  case 0x24:
  case 0x3a:
  case 0x40:
    *param_1 = 0x85;
    uVar5 = (uint)in_EAX[1];
    iVar6 = 0;
    uVar2 = 1;
    if (uVar5 != 0) {
      do {
        if (((&DAT_004b29c8)[uVar5] & 0x46) == 0) {
          if (uVar5 == 0x28) {
            if (0 < iVar6) goto LAB_00410ee0;
            break;
          }
          if ((uVar5 != 0x3a) || (in_EAX[uVar2 + 1] != 0x3a)) break;
          uVar2 = uVar2 + 1;
        }
        else {
          iVar6 = iVar6 + 1;
        }
        uVar5 = (uint)in_EAX[uVar2 + 1];
        uVar2 = uVar2 + 1;
      } while (uVar5 != 0);
LAB_00410f0f:
      if (iVar6 != 0) {
        return uVar2;
      }
    }
    break;
  case 0x25:
    *param_1 = 0x5a;
    return 1;
  case 0x26:
    *param_1 = 0x52;
    return 1;
  case 0x28:
    *param_1 = 0x16;
    return 1;
  case 0x29:
    *param_1 = 0x17;
    return 1;
  case 0x2a:
    *param_1 = 0x58;
    return 1;
  case 0x2b:
    *param_1 = 0x56;
    return 1;
  case 0x2c:
    *param_1 = 0x19;
    return 1;
  case 0x2d:
    if (in_EAX[1] == 0x2d) {
      uVar5 = 2;
      bVar3 = in_EAX[2];
      while ((bVar3 != 0 && (bVar3 != 10))) {
        iVar6 = uVar5 + 1;
        uVar5 = uVar5 + 1;
        bVar3 = in_EAX[iVar6];
      }
      *param_1 = 0x95;
      return uVar5;
    }
    *param_1 = 0x57;
    return 1;
  case 0x2e:
    if (((&DAT_004b29c8)[in_EAX[1]] & 4) == 0) {
      *param_1 = 0x76;
      return 1;
    }
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
    *param_1 = 0x81;
    uVar5 = 0;
    bVar3 = (&DAT_004b29c8)[*in_EAX];
    while ((bVar3 & 4) != 0) {
      iVar6 = uVar5 + 1;
      uVar5 = uVar5 + 1;
      bVar3 = (&DAT_004b29c8)[in_EAX[iVar6]];
    }
    if (in_EAX[uVar5] == 0x2e) {
      bVar3 = (&DAT_004b29c8)[in_EAX[uVar5 + 1]];
      uVar2 = uVar5;
      while (uVar5 = uVar2 + 1, (bVar3 & 4) != 0) {
        bVar3 = (&DAT_004b29c8)[in_EAX[uVar2 + 2]];
        uVar2 = uVar5;
      }
      *param_1 = 0x82;
    }
    if (((in_EAX[uVar5] == 0x65) || (in_EAX[uVar5] == 0x45)) &&
       ((bVar3 = in_EAX[uVar5 + 1], ((&DAT_004b29c8)[bVar3] & 4) != 0 ||
        (((bVar3 == 0x2b || (bVar3 == 0x2d)) && (((&DAT_004b29c8)[in_EAX[uVar5 + 2]] & 4) != 0))))))
    {
      iVar6 = uVar5 + 2;
      uVar5 = uVar5 + 2;
      bVar3 = (&DAT_004b29c8)[in_EAX[iVar6]];
      while ((bVar3 & 4) != 0) {
        iVar6 = uVar5 + 1;
        uVar5 = uVar5 + 1;
        bVar3 = (&DAT_004b29c8)[in_EAX[iVar6]];
      }
      *param_1 = 0x82;
    }
    if (((&DAT_004b29c8)[in_EAX[uVar5]] & 0x46) != 0) {
      do {
        uVar5 = uVar5 + 1;
        *param_1 = 0x94;
      } while (((&DAT_004b29c8)[in_EAX[uVar5]] & 0x46) != 0);
      return uVar5;
    }
    return uVar5;
  case 0x2f:
    if ((in_EAX[1] != 0x2a) || (bVar3 = in_EAX[2], bVar3 == 0)) {
      *param_1 = 0x59;
      return 1;
    }
    for (uVar5 = 3; (bVar3 != 0x2a || (in_EAX[uVar5] != 0x2f)); uVar5 = uVar5 + 1) {
      bVar3 = in_EAX[uVar5];
      if (bVar3 == 0) goto LAB_00410b4d;
    }
    uVar5 = uVar5 + 1;
LAB_00410b4d:
    *param_1 = 0x95;
    return uVar5;
  case 0x3b:
    *param_1 = 1;
    return 1;
  case 0x3c:
    bVar3 = in_EAX[1];
    if (bVar3 == 0x3d) {
      *param_1 = 0x4e;
      return 2;
    }
    if (bVar3 != 0x3e) {
      if (bVar3 != 0x3c) {
        *param_1 = 0x4f;
        return 1;
      }
      *param_1 = 0x54;
      return 2;
    }
    *param_1 = 0x4b;
    return 2;
  case 0x3d:
    *param_1 = 0x4c;
    return (in_EAX[1] == 0x3d) + 1;
  case 0x3e:
    if (in_EAX[1] == 0x3d) {
      *param_1 = 0x50;
      return 2;
    }
    if (in_EAX[1] != 0x3e) {
      *param_1 = 0x4d;
      return 1;
    }
    *param_1 = 0x55;
    return 2;
  case 0x3f:
    *param_1 = 0x85;
    uVar5 = 1;
    if (((&DAT_004b29c8)[in_EAX[1]] & 4) != 0) {
      do {
        iVar6 = uVar5 + 1;
        uVar5 = uVar5 + 1;
      } while (((&DAT_004b29c8)[in_EAX[iVar6]] & 4) != 0);
      return uVar5;
    }
    return 1;
  case 0x58:
  case 0x78:
    if (in_EAX[1] == 0x27) {
      *param_1 = 0x83;
      uVar5 = 2;
      bVar3 = in_EAX[2];
      while ((uVar2 = (uint)bVar3, uVar2 != 0 && (uVar2 != 0x27))) {
        if (((&DAT_004b29c8)[uVar2] & 8) == 0) {
          *param_1 = 0x94;
        }
        iVar6 = uVar5 + 1;
        uVar5 = uVar5 + 1;
        bVar3 = in_EAX[iVar6];
      }
      uVar4 = uVar5 & 0x80000001;
      bVar7 = uVar4 == 0;
      if ((int)uVar4 < 0) {
        bVar7 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (((!bVar7) || (uVar2 == 0)) && (*param_1 = 0x94, uVar2 == 0)) {
        return uVar5;
      }
      return uVar5 + 1;
    }
  default:
    if (((&DAT_004b29c8)[uVar5] & 0x46) != 0) {
      uVar5 = 1;
      bVar3 = (&DAT_004b29c8)[in_EAX[1]];
      while ((bVar3 & 0x46) != 0) {
        iVar6 = uVar5 + 1;
        uVar5 = uVar5 + 1;
        bVar3 = (&DAT_004b29c8)[in_EAX[iVar6]];
      }
      uVar1 = FUN_00410990();
      *param_1 = CONCAT31(extraout_var,uVar1);
      return uVar5;
    }
    *param_1 = 0x94;
    return 1;
  case 0x5b:
    for (uVar2 = 1; (uVar5 != 0x5d && (uVar5 = (uint)in_EAX[uVar2], uVar5 != 0)); uVar2 = uVar2 + 1)
    {
    }
    *param_1 = ((uVar5 != 0x5d) - 1 & 0xffffff86) + 0x94;
    return uVar2;
  case 0x7c:
    if (in_EAX[1] == 0x7c) {
      *param_1 = 0x5b;
      return 2;
    }
    *param_1 = 0x53;
    return 1;
  case 0x7e:
    *param_1 = 0x5d;
    return 1;
  }
  *param_1 = 0x94;
  return uVar2;
  while (uVar4 != 0x29) {
LAB_00410ee0:
    uVar5 = uVar2;
    uVar4 = (uint)in_EAX[uVar5 + 1];
    uVar2 = uVar5 + 1;
    if ((uVar4 == 0) || (((&DAT_004b29c8)[uVar4] & 1) != 0)) {
      if (uVar4 == 0x29) {
        uVar2 = uVar5 + 2;
      }
      else {
        *param_1 = 0x94;
      }
      goto LAB_00410f0f;
    }
  }
  uVar2 = uVar5 + 2;
  goto LAB_00410f0f;
}


/* END FUNCTION 0x00410a30 */

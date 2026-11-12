/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004110c0
 * Name: FUN_004110c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __cdecl FUN_004110c0(byte *param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  char *pcVar8;
  byte local_1;
  
  bVar3 = *param_1;
  local_1 = 0;
  bVar2 = 0;
  if (bVar3 == 0) {
LAB_0041114c:
    return local_1 == 1;
  }
  do {
    local_1 = bVar2;
    iVar5 = (int)(char)bVar3;
    switch(iVar5) {
    case 9:
    case 10:
    case 0xc:
    case 0xd:
    case 0x20:
      goto switchD_004110eb_caseD_9;
    default:
      if (((&DAT_004b29c8)[bVar3] & 0x46) != 0) {
        iVar7 = 1;
        bVar3 = (&DAT_004b29c8)[param_1[1]];
        while ((bVar3 & 0x46) != 0) {
          iVar1 = iVar7 + 1;
          iVar7 = iVar7 + 1;
          bVar3 = (&DAT_004b29c8)[param_1[iVar1]];
        }
        switch(iVar5) {
        case 0x43:
        case 99:
          if ((iVar7 == 6) && (iVar5 = FUN_004084a0(param_1,(byte *)"create",6), iVar5 == 0)) {
            bVar4 = 4;
            param_1 = param_1 + 5;
            goto LAB_004111b1;
          }
        default:
switchD_00411223_caseD_44:
          bVar4 = 2;
          break;
        case 0x45:
        case 0x65:
          if (iVar7 == 3) {
            iVar5 = FUN_004084a0(param_1,&DAT_004b6b64,3);
            if (iVar5 == 0) {
              bVar4 = 7;
              param_1 = param_1 + 2;
              goto LAB_004111b1;
            }
            goto switchD_00411223_caseD_44;
          }
          if (iVar7 != 7) goto switchD_00411223_caseD_44;
          iVar5 = FUN_004084a0(param_1,(byte *)"explain",7);
          bVar4 = 3;
          if (iVar5 != 0) goto switchD_00411223_caseD_44;
          break;
        case 0x54:
        case 0x74:
          if (iVar7 == 7) {
            iVar5 = FUN_004084a0(param_1,(byte *)"trigger",7);
            if (iVar5 != 0) goto switchD_00411223_caseD_44;
            bVar4 = 6;
            param_1 = param_1 + 6;
          }
          else {
            if (iVar7 == 4) {
              pcVar8 = &DAT_004b257c;
            }
            else {
              if (iVar7 != 9) goto switchD_00411223_caseD_44;
              pcVar8 = "temporary";
            }
            iVar5 = FUN_004084a0(param_1,(byte *)pcVar8,iVar7);
            if (iVar5 != 0) goto switchD_00411223_caseD_44;
            bVar4 = 5;
            param_1 = param_1 + iVar7 + -1;
          }
          goto LAB_004111b1;
        }
        param_1 = param_1 + iVar7 + -1;
        break;
      }
      goto LAB_004111af;
    case 0x22:
    case 0x27:
    case 0x60:
      bVar3 = param_1[1];
      pbVar6 = param_1;
      if (bVar3 == 0) {
        return false;
      }
      while (param_1 = pbVar6 + 1, (char)bVar3 != iVar5) {
        bVar3 = pbVar6[2];
        pbVar6 = param_1;
        if (bVar3 == 0) {
          return false;
        }
      }
      goto LAB_004111a6;
    case 0x2d:
      if (param_1[1] != 0x2d) goto LAB_004111af;
      while (bVar3 != 10) {
        bVar3 = param_1[1];
        param_1 = param_1 + 1;
        if (bVar3 == 0) goto LAB_0041114c;
      }
      if (*param_1 == 0) goto LAB_0041114c;
switchD_004110eb_caseD_9:
      bVar4 = 1;
      break;
    case 0x2f:
      if (param_1[1] != 0x2a) goto LAB_004111af;
      bVar3 = param_1[2];
      pbVar6 = param_1 + 2;
      while( true ) {
        if (bVar3 == 0) {
          return false;
        }
        if ((bVar3 == 0x2a) && (pbVar6[1] == 0x2f)) break;
        bVar3 = pbVar6[1];
        pbVar6 = pbVar6 + 1;
      }
      if (*pbVar6 == 0) {
        return false;
      }
      param_1 = pbVar6 + 1;
      bVar4 = 1;
      break;
    case 0x3b:
      bVar4 = 0;
      break;
    case 0x5b:
      bVar3 = param_1[1];
      pbVar6 = param_1;
      if (bVar3 == 0) {
        return false;
      }
      while (param_1 = pbVar6 + 1, bVar3 != 0x5d) {
        bVar3 = pbVar6[2];
        pbVar6 = param_1;
        if (bVar3 == 0) {
          return false;
        }
      }
LAB_004111a6:
      if (*param_1 == 0) {
        return false;
      }
LAB_004111af:
      bVar4 = 2;
    }
LAB_004111b1:
    param_1 = param_1 + 1;
    bVar3 = *param_1;
    bVar2 = (&DAT_004b5c10)[(uint)local_1 * 8 + (uint)bVar4];
    if (bVar3 == 0) {
      return (&DAT_004b5c10)[(uint)local_1 * 8 + (uint)bVar4] == 1;
    }
  } while( true );
}


/* END FUNCTION 0x004110c0 */

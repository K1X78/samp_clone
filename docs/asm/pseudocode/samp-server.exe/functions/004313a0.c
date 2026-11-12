/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004313a0
 * Name: FUN_004313a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004313a0(int *param_1,int param_2,int *param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined3 extraout_var;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  longlong lVar13;
  void *local_18;
  char *local_14;
  undefined **local_10;
  undefined **local_c;
  byte *local_8;
  
  uVar3 = FUN_0040dda0(*param_3);
  if (CONCAT31(extraout_var,uVar3) == 5) {
    return;
  }
  local_14 = (char *)FUN_0041ffb0();
  if (local_14 == (char *)0x0) {
    return;
  }
  local_18 = (void *)FUN_0041ff70();
  iVar9 = 1;
  if (param_2 == 1) {
    local_c = (undefined **)&DAT_004b3168;
    local_10 = &PTR_DAT_004b316c;
    local_8 = (byte *)0x0;
  }
  else {
    local_8 = (byte *)FUN_0041ffb0();
    if (local_8 == (byte *)0x0) {
      return;
    }
    uVar5 = 0;
    pbVar4 = local_8;
    if (*local_8 == 0) goto LAB_004315b7;
    do {
      bVar2 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      if (0xbf < bVar2) {
        bVar2 = *pbVar4;
        while ((bVar2 & 0xc0) == 0x80) {
          pbVar1 = pbVar4 + 1;
          pbVar4 = pbVar4 + 1;
          bVar2 = *pbVar1;
        }
      }
      uVar5 = uVar5 + 1;
    } while (*pbVar4 != 0);
    if ((int)uVar5 < 1) goto LAB_004315b7;
    lVar13 = __allmul(uVar5,(int)uVar5 >> 0x1f,5,0);
    local_10 = (undefined **)FUN_0042f250((uint)lVar13,(int)((ulonglong)lVar13 >> 0x20));
    if (local_10 == (undefined **)0x0) {
      return;
    }
    local_c = local_10 + uVar5;
    iVar9 = 0;
    pbVar4 = local_8;
    if (*local_8 == 0) goto LAB_004315b7;
    do {
      local_10[iVar9] = pbVar4;
      bVar2 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      if (0xbf < bVar2) {
        bVar2 = *pbVar4;
        while ((bVar2 & 0xc0) == 0x80) {
          pbVar1 = pbVar4 + 1;
          pbVar4 = pbVar4 + 1;
          bVar2 = *pbVar1;
        }
      }
      *(char *)((int)local_c + iVar9) = (char)pbVar4 - *(char *)(local_10 + iVar9);
      iVar9 = iVar9 + 1;
    } while (*pbVar4 != 0);
    if (iVar9 < 1) goto LAB_004315b7;
  }
  uVar5 = FUN_0040de10(param_1);
  if (((uVar5 & 1) != 0) && (0 < (int)local_18)) {
LAB_004314f7:
    iVar8 = 0;
    if (0 < iVar9) {
      do {
        uVar7 = (uint)*(byte *)(iVar8 + (int)local_c);
        if ((int)uVar7 <= (int)local_18) {
          bVar12 = true;
          uVar6 = uVar7;
          pcVar10 = local_14;
          pcVar11 = local_10[iVar8];
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            bVar12 = *pcVar10 == *pcVar11;
            pcVar10 = pcVar10 + 1;
            pcVar11 = pcVar11 + 1;
          } while (bVar12);
          if (bVar12) goto LAB_00431528;
        }
        iVar8 = iVar8 + 1;
        if (iVar9 <= iVar8) break;
      } while( true );
    }
  }
LAB_00431544:
  if (((uVar5 & 2) != 0) && (0 < (int)local_18)) {
LAB_00431553:
    iVar8 = 0;
    if (0 < iVar9) {
      do {
        uVar5 = (uint)*(byte *)(iVar8 + (int)local_c);
        if ((int)uVar5 <= (int)local_18) {
          bVar12 = true;
          uVar7 = uVar5;
          pcVar10 = local_14 + ((int)local_18 - uVar5);
          pcVar11 = local_10[iVar8];
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            bVar12 = *pcVar10 == *pcVar11;
            pcVar10 = pcVar10 + 1;
            pcVar11 = pcVar11 + 1;
          } while (bVar12);
          if (bVar12) goto LAB_00431590;
        }
        iVar8 = iVar8 + 1;
        if (iVar9 <= iVar8) break;
      } while( true );
    }
  }
LAB_004315a2:
  if (local_8 != (byte *)0x0) {
    FUN_004080d0((int)local_10);
  }
LAB_004315b7:
  FUN_0042fcb0(param_1,local_14,local_18);
  return;
LAB_00431528:
  if (iVar9 <= iVar8) goto LAB_00431544;
  local_18 = (void *)((int)local_18 - uVar7);
  local_14 = local_14 + uVar7;
  if ((int)local_18 < 1) goto LAB_00431544;
  goto LAB_004314f7;
LAB_00431590:
  if ((iVar9 <= iVar8) || (local_18 = (void *)((int)local_18 - uVar5), (int)local_18 < 1))
  goto LAB_004315a2;
  goto LAB_00431553;
}


/* END FUNCTION 0x004313a0 */

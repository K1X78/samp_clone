/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00423c70
 * Name: FUN_00423c70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_00423c70(uint *param_1,uint *param_2)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ushort uVar6;
  int in_EAX;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  bool bVar13;
  bool bVar14;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar3 = (ushort)param_2[7];
  uVar4 = (ushort)param_1[7];
  uVar6 = uVar4 | uVar3;
  if ((uVar6 & 1) != 0) {
    return (uVar4 & 1) - (uVar3 & 1);
  }
  if ((uVar6 & 0xc) != 0) {
    if ((uVar3 & 0xc) != 0) {
      if ((uVar4 & 0xc) == 0) {
        return -1;
      }
      if ((uVar4 & uVar3 & 4) == 0) {
        if ((uVar3 & 8) == 0) {
          dVar1 = (double)*(longlong *)param_2;
        }
        else {
          dVar1 = *(double *)(param_2 + 2);
        }
        if ((uVar4 & 8) == 0) {
          dVar2 = (double)*(longlong *)param_1;
        }
        else {
          dVar2 = *(double *)(param_1 + 2);
        }
        if (dVar1 < dVar2) {
          return -1;
        }
        if (dVar1 <= dVar2) {
          return 0;
        }
      }
      else {
        uVar10 = param_2[1];
        uVar5 = param_1[1];
        if ((int)uVar10 <= (int)uVar5) {
          if ((int)uVar10 < (int)uVar5) {
            return -1;
          }
          if (*param_2 < *param_1) {
            return -1;
          }
          if ((int)uVar10 < (int)uVar5) {
            return 0;
          }
          if (((int)uVar10 <= (int)uVar5) && (*param_2 <= *param_1)) {
            return 0;
          }
        }
      }
    }
    return 1;
  }
  if ((uVar6 & 2) != 0) {
    if ((uVar3 & 2) == 0) {
      return 1;
    }
    if ((uVar4 & 2) == 0) {
      return -1;
    }
    if (in_EAX != 0) {
      if (*(char *)((int)param_2 + 0x1f) != *(char *)(in_EAX + 4)) {
        local_50 = 0;
        local_28 = 0;
        local_4c = 0;
        local_24 = 0;
        local_48 = 0;
        local_20 = 0;
        local_44 = 0;
        local_1c = 0;
        local_40 = 0;
        local_18 = 0;
        local_3c = 0;
        local_14 = 0;
        local_38 = 0;
        local_10 = 0;
        local_34 = 0;
        local_c = 0;
        local_30 = 0;
        local_8 = 0;
        local_2c = 0;
        local_4 = 0;
        FUN_0040d3c0(param_2,0x1000);
        FUN_0040d3c0(param_1,0x1000);
        iVar7 = FUN_0041fe60();
        uVar10 = -(uint)(iVar7 != 0) & local_38;
        iVar8 = FUN_0041fe60();
        iVar7 = (**(code **)(in_EAX + 0xc))
                          (*(undefined4 *)(in_EAX + 8),uVar10,iVar7,-(uint)(iVar8 != 0) & local_10,
                           iVar8);
        FUN_0040d250((int)&local_50);
        FUN_0040d250((int)&local_28);
        return iVar7;
      }
      iVar7 = (**(code **)(in_EAX + 0xc))
                        (*(undefined4 *)(in_EAX + 8),param_2[6],param_2[5],param_1[6],param_1[5]);
      return iVar7;
    }
  }
  uVar10 = param_1[6];
  uVar5 = param_2[6];
  uVar9 = uVar10;
  if ((int)uVar5 <= (int)uVar10) {
    uVar9 = uVar5;
  }
  bVar13 = false;
  iVar7 = 0;
  bVar14 = true;
  pbVar11 = (byte *)param_2[5];
  pbVar12 = (byte *)param_1[5];
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    bVar13 = *pbVar11 < *pbVar12;
    bVar14 = *pbVar11 == *pbVar12;
    pbVar11 = pbVar11 + 1;
    pbVar12 = pbVar12 + 1;
  } while (bVar14);
  if (!bVar14) {
    iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
  }
  if (iVar7 == 0) {
    iVar7 = uVar5 - uVar10;
  }
  return iVar7;
}


/* END FUNCTION 0x00423c70 */

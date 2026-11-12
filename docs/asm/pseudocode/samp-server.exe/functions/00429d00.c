/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00429d00
 * Name: FUN_00429d00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00429d00(int *param_1,void *param_2,undefined4 param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  char *pcVar11;
  int local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  undefined1 *local_90;
  int local_8c;
  uint local_88;
  int local_84 [2];
  uint local_7c;
  uint local_78;
  uint local_74;
  ushort local_6a;
  ushort local_68;
  undefined1 local_64 [100];
  
  local_98 = 0;
  local_94 = 0;
  local_a8 = 0;
  local_a4 = 0;
  FUN_004189f0(100,local_64,(undefined **)"Page %d: ");
  iVar1 = *param_1;
  local_9c = (uint)*(ushort *)(iVar1 + 0x18);
  if ((param_2 == (void *)0x0) || (iVar3 = FUN_00419650(param_3,(int)param_1), iVar3 != 0)) {
    return 0;
  }
  iVar3 = FUN_004238d0(param_2,(int *)&local_90);
  puVar6 = local_90;
  if (iVar3 != 0) {
    FUN_004195e0((undefined **)"unable to get the page. error code=%d");
    return 0;
  }
  *local_90 = 0;
  iVar3 = FUN_0041f780();
  if (iVar3 != 0) {
    FUN_004195e0((undefined **)"btreeInitPage() returns error code %d");
    FUN_00427610();
    return 0;
  }
  local_8c = 0;
  local_ac = 0;
  if (*(short *)(puVar6 + 0x10) != 0) {
    do {
      if (param_1[4] == 0) break;
      FUN_004189f0(100,local_64,(undefined **)"On tree page %d cell %d: ");
      iVar3 = (uint)*(ushort *)(puVar6 + 0xc) + *(int *)(puVar6 + 0x40);
      uVar8 = (uint)(CONCAT11(*(undefined1 *)(iVar3 + local_ac * 2),
                              *(undefined1 *)(iVar3 + 1 + local_ac * 2)) &
                    *(ushort *)(puVar6 + 0x12)) + *(int *)(puVar6 + 0x40);
      local_a0 = uVar8;
      FUN_0040c7d0((int)puVar6,uVar8,local_84);
      uVar9 = local_74;
      if (puVar6[2] == '\0') {
        uVar9 = local_74 + local_7c;
      }
      else if (local_ac == 0) {
        local_a8 = local_7c;
        local_a4 = local_78;
        local_98 = local_7c;
        local_94 = local_78;
      }
      else {
        if (((int)local_78 <= (int)local_a4) &&
           (((int)local_78 < (int)local_a4 || (local_7c <= local_a8)))) {
          FUN_004195e0((undefined **)"Rowid %lld out of order (previous was %lld)");
          uVar8 = local_a0;
        }
        local_a8 = local_7c;
        local_a4 = local_78;
      }
      if ((local_6a < uVar9) &&
         (local_68 + uVar8 <= (uint)*(ushort *)(iVar1 + 0x18) + *(int *)(puVar6 + 0x40))) {
        local_88 = ((uVar9 - local_6a) + -5 + local_9c) / (local_9c - 4);
        FUN_00408f80();
        if (*(char *)(iVar1 + 0x14) != '\0') {
          FUN_00429a90((int)param_1);
        }
        FUN_00429b20(param_1,0,local_88,local_64);
      }
      iVar3 = local_8c;
      if (puVar6[3] == '\0') {
        pvVar4 = (void *)FUN_00408f80();
        if (*(char *)(iVar1 + 0x14) != '\0') {
          FUN_00429a90((int)param_1);
        }
        iVar3 = FUN_00429d00(param_1,pvVar4,local_64,&local_98,
                             (uint *)(-(uint)(local_ac != 0) & (uint)&local_a8));
        if ((0 < local_ac) && (iVar3 != local_8c)) {
          FUN_004195e0((undefined **)"Child page depth differs");
        }
      }
      local_8c = iVar3;
      local_ac = local_ac + 1;
    } while (local_ac < (int)(uint)*(ushort *)(puVar6 + 0x10));
  }
  if (puVar6[3] == '\0') {
    pvVar4 = (void *)FUN_00408f80();
    FUN_004189f0(100,local_64,(undefined **)"On page %d at right child: ");
    if (*(char *)(iVar1 + 0x14) != '\0') {
      FUN_00429a90((int)param_1);
    }
    FUN_00429d00(param_1,pvVar4,local_64,(uint *)0x0,
                 (uint *)(-(uint)(*(short *)(puVar6 + 0x10) != 0) & (uint)&local_a8));
    if (puVar6[3] == '\0') goto LAB_0042a148;
  }
  if (puVar6[2] == '\0') goto LAB_0042a148;
  if (param_4 == (uint *)0x0) {
    if (param_5 == (uint *)0x0) goto LAB_0042a148;
    if (((int)param_5[1] < (int)local_94) ||
       (((int)param_5[1] <= (int)local_94 && (*param_5 < local_98)))) goto LAB_0042a148;
    pcVar11 = "Rowid %lld out of order (min less than parent max of %lld)";
  }
  else {
    if (param_5 != (uint *)0x0) {
      if (((int)local_94 <= (int)param_4[1]) &&
         (((int)local_94 < (int)param_4[1] || (local_98 <= *param_4)))) {
        FUN_004195e0((undefined **)"Rowid %lld out of order (min less than parent min of %lld)");
      }
      if (((int)param_5[1] <= (int)local_a4) &&
         (((int)param_5[1] < (int)local_a4 || (*param_5 < local_a8)))) {
        FUN_004195e0((undefined **)"Rowid %lld out of order (max larger than parent max of %lld)");
      }
      *param_4 = local_a8;
      param_4[1] = local_a4;
      goto LAB_0042a148;
    }
    if (((int)local_a4 < (int)param_4[1]) ||
       (((int)local_a4 <= (int)param_4[1] && (local_a8 <= *param_4)))) goto LAB_0042a148;
    pcVar11 = "Rowid %lld out of order (max larger than parent min of %lld)";
  }
  FUN_004195e0((undefined **)pcVar11);
LAB_0042a148:
  local_a0 = (uint)(byte)puVar6[5];
  iVar1 = *(int *)(puVar6 + 0x40);
  puVar5 = FUN_00413690();
  if (puVar5 == (undefined4 *)0x0) {
    param_1[6] = 1;
  }
  else {
    uVar2 = CONCAT11(*(undefined1 *)(local_a0 + 5 + iVar1),*(undefined1 *)(local_a0 + 6 + iVar1));
    uVar8 = (uint)uVar2;
    puVar10 = (undefined4 *)(uVar8 + (int)puVar5);
    for (uVar9 = local_9c - uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    for (uVar9 = local_9c - uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar10 = 0;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    puVar10 = puVar5;
    for (uVar9 = (uint)(uVar2 >> 2); uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar10 = 0x1010101;
      puVar10 = puVar10 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar10 = 1;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    local_ac = 0;
    local_88 = (uint)CONCAT11(*(undefined1 *)(local_a0 + 3 + iVar1),
                              *(undefined1 *)(local_a0 + 4 + iVar1));
    if (local_88 != 0) {
      puVar6 = (undefined1 *)(local_a0 + (3 - (uint)(byte)local_90[3]) * 4 + iVar1);
      do {
        uVar9 = (uint)CONCAT11(*puVar6,puVar6[1]);
        pbVar7 = (byte *)0x400;
        if ((int)uVar9 <= (int)(local_9c - 4)) {
          pbVar7 = FUN_0040c950(uVar9 + iVar1);
        }
        iVar3 = (((uint)pbVar7 & 0xffff) - 1) + uVar9;
        if (iVar3 < (int)local_9c) {
          for (; (int)uVar9 <= iVar3; iVar3 = iVar3 + -1) {
            *(char *)(iVar3 + (int)puVar5) = *(char *)(iVar3 + (int)puVar5) + '\x01';
          }
        }
        else {
          FUN_004195e0((undefined **)"Corruption detected in cell %d on page %d");
        }
        local_ac = local_ac + 1;
        puVar6 = puVar6 + 2;
      } while (local_ac < (int)local_88);
    }
    uVar2 = CONCAT11(*(undefined1 *)(local_a0 + 1 + iVar1),*(undefined1 *)(local_a0 + 2 + iVar1));
    while (uVar9 = (uint)uVar2, uVar9 != 0) {
      for (iVar3 = (CONCAT11(*(undefined1 *)(iVar1 + 2 + uVar9),*(undefined1 *)(iVar1 + 3 + uVar9))
                   - 1) + uVar9; (int)uVar9 <= iVar3; iVar3 = iVar3 + -1) {
        *(char *)(iVar3 + (int)puVar5) = *(char *)(iVar3 + (int)puVar5) + '\x01';
      }
      uVar2 = CONCAT11(*(undefined1 *)(iVar1 + uVar9),*(undefined1 *)(iVar1 + 1 + uVar9));
    }
    uVar9 = 0;
    iVar3 = 0;
    if (0 < (int)local_9c) {
      do {
        if (*(char *)(iVar3 + (int)puVar5) == '\0') {
          uVar9 = uVar9 + 1;
        }
        else if ('\x01' < *(char *)(iVar3 + (int)puVar5)) {
          FUN_004195e0((undefined **)"Multiple uses for byte %d of page %d");
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)local_9c);
    }
    if (uVar9 != *(byte *)(local_a0 + 7 + iVar1)) {
      FUN_004195e0((undefined **)"Fragmentation of %d bytes reported as %d on page %d");
    }
  }
  FUN_0040a700();
  FUN_00427610();
  return local_8c + 1;
}


/* END FUNCTION 0x00429d00 */

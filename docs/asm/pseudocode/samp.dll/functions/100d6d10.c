/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d6d10
 * Name: FUN_100d6d10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d6d10(int *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  ushort uVar1;
  undefined4 *puVar2;
  ushort uVar3;
  uint uVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  ushort *puVar11;
  int iVar12;
  int local_70;
  int local_6c;
  int local_68;
  int local_64 [5];
  undefined1 local_50 [80];
  
  iVar12 = 0;
  local_6c = 0;
  local_68 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 == 0xbab1e)) {
    FUN_100d6460(&local_70);
    if ((-1 < local_70) && (local_70 < param_4)) {
      param_4 = local_70;
    }
    for (puVar2 = (undefined4 *)param_1[1]; puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      uVar4 = FUN_100d5970();
      uVar8 = 0;
      do {
        iVar10 = -1;
        if ((uVar4 & 1 << ((byte)uVar8 & 0x1f)) != 0) {
          iVar10 = local_64[uVar8];
          iVar12 = iVar12 + 1;
        }
        if ((uVar4 & 1 << ((byte)uVar8 + 0x10 & 0x1f)) != 0) {
          iVar10 = local_64[uVar8];
          iVar12 = iVar12 + 1;
        }
      } while ((iVar10 != -1) && (uVar8 = uVar8 + 1, uVar8 < 5));
    }
    puVar5 = (undefined1 *)0x0;
    uVar4 = iVar12 + param_3;
    local_70 = iVar12;
    if (uVar4 != 0) {
      if (uVar4 < 0xb) {
        puVar5 = local_50;
      }
      else {
        puVar5 = (undefined1 *)(*(code *)PTR__malloc_101554b8)(uVar4 * 8);
        if (puVar5 == (undefined1 *)0x0) {
          return 3;
        }
        local_6c = 1;
      }
    }
    iVar12 = 0;
    if (local_70 != 0) {
      for (puVar2 = (undefined4 *)param_1[1]; puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)*puVar2) {
        uVar4 = FUN_100d5970();
        uVar8 = 0;
        do {
          iVar10 = -1;
          if ((uVar4 & 1 << ((byte)uVar8 & 0x1f)) != 0) {
            *(int *)(puVar5 + iVar12 * 8) = local_64[uVar8];
            *(undefined2 *)(puVar5 + iVar12 * 8 + 4) = 1;
            iVar10 = local_64[uVar8];
            iVar12 = iVar12 + 1;
          }
          if ((uVar4 & 1 << ((byte)uVar8 + 0x10 & 0x1f)) != 0) {
            *(int *)(puVar5 + iVar12 * 8) = local_64[uVar8];
            *(undefined2 *)(puVar5 + iVar12 * 8 + 4) = 4;
            iVar10 = local_64[uVar8];
            iVar12 = iVar12 + 1;
          }
        } while ((iVar10 != -1) && (uVar8 = uVar8 + 1, uVar8 < 5));
      }
    }
    if (param_3 != 0) {
      pbVar6 = puVar5 + iVar12 * 8 + 4;
      pbVar7 = (byte *)(param_2 + 4);
      iVar12 = iVar12 + param_3;
      iVar10 = param_3;
      do {
        *(undefined4 *)(pbVar6 + -4) = *(undefined4 *)(pbVar7 + -4);
        pbVar6[0] = 0;
        pbVar6[1] = 0;
        if ((*pbVar7 & 1) != 0) {
          pbVar6[0] = 1;
          pbVar6[1] = 0;
        }
        if ((*pbVar7 & 2) != 0) {
          *pbVar6 = *pbVar6 | 2;
        }
        if ((*pbVar7 & 4) != 0) {
          *pbVar6 = *pbVar6 | 4;
        }
        pbVar6 = pbVar6 + 8;
        pbVar7 = pbVar7 + 8;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if (((iVar12 != 0) && (iVar12 = FUN_100cda80(puVar5,iVar12,param_4), 0 < iVar12)) &&
       (local_68 = iVar12, param_3 != 0)) {
      puVar11 = (ushort *)(param_2 + 6);
      puVar9 = (ushort *)(puVar5 + local_70 * 8 + 6);
      do {
        uVar1 = *puVar9;
        uVar3 = (ushort)((uVar1 & 1) != 0);
        if ((uVar1 & 4) != 0) {
          uVar3 = uVar3 | 4;
        }
        if ((uVar1 & 2) != 0) {
          uVar3 = uVar3 | 2;
        }
        *puVar11 = uVar3;
        puVar9 = puVar9 + 4;
        puVar11 = puVar11 + 4;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    if (local_6c != 0) {
      (*(code *)PTR__free_101554bc)(puVar5);
    }
    if (param_5 != (int *)0x0) {
      *param_5 = local_68;
    }
    return 0;
  }
  return 1;
}


/* END FUNCTION 0x100d6d10 */

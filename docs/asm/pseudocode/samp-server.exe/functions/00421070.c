/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00421070
 * Name: FUN_00421070
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __cdecl FUN_00421070(int param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int *in_EAX;
  int iVar3;
  uint uVar4;
  short *psVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  char *extraout_ECX;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  int *local_44;
  int local_40;
  int local_3c;
  int *local_38;
  uint local_34;
  int local_30;
  char *local_2c;
  int local_28;
  uint local_24;
  char *local_20;
  uint local_1c;
  undefined *local_18;
  undefined4 local_14;
  undefined *local_10;
  undefined4 local_c;
  char *local_8;
  uint local_4;
  
  iVar2 = *in_EAX;
  local_24 = (uint)(param_3 != 0);
  local_34 = (uint)*(byte *)(local_24 + 0x19 + (int)param_2);
  if ((local_34 == 0) || ((undefined4 *)param_2[local_24 + 7] != (undefined4 *)0x0)) {
    return (undefined4 *)param_2[local_24 + 7];
  }
  local_30 = 0;
  local_3c = 0;
  local_48 = (undefined4 *)0x0;
  local_50 = (undefined4 *)0x0;
  local_44 = (int *)0x0;
  local_38 = (int *)0x0;
  local_4c = (undefined4 *)0x0;
  iVar3 = FUN_0041bb30(in_EAX,param_1,(int)param_2,&local_30,&local_3c);
  if (iVar3 == 0) {
    local_40 = 0;
    if (0 < param_2[5]) {
      local_18 = &DAT_004b7660;
      local_14 = 3;
      local_10 = &DAT_004b765c;
      local_c = 3;
      do {
        if (local_3c == 0) {
          local_28 = param_2[9];
        }
        else {
          local_28 = *(int *)(local_3c + local_40 * 4);
        }
        if (local_30 == 0) {
          local_20 = "oid";
        }
        else {
          local_20 = *(char **)(*(int *)(param_1 + 0x10) +
                               *(int *)(*(int *)(local_30 + 8) + local_40 * 4) * 0x18);
        }
        local_28 = local_28 * 0x18;
        pcVar11 = *(char **)(local_28 + *(int *)(*param_2 + 0x10));
        local_8 = pcVar11;
        local_1c = FUN_00408380(local_20);
        local_4 = FUN_00408380(pcVar11);
        FUN_0041a0a0(in_EAX);
        local_2c = (char *)FUN_0041a0a0(in_EAX);
        FUN_0041a0a0(in_EAX);
        FUN_0041a0a0(in_EAX);
        FUN_0041a0a0(in_EAX);
        local_50 = FUN_0041a0d0(iVar2,local_50);
        if (param_3 != 0) {
          FUN_0041a0a0(in_EAX);
          FUN_0041a0a0(in_EAX);
          FUN_0041a0a0(in_EAX);
          local_2c = (char *)FUN_0041a0a0(in_EAX);
          FUN_0041a0a0(in_EAX);
          FUN_0041a0a0(in_EAX);
          FUN_0041a0a0(in_EAX);
          local_4c = FUN_0041a0d0(iVar2,local_4c);
        }
        if (local_34 != 6) {
          if (local_34 == 9) {
            if (param_3 == 0) goto LAB_00421345;
            FUN_0041a0a0(in_EAX);
            FUN_0041a0a0(in_EAX);
            FUN_0041a0a0(in_EAX);
          }
          else if ((local_34 == 8) &&
                  (puVar6 = *(undefined4 **)(*(int *)(*param_2 + 0x10) + 4 + local_28),
                  puVar6 != (undefined4 *)0x0)) {
            FUN_00420310(iVar2,puVar6,0);
          }
          else {
            FUN_0041a0a0(in_EAX);
          }
          local_44 = FUN_0041a560(local_44);
          FUN_00415af0(local_44,in_EAX,0);
        }
LAB_00421345:
        local_40 = local_40 + 1;
      } while (local_40 < param_2[5]);
    }
    FUN_00408130(iVar2);
    local_2c = *(char **)(*param_2 + 4);
    uVar4 = FUN_00408380(local_2c);
    if (local_34 == 6) {
      local_8 = extraout_ECX;
      local_4 = uVar4;
      local_28 = FUN_0041a000("foreign key constraint failed",iVar2,0x38);
      if (local_28 != 0) {
        *(undefined1 *)(local_28 + 1) = 2;
      }
      iVar17 = 0;
      iVar16 = 0;
      iVar15 = 0;
      iVar14 = 0;
      iVar13 = 0;
      iVar3 = 0;
      psVar5 = FUN_0041b4e0();
      FUN_0041a560((int *)0x0);
      local_38 = FUN_0041bff0(in_EAX,(int)psVar5,(int)local_50,iVar3,iVar13,iVar14,iVar15,iVar16,
                              iVar17);
      local_50 = (undefined4 *)0x0;
    }
    uVar1 = *(undefined1 *)(iVar2 + 0xea);
    *(undefined1 *)(iVar2 + 0xea) = 0;
    puVar6 = FUN_00417b70();
    if (puVar6 != (undefined4 *)0x0) {
      local_48 = puVar6 + 9;
      puVar6[7] = local_48;
      puVar6[0xd] = uVar4;
      puVar6[0xc] = puVar6 + 0x13;
      pcVar11 = local_2c;
      pcVar12 = (char *)(puVar6 + 0x13);
      for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar12 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar7 = FUN_00420310(iVar2,local_50,1);
      puVar6[0xe] = uVar7;
      piVar8 = FUN_00415950(iVar2,local_44,1);
      puVar6[0xf] = piVar8;
      puVar9 = FUN_0041a470(iVar2,local_38,1);
      puVar6[0xb] = puVar9;
      if (local_4c != (undefined4 *)0x0) {
        local_4c = FUN_0041a0a0(in_EAX);
        uVar7 = FUN_00420310(iVar2,local_4c,1);
        puVar6[3] = uVar7;
      }
    }
    *(undefined1 *)(iVar2 + 0xea) = uVar1;
    FUN_004158d0(iVar2,(int)local_50);
    FUN_004158d0(iVar2,(int)local_4c);
    FUN_0040e580();
    FUN_0040fce0(iVar2,(int)local_38);
    if (*(char *)(iVar2 + 0x1e) != '\x01') {
      if (local_34 == 6) {
        *(undefined1 *)local_48 = 0x74;
      }
      else if ((local_34 == 9) && (param_3 == 0)) {
        *(undefined1 *)local_48 = 0x6a;
      }
      else {
        *(undefined1 *)local_48 = 0x6b;
      }
      local_48[1] = puVar6;
      puVar6[5] = *(undefined4 *)(param_1 + 0x44);
      puVar6[6] = *(undefined4 *)(param_1 + 0x44);
      param_2[local_24 + 7] = (int)puVar6;
      *(char *)(puVar6 + 2) = (param_3 != 0) + 'j';
      return puVar6;
    }
    FUN_00416920((int)puVar6);
  }
  return (undefined4 *)0x0;
}


/* END FUNCTION 0x00421070 */

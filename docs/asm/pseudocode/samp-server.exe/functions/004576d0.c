/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004576d0
 * Name: FUN_004576d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_004576d0(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  bool bVar7;
  uint local_a0 [4];
  uint local_90 [4];
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70 [9];
  uint local_4c;
  uint local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30 [4];
  uint local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  
  uVar3 = 0;
  do {
    local_70[0] = (uint)*(ushort *)((int)&DAT_004ba788 + uVar3);
    local_70[1] = 0;
    local_70[2] = 0;
    local_70[3] = 0;
    FUN_004530f0(param_1,local_70,local_70);
    uVar1 = 0;
    while (local_70[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (3 < uVar1) {
        return uVar1 & 0xffffff00;
      }
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x200);
  local_a0[0] = *param_1;
  local_a0[1] = param_1[1];
  local_a0[2] = param_1[2];
  local_a0[3] = param_1[3];
  FUN_00451030((int)local_a0);
  uVar3 = 0;
  local_7c = local_a0[1];
  local_80 = local_a0[0];
  local_78 = local_a0[2];
  local_74 = local_a0[3];
  while ((local_80 & 1) == 0) {
    FUN_00451300(&local_80);
    uVar3 = uVar3 + 1;
  }
  local_70[5] = 0;
  local_70[6] = 0;
  local_70[8] = *param_1;
  local_70[7] = 0;
  local_4c = param_1[1];
  local_48 = param_1[2];
  local_44 = param_1[3];
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_70[4] = 1;
  local_34 = 0;
  uVar1 = local_18;
  do {
    do {
      do {
        local_18 = uVar1;
        if (param_2 == 0) {
          return 1;
        }
        param_2 = param_2 + -1;
        iVar4 = 0;
        do {
          uVar1 = FUN_0045af90();
          local_30[iVar4] = uVar1;
          iVar4 = iVar4 + 1;
        } while (iVar4 < 4);
        FUN_004530f0(local_30,local_a0,local_30);
        FUN_00454880(local_30,&local_80,param_1,local_90);
        iVar4 = 4;
        bVar7 = true;
        puVar5 = local_90;
        puVar6 = local_70 + 4;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar7 = *puVar5 == *puVar6;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        } while (bVar7);
        uVar1 = local_18;
      } while (bVar7);
      iVar4 = 4;
      bVar7 = true;
      puVar5 = local_90;
      puVar6 = local_a0;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar7 = *puVar5 == *puVar6;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (bVar7);
      uVar2 = uVar3;
    } while (bVar7);
    while (1 < uVar2) {
      uVar2 = uVar2 - 1;
      iVar4 = 4;
      bVar7 = true;
      puVar5 = local_90;
      puVar6 = local_a0;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar7 = *puVar5 == *puVar6;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (bVar7);
      if (bVar7) break;
      local_18 = uVar1;
      FUN_00452530(local_90,(int)local_90,&local_20);
      FUN_004528c0(&local_20,local_70 + 8,&local_20);
      local_90[0] = local_20;
      local_90[1] = local_1c;
      local_90[3] = local_14;
      iVar4 = 4;
      bVar7 = true;
      local_90[2] = local_18;
      puVar5 = local_90;
      puVar6 = local_70 + 4;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar7 = *puVar5 == *puVar6;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (bVar7);
      uVar1 = local_18;
      if (bVar7) goto LAB_0045794f;
    }
    iVar4 = 4;
    local_18 = 0;
    bVar7 = true;
    puVar5 = local_90;
    puVar6 = local_a0;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar7 = *puVar5 == *puVar6;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (bVar7);
    if (!bVar7) {
LAB_0045794f:
      return local_18 & 0xffffff00;
    }
  } while( true );
}


/* END FUNCTION 0x004576d0 */

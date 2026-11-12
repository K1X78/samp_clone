/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003fd80
 * Name: FUN_1003fd80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1003fd80(uint *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
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
  undefined4 local_30 [4];
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar3 = 0;
  do {
    local_70[0] = (uint)*(ushort *)((int)&DAT_1011ab58 + uVar3);
    local_70[1] = 0;
    local_70[2] = 0;
    local_70[3] = 0;
    FUN_1003ba40(param_1,local_70,local_70);
    uVar1 = 0;
    while (local_70[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (3 < uVar1) {
        return 0;
      }
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x200);
  local_a0[0] = *param_1;
  local_a0[1] = param_1[1];
  local_a0[2] = param_1[2];
  local_a0[3] = param_1[3];
  FUN_10039610(local_a0);
  uVar3 = 0;
  local_7c = local_a0[1];
  local_80 = local_a0[0];
  local_78 = local_a0[2];
  local_74 = local_a0[3];
  while ((local_80 & 1) == 0) {
    FUN_10039ac0(&local_80);
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
  do {
    do {
      do {
        if (param_2 == 0) {
          return 1;
        }
        param_2 = param_2 + -1;
        iVar4 = 0;
        do {
          uVar2 = FUN_100436c0();
          local_30[iVar4] = uVar2;
          iVar4 = iVar4 + 1;
        } while (iVar4 < 4);
        FUN_1003ba40(local_30,local_a0,local_30);
        FUN_1003d1f0(local_30,&local_80,param_1,local_90);
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
      uVar1 = uVar3;
    } while (bVar7);
    while (1 < uVar1) {
      uVar1 = uVar1 - 1;
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
      FUN_1003ae80(local_90,local_90,&local_20);
      FUN_1003b210(&local_20,local_70 + 8,&local_20);
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
      if (bVar7) {
        return 0;
      }
    }
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
    if (!bVar7) {
      return 0;
    }
  } while( true );
}


/* END FUNCTION 0x1003fd80 */

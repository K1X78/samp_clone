/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003c930
 * Name: FUN_1003c930
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003c930(undefined4 *param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  undefined4 local_100 [8];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0 [8];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  uint local_80 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [16];
  
  puVar5 = local_100;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *param_1;
    param_1 = param_1 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar6 = local_80;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_e0 = 0;
  local_44 = 0;
  local_dc = 0;
  local_d8 = 0;
  puVar5 = local_c0;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *param_3;
    param_3 = param_3 + 1;
    puVar5 = puVar5 + 1;
  }
  local_a0 = 0;
  local_9c = 0;
  local_d4 = 0;
  local_98 = 0;
  local_d0 = 0;
  local_94 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_90 = 0;
  local_8c = 0;
  local_40[0] = 1;
  puVar5 = local_40;
  for (iVar2 = 0xf; puVar5 = puVar5 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
  }
  local_c4 = 0;
  local_88 = 0;
  local_84 = 0;
  FUN_1003b0c0(local_100,local_c0,local_100);
  iVar2 = 0;
  uVar4 = 0;
  do {
    iVar7 = 0x20;
    for (uVar3 = local_80[uVar4]; uVar3 != 0; uVar3 = uVar3 >> 1) {
      iVar1 = iVar2;
      if ((uVar3 & 1) != 0) {
        for (; iVar1 != 0; iVar1 = iVar1 + -1) {
          FUN_1003b3f0(local_100);
          FUN_1003b0c0(local_100,local_c0,local_100);
          iVar2 = 0;
        }
        FUN_1003b4a0(local_40,local_100,local_40);
        FUN_1003b0c0(local_40,local_c0,local_40);
      }
      iVar2 = iVar2 + 1;
      iVar7 = iVar7 + -1;
    }
    iVar2 = iVar2 + iVar7;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 8);
  puVar5 = local_40;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_4 = *puVar5;
    puVar5 = puVar5 + 1;
    param_4 = param_4 + 1;
  }
  return;
}


/* END FUNCTION 0x1003c930 */

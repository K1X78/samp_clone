/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00453fc0
 * Name: FUN_00453fc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00453fc0(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint local_100 [8];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  uint local_c0 [8];
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
  uint local_40 [16];
  
  puVar5 = local_100;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *param_1;
    param_1 = param_1 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_80;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
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
  FUN_00452770(local_100,local_c0,local_100);
  iVar2 = 0;
  uVar4 = 0;
  do {
    iVar6 = 0x20;
    for (uVar3 = local_80[uVar4]; uVar3 != 0; uVar3 = uVar3 >> 1) {
      iVar1 = iVar2;
      if ((uVar3 & 1) != 0) {
        for (; iVar1 != 0; iVar1 = iVar1 + -1) {
          FUN_00452aa0(local_100);
          FUN_00452770(local_100,local_c0,local_100);
          iVar2 = 0;
        }
        FUN_00452b50(local_40,(int)local_100,local_40);
        FUN_00452770(local_40,local_c0,local_40);
      }
      iVar2 = iVar2 + 1;
      iVar6 = iVar6 + -1;
    }
    iVar2 = iVar2 + iVar6;
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


/* END FUNCTION 0x00453fc0 */

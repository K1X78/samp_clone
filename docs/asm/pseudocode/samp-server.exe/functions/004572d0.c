/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004572d0
 * Name: FUN_004572d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl
FUN_004572d0(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,int param_6)

{
  uint uVar1;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  uint local_b0 [4];
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_d0 = *param_4;
  local_cc = param_4[1];
  local_c8 = param_4[2];
  local_c4 = param_4[3];
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0;
  FUN_004510a0((int)&local_d0);
  FUN_004528c0(param_3,&local_d0,&local_d0);
  local_11c = local_cc;
  local_120 = local_d0;
  local_118 = local_c8;
  local_114 = local_c4;
  local_a0 = *param_4;
  local_9c = param_4[1];
  local_98 = param_4[2];
  local_94 = param_4[3];
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  FUN_004528c0(param_2,&local_a0,&local_40);
  local_10c = local_3c;
  local_110 = local_40;
  local_108 = local_38;
  local_104 = local_34;
  FUN_00454880(&local_110,&local_120,param_4,&local_100);
  local_f0 = *param_5;
  local_ec = param_5[1];
  local_e8 = param_5[2];
  local_e4 = param_5[3];
  local_e0 = 0;
  local_dc = 0;
  local_d8 = 0;
  local_d4 = 0;
  FUN_004510a0((int)&local_f0);
  FUN_004528c0(param_3,&local_f0,&local_f0);
  local_10c = local_ec;
  local_110 = local_f0;
  local_108 = local_e8;
  local_104 = local_e4;
  local_80 = *param_5;
  local_7c = param_5[1];
  local_78 = param_5[2];
  local_74 = param_5[3];
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  FUN_004528c0(param_2,&local_80,&local_20);
  local_11c = local_1c;
  local_120 = local_20;
  local_118 = local_18;
  local_114 = local_14;
  FUN_00454880(&local_120,&local_110,param_5,local_b0);
  uVar1 = FUN_00450ff0((int)local_b0,(int)&local_100);
  if ((char)uVar1 == '\0') {
    FUN_004510c0(local_b0,&local_100);
    FUN_00451120(local_b0,param_5);
  }
  else {
    FUN_004510c0(local_b0,&local_100);
  }
  FUN_00452530(local_b0,param_6,param_1);
  FUN_004528c0(param_1,&local_80,param_1);
  FUN_00452a10(param_1,(int)&local_a0);
  local_5c = local_fc;
  local_50 = 0;
  local_58 = local_f8;
  local_4c = 0;
  local_60 = local_100;
  local_48 = 0;
  local_54 = local_f4;
  local_44 = 0;
  FUN_00451180(param_1,&local_60);
  return;
}


/* END FUNCTION 0x004572d0 */

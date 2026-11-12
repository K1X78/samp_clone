/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003f980
 * Name: FUN_1003f980
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003f980(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 param_6)

{
  char cVar1;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [16];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_20;
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
  FUN_10039750(&local_d0);
  FUN_1003b210(param_3,&local_d0,&local_d0);
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
  FUN_1003b210(param_2,&local_a0,&local_40);
  local_10c = local_3c;
  local_110 = local_40;
  local_108 = local_38;
  local_104 = local_34;
  FUN_1003d1f0(&local_110,&local_120,param_4,&local_100);
  local_f0 = *param_5;
  local_ec = param_5[1];
  local_e8 = param_5[2];
  local_e4 = param_5[3];
  local_e0 = 0;
  local_dc = 0;
  local_d8 = 0;
  local_d4 = 0;
  FUN_10039750(&local_f0);
  FUN_1003b210(param_3,&local_f0,&local_f0);
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
  FUN_1003b210(param_2,&local_80,&local_20);
  local_11c = local_1c;
  local_120 = local_20;
  local_118 = local_18;
  local_114 = local_14;
  FUN_1003d1f0(&local_120,&local_110,param_5,local_b0);
  cVar1 = FUN_100395b0(local_b0,&local_100);
  if (cVar1 == '\0') {
    FUN_10039790(local_b0,&local_100);
    FUN_100397f0(local_b0,param_5);
  }
  else {
    FUN_10039790(local_b0,&local_100);
  }
  FUN_1003ae80(local_b0,param_6,param_1);
  FUN_1003b210(param_1,&local_80,param_1);
  FUN_1003b360(param_1,&local_a0);
  local_5c = local_fc;
  local_50 = 0;
  local_58 = local_f8;
  local_4c = 0;
  local_60 = local_100;
  local_48 = 0;
  local_54 = local_f4;
  local_44 = 0;
  FUN_10039850(param_1,&local_60);
  return;
}


/* END FUNCTION 0x1003f980 */

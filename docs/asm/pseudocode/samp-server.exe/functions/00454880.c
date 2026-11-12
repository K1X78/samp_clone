/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00454880
 * Name: FUN_00454880
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00454880(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20 [4];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_60 = *param_1;
  local_5c = param_1[1];
  local_58 = param_1[2];
  local_54 = param_1[3];
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_20[0] = *param_2;
  local_44 = 0;
  local_20[1] = param_2[1];
  local_20[2] = param_2[2];
  local_20[3] = param_2[3];
  local_40 = *param_3;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_3c = param_3[1];
  local_38 = param_3[2];
  local_7c = 0;
  local_78 = 0;
  local_34 = param_3[3];
  local_74 = 0;
  local_30 = 0;
  local_70 = 0;
  local_2c = 0;
  local_28 = 0;
  local_6c = 0;
  local_68 = 0;
  local_24 = 0;
  local_64 = 0;
  local_80 = 1;
  FUN_004528c0(&local_60,&local_40,&local_60);
  iVar4 = 0;
  uVar3 = 0;
  do {
    uVar2 = local_20[uVar3];
    iVar5 = 0x20;
    if (uVar2 != 0) {
      iVar5 = 0x20;
      do {
        iVar1 = iVar4;
        if ((uVar2 & 1) != 0) {
          for (; iVar1 != 0; iVar1 = iVar1 + -1) {
            FUN_00451620(&local_60);
            FUN_004528c0(&local_60,&local_40,&local_60);
            iVar4 = 0;
          }
          FUN_00453390(&local_80,(int)&local_60,&local_80);
          FUN_004528c0(&local_80,&local_40,&local_80);
        }
        uVar2 = uVar2 >> 1;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (uVar2 != 0);
    }
    iVar4 = iVar4 + iVar5;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  *param_4 = local_80;
  param_4[1] = local_7c;
  param_4[2] = local_78;
  param_4[3] = local_74;
  return;
}


/* END FUNCTION 0x00454880 */

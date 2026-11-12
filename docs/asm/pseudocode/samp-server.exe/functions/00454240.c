/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00454240
 * Name: FUN_00454240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00454240(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40 [4];
  uint local_30 [4];
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10 [4];
  
  local_4c = 0;
  local_48 = 0;
  local_50 = 1;
  local_44 = 0;
  FUN_00452ca0(param_2,param_1,local_30,local_10);
  local_60 = *param_2;
  local_5c = param_2[1];
  local_58 = param_2[2];
  local_54 = param_2[3];
  FUN_004510c0(&local_60,local_30);
  local_40[0] = *param_1;
  local_40[1] = param_1[1];
  local_40[2] = param_1[2];
  local_40[3] = param_1[3];
  do {
    FUN_00452ca0(local_40,local_10,local_30,local_40);
    uVar1 = 0;
    while (local_40[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (3 < uVar1) goto LAB_004542ee;
    }
    FUN_00452e40(&local_60,(int)local_30,&local_50,param_2,&local_20);
    FUN_00452ca0(local_10,local_40,local_30,local_10);
    uVar1 = 0;
    while (local_10[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (3 < uVar1) goto LAB_00454355;
    }
    FUN_00452e40(&local_20,(int)local_30,&local_60,param_2,&local_50);
    FUN_00452ca0(local_40,local_10,local_30,local_40);
    uVar1 = 0;
    while (local_40[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (3 < uVar1) goto LAB_004543be;
    }
    FUN_00452e40(&local_50,(int)local_30,&local_20,param_2,&local_60);
    FUN_00452ca0(local_10,local_40,local_30,local_10);
    uVar1 = 0;
    while (local_10[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (3 < uVar1) {
LAB_004542ee:
        *param_3 = local_60;
        param_3[1] = local_5c;
        param_3[2] = local_58;
        param_3[3] = local_54;
        return;
      }
    }
    FUN_00452e40(&local_60,(int)local_30,&local_50,param_2,&local_20);
    FUN_00452ca0(local_40,local_10,local_30,local_40);
    uVar1 = 0;
    while (local_40[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (3 < uVar1) {
LAB_00454355:
        *param_3 = local_20;
        param_3[1] = local_1c;
        param_3[2] = local_18;
        param_3[3] = local_14;
        return;
      }
    }
    FUN_00452e40(&local_20,(int)local_30,&local_60,param_2,&local_50);
    FUN_00452ca0(local_10,local_40,local_30,local_10);
    uVar1 = 0;
    while (local_10[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (3 < uVar1) {
LAB_004543be:
        *param_3 = local_50;
        param_3[1] = local_4c;
        param_3[2] = local_48;
        param_3[3] = local_44;
        return;
      }
    }
    FUN_00452e40(&local_50,(int)local_30,&local_20,param_2,&local_60);
  } while( true );
}


/* END FUNCTION 0x00454240 */

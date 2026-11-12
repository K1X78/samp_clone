/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003cbb0
 * Name: FUN_1003cbb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003cbb0(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40 [4];
  undefined1 local_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10 [4];
  
  local_4c = 0;
  local_48 = 0;
  local_50 = 1;
  local_44 = 0;
  FUN_1003b5f0(param_2,param_1,local_30,local_10);
  local_60 = *param_2;
  local_5c = param_2[1];
  local_58 = param_2[2];
  local_54 = param_2[3];
  FUN_10039790(&local_60,local_30);
  local_40[0] = *param_1;
  local_40[1] = param_1[1];
  local_40[2] = param_1[2];
  local_40[3] = param_1[3];
  do {
    FUN_1003b5f0(local_40,local_10,local_30,local_40);
    uVar1 = 0;
    while (local_40[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (3 < uVar1) goto LAB_1003cc5e;
    }
    FUN_1003b790(&local_60,local_30,&local_50,param_2,&local_20);
    FUN_1003b5f0(local_10,local_40,local_30,local_10);
    uVar1 = 0;
    while (local_10[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (3 < uVar1) goto LAB_1003ccc5;
    }
    FUN_1003b790(&local_20,local_30,&local_60,param_2,&local_50);
    FUN_1003b5f0(local_40,local_10,local_30,local_40);
    uVar1 = 0;
    while (local_40[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (3 < uVar1) goto LAB_1003cd2e;
    }
    FUN_1003b790(&local_50,local_30,&local_20,param_2,&local_60);
    FUN_1003b5f0(local_10,local_40,local_30,local_10);
    uVar1 = 0;
    while (local_10[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (3 < uVar1) {
LAB_1003cc5e:
        *param_3 = local_60;
        param_3[1] = local_5c;
        param_3[2] = local_58;
        param_3[3] = local_54;
        return;
      }
    }
    FUN_1003b790(&local_60,local_30,&local_50,param_2,&local_20);
    FUN_1003b5f0(local_40,local_10,local_30,local_40);
    uVar1 = 0;
    while (local_40[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (3 < uVar1) {
LAB_1003ccc5:
        *param_3 = local_20;
        param_3[1] = local_1c;
        param_3[2] = local_18;
        param_3[3] = local_14;
        return;
      }
    }
    FUN_1003b790(&local_20,local_30,&local_60,param_2,&local_50);
    FUN_1003b5f0(local_10,local_40,local_30,local_10);
    uVar1 = 0;
    while (local_10[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (3 < uVar1) {
LAB_1003cd2e:
        *param_3 = local_50;
        param_3[1] = local_4c;
        param_3[2] = local_48;
        param_3[3] = local_44;
        return;
      }
    }
    FUN_1003b790(&local_50,local_30,&local_20,param_2,&local_60);
  } while( true );
}


/* END FUNCTION 0x1003cbb0 */

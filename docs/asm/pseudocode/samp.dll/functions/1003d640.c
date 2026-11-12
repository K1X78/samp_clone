/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003d640
 * Name: FUN_1003d640
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003d640(undefined4 *param_1,undefined4 *param_2)

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
  int local_20 [4];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4c = 0;
  local_48 = 0;
  local_50 = 1;
  local_44 = 0;
  FUN_1003ce50(param_1,local_40);
  FUN_1003b5f0(param_1,local_40,local_30,local_20);
  uVar1 = 0;
  while (local_20[uVar1] == 0) {
    uVar1 = uVar1 + 1;
    if (3 < uVar1) {
LAB_1003d691:
      *param_2 = local_50;
      param_2[1] = local_4c;
      param_2[2] = local_48;
      param_2[3] = local_44;
      return;
    }
  }
  local_60 = *param_1;
  local_5c = param_1[1];
  local_58 = param_1[2];
  local_54 = param_1[3];
  FUN_10039790(&local_60,local_30);
  FUN_1003b5f0(local_40,local_20,local_30,local_40);
  uVar1 = 0;
  do {
    if (local_40[uVar1] != 0) {
      do {
        FUN_1003b790(local_30,&local_60,&local_50,param_1,&local_10);
        FUN_1003b5f0(local_20,local_40,local_30,local_20);
        uVar1 = 0;
        while (local_20[uVar1] == 0) {
          uVar1 = uVar1 + 1;
          if (3 < uVar1) goto LAB_1003d774;
        }
        FUN_1003b790(local_30,&local_10,&local_60,param_1,&local_50);
        FUN_1003b5f0(local_40,local_20,local_30,local_40);
        uVar1 = 0;
        while (local_40[uVar1] == 0) {
          uVar1 = uVar1 + 1;
          if (3 < uVar1) goto LAB_1003d691;
        }
        FUN_1003b790(local_30,&local_50,&local_10,param_1,&local_60);
        FUN_1003b5f0(local_20,local_40,local_30,local_20);
        uVar1 = 0;
        while (local_20[uVar1] == 0) {
          uVar1 = uVar1 + 1;
          if (3 < uVar1) goto LAB_1003d70e;
        }
        FUN_1003b790(local_30,&local_60,&local_50,param_1,&local_10);
        FUN_1003b5f0(local_40,local_20,local_30,local_40);
        uVar1 = 0;
        while (local_40[uVar1] == 0) {
          uVar1 = uVar1 + 1;
          if (3 < uVar1) {
LAB_1003d774:
            *param_2 = local_10;
            param_2[1] = local_c;
            param_2[2] = local_8;
            param_2[3] = local_4;
            return;
          }
        }
        FUN_1003b790(local_30,&local_10,&local_60,param_1,&local_50);
        FUN_1003b5f0(local_20,local_40,local_30,local_20);
        uVar1 = 0;
        while (local_20[uVar1] == 0) {
          uVar1 = uVar1 + 1;
          if (3 < uVar1) goto LAB_1003d691;
        }
        FUN_1003b790(local_30,&local_50,&local_10,param_1,&local_60);
        FUN_1003b5f0(local_40,local_20,local_30,local_40);
        uVar1 = 0;
        while (local_40[uVar1] == 0) {
          uVar1 = uVar1 + 1;
          if (3 < uVar1) goto LAB_1003d70e;
        }
      } while( true );
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
LAB_1003d70e:
  *param_2 = local_60;
  param_2[1] = local_5c;
  param_2[2] = local_58;
  param_2[3] = local_54;
  return;
}


/* END FUNCTION 0x1003d640 */

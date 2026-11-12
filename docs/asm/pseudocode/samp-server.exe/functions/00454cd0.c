/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00454cd0
 * Name: FUN_00454cd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00454cd0(uint *param_1,uint *param_2)

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
  uint local_20 [4];
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_4c = 0;
  local_48 = 0;
  local_50 = 1;
  local_44 = 0;
  FUN_004544e0(param_1,local_40);
  FUN_00452ca0(param_1,local_40,local_30,local_20);
  uVar1 = 0;
  while (local_20[uVar1] == 0) {
    uVar1 = uVar1 + 1;
    if (3 < uVar1) {
LAB_00454d21:
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
  FUN_004510c0(&local_60,local_30);
  FUN_00452ca0(local_40,local_20,local_30,local_40);
  uVar1 = 0;
  do {
    if (local_40[uVar1] != 0) {
      do {
        FUN_00452e40(local_30,(int)&local_60,&local_50,param_1,&local_10);
        FUN_00452ca0(local_20,local_40,local_30,local_20);
        uVar1 = 0;
        while (local_20[uVar1] == 0) {
          uVar1 = uVar1 + 1;
          if (3 < uVar1) goto LAB_00454e04;
        }
        FUN_00452e40(local_30,(int)&local_10,&local_60,param_1,&local_50);
        FUN_00452ca0(local_40,local_20,local_30,local_40);
        uVar1 = 0;
        while (local_40[uVar1] == 0) {
          uVar1 = uVar1 + 1;
          if (3 < uVar1) goto LAB_00454d21;
        }
        FUN_00452e40(local_30,(int)&local_50,&local_10,param_1,&local_60);
        FUN_00452ca0(local_20,local_40,local_30,local_20);
        uVar1 = 0;
        while (local_20[uVar1] == 0) {
          uVar1 = uVar1 + 1;
          if (3 < uVar1) goto LAB_00454d9e;
        }
        FUN_00452e40(local_30,(int)&local_60,&local_50,param_1,&local_10);
        FUN_00452ca0(local_40,local_20,local_30,local_40);
        uVar1 = 0;
        while (local_40[uVar1] == 0) {
          uVar1 = uVar1 + 1;
          if (3 < uVar1) {
LAB_00454e04:
            *param_2 = local_10;
            param_2[1] = local_c;
            param_2[2] = local_8;
            param_2[3] = local_4;
            return;
          }
        }
        FUN_00452e40(local_30,(int)&local_10,&local_60,param_1,&local_50);
        FUN_00452ca0(local_20,local_40,local_30,local_20);
        uVar1 = 0;
        while (local_20[uVar1] == 0) {
          uVar1 = uVar1 + 1;
          if (3 < uVar1) goto LAB_00454d21;
        }
        FUN_00452e40(local_30,(int)&local_50,&local_10,param_1,&local_60);
        FUN_00452ca0(local_40,local_20,local_30,local_40);
        uVar1 = 0;
        while (local_40[uVar1] == 0) {
          uVar1 = uVar1 + 1;
          if (3 < uVar1) goto LAB_00454d9e;
        }
      } while( true );
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
LAB_00454d9e:
  *param_2 = local_60;
  param_2[1] = local_5c;
  param_2[2] = local_58;
  param_2[3] = local_54;
  return;
}


/* END FUNCTION 0x00454cd0 */

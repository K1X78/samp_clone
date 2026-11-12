/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00452530
 * Name: FUN_00452530
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00452530(uint *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_20 = *param_1;
  local_1c = param_1[1];
  local_18 = param_1[2];
  local_14 = param_1[3];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  local_10 = 0;
  param_3[5] = 0;
  local_c = 0;
  local_8 = 0;
  param_3[6] = 0;
  uVar3 = 0;
  local_4 = 0;
  param_3[7] = 0;
  uVar2 = 0;
  do {
    uVar4 = 0x20;
    for (uVar1 = *(uint *)(param_2 + uVar2 * 4); uVar1 != 0; uVar1 = uVar1 >> 1) {
      if ((uVar1 & 1) != 0) {
        if (uVar3 != 0) {
          FUN_004511e0(&local_20,uVar3);
          uVar3 = 0;
        }
        FUN_00451180(param_3,&local_20);
      }
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 + 0xffff;
    }
    uVar3 = uVar3 + (uVar4 & 0xffff);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  return;
}


/* END FUNCTION 0x00452530 */

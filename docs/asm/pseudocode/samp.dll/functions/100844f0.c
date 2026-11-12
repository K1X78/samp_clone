/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100844f0
 * Name: FUN_100844f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100844f0(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uStack_a4;
  int *piStack_a0;
  undefined4 uStack_9c;
  tagRECT local_80;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_80.left = *param_2;
  local_80.top = param_2[1];
  local_80.right = param_2[2];
  local_80.bottom = param_2[3];
  uStack_9c = 0x10084537;
  OffsetRect(&local_80,*(int *)(param_1 + 0x116),*(int *)(param_1 + 0x11a));
  if (*(char *)(param_1 + 0x14) != '\0') {
    uStack_9c = 0x1008454e;
    OffsetRect(&local_80,0,*(int *)(param_1 + 0x126));
  }
  local_60 = param_3;
  local_70 = (float)local_80.left - 0.5;
  local_44 = param_3;
  local_28 = param_3;
  local_c = param_3;
  local_68 = 0x3f000000;
  local_64 = 0x3f800000;
  local_5c = 0;
  local_58 = 0;
  local_6c = (float)local_80.top - 0.5;
  local_4c = 0x3f000000;
  local_48 = 0x3f800000;
  local_40 = 0;
  local_3c = 0;
  local_30 = 0x3f000000;
  local_2c = 0x3f800000;
  local_24 = 0;
  local_54 = (float)local_80.right - 0.5;
  local_20 = 0;
  local_14 = 0x3f000000;
  local_10 = 0x3f800000;
  local_8 = 0;
  local_4 = 0;
  local_34 = (float)local_80.bottom - 0.5;
  piVar1 = *(int **)(*(int *)(param_1 + 0x13a) + 0x20);
  local_50 = local_6c;
  local_38 = local_54;
  local_1c = local_70;
  local_18 = local_34;
  (**(code **)(**(int **)(*(int *)(param_1 + 0x13a) + 4) + 0x28))();
  uStack_9c = 0x10084664;
  (**(code **)(*piVar1 + 0x160))();
  uStack_9c = DAT_10140bf8;
  uStack_a4 = 0x10084674;
  piStack_a0 = piVar1;
  (**(code **)(*piVar1 + 0x164))();
  uStack_a4 = 3;
  (**(code **)(*piVar1 + 0x10c))(piVar1,0,1);
  (**(code **)(*piVar1 + 0x10c))(piVar1,0,4,3);
  (**(code **)(*piVar1 + 0x14c))(piVar1,6,2,&uStack_a4,0x1c);
  (**(code **)(*piVar1 + 0x10c))(piVar1,0,1,4);
  uVar3 = 4;
  piVar2 = piVar1;
  (**(code **)(*piVar1 + 0x10c))(piVar1,0,4,4);
  (**(code **)(*piVar1 + 0x15c))(piVar1,uVar3);
  (**(code **)(*piVar2 + 8))(piVar2);
  return 0;
}


/* END FUNCTION 0x100844f0 */

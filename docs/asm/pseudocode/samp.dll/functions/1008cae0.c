/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008cae0
 * Name: FUN_1008cae0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall
FUN_1008cae0(int param_1,undefined4 param_2,int param_3,LONG *param_4,char param_5,
            undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uStack_80;
  uint uStack_7c;
  LONG LStack_78;
  LONG LStack_74;
  undefined1 local_70 [12];
  LONG local_64;
  LONG LStack_60;
  LONG LStack_5c;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar5 = 0;
  if (*(float *)(param_3 + 0x68) == 0.0) {
    return 0;
  }
  local_70._0_4_ = *param_4;
  local_70._4_4_ = param_4[1];
  local_70._8_4_ = param_4[2];
  local_64 = param_4[3];
  OffsetRect((LPRECT)local_70,*(int *)(param_1 + 0x116),*(int *)(param_1 + 0x11a));
  if (*(char *)(param_1 + 0x14) != '\0') {
    OffsetRect((LPRECT)local_70,0,*(int *)(param_1 + 0x126));
  }
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_14 = 0x3f800000;
  local_28 = 0x3f800000;
  local_3c = 0x3f800000;
  local_50 = 0x3f800000;
  piVar1 = *(int **)(*(int *)(param_1 + 0x13a) + 4);
  (**(code **)(*piVar1 + 0x14))(piVar1,&local_50);
  iVar2 = FUN_10086b40(*(undefined4 *)(param_3 + 4));
  if (param_5 != '\0') {
    local_64 = LStack_74;
    local_70._8_4_ = LStack_78;
    LStack_60 = local_70._0_4_;
    LStack_5c = local_70._4_4_;
    OffsetRect((LPRECT)(local_70 + 8),1,1);
    if (*(int **)(iVar2 + 0x104) == (int *)0x0) {
      FUN_1008c170(*(undefined4 *)(param_3 + 4));
    }
    else {
      iVar4 = **(int **)(iVar2 + 0x104);
      iVar3 = FUN_100f9324();
      uVar5 = (**(code **)(iVar4 + 0x38))
                        (*(undefined4 *)(iVar2 + 0x104),
                         *(undefined4 *)(*(int *)(param_1 + 0x13a) + 4),param_2,param_6,local_70 + 8
                         ,*(undefined4 *)(param_3 + 8),iVar3 << 0x18);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
    }
  }
  if (*(int *)(iVar2 + 0x104) != 0) {
    if (*(float *)(param_3 + 0x5c) < 1.0) {
      if (*(float *)(param_3 + 0x5c) < 0.0 == (*(float *)(param_3 + 0x5c) == 0.0)) {
        uVar5 = FUN_100f9324();
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 0xff;
    }
    if (*(float *)(param_3 + 0x60) < 1.0) {
      if (*(float *)(param_3 + 0x60) < 0.0 == (*(float *)(param_3 + 0x60) == 0.0)) {
        uStack_80 = FUN_100f9324();
      }
      else {
        uStack_80 = 0;
      }
    }
    else {
      uStack_80 = 0xff;
    }
    if (*(float *)(param_3 + 100) < 1.0) {
      if (*(float *)(param_3 + 100) < 0.0 == (*(float *)(param_3 + 100) == 0.0)) {
        uStack_7c = FUN_100f9324();
      }
      else {
        uStack_7c = 0;
      }
    }
    else {
      uStack_7c = 0xff;
    }
    if (*(float *)(param_3 + 0x68) < 1.0) {
      if (*(float *)(param_3 + 0x68) < 0.0 == (*(float *)(param_3 + 0x68) == 0.0)) {
        iVar4 = FUN_100f9324();
      }
      else {
        iVar4 = 0;
      }
    }
    else {
      iVar4 = 0xff;
    }
    uVar5 = (**(code **)(**(int **)(iVar2 + 0x104) + 0x38))
                      (*(int **)(iVar2 + 0x104),*(undefined4 *)(*(int *)(param_1 + 0x13a) + 4),
                       param_2,param_6,&LStack_78,*(undefined4 *)(param_3 + 8),
                       ((iVar4 << 8 | uVar5) << 8 | uStack_80) << 8 | uStack_7c);
    return (-1 < (int)uVar5) - 1 & uVar5;
  }
  FUN_1008c170(*(undefined4 *)(param_3 + 4));
  return (-1 < (int)uVar5) - 1 & uVar5;
}


/* END FUNCTION 0x1008cae0 */

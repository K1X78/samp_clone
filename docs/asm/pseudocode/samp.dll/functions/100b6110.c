/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b6110
 * Name: FUN_100b6110
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ulonglong __fastcall
FUN_100b6110(undefined4 param_1,undefined4 param_2,float *param_3,float *param_4,int param_5,
            float *param_6,float param_7,char param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  float *local_c;
  int local_8;
  
  if ((param_5 == 0) || (*(int *)(param_5 + 0x14) == 0)) {
LAB_100b6252:
    return CONCAT44(param_2,param_5) & 0xffffffffffffff00;
  }
  local_50 = 0.0;
  local_4c = 0.0;
  local_48 = 0.0;
  local_44 = 0;
  local_40 = 0.0;
  local_3c = 0.0;
  local_c = &local_50;
  local_38 = 0.0;
  local_34 = 0;
  param_5 = FUN_100a7630((int)*(short *)(param_5 + 0x22));
  iVar1 = *(int *)(param_5 + 0x14);
  param_2 = 0;
  if (iVar1 == 0) goto LAB_100b6252;
  local_8 = param_5;
  if (param_8 != '\0') {
    local_18 = param_6[1];
    local_1c = *param_6;
    local_14 = param_6[2];
    local_10 = *(undefined4 *)(iVar1 + 0x24);
    uVar3 = FUN_100b3df0(&local_1c);
    param_2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    param_5 = 0;
    if ((int)uVar3 == 0) goto LAB_100b6252;
  }
  local_30 = 0;
  local_50 = *param_3 - *param_6;
  local_2c = 0;
  local_28 = 0;
  puVar4 = &local_30;
  local_4c = param_3[1] - param_6[1];
  local_48 = param_3[2] - param_6[2];
  local_40 = *param_4 - *param_6;
  local_3c = param_4[1] - param_6[1];
  local_38 = param_4[2] - param_6[2];
  local_24 = *(float *)(iVar1 + 0x24);
  if (0.5 <= local_24) {
    if (1.0 <= local_24) goto LAB_100b622b;
  }
  else {
    local_24 = 0.5;
  }
  local_24 = local_24 * 1.5;
LAB_100b622b:
  local_24 = local_24 * param_7;
  uVar2 = (*(code *)0x417470)(local_c);
  DAT_102abe58 = (char)uVar2;
  return CONCAT44(puVar4,uVar2);
}


/* END FUNCTION 0x100b6110 */

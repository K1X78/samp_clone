/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10081980
 * Name: FUN_10081980
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_10081980(undefined4 param_1,byte param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
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
  undefined4 local_48 [5];
  undefined4 local_34;
  uint local_18;
  
  FUN_1007cbc0();
  cVar1 = FUN_10079a80();
  if (cVar1 != '\0') {
    return 0x80004005;
  }
  FUN_1007cbc0(param_5);
  FUN_1007a800(param_5);
  FUN_1007cbc0(param_6);
  FUN_1007a880(param_6);
  uVar5 = param_7;
  FUN_1007cbc0(param_7);
  FUN_1007ad40(uVar5);
  FUN_1007cbc0(param_7);
  FUN_1007adc0(param_7);
  uVar5 = 1;
  FUN_1007cbc0(1);
  FUN_100799c0(uVar5);
  FUN_1007cbc0();
  cVar1 = FUN_10079800();
  if (cVar1 == '\0') {
    FUN_1007cbc0();
    cVar1 = FUN_10079980();
    if (cVar1 != '\0') {
      return 0x80004005;
    }
    uVar2 = FUN_10081510("Direct3D Window",0,0,0,0x80000000,0x80000000);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  FUN_1007e000(1);
  puVar4 = local_48;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_18 = (uint)param_2;
  local_48[0] = param_1;
  local_84 = 1;
  local_80 = 0;
  local_7c = 1;
  local_78 = 0;
  local_74 = 0;
  local_70 = 2;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48[4] = param_3;
  local_34 = param_4;
  FUN_1007cbc0();
  iVar3 = FUN_1007a340();
  if (iVar3 != 0) {
    FUN_1007cbc0();
    local_48[4] = FUN_1007a340();
  }
  FUN_1007cbc0();
  iVar3 = FUN_1007a3c0();
  if (iVar3 != 0) {
    FUN_1007cbc0();
    local_34 = FUN_1007a3c0();
  }
  FUN_1007cbc0();
  iVar3 = FUN_1007a0c0();
  if (iVar3 != -1) {
    FUN_1007cbc0();
    local_48[0] = FUN_1007a0c0();
  }
  FUN_1007cbc0();
  cVar1 = FUN_1007a1c0();
  if (cVar1 != '\0') {
    local_18 = 0;
    FUN_1007cbc0();
    iVar3 = FUN_1007a340();
    if (iVar3 == 0) {
      FUN_1007cbc0();
      iVar3 = FUN_1007a3c0();
      if (iVar3 == 0) {
        local_70 = 0;
      }
    }
  }
  FUN_1007cbc0();
  cVar1 = FUN_1007a140();
  if (cVar1 != '\0') {
    local_18 = 1;
  }
  FUN_1007cbc0();
  cVar1 = FUN_1007a440();
  if (cVar1 != '\0') {
    local_48[1] = 1;
    local_80 = 1;
  }
  FUN_1007cbc0();
  cVar1 = FUN_1007a4c0();
  if (cVar1 != '\0') {
    local_48[1] = 2;
    local_80 = 1;
  }
  FUN_1007cbc0();
  cVar1 = FUN_1007a540();
  if (cVar1 == '\0') {
    FUN_1007cbc0();
    cVar1 = FUN_1007a5c0();
    if (cVar1 == '\0') {
      FUN_1007cbc0();
      cVar1 = FUN_1007a640();
      if (cVar1 == '\0') goto LAB_10081c06;
      local_48[3] = 0x20;
    }
    else {
      local_48[3] = 0x40;
    }
  }
  else {
    local_48[3] = 0x50;
  }
  local_74 = 1;
LAB_10081c06:
  uVar2 = FUN_1007f340(local_48,local_48,&local_84);
  if (-1 < (int)uVar2) {
    uVar2 = FUN_1007f770(local_48,0,0,1);
    return uVar2 & (-1 < (int)uVar2) - 1;
  }
  FUN_1007bf40(uVar2);
  return uVar2;
}


/* END FUNCTION 0x10081980 */

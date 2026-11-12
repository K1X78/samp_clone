/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10080440
 * Name: FUN_10080440
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_10080440(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
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
  undefined4 local_48 [4];
  int local_38;
  int local_34;
  uint local_18;
  
  puVar1 = (undefined4 *)FUN_1007d630(&local_90);
  puVar5 = local_48;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar5 = puVar5 + 1;
  }
  local_18 = (uint)(local_18 == 0);
  local_90 = 1;
  local_8c = 2;
  local_88 = 1;
  local_84 = 0;
  local_80 = 2;
  local_78 = 0;
  local_74 = 2;
  local_70 = 2;
  local_6c = 2;
  local_68 = 2;
  local_64 = 2;
  local_60 = 2;
  local_5c = 0;
  local_58 = 0;
  if (local_18 == 0) {
    FUN_1007cbc0();
    iVar4 = FUN_100787e0();
    FUN_1007cbc0();
    iVar2 = FUN_10078860();
  }
  else {
    FUN_1007cbc0();
    iVar4 = FUN_100788e0();
    FUN_1007cbc0();
    iVar2 = FUN_10078960();
  }
  if ((iVar4 == 0) || (iVar2 == 0)) {
    local_7c = 0;
  }
  else {
    local_7c = 2;
    local_38 = iVar4;
    local_34 = iVar2;
  }
  iVar4 = FUN_1007f340(local_48,local_48,&local_90);
  if (((-1 < iVar4) && (iVar4 = FUN_1007f770(local_48,0,0,0), iVar4 < 0)) && (iVar4 != -0x7fffbffc))
  {
    local_18 = (uint)(local_18 == 0);
    if (local_18 == 0) {
      FUN_1007cbc0();
      iVar2 = FUN_100787e0();
      FUN_1007cbc0();
      iVar3 = FUN_10078860();
    }
    else {
      FUN_1007cbc0();
      iVar2 = FUN_100788e0();
      FUN_1007cbc0();
      iVar3 = FUN_10078960();
    }
    if ((iVar2 == 0) || (iVar3 == 0)) {
      local_7c = 0;
    }
    else {
      local_7c = 2;
      local_38 = iVar2;
      local_34 = iVar3;
    }
    FUN_1007f340(local_48,local_48,&local_90);
    iVar2 = FUN_1007f770(local_48,0,0,0);
    if (iVar2 < 0) {
      FUN_1007cb00(0);
    }
  }
  return iVar4;
}


/* END FUNCTION 0x10080440 */

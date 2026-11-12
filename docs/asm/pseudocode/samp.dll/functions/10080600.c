/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10080600
 * Name: FUN_10080600
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_10080600(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
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
  int local_48 [18];
  
  piVar1 = (int *)FUN_1007d630(&local_90);
  piVar4 = local_48;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar4 = piVar4 + 1;
  }
  if (local_48[1] == 1) {
    local_48[1] = 2;
  }
  else if (local_48[1] == 2) {
    local_48[1] = 1;
  }
  local_90 = 1;
  local_8c = 1;
  local_88 = 2;
  local_84 = 2;
  local_80 = 2;
  local_7c = 2;
  local_78 = 2;
  local_74 = 2;
  local_70 = 2;
  local_6c = 2;
  local_68 = 2;
  local_64 = 2;
  local_60 = 2;
  local_5c = 2;
  local_58 = 2;
  iVar3 = FUN_1007f340(local_48,local_48,&local_90);
  if (((-1 < iVar3) && (iVar3 = FUN_1007f770(local_48,0,0,0), iVar3 < 0)) && (iVar3 != -0x7fffbffc))
  {
    if (local_48[1] == 1) {
      local_48[1] = 2;
    }
    else if (local_48[1] == 2) {
      local_48[1] = 1;
    }
    FUN_1007f340(local_48,local_48,&local_90);
    iVar2 = FUN_1007f770(local_48,0,0,0);
    if (iVar2 < 0) {
      FUN_1007cb00(0);
    }
  }
  return iVar3;
}


/* END FUNCTION 0x10080600 */

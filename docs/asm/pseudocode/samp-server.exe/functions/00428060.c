/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00428060
 * Name: FUN_00428060
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall
FUN_00428060(undefined4 param_1,int param_2,uint *param_3,char param_4,void *param_5,int param_6)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  uint local_8;
  int local_4;
  
  local_4 = *(int *)(in_EAX + 0x48);
  local_8 = FUN_00427310(*param_3,param_6,param_2);
  if (local_8 != 0) {
    return local_8;
  }
  *(int *)(in_EAX + 0x48) = param_6;
  if ((param_4 == '\x05') || (param_4 == '\x01')) {
    uVar2 = FUN_00427f70();
    if (uVar2 != 0) {
      return uVar2;
    }
  }
  else {
    iVar1 = FUN_00408f80();
    if ((iVar1 != 0) && (FUN_00427460('\x04',param_6), local_8 != 0)) {
      return local_8;
    }
  }
  uVar2 = 0;
  if ((param_4 != '\x01') && (uVar2 = FUN_004238d0(param_5,(int *)&local_8), uVar2 == 0)) {
    uVar2 = FUN_00423650(*(int *)(local_8 + 0x44));
    if (uVar2 != 0) {
      FUN_00427610();
      return uVar2;
    }
    uVar2 = FUN_0041fa00(local_4,param_6,param_4);
    local_8 = uVar2;
    FUN_00427610();
    if (uVar2 == 0) {
      FUN_00427460(param_4,(int)param_5);
      uVar2 = local_8;
    }
  }
  return uVar2;
}


/* END FUNCTION 0x00428060 */

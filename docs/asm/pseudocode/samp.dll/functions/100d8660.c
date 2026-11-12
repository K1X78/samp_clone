/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d8660
 * Name: FUN_100d8660
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100d8660(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  int local_4;
  
  uVar2 = (uint)(param_2 == *(int *)(param_1 + 0x19c));
  local_4 = 0;
  iVar1 = (**(code **)(param_1 + 0x1b8 + uVar2 * 4))(param_1,uVar2,param_3,param_4,&local_4);
  *param_5 = iVar1;
  if (-1 < iVar1) {
    return 0;
  }
  if (local_4 == 0) {
    local_4 = 0x37;
  }
  else if (local_4 == 0x51) {
    *param_5 = 0;
    return 0;
  }
  return local_4;
}


/* END FUNCTION 0x100d8660 */

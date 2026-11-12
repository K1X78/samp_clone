/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e0c10
 * Name: FUN_100e0c10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e0c10(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_4;
  
  iVar2 = 0;
  local_4 = 0;
  param_1[0x155] = param_2;
  if (param_2 == 0) {
    if (param_3 == 0) {
      local_4 = 0x1b;
    }
    else {
      iVar1 = *param_1;
      if (*(int *)(iVar1 + 0x6c) != 0) {
        FUN_100dec30(iVar1,3,2);
      }
      iVar2 = FUN_100cfdf0(iVar1,param_3,param_1[0x151],param_1[0x152]);
      if (iVar2 == 0) {
        FUN_100e07d0(param_3);
        local_4 = 0x1b;
      }
      if (*(int *)(iVar1 + 0x6c) != 0) {
        FUN_100dec70(iVar1,3);
      }
    }
  }
  param_1[0x153] = iVar2;
  param_1[0x154] = 1;
  return local_4;
}


/* END FUNCTION 0x100e0c10 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cfeb0
 * Name: FUN_100cfeb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100cfeb0(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_8;
  int local_4;
  
  piVar1 = param_1;
  iVar3 = *param_1;
  local_8 = 0;
  *param_4 = 0;
  param_1 = (int *)0xffffffff;
  if (*(int *)(iVar3 + 0x6c) != 0) {
    FUN_100dec30(iVar3,3,2);
  }
  local_8 = FUN_100cfcf0(param_3);
  if (local_8 != 0) {
    FUN_100d8ae0(iVar3,"Hostname %s was found in DNS cache\n",param_2);
    *(int *)(local_8 + 8) = *(int *)(local_8 + 8) + 1;
    param_1 = (int *)0x0;
  }
  if (*(int *)(iVar3 + 0x6c) != 0) {
    FUN_100dec70(iVar3,3);
  }
  if (local_8 == 0) {
    iVar2 = FUN_100e46c0(piVar1);
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    iVar2 = thunk_FUN_100ce410(piVar1,param_2,param_3,&local_4);
    if (iVar2 == 0) {
      if (local_4 != 0) {
        iVar3 = FUN_100ce2e0(piVar1,&local_8);
        if (iVar3 != 0) {
          return 0xffffffff;
        }
        *param_4 = local_8;
        return (uint)(local_8 == 0);
      }
    }
    else {
      if (*(int *)(iVar3 + 0x6c) != 0) {
        FUN_100dec30(iVar3,3,2);
      }
      local_8 = FUN_100cfdf0(iVar3,iVar2,param_2,param_3);
      if (*(int *)(iVar3 + 0x6c) != 0) {
        FUN_100dec70(iVar3,3);
      }
      if (local_8 == 0) {
        FUN_100e07d0(iVar2);
        *param_4 = local_8;
        return (uint)param_1;
      }
      param_1 = (int *)0x0;
    }
  }
  *param_4 = local_8;
  return (uint)param_1;
}


/* END FUNCTION 0x100cfeb0 */

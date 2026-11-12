/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10084ef0
 * Name: FUN_10084ef0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10084ef0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  undefined1 local_4 [4];
  
  iVar2 = param_2;
  *(int *)(param_1 + 0x119) = param_2;
  FUN_1009b770(*(undefined4 *)(param_1 + 0x122),0,&local_c);
  FUN_1009b770(iVar2,0,&local_10);
  iVar1 = lstrlenW(*(LPCWSTR *)(param_1 + 0x4d));
  if (iVar2 == iVar1) {
    local_14 = local_10;
  }
  else {
    FUN_1009b770(iVar2,1,&local_14);
  }
  if (local_10 < local_c) {
    *(int *)(param_1 + 0x122) = iVar2;
    return;
  }
  if ((*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x68)) + local_c < local_14) {
    iVar2 = (*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x70)) + local_14;
    FUN_1009b7b0(iVar2,&param_2,local_4);
    FUN_1009b770(param_2,0,&local_8);
    if (local_8 < iVar2) {
      param_2 = param_2 + 1;
    }
    *(int *)(param_1 + 0x122) = param_2;
  }
  return;
}


/* END FUNCTION 0x10084ef0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009b7b0
 * Name: FUN_1009b7b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_1009b7b0(undefined4 *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  *param_3 = 0;
  *param_4 = 0;
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    iVar1 = FUN_1009b310();
    if (iVar1 < 0) goto LAB_1009b7ef;
  }
  iVar1 = (*(code *)PTR_FUN_10140c08)(*(undefined4 *)((int)param_1 + 0xe),param_2,param_3,param_4);
LAB_1009b7ef:
  if ((*param_3 == -1) && (*param_4 == 1)) {
    *param_3 = 0;
    *param_4 = 0;
    return iVar1;
  }
  iVar2 = lstrlenW((LPCWSTR)*param_1);
  if ((iVar2 < *param_3) && (*param_4 == 0)) {
    iVar2 = lstrlenW((LPCWSTR)*param_1);
    *param_3 = iVar2;
    *param_4 = 1;
  }
  return iVar1;
}


/* END FUNCTION 0x1009b7b0 */

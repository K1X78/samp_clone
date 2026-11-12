/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009b630
 * Name: FUN_1009b630
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_1009b630(int *param_1,int param_2,LPCWSTR param_3,uint param_4)

{
  LPCWSTR lpString;
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = lstrlenW((LPCWSTR)*param_1);
  if ((int)uVar1 < param_2) {
    return uVar1 & 0xffffff00;
  }
  if (param_4 == 0xffffffff) {
    param_4 = lstrlenW(param_3);
  }
  iVar2 = lstrlenW((LPCWSTR)*param_1);
  uVar1 = iVar2 + param_4;
  if (0xfffe < (int)uVar1) {
LAB_1009b671:
    return uVar1 & 0xffffff00;
  }
  iVar2 = lstrlenW((LPCWSTR)*param_1);
  if (param_1[1] <= (int)(iVar2 + param_4)) {
    iVar2 = lstrlenW((LPCWSTR)*param_1);
    uVar1 = FUN_1009b240(iVar2 + 1 + param_4);
    if ((char)uVar1 == '\0') goto LAB_1009b671;
  }
  lpString = (LPCWSTR)*param_1;
  iVar2 = lstrlenW(lpString);
  _memmove(lpString + param_2 + param_4,lpString + param_2,(iVar2 + (1 - param_2)) * 2);
  puVar3 = (undefined4 *)(*param_1 + param_2 * 2);
  for (uVar1 = (param_4 & 0x7fffffff) >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar3 = *(undefined4 *)param_3;
    param_3 = param_3 + 2;
    puVar3 = puVar3 + 1;
  }
  for (uVar1 = param_4 * 2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(char *)puVar3 = (char)*param_3;
    param_3 = (LPCWSTR)((int)param_3 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  *(undefined1 *)((int)param_1 + 0xd) = 1;
  return CONCAT31((int3)(param_4 * 2 >> 8),1);
}


/* END FUNCTION 0x1009b630 */

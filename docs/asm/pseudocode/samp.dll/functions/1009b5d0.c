/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009b5d0
 * Name: FUN_1009b5d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1009b5d0(undefined4 *param_1,int param_2)

{
  LPCWSTR _Dst;
  int iVar1;
  
  iVar1 = lstrlenW((LPCWSTR)*param_1);
  if ((iVar1 != 0) && (-1 < param_2)) {
    iVar1 = lstrlenW((LPCWSTR)*param_1);
    if (param_2 < iVar1) {
      _Dst = (LPCWSTR)*param_1 + param_2;
      iVar1 = lstrlenW((LPCWSTR)*param_1);
      _memmove(_Dst,_Dst + 1,(iVar1 - param_2) * 2);
      *(undefined1 *)((int)param_1 + 0xd) = 1;
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x1009b5d0 */

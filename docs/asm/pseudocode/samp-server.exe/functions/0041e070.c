/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041e070
 * Name: FUN_0041e070
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl
FUN_0041e070(int param_1,undefined1 *param_2,undefined4 *param_3,uint param_4,int *param_5)

{
  bool bVar1;
  int iVar2;
  LPCWSTR lpFileName;
  undefined3 extraout_var;
  HANDLE pvVar3;
  undefined4 uVar4;
  DWORD dwFlagsAndAttributes;
  uint uVar5;
  DWORD DVar6;
  DWORD local_118;
  undefined1 *local_114;
  undefined1 local_108 [264];
  
  local_114 = param_2;
  param_3[2] = 0xffffffff;
  if (param_2 == (undefined1 *)0x0) {
    local_114 = local_108;
    iVar2 = FUN_00418ba0(0x105);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  lpFileName = (LPCWSTR)FUN_00409ab0();
  if (lpFileName != (LPCWSTR)0x0) {
    uVar5 = param_4 & 2;
    DVar6 = (-(uint)(uVar5 != 0) & 0x40000000) + 0x80000000;
    if ((param_4 & 0x10) == 0) {
      local_118 = ((param_4 & 4) != 0) + 3;
    }
    else {
      local_118 = 1;
    }
    dwFlagsAndAttributes = (-(uint)((param_4 & 8) != 0) & 0x4000082) + 0x80;
    bVar1 = FUN_004091c0();
    if (CONCAT31(extraout_var,bVar1) == 0) {
      pvVar3 = CreateFileA((LPCSTR)lpFileName,DVar6,3,(LPSECURITY_ATTRIBUTES)0x0,local_118,
                           dwFlagsAndAttributes,(HANDLE)0x0);
    }
    else {
      pvVar3 = CreateFileW(lpFileName,DVar6,3,(LPSECURITY_ATTRIBUTES)0x0,local_118,
                           dwFlagsAndAttributes,(HANDLE)0x0);
    }
    if (pvVar3 != (HANDLE)0xffffffff) {
      if (param_5 != (int *)0x0) {
        *param_5 = (uVar5 != 0) + 1;
      }
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
      param_3[2] = pvVar3;
      *param_3 = &DAT_004b2f48;
      param_3[4] = 0;
      param_3[1] = param_1;
      param_3[6] = 0;
      param_3[7] = param_2;
      uVar4 = FUN_00418ef0(local_114,param_1);
      param_3[5] = uVar4;
      _free(lpFileName);
      return 0;
    }
    DVar6 = GetLastError();
    param_3[4] = DVar6;
    _free(lpFileName);
    if (uVar5 != 0) {
      iVar2 = FUN_0041e070(param_1,param_2,param_3,param_4 & 0xfffffffd | 1,param_5);
      return iVar2;
    }
    iVar2 = FUN_0041d7f0();
    return iVar2;
  }
  return 7;
}


/* END FUNCTION 0x0041e070 */

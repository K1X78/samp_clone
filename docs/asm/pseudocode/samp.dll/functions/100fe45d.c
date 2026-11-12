/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fe45d
 * Name: __stati64
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __stati64(uchar *param_1,int *param_2)

{
  undefined2 uVar1;
  uchar *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  char *_Str;
  size_t sVar6;
  int iVar7;
  UINT UVar8;
  BOOL BVar9;
  DWORD DVar10;
  longlong lVar11;
  _FILETIME local_268;
  HANDLE local_260;
  _SYSTEMTIME local_25c;
  char local_24c [260];
  _WIN32_FIND_DATAA local_148;
  undefined4 local_8;
  
  local_8 = DAT_10155bc4;
  puVar2 = __mbspbrk(param_1,"?*");
  if (puVar2 != (uchar *)0x0) {
    puVar3 = (undefined4 *)FUN_100fdc77();
    *puVar3 = 2;
    puVar3 = (undefined4 *)FUN_100fdc80();
    *puVar3 = 2;
    return 0xffffffff;
  }
  if (param_1[1] == ':') {
    if ((*param_1 != '\0') && (param_1[2] == '\0')) {
      puVar3 = (undefined4 *)FUN_100fdc77();
      *puVar3 = 2;
      puVar3 = (undefined4 *)FUN_100fdc80();
      *puVar3 = 2;
      return 0xffffffff;
    }
    uVar4 = __mbctolower((int)(char)*param_1);
    iVar5 = uVar4 - 0x60;
  }
  else {
    iVar5 = __getdrive();
  }
  local_260 = FindFirstFileA((LPCSTR)param_1,&local_148);
  if (local_260 == (HANDLE)0xffffffff) {
    puVar2 = __mbspbrk(param_1,"./\\");
    if ((((puVar2 == (uchar *)0x0) ||
         (_Str = __fullpath(local_24c,(char *)param_1,0x104), _Str == (char *)0x0)) ||
        ((sVar6 = _strlen(_Str), sVar6 != 3 && (iVar7 = _IsRootUNCName(), iVar7 == 0)))) ||
       (UVar8 = GetDriveTypeA(_Str), UVar8 < 2)) {
      puVar3 = (undefined4 *)FUN_100fdc77();
      *puVar3 = 2;
      puVar3 = (undefined4 *)FUN_100fdc80();
      *puVar3 = 2;
      return 0xffffffff;
    }
    local_148.dwFileAttributes = 0x10;
    local_148.nFileSizeHigh = 0;
    local_148.nFileSizeLow = 0;
    local_148.cFileName[0] = '\0';
    iVar7 = ___loctotime_t(0x7bc,1,1,0,0,0,0xffffffff);
    param_2[9] = iVar7;
    param_2[8] = iVar7;
    param_2[10] = iVar7;
  }
  else {
    BVar9 = FileTimeToLocalFileTime(&local_148.ftLastWriteTime,&local_268);
    if ((BVar9 == 0) || (BVar9 = FileTimeToSystemTime(&local_268,&local_25c), BVar9 == 0)) {
LAB_100fe791:
      DVar10 = GetLastError();
      __dosmaperr(DVar10);
      FindClose(local_260);
      return 0xffffffff;
    }
    iVar7 = ___loctotime_t(local_25c.wYear,local_25c.wMonth,local_25c.wDay,local_25c.wHour,
                           local_25c.wMinute,local_25c.wSecond,0xffffffff);
    param_2[9] = iVar7;
    if ((local_148.ftLastAccessTime.dwLowDateTime != 0) ||
       (local_148.ftLastAccessTime.dwHighDateTime != 0)) {
      BVar9 = FileTimeToLocalFileTime(&local_148.ftLastAccessTime,&local_268);
      if ((BVar9 == 0) || (BVar9 = FileTimeToSystemTime(&local_268,&local_25c), BVar9 == 0))
      goto LAB_100fe791;
      iVar7 = ___loctotime_t(local_25c.wYear,local_25c.wMonth,local_25c.wDay,local_25c.wHour,
                             local_25c.wMinute,local_25c.wSecond,0xffffffff);
    }
    param_2[8] = iVar7;
    if ((local_148.ftCreationTime.dwLowDateTime == 0) &&
       (local_148.ftCreationTime.dwHighDateTime == 0)) {
      iVar7 = param_2[9];
    }
    else {
      BVar9 = FileTimeToLocalFileTime(&local_148.ftCreationTime,&local_268);
      if ((BVar9 == 0) || (BVar9 = FileTimeToSystemTime(&local_268,&local_25c), BVar9 == 0))
      goto LAB_100fe791;
      iVar7 = ___loctotime_t(local_25c.wYear,local_25c.wMonth,local_25c.wDay,local_25c.wHour,
                             local_25c.wMinute,local_25c.wSecond,0xffffffff);
    }
    param_2[10] = iVar7;
    FindClose(local_260);
  }
  uVar1 = ___dtoxmode(local_148.dwFileAttributes,param_1);
  *(undefined2 *)((int)param_2 + 6) = uVar1;
  *(undefined2 *)(param_2 + 2) = 1;
  lVar11 = __allmul(local_148.nFileSizeHigh,0,0,1);
  param_2[6] = (int)(lVar11 + (ulonglong)local_148.nFileSizeLow);
  *param_2 = iVar5 + -1;
  param_2[4] = iVar5 + -1;
  param_2[7] = (int)(lVar11 + (ulonglong)local_148.nFileSizeLow >> 0x20);
  *(undefined2 *)(param_2 + 1) = 0;
  *(undefined2 *)(param_2 + 3) = 0;
  *(undefined2 *)((int)param_2 + 10) = 0;
  return 0;
}


/* END FUNCTION 0x100fe45d */

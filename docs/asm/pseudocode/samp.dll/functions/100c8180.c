/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c8180
 * Name: FUN_100c8180
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_100c8180(int param_1,char *param_2)

{
  int iVar1;
  DWORD dwErrCode;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  DWORD DVar5;
  char *lpBuffer;
  size_t _Count;
  
  dwErrCode = GetLastError();
  piVar2 = (int *)FUN_100fdc77();
  iVar1 = *piVar2;
  lpBuffer = (char *)(param_1 + 0x444);
  *lpBuffer = '\0';
  if (((int)param_2 < 0) || (DAT_10155930 <= (int)param_2)) {
    iVar4 = FUN_100c7dd0(lpBuffer);
    if (iVar4 == 0) {
      DVar5 = FormatMessageA(0x1000,(LPCVOID)0x0,(DWORD)param_2,0,lpBuffer,0xff,(va_list *)0x0);
      if (DVar5 == 0) {
        FUN_100cc780(lpBuffer,0xff,"Unknown error %d (%#x)",param_2,param_2);
      }
    }
  }
  else {
    _Count = 0xff;
    pcVar3 = _strerror(param_2);
    _strncpy(lpBuffer,pcVar3,_Count);
  }
  *(undefined1 *)(param_1 + 0x543) = 0;
  pcVar3 = _strrchr(lpBuffer,10);
  if ((pcVar3 != (char *)0x0) && (1 < (int)pcVar3 - (int)lpBuffer)) {
    *pcVar3 = '\0';
  }
  pcVar3 = _strrchr(lpBuffer,0xd);
  if ((pcVar3 != (char *)0x0) && (0 < (int)pcVar3 - (int)lpBuffer)) {
    *pcVar3 = '\0';
  }
  piVar2 = (int *)FUN_100fdc77();
  if (*piVar2 != iVar1) {
    piVar2 = (int *)FUN_100fdc77();
    *piVar2 = iVar1;
  }
  DVar5 = GetLastError();
  if (dwErrCode != DVar5) {
    SetLastError(dwErrCode);
  }
  return lpBuffer;
}


/* END FUNCTION 0x100c8180 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00413040
 * Name: FUN_00413040
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_00413040(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  DWORD DVar3;
  short sVar4;
  int unaff_ESI;
  uint local_18;
  _OVERLAPPED local_14;
  
  bVar1 = FUN_004091c0();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    FUN_00412de0(4,(undefined1 *)&local_18);
    iVar2 = DAT_004ca204;
    sVar4 = (short)((ulonglong)(local_18 & 0x7fffffff) % 0x1fd);
    *(short *)(unaff_ESI + 0xe) = sVar4;
    iVar2 = LockFile(*(HANDLE *)(unaff_ESI + 8),sVar4 + 2 + iVar2,0,1,0);
  }
  else {
    local_14.u.Pointer = (PVOID)(DAT_004ca204 + 2);
    local_14.u.s.OffsetHigh = 0;
    local_14.hEvent = (HANDLE)0x0;
    iVar2 = LockFileEx(*(HANDLE *)(unaff_ESI + 8),1,0,0x1fe,0,&local_14);
  }
  if (iVar2 == 0) {
    DVar3 = GetLastError();
    *(DWORD *)(unaff_ESI + 0x10) = DVar3;
  }
  return iVar2;
}


/* END FUNCTION 0x00413040 */

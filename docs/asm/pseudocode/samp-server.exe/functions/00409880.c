/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00409880
 * Name: FUN_00409880
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_00409880(int param_1,DWORD param_2,DWORD param_3)

{
  DWORD DVar1;
  int iVar2;
  int unaff_ESI;
  _OVERLAPPED local_14;
  
  DVar1 = 1;
  if (param_1 == 3) {
    DVar1 = 3;
  }
  local_14.Internal = 0;
  local_14.InternalHigh = 0;
  local_14.u.s.OffsetHigh = 0;
  local_14.hEvent = (HANDLE)0x0;
  local_14.u.s.Offset = param_3;
  if (param_1 == 1) {
    iVar2 = UnlockFileEx(*(HANDLE *)(unaff_ESI + 0x10),0,param_2,0,&local_14);
  }
  else {
    iVar2 = LockFileEx(*(HANDLE *)(unaff_ESI + 0x10),DVar1,0,param_2,0,&local_14);
  }
  if (iVar2 != 0) {
    return 0;
  }
  DVar1 = GetLastError();
  *(DWORD *)(unaff_ESI + 0x34) = DVar1;
  return 5;
}


/* END FUNCTION 0x00409880 */

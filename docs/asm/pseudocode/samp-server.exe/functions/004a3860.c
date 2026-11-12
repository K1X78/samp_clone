/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a3860
 * Name: __commit
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl __commit(int _FileHandle)

{
  HANDLE hFile;
  BOOL BVar1;
  ulong *puVar2;
  int *piVar3;
  int iVar4;
  DWORD local_20;
  
  if (DAT_0051c938 <= (uint)_FileHandle) {
LAB_004a3908:
    piVar3 = FUN_004a5f9b();
    *piVar3 = 9;
    return -1;
  }
  iVar4 = (_FileHandle & 0x1fU) * 0x24;
  if ((*(byte *)((&DAT_0051c940)[_FileHandle >> 5] + 4 + iVar4) & 1) == 0) goto LAB_004a3908;
  __lock_fhandle(_FileHandle);
  if ((*(byte *)((&DAT_0051c940)[_FileHandle >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)__get_osfhandle(_FileHandle);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      local_20 = GetLastError();
    }
    else {
      local_20 = 0;
    }
    if (local_20 == 0) goto LAB_004a38ef;
    puVar2 = FUN_004a5fa4();
    *puVar2 = local_20;
  }
  piVar3 = FUN_004a5f9b();
  *piVar3 = 9;
  local_20 = 0xffffffff;
LAB_004a38ef:
  FUN_004a3900();
  return local_20;
}


/* END FUNCTION 0x004a3860 */

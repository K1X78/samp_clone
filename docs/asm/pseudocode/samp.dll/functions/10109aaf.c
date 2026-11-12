/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10109aaf
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
  DWORD *pDVar2;
  undefined4 *puVar3;
  int iVar4;
  DWORD local_20;
  
  if (DAT_102ad548 <= (uint)_FileHandle) {
LAB_10109b57:
    puVar3 = (undefined4 *)FUN_100fdc77();
    *puVar3 = 9;
    return -1;
  }
  iVar4 = (_FileHandle & 0x1fU) * 0x24;
  if ((*(byte *)((&DAT_102ad560)[_FileHandle >> 5] + 4 + iVar4) & 1) == 0) goto LAB_10109b57;
  __lock_fhandle(_FileHandle);
  if ((*(byte *)((&DAT_102ad560)[_FileHandle >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)__get_osfhandle(_FileHandle);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      local_20 = GetLastError();
    }
    else {
      local_20 = 0;
    }
    if (local_20 == 0) goto LAB_10109b3e;
    pDVar2 = (DWORD *)FUN_100fdc80();
    *pDVar2 = local_20;
  }
  puVar3 = (undefined4 *)FUN_100fdc77();
  *puVar3 = 9;
  local_20 = 0xffffffff;
LAB_10109b3e:
  FUN_10109b4f();
  return local_20;
}


/* END FUNCTION 0x10109aaf */

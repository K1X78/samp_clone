/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a37b5
 * Name: __write
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  int local_20;
  
  if ((uint)_FileHandle < DAT_0051c938) {
    iVar3 = (_FileHandle & 0x1fU) * 0x24;
    if ((*(byte *)((&DAT_0051c940)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
      __lock_fhandle(_FileHandle);
      if ((*(byte *)((&DAT_0051c940)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
        piVar1 = FUN_004a5f9b();
        *piVar1 = 9;
        puVar2 = FUN_004a5fa4();
        *puVar2 = 0;
        local_20 = -1;
      }
      else {
        local_20 = __write_lk(_FileHandle,_Buf,_MaxCharCount);
      }
      FUN_004a383c();
      return local_20;
    }
  }
  piVar1 = FUN_004a5f9b();
  *piVar1 = 9;
  puVar2 = FUN_004a5fa4();
  *puVar2 = 0;
  return -1;
}


/* END FUNCTION 0x004a37b5 */

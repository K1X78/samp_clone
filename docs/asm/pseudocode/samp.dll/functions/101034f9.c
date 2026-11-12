/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x101034f9
 * Name: __write
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  undefined4 *puVar1;
  int iVar2;
  int local_20;
  
  if ((uint)_FileHandle < DAT_102ad548) {
    iVar2 = (_FileHandle & 0x1fU) * 0x24;
    if ((*(byte *)((&DAT_102ad560)[_FileHandle >> 5] + 4 + iVar2) & 1) != 0) {
      __lock_fhandle(_FileHandle);
      if ((*(byte *)((&DAT_102ad560)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
        puVar1 = (undefined4 *)FUN_100fdc77();
        *puVar1 = 9;
        puVar1 = (undefined4 *)FUN_100fdc80();
        *puVar1 = 0;
        local_20 = -1;
      }
      else {
        local_20 = __write_lk(_FileHandle,_Buf,_MaxCharCount);
      }
      FUN_10103580();
      return local_20;
    }
  }
  puVar1 = (undefined4 *)FUN_100fdc77();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_100fdc80();
  *puVar1 = 0;
  return -1;
}


/* END FUNCTION 0x101034f9 */

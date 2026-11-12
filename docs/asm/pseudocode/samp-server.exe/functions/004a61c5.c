/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a61c5
 * Name: __close
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl __close(int _FileHandle)

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
        local_20 = -1;
      }
      else {
        local_20 = __close_lk(_FileHandle);
      }
      FUN_004a623c();
      return local_20;
    }
  }
  piVar1 = FUN_004a5f9b();
  *piVar1 = 9;
  puVar2 = FUN_004a5fa4();
  *puVar2 = 0;
  return -1;
}


/* END FUNCTION 0x004a61c5 */

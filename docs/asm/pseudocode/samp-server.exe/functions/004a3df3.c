/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a3df3
 * Name: __fcloseall
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl __fcloseall(void)

{
  FILE *_File;
  int iVar1;
  int iVar2;
  int iVar3;
  int local_20;
  
  local_20 = 0;
  __lock(1);
  for (iVar3 = 3; iVar3 < DAT_0051da60; iVar3 = iVar3 + 1) {
    iVar2 = iVar3 * 4;
    _File = *(FILE **)(iVar2 + DAT_0051ca54);
    if (_File != (FILE *)0x0) {
      if ((_File->_flag & 0x83) != 0) {
        iVar1 = _fclose(_File);
        if (iVar1 != -1) {
          local_20 = local_20 + 1;
        }
      }
      if (0x13 < iVar3) {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar2 + DAT_0051ca54) + 0x20));
        _free(*(void **)(iVar2 + DAT_0051ca54));
        *(undefined4 *)(iVar2 + DAT_0051ca54) = 0;
      }
    }
  }
  FUN_004a3e85();
  return local_20;
}


/* END FUNCTION 0x004a3df3 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049f25f
 * Name: flsall
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl flsall(int param_1)

{
  void *_File;
  FILE *pFVar1;
  int iVar2;
  int _Index;
  int local_28;
  int local_20;
  
  local_20 = 0;
  local_28 = 0;
  __lock(1);
  for (_Index = 0; _Index < DAT_0051da60; _Index = _Index + 1) {
    _File = *(void **)(DAT_0051ca54 + _Index * 4);
    if ((_File != (void *)0x0) && ((*(byte *)((int)_File + 0xc) & 0x83) != 0)) {
      __lock_file2(_Index,_File);
      pFVar1 = *(FILE **)(DAT_0051ca54 + _Index * 4);
      if ((pFVar1->_flag & 0x83U) != 0) {
        if (param_1 == 1) {
          iVar2 = __fflush_lk(pFVar1);
          if (iVar2 != -1) {
            local_20 = local_20 + 1;
          }
        }
        else if ((param_1 == 0) && ((pFVar1->_flag & 2U) != 0)) {
          iVar2 = __fflush_lk(pFVar1);
          if (iVar2 == -1) {
            local_28 = -1;
          }
        }
      }
      FUN_0049f2ff();
    }
  }
  FUN_0049f32b();
  if (param_1 != 1) {
    local_20 = local_28;
  }
  return local_20;
}


/* END FUNCTION 0x0049f25f */

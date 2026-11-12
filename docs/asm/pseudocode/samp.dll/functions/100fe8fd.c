/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fe8fd
 * Name: flsall
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int flsall(int param_1)

{
  void *_File;
  int iVar1;
  int _Index;
  undefined4 local_28;
  undefined4 local_20;
  
  local_20 = 0;
  local_28 = 0;
  __lock(1);
  for (_Index = 0; _Index < DAT_102ae6a0; _Index = _Index + 1) {
    _File = *(void **)(DAT_102ad690 + _Index * 4);
    if ((_File != (void *)0x0) && ((*(byte *)((int)_File + 0xc) & 0x83) != 0)) {
      __lock_file2(_Index,_File);
      iVar1 = *(int *)(DAT_102ad690 + _Index * 4);
      if ((*(uint *)(iVar1 + 0xc) & 0x83) != 0) {
        if (param_1 == 1) {
          iVar1 = __fflush_lk(iVar1);
          if (iVar1 != -1) {
            local_20 = local_20 + 1;
          }
        }
        else if ((param_1 == 0) && ((*(uint *)(iVar1 + 0xc) & 2) != 0)) {
          iVar1 = __fflush_lk(iVar1);
          if (iVar1 == -1) {
            local_28 = -1;
          }
        }
      }
      FUN_100fe99d();
    }
  }
  FUN_100fe9c9();
  if (param_1 != 1) {
    local_20 = local_28;
  }
  return local_20;
}


/* END FUNCTION 0x100fe8fd */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004ac2a0
 * Name: __lock_fhandle
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl __lock_fhandle(int _Filehandle)

{
  int iVar1;
  int iVar2;
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004c5018;
  uStack_c = 0x4ac2ac;
  iVar1 = (&DAT_0051c940)[_Filehandle >> 5] + (_Filehandle & 0x1fU) * 0x24;
  if (*(int *)(iVar1 + 8) == 0) {
    __lock(10);
    local_8 = (undefined *)0x0;
    if (*(int *)(iVar1 + 8) == 0) {
      iVar2 = ___crtInitCritSecAndSpinCount(iVar1 + 0xc,4000);
      if (iVar2 == 0) {
        __local_unwind2((int)local_14,-1);
        return 0;
      }
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    local_8 = (undefined *)0xffffffff;
    FUN_004ac337();
  }
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_0051c940)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x24));
  return 1;
}


/* END FUNCTION 0x004ac2a0 */

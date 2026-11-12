/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a39cf
 * Name: __mtinitlocknum
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl __mtinitlocknum(int _LockNum)

{
  void *_Memory;
  int *piVar1;
  int iVar2;
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004c07c0;
  uStack_c = 0x4a39db;
  piVar1 = &DAT_004ec1e8 + _LockNum * 2;
  if (*piVar1 == 0) {
    _Memory = _malloc(0x18);
    if (_Memory == (void *)0x0) {
      piVar1 = FUN_004a5f9b();
      *piVar1 = 0xc;
      return 0;
    }
    __lock(10);
    local_8 = (undefined *)0x0;
    if (*piVar1 == 0) {
      iVar2 = ___crtInitCritSecAndSpinCount(_Memory,4000);
      if (iVar2 == 0) {
        _free(_Memory);
        piVar1 = FUN_004a5f9b();
        *piVar1 = 0xc;
        __local_unwind2((int)local_14,-1);
        return 0;
      }
      *piVar1 = (int)_Memory;
    }
    else {
      _free(_Memory);
    }
    local_8 = (undefined *)0xffffffff;
    FUN_004a3a66();
  }
  return 1;
}


/* END FUNCTION 0x004a39cf */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10100387
 * Name: __mtinitlocknum
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl __mtinitlocknum(int _LockNum)

{
  int *piVar1;
  void *_Memory;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_1012d6a8;
  uStack_c = 0x10100393;
  piVar1 = &DAT_10155bd0 + _LockNum * 2;
  if (*piVar1 == 0) {
    _Memory = _malloc(0x18);
    if (_Memory == (void *)0x0) {
      puVar2 = (undefined4 *)FUN_100fdc77();
      *puVar2 = 0xc;
      return 0;
    }
    __lock(10);
    local_8 = (undefined *)0x0;
    if (*piVar1 == 0) {
      iVar3 = ___crtInitCritSecAndSpinCount(_Memory,4000);
      if (iVar3 == 0) {
        _free(_Memory);
        puVar2 = (undefined4 *)FUN_100fdc77();
        *puVar2 = 0xc;
        __local_unwind2(local_14,0xffffffff);
        return 0;
      }
      *piVar1 = (int)_Memory;
    }
    else {
      _free(_Memory);
    }
    local_8 = (undefined *)0xffffffff;
    FUN_1010041e();
  }
  return 1;
}


/* END FUNCTION 0x10100387 */

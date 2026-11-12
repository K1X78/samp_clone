/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fac33
 * Name: FUN_100fac33
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */

void FUN_100fac33(DWORD *param_1)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  _EXCEPTION_POINTERS *local_18;
  
  pDVar1 = (DWORD *)(*DAT_102ace58)(DAT_10155bc8);
  if (pDVar1 == (DWORD *)0x0) {
    iVar2 = (*DAT_102ace5c)(DAT_10155bc8,param_1);
    if (iVar2 == 0) {
      __amsg_exit(0x10);
    }
    DVar3 = GetCurrentThreadId();
    *param_1 = DVar3;
    pDVar1 = param_1;
  }
  else {
    pDVar1[0x13] = param_1[0x13];
    pDVar1[0x14] = param_1[0x14];
    _free(param_1);
  }
  if (PTR_FUN_10155594 != (undefined *)0x0) {
    (*(code *)PTR_FUN_10155594)();
  }
  uVar4 = (*(code *)pDVar1[0x13])(pDVar1[0x14]);
  __endthreadex(uVar4);
  __XcptFilter(local_18->ExceptionRecord->ExceptionCode,local_18);
  return;
}


/* END FUNCTION 0x100fac33 */

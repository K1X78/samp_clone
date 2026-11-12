/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a1e5c
 * Name: FUN_004a1e5c
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */

void __cdecl FUN_004a1e5c(DWORD *param_1)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD DVar3;
  _EXCEPTION_POINTERS *local_18;
  
  pDVar1 = (DWORD *)(*DAT_0051c3b0)(DAT_004ec4d4);
  if (pDVar1 == (DWORD *)0x0) {
    iVar2 = (*DAT_0051c3b4)(DAT_004ec4d4,param_1);
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
  if (PTR_FUN_004ec0ac != (undefined *)0x0) {
    (*(code *)PTR_FUN_004ec0ac)();
  }
  DVar3 = (*(code *)pDVar1[0x13])(pDVar1[0x14]);
  __endthreadex(DVar3);
  __XcptFilter(local_18->ExceptionRecord->ExceptionCode,local_18);
  return;
}


/* END FUNCTION 0x004a1e5c */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10103235
 * Name: __CxxUnhandledExceptionFilter
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* Library Function - Single Match
    long __stdcall __CxxUnhandledExceptionFilter(struct _EXCEPTION_POINTERS *)
   
   Library: Visual Studio 2003 Release */

long __CxxUnhandledExceptionFilter(_EXCEPTION_POINTERS *param_1)

{
  PEXCEPTION_RECORD pEVar1;
  int iVar2;
  long lVar3;
  
  pEVar1 = param_1->ExceptionRecord;
  if (((pEVar1->ExceptionCode == 0xe06d7363) && (pEVar1->NumberParameters == 3)) &&
     ((pEVar1->ExceptionInformation[0] == 0x19930520 ||
      (pEVar1->ExceptionInformation[0] == 0x19930521)))) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  if ((DAT_102ad01c != (code *)0x0) && (iVar2 = _ValidateExecute(DAT_102ad01c), iVar2 != 0)) {
    lVar3 = (*DAT_102ad01c)(param_1);
    return lVar3;
  }
  return 0;
}


/* END FUNCTION 0x10103235 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004aaf82
 * Name: __CxxUnhandledExceptionFilter
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __CxxUnhandledExceptionFilter(int *param_1)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) &&
     ((piVar1[5] == 0x19930520 || (piVar1[5] == 0x19930521)))) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  if ((DAT_0051c4a4 != (FARPROC)0x0) &&
     (bVar2 = _ValidateExecute(DAT_0051c4a4), CONCAT31(extraout_var,bVar2) != 0)) {
    iVar3 = (*DAT_0051c4a4)(param_1);
    return iVar3;
  }
  return 0;
}


/* END FUNCTION 0x004aaf82 */

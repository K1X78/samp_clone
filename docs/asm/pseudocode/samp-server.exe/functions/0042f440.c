/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042f440
 * Name: FUN_0042f440
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0042f440(undefined4 *param_1)

{
  double *pdVar1;
  
  pdVar1 = (double *)FUN_004154a0(param_1,(void *)0x0);
  if (pdVar1 != (double *)0x0) {
    if ((-1 < *(int *)((int)pdVar1 + 0x14)) &&
       ((0 < *(int *)((int)pdVar1 + 0x14) || (*(int *)(pdVar1 + 2) != 0)))) {
      FUN_0042e950(param_1,*pdVar1 / (double)(longlong)pdVar1[2]);
    }
  }
  return;
}


/* END FUNCTION 0x0042f440 */

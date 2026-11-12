/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004ab775
 * Name: __handle_qnan1
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __cdecl __handle_qnan1(int param_1,double param_2)

{
  int *piVar1;
  float10 fVar2;
  
  if (DAT_004ecba8 == 0) {
    fVar2 = __umatherr(1,param_1);
    return fVar2;
  }
  piVar1 = FUN_004a5f9b();
  *piVar1 = 0x21;
  __ctrlfp();
  return (float10)param_2;
}


/* END FUNCTION 0x004ab775 */

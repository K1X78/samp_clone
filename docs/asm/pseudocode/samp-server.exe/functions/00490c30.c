/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00490c30
 * Name: FUN_00490c30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __thiscall FUN_00490c30(void *param_1,char *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00490aa0(param_1,param_2);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    return (float10)*(float *)piVar1[2];
  }
  return (float10)0.0;
}


/* END FUNCTION 0x00490c30 */

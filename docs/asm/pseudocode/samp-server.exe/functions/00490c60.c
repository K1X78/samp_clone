/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00490c60
 * Name: FUN_00490c60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00490c60(void *this,char *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00490aa0(this,param_1);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    *(undefined4 *)piVar1[2] = param_2;
  }
  return;
}


/* END FUNCTION 0x00490c60 */

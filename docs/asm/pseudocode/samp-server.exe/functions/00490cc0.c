/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00490cc0
 * Name: FUN_00490cc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 __thiscall FUN_00490cc0(void *this,char *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00490aa0(this,param_1);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 2)) {
    return *(undefined1 *)piVar1[2];
  }
  return 0;
}


/* END FUNCTION 0x00490cc0 */

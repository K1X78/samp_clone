/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b39d0
 * Name: FUN_100b39d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100b39d0(int param_1)

{
  int *piVar1;
  
  if ((-1 < param_1) && (param_1 < 0x7531)) {
    piVar1 = (int *)FUN_100a7630(param_1);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0x85bdc0)) {
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x100b39d0 */

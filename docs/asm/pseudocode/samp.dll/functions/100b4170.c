/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b4170
 * Name: FUN_100b4170
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100b4170(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_100a7630(param_1);
  if ((piVar1 != (int *)0x0) && (*piVar1 != -0x14)) {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100b4170 */

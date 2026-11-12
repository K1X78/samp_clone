/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10099630
 * Name: FUN_10099630
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10099630(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10086cf0(5,3);
  (**(code **)(*piVar1 + 0x54))(param_1,1,0);
  piVar1 = (int *)FUN_10086cf0(6,3);
  (**(code **)(*piVar1 + 0x54))((char)param_1 == '\0',1,0);
  return;
}


/* END FUNCTION 0x10099630 */

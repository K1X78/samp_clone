/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b4200
 * Name: FUN_100b4200
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100b4200(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_100a7630(param_1);
  piVar1[7] = param_2;
  (**(code **)(*piVar1 + 0x3c))(param_2);
  return;
}


/* END FUNCTION 0x100b4200 */

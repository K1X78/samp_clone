/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002e510
 * Name: FUN_1002e510
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1002e510(undefined4 *param_1,int param_2)

{
  void *pvVar1;
  
  _free((void *)*param_1);
  pvVar1 = operator_new(param_2 * 4);
  *param_1 = pvVar1;
  param_1[3] = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


/* END FUNCTION 0x1002e510 */

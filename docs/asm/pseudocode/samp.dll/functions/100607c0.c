/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100607c0
 * Name: FUN_100607c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_100607c0(undefined4 *param_1,undefined4 param_2)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  param_1[2] = DVar1;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[5] = param_2;
  return param_1;
}


/* END FUNCTION 0x100607c0 */

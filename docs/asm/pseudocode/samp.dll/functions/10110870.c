/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10110870
 * Name: FUN_10110870
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_10110870(undefined4 *param_1,LPVOID param_2,SIZE_T param_3)

{
  HANDLE pvVar1;
  BOOL BVar2;
  
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = 0;
  pvVar1 = GetCurrentProcess();
  *param_1 = pvVar1;
  if (((param_1[1] != 0) && (param_1[2] != 0)) &&
     (BVar2 = FlushInstructionCache((HANDLE)*param_1,param_2,param_3), BVar2 != 0)) {
    VirtualProtect(param_2,param_3,0x40,param_1 + 3);
  }
  return param_1;
}


/* END FUNCTION 0x10110870 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10070cc0
 * Name: FUN_10070cc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_10070cc0(undefined4 *param_1,undefined4 param_2)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  
  DVar1 = GetTickCount();
  param_1[2] = DVar1;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[5] = param_2;
  puVar3 = &DAT_1016c7f8;
  for (iVar2 = 0x4a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return param_1;
}


/* END FUNCTION 0x10070cc0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006eec0
 * Name: FUN_1006eec0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_1006eec0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = param_2;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[3] = 600;
  param_1[4] = 300;
  param_1[5] = 100;
  param_1[6] = 0x1e;
  puVar2 = (undefined4 *)((int)param_1 + 0x89);
  for (iVar1 = 0x81; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


/* END FUNCTION 0x1006eec0 */

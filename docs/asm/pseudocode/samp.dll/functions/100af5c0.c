/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100af5c0
 * Name: FUN_100af5c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100af5c0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 local_8;
  
  local_8 = 0x18;
  if (param_2 != 0) {
    local_8 = 0x22;
  }
  puVar1 = (undefined4 *)FUN_100ac6e0();
  *param_4 = *puVar1;
  param_4[1] = puVar1[1];
  param_4[2] = puVar1[2];
  if ((*(int **)(param_1 + 0x2a4) != (int *)0x0) && (**(int **)(param_1 + 0x2a4) != 0x863c40)) {
    (*(code *)0x5e4280)(param_3,local_8,0);
  }
  *(float *)(param_3 + 8) = (float)puVar1[2] + *(float *)(param_3 + 8) + 0.15;
  if ((*(int **)(param_1 + 0x2a4) != (int *)0x0) && (**(int **)(param_1 + 0x2a4) != 0x863c40)) {
    (*(code *)0x5e01c0)(param_4,local_8,0);
  }
  return 1;
}


/* END FUNCTION 0x100af5c0 */

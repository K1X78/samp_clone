/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10057f10
 * Name: FUN_10057f10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10057f10(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 4);
  puVar1 = puVar2;
  if (0xf < *(uint *)(param_1 + 0x18)) {
    puVar1 = (undefined4 *)*puVar2;
  }
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    param_3 = param_3 - (int)puVar1;
  }
  FUN_10057df0(param_3,1,param_4);
  if (0xf < *(uint *)(param_1 + 0x18)) {
    puVar2 = (undefined4 *)*puVar2;
  }
  *param_2 = (int)puVar2 + param_3;
  return;
}


/* END FUNCTION 0x10057f10 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003c790
 * Name: FUN_1003c790
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_1003c790(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  
  uVar1 = FUN_1003ac00(param_2,&param_2);
  if ((char)param_2 != '\0') {
    return 0xffffffff;
  }
  if (*(uint *)(param_1 + 4) <= uVar1) {
    FUN_1003ad00(*param_3,param_3[1],*(undefined2 *)(param_3 + 2));
    return *(int *)(param_1 + 4) - 1;
  }
  FUN_1003ad90(*param_3,param_3[1],*(undefined2 *)(param_3 + 2),uVar1);
  return uVar1;
}


/* END FUNCTION 0x1003c790 */

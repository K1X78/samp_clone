/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10021630
 * Name: FUN_10021630
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_10021630(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  
  uVar1 = FUN_100207a0(param_2,&param_2);
  if ((char)param_2 != '\0') {
    return 0xffffffff;
  }
  if (*(uint *)(param_1 + 4) <= uVar1) {
    FUN_10020700(*param_3,*(undefined2 *)(param_3 + 1));
    return *(int *)(param_1 + 4) - 1;
  }
  FUN_10020920(*param_3,*(undefined2 *)(param_3 + 1),uVar1);
  return uVar1;
}


/* END FUNCTION 0x10021630 */

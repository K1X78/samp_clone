/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004ad60
 * Name: FUN_1004ad60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_1004ad60(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  
  uVar1 = FUN_1004acc0(param_2,&param_2);
  if ((char)param_2 != '\0') {
    return 0xffffffff;
  }
  if (*(uint *)(param_1 + 4) <= uVar1) {
    FUN_1004a610(*param_3);
    return *(int *)(param_1 + 4) - 1;
  }
  FUN_1004a680(*param_3,uVar1);
  return uVar1;
}


/* END FUNCTION 0x1004ad60 */

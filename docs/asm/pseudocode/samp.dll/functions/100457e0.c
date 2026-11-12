/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100457e0
 * Name: FUN_100457e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_100457e0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  
  uVar1 = FUN_100444e0(param_2,&param_2);
  if ((char)param_2 != '\0') {
    return 0xffffffff;
  }
  if (*(uint *)(param_1 + 4) <= uVar1) {
    FUN_100443d0(*param_3);
    return *(int *)(param_1 + 4) - 1;
  }
  FUN_10044440(*param_3,uVar1);
  return uVar1;
}


/* END FUNCTION 0x100457e0 */

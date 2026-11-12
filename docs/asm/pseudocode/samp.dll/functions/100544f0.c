/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100544f0
 * Name: FUN_100544f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_100544f0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  
  uVar1 = FUN_10054450(param_2,&param_2);
  if ((char)param_2 != '\0') {
    return 0xffffffff;
  }
  if (*(uint *)(param_1 + 4) <= uVar1) {
    FUN_100542d0(*param_3,*(undefined1 *)(param_3 + 1));
    return *(int *)(param_1 + 4) - 1;
  }
  FUN_10054350(*param_3,*(undefined1 *)(param_3 + 1),uVar1);
  return uVar1;
}


/* END FUNCTION 0x100544f0 */

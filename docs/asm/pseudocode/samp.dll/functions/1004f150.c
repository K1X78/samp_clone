/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004f150
 * Name: FUN_1004f150
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_1004f150(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  
  uVar1 = FUN_1004e760(param_2,&param_2);
  if ((char)param_2 != '\0') {
    return 0xffffffff;
  }
  if (*(uint *)(param_1 + 4) <= uVar1) {
    FUN_1004eec0(*param_3,*(undefined3 *)(param_3 + 1));
    return *(int *)(param_1 + 4) - 1;
  }
  FUN_1004ebd0(*param_3,*(undefined3 *)(param_3 + 1),uVar1);
  return uVar1;
}


/* END FUNCTION 0x1004f150 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009b770
 * Name: FUN_1009b770
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1009b770(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  *param_4 = 0;
  if ((*(char *)(param_1 + 0xd) != '\0') && (iVar1 = FUN_1009b310(), iVar1 < 0)) {
    return;
  }
  (*(code *)PTR_FUN_10140c04)(*(undefined4 *)(param_1 + 0xe),param_2,param_3,param_4);
  return;
}


/* END FUNCTION 0x1009b770 */

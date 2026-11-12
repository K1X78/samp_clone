/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10088800
 * Name: FUN_10088800
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10088800(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x150))) {
    _free(*(void **)(*(int *)(param_1 + 0x14c) + param_2 * 4));
    FUN_10086370(param_2);
    FUN_100886d0(0,*(undefined4 *)(param_1 + 0x150));
    if (*(int *)(param_1 + 0x150) <= *(int *)(param_1 + 0x143)) {
      *(int *)(param_1 + 0x143) = *(int *)(param_1 + 0x150) + -1;
    }
    FUN_10084460(0x702,1,param_1);
  }
  return;
}


/* END FUNCTION 0x10088800 */

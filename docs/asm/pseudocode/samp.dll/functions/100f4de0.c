/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f4de0
 * Name: FUN_100f4de0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100f4de0(undefined4 param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = FUN_100e3f20(param_1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                       param_3,param_4);
  if (iVar1 == 0) {
    if ((*param_3 != 0) && (*param_4 != 0)) {
      return 0;
    }
    (*(code *)PTR__free_101554bc)(*param_3);
    iVar1 = 9;
  }
  return iVar1;
}


/* END FUNCTION 0x100f4de0 */

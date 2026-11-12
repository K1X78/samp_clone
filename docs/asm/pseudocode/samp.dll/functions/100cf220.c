/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cf220
 * Name: FUN_100cf220
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100cf220(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_100cf1b0(param_1);
  iVar1 = (*(code *)PTR__calloc_101554c8)(param_2,4);
  if (iVar1 == 0) {
    return 0x1b;
  }
  *(undefined4 *)(param_1 + 0x4bf0) = param_2;
  *(int *)(param_1 + 0x4bf4) = iVar1;
  return 0;
}


/* END FUNCTION 0x100cf220 */

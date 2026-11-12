/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cf130
 * Name: FUN_100cf130
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100cf130(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4874) != 0) {
    return 0;
  }
  iVar1 = (*(code *)PTR__calloc_101554c8)(param_2,0x50);
  if (iVar1 == 0) {
    return 0x1b;
  }
  *(undefined4 *)(param_1 + 0x4c4) = param_2;
  *(int *)(param_1 + 0x4874) = iVar1;
  *(undefined4 *)(param_1 + 0x4878) = 1;
  return 0;
}


/* END FUNCTION 0x100cf130 */

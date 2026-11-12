/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e4170
 * Name: FUN_100e4170
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100e4170(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0xc) != 0) {
    (**(code **)(param_1 + 0xc))(*(int *)(param_2 + 0xc));
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  (*(code *)PTR__free_101554bc)(param_2);
  return;
}


/* END FUNCTION 0x100e4170 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e4140
 * Name: FUN_100e4140
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e4140(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 8))(param_2,param_1[1]);
  (*(code *)PTR__free_101554bc)(param_1[1]);
  (*(code *)PTR__free_101554bc)(param_1);
  return 0;
}


/* END FUNCTION 0x100e4140 */

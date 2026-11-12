/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d03f0
 * Name: FUN_100d03f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100d03f0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x6c) != 0)) {
    FUN_100dec30(param_1,3,2);
  }
  piVar1 = param_2 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_100e07d0(*param_2);
    (*(code *)PTR__free_101554bc)(param_2);
  }
  if ((param_1 != 0) && (*(int *)(param_1 + 0x6c) != 0)) {
    FUN_100dec70(param_1,3);
  }
  return;
}


/* END FUNCTION 0x100d03f0 */

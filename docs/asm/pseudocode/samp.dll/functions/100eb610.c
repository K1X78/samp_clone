/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100eb610
 * Name: FUN_100eb610
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100eb610(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((code *)param_1[8] != (code *)0x0) {
      (*(code *)param_1[8])(param_1[7]);
      param_1[8] = 0;
      param_1[7] = 0;
    }
    FUN_100e8a60(param_1 + 3,0);
    (*(code *)PTR__free_101554bc)(param_1[1]);
    param_1[1] = 0;
    (*(code *)PTR__free_101554bc)(param_1[2]);
    param_1[2] = 0;
    param_1[9] = 0;
    *param_1 = 1;
  }
  return;
}


/* END FUNCTION 0x100eb610 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d6810
 * Name: FUN_100d6810
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100d6810(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x49b8);
  if (piVar1 != (int *)0x0) {
    while (*(int *)(*piVar1 + 0x14) != param_2) {
      piVar1 = (int *)piVar1[2];
      if (piVar1 == (int *)0x0) {
        return;
      }
    }
    FUN_100e89e0(param_1 + 0x49b8,piVar1,0);
  }
  return;
}


/* END FUNCTION 0x100d6810 */

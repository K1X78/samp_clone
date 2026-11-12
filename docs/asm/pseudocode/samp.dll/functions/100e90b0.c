/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e90b0
 * Name: FUN_100e90b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100e90b0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_2 + 0x398);
  if (piVar2 != (int *)0x0) {
    while (*piVar2 != param_1) {
      piVar2 = (int *)piVar2[2];
      if (piVar2 == (int *)0x0) {
        return;
      }
    }
    FUN_100e8aa0((int *)(param_2 + 0x398),piVar2,param_2 + 0x3a8,*(undefined4 *)(param_2 + 0x3ac));
    puVar1 = *(undefined4 **)(param_2 + 0x398);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(param_2 + 0x394) = 0;
      FUN_100d66d0(*puVar1,0,6);
    }
  }
  return;
}


/* END FUNCTION 0x100e90b0 */

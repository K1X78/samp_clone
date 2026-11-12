/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d69c0
 * Name: FUN_100d69c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100d69c0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = *(int **)(param_1 + 0x24);
  while (piVar3 = piVar2, piVar3 != (int *)0x0) {
    iVar1 = *piVar3;
    piVar2 = (int *)piVar3[2];
    if (*(int *)(iVar1 + 0x24) == 1) {
      *(undefined4 *)(iVar1 + 0x24) = 2;
      FUN_100ed9a0(iVar1);
      FUN_100e89e0((undefined4 *)(param_1 + 0x24),piVar3,0);
      FUN_100d66d0(iVar1,0,6);
    }
  }
  return;
}


/* END FUNCTION 0x100d69c0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10086cc0
 * Name: FUN_10086cc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_10086cc0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x162)) {
    piVar1 = *(int **)(param_1 + 0x15e);
    do {
      if (*(int *)(*piVar1 + 0x2c) == param_2) {
        return *piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x162));
  }
  return 0;
}


/* END FUNCTION 0x10086cc0 */

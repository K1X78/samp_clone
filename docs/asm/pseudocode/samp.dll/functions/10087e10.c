/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10087e10
 * Name: FUN_10087e10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10087e10(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x259)) {
    piVar2 = *(int **)(param_1 + 0x255);
    do {
      if (*(int *)(*piVar2 + 0x100) == param_2) {
        *(int *)(param_1 + 0x152) = iVar1;
        *(int *)(param_1 + 0x156) = iVar1;
        FUN_10084460(0x201,0,param_1);
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x259));
  }
  return 0x80004005;
}


/* END FUNCTION 0x10087e10 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10086cf0
 * Name: FUN_10086cf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_10086cf0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x162)) {
    piVar2 = *(int **)(param_1 + 0x15e);
    do {
      iVar1 = *piVar2;
      if ((*(int *)(iVar1 + 0x2c) == param_2) && (*(int *)(iVar1 + 0x30) == param_3)) {
        return iVar1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x162));
  }
  return 0;
}


/* END FUNCTION 0x10086cf0 */

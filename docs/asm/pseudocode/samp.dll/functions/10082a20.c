/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10082a20
 * Name: FUN_10082a20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_10082a20(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_100829f0(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x560)) {
      piVar3 = *(int **)(iVar1 + 0x55c);
      do {
        if (*(int *)(*piVar3 + 4) == param_2) {
          return *piVar3;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < *(int *)(iVar1 + 0x560));
    }
  }
  return 0;
}


/* END FUNCTION 0x10082a20 */

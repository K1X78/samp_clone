/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10082a60
 * Name: FUN_10082a60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_10082a60(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = FUN_10082a20(param_1,param_2);
  if (iVar2 != 0) {
    iVar3 = 0;
    if (0 < *(int *)(iVar2 + 0x13c)) {
      piVar4 = *(int **)(iVar2 + 0x138);
      do {
        iVar1 = *piVar4;
        if (((*(int *)(iVar1 + 8) == param_3) && (*(int *)(iVar1 + 0xc) == param_4)) &&
           (*(int *)(iVar1 + 0x10) == param_5)) {
          return iVar1;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < *(int *)(iVar2 + 0x13c));
    }
  }
  return 0;
}


/* END FUNCTION 0x10082a60 */

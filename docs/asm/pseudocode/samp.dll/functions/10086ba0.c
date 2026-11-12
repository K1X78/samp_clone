/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10086ba0
 * Name: FUN_10086ba0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * __thiscall FUN_10086ba0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x162)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x15e) + iVar4 * 4);
      if ((((piVar1 != (int *)0x0) &&
           (iVar3 = (**(code **)(*piVar1 + 0x34))(param_2,param_3), iVar3 != 0)) &&
          (cVar2 = (**(code **)(*piVar1 + 0x3c))(), cVar2 != '\0')) &&
         (cVar2 = (**(code **)(*piVar1 + 0x44))(), cVar2 != '\0')) {
        return piVar1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x162));
  }
  return (int *)0x0;
}


/* END FUNCTION 0x10086ba0 */

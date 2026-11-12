/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10086dc0
 * Name: FUN_10086dc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10086dc0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x162)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x15e) + iVar2 * 4);
      if ((piVar1[0xc] == 3) && (*(int *)((int)piVar1 + 0x173) == param_2)) {
        (**(code **)(*piVar1 + 0x54))(0,0,0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x162));
  }
  return;
}


/* END FUNCTION 0x10086dc0 */

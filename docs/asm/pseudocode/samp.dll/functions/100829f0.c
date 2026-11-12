/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100829f0
 * Name: FUN_100829f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * __thiscall FUN_100829f0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x55)) {
    puVar1 = *(undefined4 **)(param_1 + 0x51);
    do {
      if (*(int *)*puVar1 == param_2) {
        return (int *)*puVar1;
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x55));
  }
  return (int *)0x0;
}


/* END FUNCTION 0x100829f0 */

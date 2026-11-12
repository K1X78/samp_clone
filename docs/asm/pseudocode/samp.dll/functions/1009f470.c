/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009f470
 * Name: FUN_1009f470
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1009f470(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(int **)(param_1 + 0x40) != (int *)0x0) && (**(int **)(param_1 + 0x40) != 0x863c40)) {
    iVar1 = *(int *)(param_1 + 0x40);
    if (param_2 != 0) {
      *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 1;
      return;
    }
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffe;
  }
  return;
}


/* END FUNCTION 0x1009f470 */

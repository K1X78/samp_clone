/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a8b90
 * Name: FUN_100a8b90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100a8b90(int param_1)

{
  int iVar1;
  
  if ((*(int **)(param_1 + 0x40) != (int *)0x0) && (**(int **)(param_1 + 0x40) != 0x863c40)) {
    iVar1 = FUN_100a7630(*(undefined4 *)(param_1 + 0x4e));
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x12) = *(uint *)(iVar1 + 0x12) & 0xfffffffe;
    }
  }
  return;
}


/* END FUNCTION 0x100a8b90 */

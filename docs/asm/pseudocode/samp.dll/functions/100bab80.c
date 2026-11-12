/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bab80
 * Name: FUN_100bab80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100bab80(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(param_1 + 8) - iVar1 >> 3) < (uint)(*(int *)(param_1 + 0xc) - iVar1 >> 3))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_100ba1d0(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 8;
    return;
  }
  FUN_100ba8b0(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}


/* END FUNCTION 0x100bab80 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b36c0
 * Name: FUN_100b36c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_100b36c0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(int *)(param_1 + 4) + param_2;
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar2 < uVar1) {
    *(uint *)(param_1 + 4) = uVar2;
    return uVar2;
  }
  *(uint *)(param_1 + 4) = uVar1;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return uVar1;
}


/* END FUNCTION 0x100b36c0 */

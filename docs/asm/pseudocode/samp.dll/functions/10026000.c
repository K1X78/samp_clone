/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10026000
 * Name: FUN_10026000
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_10026000(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 4);
  if (uVar2 <= uVar1) {
    return uVar1 - uVar2;
  }
  return (*(int *)(param_1 + 0xc) - uVar2) + -1 + uVar1;
}


/* END FUNCTION 0x10026000 */

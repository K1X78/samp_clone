/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009d6d0
 * Name: FUN_1009d6d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_1009d6d0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = 0;
  if (param_2 != 0) {
    do {
      uVar1 = uVar1 ^ *(uint *)(param_1 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 != param_2);
  }
  return uVar1;
}


/* END FUNCTION 0x1009d6d0 */

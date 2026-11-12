/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10039cd0
 * Name: FUN_10039cd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10039cd0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  iVar2 = 0xf;
  do {
    uVar1 = *(uint *)(param_1 + iVar2 * 4);
    uVar4 = uVar1 >> 1 | uVar3;
    uVar3 = uVar1 << 0x1f;
    iVar2 = iVar2 + -1;
    *(uint *)(param_1 + 4 + iVar2 * 4) = uVar4;
  } while (-1 < iVar2);
  return;
}


/* END FUNCTION 0x10039cd0 */

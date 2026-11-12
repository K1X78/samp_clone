/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10039ca0
 * Name: FUN_10039ca0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10039ca0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar2 = 0;
  do {
    uVar1 = *(uint *)(param_1 + uVar2 * 4);
    uVar4 = uVar1 * 2 | uVar3;
    uVar3 = uVar1 >> 0x1f;
    *(uint *)(param_1 + uVar2 * 4) = uVar4;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  return;
}


/* END FUNCTION 0x10039ca0 */

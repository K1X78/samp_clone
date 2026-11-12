/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c3f90
 * Name: FUN_100c3f90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c3f90(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = 0;
  puVar3 = (undefined4 *)(param_1 + 0x323bd);
  do {
    uVar1 = FUN_100c23f0(param_1 + 0x32a41,param_1 + 0x30d29);
    *puVar3 = uVar1;
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (uVar2 < 0x10);
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}


/* END FUNCTION 0x100c3f90 */

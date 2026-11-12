/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a70a0
 * Name: FUN_100a70a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100a70a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = &DAT_10190798 + param_1 * 0x4d;
  puVar3 = DAT_10152ac0;
  for (iVar1 = 0x4d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(bool *)DAT_10152ac4 = *(short *)(&DAT_101907a2 + param_1 * 0x134) != 0;
  *(bool *)DAT_10152ac8 = *(short *)(&DAT_101907a6 + param_1 * 0x134) != 0;
  return;
}


/* END FUNCTION 0x100a70a0 */

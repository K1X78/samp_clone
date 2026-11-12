/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a7040
 * Name: FUN_100a7040
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100a7040(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = &DAT_10190660;
  puVar3 = DAT_10152ac0;
  for (iVar1 = 0x4d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *DAT_10152ac4 = DAT_101a0440;
  *DAT_10152ac8 = DAT_101a0441;
  return;
}


/* END FUNCTION 0x100a7040 */

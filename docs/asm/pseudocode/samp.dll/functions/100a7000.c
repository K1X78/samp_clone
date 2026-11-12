/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a7000
 * Name: FUN_100a7000
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100a7000(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar2 = DAT_10152ac8;
  puVar1 = DAT_10152ac4;
  puVar4 = DAT_10152ac0;
  puVar5 = &DAT_10190660;
  for (iVar3 = 0x4d; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  DAT_101a0440 = *puVar1;
  DAT_101a0441 = *puVar2;
  return;
}


/* END FUNCTION 0x100a7000 */

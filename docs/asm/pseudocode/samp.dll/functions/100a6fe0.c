/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a6fe0
 * Name: FUN_100a6fe0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100a6fe0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10190660;
  for (iVar1 = 0x4d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_10190798;
  for (iVar1 = 0x3f2a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


/* END FUNCTION 0x100a6fe0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100859e0
 * Name: FUN_100859e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100859e0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_1017f690 = 0;
  FUN_1009b9a0(&DAT_1011d0c4);
  puVar2 = &DAT_1017f6b8;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


/* END FUNCTION 0x100859e0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b26f0
 * Name: FUN_100b26f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100b26f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_102a9720;
  for (iVar1 = 200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_102a9400;
  for (iVar1 = 200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return 1;
}


/* END FUNCTION 0x100b26f0 */

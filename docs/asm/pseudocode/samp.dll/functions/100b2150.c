/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b2150
 * Name: FUN_100b2150
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100b2150(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_102a93f0 = operator_new(0xe0);
  puVar2 = DAT_102a93f0;
  for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


/* END FUNCTION 0x100b2150 */

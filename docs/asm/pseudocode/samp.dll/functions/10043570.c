/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10043570
 * Name: FUN_10043570
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10043570(uint param_1)

{
  uint *puVar1;
  int iVar2;
  
  param_1 = param_1 | 1;
  DAT_1013c7ec = 0;
  puVar1 = &DAT_10156ef4;
  iVar2 = 0x26f;
  DAT_10156ef0 = param_1;
  do {
    param_1 = param_1 * 0x10dcd;
    *puVar1 = param_1;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


/* END FUNCTION 0x10043570 */

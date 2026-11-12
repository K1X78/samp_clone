/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a7120
 * Name: FUN_100a7120
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100a7120(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10190798 + param_1 * 0x4d;
  for (iVar1 = 0x4d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


/* END FUNCTION 0x100a7120 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100383e0
 * Name: FUN_100383e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * FUN_100383e0(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (9 < param_1) {
    param_1 = 9;
  }
  puVar2 = &DAT_10156e50;
  for (iVar1 = 0x28; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_10053630(&DAT_10156e50);
  return &DAT_10156e50 + param_1 * 4;
}


/* END FUNCTION 0x100383e0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00450390
 * Name: FUN_00450390
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * FUN_00450390(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (9 < param_1) {
    param_1 = 9;
  }
  puVar2 = &DAT_004ed730;
  for (iVar1 = 0x28; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_00462d10((char *)&DAT_004ed730);
  return &DAT_004ed730 + param_1 * 4;
}


/* END FUNCTION 0x00450390 */

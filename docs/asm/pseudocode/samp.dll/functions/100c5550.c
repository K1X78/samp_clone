/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c5550
 * Name: FUN_100c5550
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5550(void)

{
  if ((DAT_102aca24 != 0) && (*(int *)(DAT_102aca24 + 0x3cd) == 5)) {
    (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 8))(500,0);
  }
  DAT_102ac9c0 = 1;
  _DAT_102ac9c4 = GetTickCount();
  return;
}


/* END FUNCTION 0x100c5550 */

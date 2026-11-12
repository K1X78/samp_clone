/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c6630
 * Name: FUN_100c6630
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c6630(void)

{
  FUN_100c5e70();
  if (DAT_102ac9d0 != (int *)0x0) {
    (**(code **)(*DAT_102ac9d0 + 0xe4))(DAT_102ac9d0,0x1c,DAT_102aca70 == 0);
    (**(code **)(*DAT_102ac9d0 + 0xe4))(DAT_102ac9d0,0x23,0);
    (**(code **)(*DAT_102ac9d0 + 0xe4))(DAT_102ac9d0,0x8c,3);
  }
  if (DAT_102aca24 != 0) {
    FUN_1000b290();
  }
  if (DAT_102aca1c != 0) {
    FUN_10066500();
  }
  if (DAT_102aca3c != 0) {
    FUN_100a1ff0();
    return;
  }
  return;
}


/* END FUNCTION 0x100c6630 */

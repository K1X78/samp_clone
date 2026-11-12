/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10071560
 * Name: FUN_10071560
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10071560(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_100713d0();
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_10090360(0x41200000);
    }
    FUN_10071480();
    return;
  }
  return;
}


/* END FUNCTION 0x10071560 */

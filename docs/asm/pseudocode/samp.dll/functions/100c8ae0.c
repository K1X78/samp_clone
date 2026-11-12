/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c8ae0
 * Name: FUN_100c8ae0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c8ae0(void)

{
  if ((DAT_102acad0 != 0) && (DAT_102acad0 = DAT_102acad0 + -1, DAT_102acad0 == 0)) {
    FUN_100cfb40();
    FUN_100ce800();
    FUN_100cde00();
    if ((_DAT_102acad4 & 2) != 0) {
      WSACleanup();
      FUN_100cd480();
    }
    _DAT_102acad4 = 0;
  }
  return;
}


/* END FUNCTION 0x100c8ae0 */

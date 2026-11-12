/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100650a0
 * Name: FUN_100650a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100650a0(undefined4 *param_1)

{
  FUN_100651a0(*param_1,0);
  _DAT_1016c37c = _DAT_1016c37c + -1;
  if (_DAT_1016c37c == 0) {
    FUN_10065170(param_1,PTR_DAT_10140780,DAT_1016c380,DAT_1014077c,0x10);
  }
  return;
}


/* END FUNCTION 0x100650a0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a0280
 * Name: FUN_100a0280
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a0280(void)

{
  _DAT_1018e538 = _DAT_00c8cfa4;
  if (_DAT_00c8cfa4 != (int *)0x0) {
    (**(code **)(*_DAT_00c8cfa4 + 8))(_DAT_00c8cfa4);
    _DAT_00c8cfa4 = (int *)0x0;
  }
  return;
}


/* END FUNCTION 0x100a0280 */

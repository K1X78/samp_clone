/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010b9b6
 * Name: _GetLcidFromDefault
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void _GetLcidFromDefault(void)

{
  DAT_102ad230._0_2_ = (ushort)DAT_102ad230 | 0x104;
  DAT_102ad238 = GetUserDefaultLCID();
  DAT_102ad234 = DAT_102ad238;
  return;
}


/* END FUNCTION 0x1010b9b6 */

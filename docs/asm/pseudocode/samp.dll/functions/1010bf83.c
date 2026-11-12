/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010bf83
 * Name: _GetLcidFromCountry
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void _GetLcidFromCountry(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_102ad244);
  DAT_102ad240 = (uint)(sVar1 == 3);
  EnumSystemLocalesA(_CountryEnumProc_4,1);
  if ((DAT_102ad230 & 4) == 0) {
    DAT_102ad230 = 0;
  }
  return;
}


/* END FUNCTION 0x1010bf83 */

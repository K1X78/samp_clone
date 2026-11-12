/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010bfba
 * Name: _GetLcidFromLangCountry
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void _GetLcidFromLangCountry(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_102ad24c);
  DAT_102ad23c = (uint)(sVar1 == 3);
  sVar1 = _strlen(DAT_102ad244);
  DAT_102ad240 = (uint)(sVar1 == 3);
  DAT_102ad234 = 0;
  if (DAT_102ad23c == 0) {
    DAT_102ad248 = _GetPrimaryLen();
  }
  else {
    DAT_102ad248 = 2;
  }
  EnumSystemLocalesA(_LangCountryEnumProc_4,1);
  if ((((DAT_102ad230 & 0x100) == 0) || ((DAT_102ad230 & 0x200) == 0)) || ((DAT_102ad230 & 7) == 0))
  {
    DAT_102ad230 = 0;
  }
  return;
}


/* END FUNCTION 0x1010bfba */

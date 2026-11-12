/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010c040
 * Name: _GetLcidFromLanguage
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void _GetLcidFromLanguage(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_102ad24c);
  DAT_102ad23c = (uint)(sVar1 == 3);
  if (sVar1 == 3) {
    DAT_102ad248 = 2;
  }
  else {
    DAT_102ad248 = _GetPrimaryLen();
  }
  EnumSystemLocalesA(_LanguageEnumProc_4,1);
  if ((DAT_102ad230 & 4) == 0) {
    DAT_102ad230 = 0;
  }
  return;
}


/* END FUNCTION 0x1010c040 */

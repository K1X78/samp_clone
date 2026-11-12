/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ffedc
 * Name: __mtterm
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl __mtterm(void)

{
  if (DAT_10155bc8 != -1) {
    (*DAT_102ace60)(DAT_10155bc8);
    DAT_10155bc8 = -1;
  }
  __mtdeletelocks();
  return;
}


/* END FUNCTION 0x100ffedc */

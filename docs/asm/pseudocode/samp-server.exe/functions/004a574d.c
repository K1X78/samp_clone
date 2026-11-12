/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a574d
 * Name: __mtterm
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl __mtterm(void)

{
  if (DAT_004ec4d4 != -1) {
    (*DAT_0051c3b8)(DAT_004ec4d4);
    DAT_004ec4d4 = -1;
  }
  __mtdeletelocks();
  return;
}


/* END FUNCTION 0x004a574d */

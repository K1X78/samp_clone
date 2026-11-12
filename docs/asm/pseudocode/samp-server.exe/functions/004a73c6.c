/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a73c6
 * Name: __setdefaultprecision
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __setdefaultprecision(void)

{
  __controlfp(0x10000,0x30000);
  return;
}


/* END FUNCTION 0x004a73c6 */

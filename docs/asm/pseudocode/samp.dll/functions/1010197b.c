/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010197b
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


/* END FUNCTION 0x1010197b */

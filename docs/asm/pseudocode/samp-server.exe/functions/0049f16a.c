/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049f16a
 * Name: gethostbyname
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


hostent * gethostbyname(char *name)

{
  hostent *phVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0049f16a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  phVar1 = gethostbyname(name);
  return phVar1;
}


/* END FUNCTION 0x0049f16a */

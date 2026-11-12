/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049f17c
 * Name: socket
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


SOCKET socket(int af,int type,int protocol)

{
  SOCKET SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0049f17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = socket(af,type,protocol);
  return SVar1;
}


/* END FUNCTION 0x0049f17c */

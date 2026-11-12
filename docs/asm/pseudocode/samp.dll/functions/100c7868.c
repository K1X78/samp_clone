/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c7868
 * Name: socket
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


SOCKET socket(int af,int type,int protocol)

{
  SOCKET SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100c7868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = socket(af,type,protocol);
  return SVar1;
}


/* END FUNCTION 0x100c7868 */

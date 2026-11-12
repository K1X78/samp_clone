/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049f1a6
 * Name: bind
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int bind(SOCKET s,sockaddr *addr,int namelen)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0049f1a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = bind(s,addr,namelen);
  return iVar1;
}


/* END FUNCTION 0x0049f1a6 */

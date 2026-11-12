/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049f1ac
 * Name: connect
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int connect(SOCKET s,sockaddr *name,int namelen)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0049f1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = connect(s,name,namelen);
  return iVar1;
}


/* END FUNCTION 0x0049f1ac */

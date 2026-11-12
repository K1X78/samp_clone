/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c785c
 * Name: recv
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int recv(SOCKET s,char *buf,int len,int flags)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100c785c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = recv(s,buf,len,flags);
  return iVar1;
}


/* END FUNCTION 0x100c785c */

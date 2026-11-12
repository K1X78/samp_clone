/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049f194
 * Name: sendto
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int sendto(SOCKET s,char *buf,int len,int flags,sockaddr *to,int tolen)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0049f194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = sendto(s,buf,len,flags,to,tolen);
  return iVar1;
}


/* END FUNCTION 0x0049f194 */

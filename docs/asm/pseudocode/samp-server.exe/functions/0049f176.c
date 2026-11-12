/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049f176
 * Name: setsockopt
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int setsockopt(SOCKET s,int level,int optname,char *optval,int optlen)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0049f176. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = setsockopt(s,level,optname,optval,optlen);
  return iVar1;
}


/* END FUNCTION 0x0049f176 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010ec21
 * Name: __getcwd
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

char * __cdecl __getcwd(char *_DstBuf,int _SizeInBytes)

{
  char *pcVar1;
  
  __lock(7);
  pcVar1 = (char *)__getdcwd_lk(0,_DstBuf,_SizeInBytes);
  FUN_1010ec5e();
  return pcVar1;
}


/* END FUNCTION 0x1010ec21 */

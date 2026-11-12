/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fe366
 * Name: _getenv
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

char * __cdecl _getenv(char *_VarName)

{
  char *pcVar1;
  
  __lock(7);
  pcVar1 = (char *)__getenv_lk(_VarName);
  FUN_100fe39c();
  return pcVar1;
}


/* END FUNCTION 0x100fe366 */

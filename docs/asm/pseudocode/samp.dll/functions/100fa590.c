/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fa590
 * Name: _ftell
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

long __cdecl _ftell(FILE *_File)

{
  long lVar1;
  
  __lock_file(_File);
  lVar1 = __ftell_lk(_File);
  FUN_100fa5c7();
  return lVar1;
}


/* END FUNCTION 0x100fa590 */

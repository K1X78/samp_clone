/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049f9ea
 * Name: _ungetc
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl _ungetc(int _Ch,FILE *_File)

{
  uint uVar1;
  
  __lock_file(_File);
  uVar1 = __ungetc_lk(_Ch,_File);
  FUN_0049fa25();
  return uVar1;
}


/* END FUNCTION 0x0049f9ea */

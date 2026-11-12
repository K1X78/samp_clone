/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049fe11
 * Name: _fwrite
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

size_t __cdecl _fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File)

{
  uint uVar1;
  
  __lock_file(_File);
  uVar1 = __fwrite_lk(_Str,_Size,_Count,_File);
  FUN_0049fe53();
  return uVar1;
}


/* END FUNCTION 0x0049fe11 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a5dec
 * Name: __ftelli64
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

longlong __cdecl __ftelli64(FILE *_File)

{
  ulonglong uVar1;
  
  __lock_file(_File);
  uVar1 = __ftelli64_lk((uint *)_File);
  FUN_004a5e29();
  return uVar1;
}


/* END FUNCTION 0x004a5dec */

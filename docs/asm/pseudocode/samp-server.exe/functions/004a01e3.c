/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a01e3
 * Name: _fseek
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl _fseek(FILE *_File,long _Offset,int _Origin)

{
  int iVar1;
  
  __lock_file(_File);
  iVar1 = __fseek_lk(_File,_Offset,_Origin);
  FUN_004a0222();
  return iVar1;
}


/* END FUNCTION 0x004a01e3 */

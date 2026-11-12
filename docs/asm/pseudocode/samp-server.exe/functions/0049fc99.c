/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049fc99
 * Name: _fputs
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl _fputs(char *_Str,FILE *_File)

{
  size_t sVar1;
  int _Flag;
  uint uVar2;
  
  sVar1 = _strlen(_Str);
  __lock_file(_File);
  _Flag = __stbuf(_File);
  uVar2 = __fwrite_lk(_Str,1,sVar1,_File);
  __ftbuf(_Flag,_File);
  FUN_0049fd00();
  return (uVar2 == sVar1) - 1;
}


/* END FUNCTION 0x0049fc99 */

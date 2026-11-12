/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a29bf
 * Name: _fprintf
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl _fprintf(FILE *_File,char *_Format,...)

{
  int _Flag;
  int iVar1;
  
  __lock_file(_File);
  _Flag = __stbuf(_File);
  iVar1 = __output(_File,(byte *)_Format,(wchar_t *)&stack0x0000000c);
  __ftbuf(_Flag,_File);
  FUN_004a2a13();
  return iVar1;
}


/* END FUNCTION 0x004a29bf */

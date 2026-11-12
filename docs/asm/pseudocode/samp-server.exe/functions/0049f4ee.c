/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049f4ee
 * Name: _printf
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl _printf(char *_Format,...)

{
  int _Flag;
  int iVar1;
  
  __lock_file2(1,&DAT_004ebe38);
  _Flag = __stbuf((FILE *)&DAT_004ebe38);
  iVar1 = __output((FILE *)&DAT_004ebe38,(byte *)_Format,(wchar_t *)&stack0x00000008);
  __ftbuf(_Flag,(FILE *)&DAT_004ebe38);
  FUN_0049f549();
  return iVar1;
}


/* END FUNCTION 0x0049f4ee */

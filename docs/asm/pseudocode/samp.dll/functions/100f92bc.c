/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f92bc
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
  
  __lock_file2(1,&DAT_10155958);
  _Flag = __stbuf((FILE *)&DAT_10155958);
  iVar1 = __output(&DAT_10155958,_Format,&stack0x00000008);
  __ftbuf(_Flag,(FILE *)&DAT_10155958);
  FUN_100f9317();
  return iVar1;
}


/* END FUNCTION 0x100f92bc */

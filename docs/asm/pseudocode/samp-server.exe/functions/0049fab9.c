/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049fab9
 * Name: _putc
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl _putc(int _Ch,FILE *_File)

{
  int *piVar1;
  uint uVar2;
  
  __lock_file(_File);
  piVar1 = &_File->_cnt;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = __flsbuf(_Ch,_File);
  }
  else {
    *_File->_ptr = (char)_Ch;
    uVar2 = _Ch & 0xff;
    _File->_ptr = _File->_ptr + 1;
  }
  FUN_0049fb09();
  return uVar2;
}


/* END FUNCTION 0x0049fab9 */

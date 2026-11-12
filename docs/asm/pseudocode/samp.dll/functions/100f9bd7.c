/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f9bd7
 * Name: _fclose
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl _fclose(FILE *_File)

{
  int local_20;
  
  local_20 = -1;
  if ((_File->_flag & 0x40) == 0) {
    __lock_file(_File);
    local_20 = __fclose_lk(_File);
    FUN_100f9c20();
  }
  else {
    _File->_flag = 0;
  }
  return local_20;
}


/* END FUNCTION 0x100f9bd7 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a25a7
 * Name: _rewind
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void __cdecl _rewind(FILE *_File)

{
  uint _FileHandle;
  undefined *puVar1;
  
  _FileHandle = _File->_file;
  __lock_file(_File);
  __flush(_File);
  _File->_flag = _File->_flag & 0xffffffcf;
  if (_FileHandle == 0xffffffff) {
    puVar1 = &DAT_004ec308;
  }
  else {
    puVar1 = (undefined *)((&DAT_0051c940)[(int)_FileHandle >> 5] + (_FileHandle & 0x1f) * 0x24);
  }
  puVar1[4] = puVar1[4] & 0xfd;
  if ((char)_File->_flag < '\0') {
    _File->_flag = _File->_flag & 0xfffffffc;
  }
  __lseek(_FileHandle,0,0);
  FUN_004a2626();
  return;
}


/* END FUNCTION 0x004a25a7 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a233a
 * Name: _fgets
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

char * __cdecl _fgets(char *_Buf,int _MaxCount,FILE *_File)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  char *local_20;
  
  local_20 = _Buf;
  if (_MaxCount < 1) {
    local_20 = (char *)0x0;
  }
  else {
    __lock_file(_File);
    pcVar3 = _Buf;
    do {
      _MaxCount = _MaxCount + -1;
      if (_MaxCount == 0) break;
      piVar1 = &_File->_cnt;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        uVar2 = __filbuf(_File);
      }
      else {
        uVar2 = (uint)(byte)*_File->_ptr;
        _File->_ptr = _File->_ptr + 1;
      }
      if (uVar2 == 0xffffffff) {
        if (pcVar3 == _Buf) {
          local_20 = (char *)0x0;
          goto LAB_004a23a3;
        }
        break;
      }
      *pcVar3 = (char)uVar2;
      pcVar3 = pcVar3 + 1;
    } while ((char)uVar2 != '\n');
    *pcVar3 = '\0';
LAB_004a23a3:
    FUN_004a23b8();
  }
  return local_20;
}


/* END FUNCTION 0x004a233a */

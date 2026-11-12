/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fe872
 * Name: __flush
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl __flush(FILE *_File)

{
  uint uVar1;
  int iVar2;
  uint _MaxCharCount;
  
  iVar2 = 0;
  if ((((byte)_File->_flag & 3) == 2) && ((_File->_flag & 0x108U) != 0)) {
    _MaxCharCount = (int)_File->_ptr - (int)_File->_base;
    if (0 < (int)_MaxCharCount) {
      uVar1 = __write(_File->_file,_File->_base,_MaxCharCount);
      if (uVar1 == _MaxCharCount) {
        if ((char)_File->_flag < '\0') {
          _File->_flag = _File->_flag & 0xfffffffd;
        }
      }
      else {
        _File->_flag = _File->_flag | 0x20;
        iVar2 = -1;
      }
    }
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return iVar2;
}


/* END FUNCTION 0x100fe872 */

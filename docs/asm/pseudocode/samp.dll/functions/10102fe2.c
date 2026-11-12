/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10102fe2
 * Name: __ftbuf
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl __ftbuf(int _Flag,FILE *_File)

{
  byte *pbVar1;
  
  if ((_Flag != 0) && ((_File->_flag & 0x1000) != 0)) {
    __flush(_File);
    pbVar1 = (byte *)((int)&_File->_flag + 1);
    *pbVar1 = *pbVar1 & 0xee;
    _File->_bufsiz = 0;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
  }
  return;
}


/* END FUNCTION 0x10102fe2 */

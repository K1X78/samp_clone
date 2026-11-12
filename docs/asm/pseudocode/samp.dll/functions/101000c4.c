/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x101000c4
 * Name: __freeptd
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl __freeptd(_ptiddata _Ptd)

{
  if (DAT_10155bc8 != -1) {
    if (_Ptd == (_ptiddata)0x0) {
      _Ptd = (_ptiddata)(*DAT_102ace58)(DAT_10155bc8);
    }
    __freefls_4(_Ptd);
    (*DAT_102ace5c)(DAT_10155bc8,0);
  }
  return;
}


/* END FUNCTION 0x101000c4 */

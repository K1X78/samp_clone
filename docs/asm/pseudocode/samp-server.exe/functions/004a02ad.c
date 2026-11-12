/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a02ad
 * Name: _atof
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


double __cdecl _atof(char *_String)

{
  int iVar1;
  _locale_t _Locale;
  FLT p_Var2;
  _flt local_1c;
  
  while( true ) {
    iVar1 = _isspace((uint)(byte)*_String);
    if (iVar1 == 0) break;
    _String = _String + 1;
  }
  _Locale = (_locale_t)_strlen(_String);
  p_Var2 = __fltin2(&local_1c,_String,_Locale);
  return p_Var2->dval;
}


/* END FUNCTION 0x004a02ad */

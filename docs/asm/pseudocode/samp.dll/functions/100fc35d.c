/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fc35d
 * Name: _strtod
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl _strtod(char *_Str,char **_EndPtr)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  _locale_t _Locale;
  FLT p_Var4;
  undefined4 *puVar5;
  byte *_Str_00;
  _flt local_24;
  double local_c;
  
  bVar1 = *_Str;
  _Str_00 = (byte *)_Str;
  while (iVar3 = _isspace((uint)bVar1), iVar3 != 0) {
    _Str_00 = _Str_00 + 1;
    bVar1 = *_Str_00;
  }
  _Locale = (_locale_t)_strlen((char *)_Str_00);
  p_Var4 = __fltin2(&local_24,(char *)_Str_00,_Locale);
  if (_EndPtr != (char **)0x0) {
    *_EndPtr = (char *)(_Str_00 + p_Var4->nbytes);
  }
  uVar2 = p_Var4->flags;
  if ((uVar2 & 0x240) == 0) {
    if ((uVar2 & 0x81) == 0) {
      if ((uVar2 & 0x100) == 0) {
        return p_Var4->dval;
      }
      local_c = 0.0;
    }
    else {
      local_c = _DAT_10156074;
      if (*_Str_00 == 0x2d) {
        local_c = -_DAT_10156074;
      }
    }
    puVar5 = (undefined4 *)FUN_100fdc77();
    *puVar5 = 0x22;
  }
  else {
    local_c = 0.0;
    if (_EndPtr != (char **)0x0) {
      *_EndPtr = _Str;
    }
  }
  return local_c;
}


/* END FUNCTION 0x100fc35d */

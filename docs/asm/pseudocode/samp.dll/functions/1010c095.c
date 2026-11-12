/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010c095
 * Name: ___get_qualified_locale
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


BOOL __cdecl ___get_qualified_locale(LPLC_STRINGS _LpInStr,UINT *_LpCodePage,LPLC_STRINGS _LpOutStr)

{
  LCID LVar1;
  undefined2 uVar2;
  int iVar3;
  uint _Value;
  BOOL BVar4;
  
  if (DAT_102ad250 == (code *)0x0) {
    if (DAT_102acd44 == 2) {
      DAT_102ad250 = GetLocaleInfoA_exref;
    }
    else {
      DAT_102ad250 = crtGetLocaleInfoA;
    }
  }
  if (_LpInStr == (LPLC_STRINGS)0x0) {
LAB_1010c16f:
    _GetLcidFromDefault();
LAB_1010c174:
    if (DAT_102ad230 == 0) {
      return 0;
    }
  }
  else {
    DAT_102ad244 = _LpInStr->szLanguage + 0x20;
    DAT_102ad24c = _LpInStr;
    if ((DAT_102ad244 != (wchar_t *)0x0) && ((char)*DAT_102ad244 != '\0')) {
      _TranslateName(&PTR_s_america_10132508,0x16,&DAT_102ad244);
    }
    DAT_102ad230 = 0;
    if ((DAT_102ad24c == (LPLC_STRINGS)0x0) || ((char)DAT_102ad24c->szLanguage[0] == '\0')) {
      if ((DAT_102ad244 == (wchar_t *)0x0) || ((char)*DAT_102ad244 == '\0')) goto LAB_1010c16f;
      _GetLcidFromCountry();
      goto LAB_1010c174;
    }
    if ((DAT_102ad244 == (wchar_t *)0x0) || ((char)*DAT_102ad244 == '\0')) {
      _GetLcidFromLanguage();
    }
    else {
      _GetLcidFromLangCountry();
    }
    if (DAT_102ad230 == 0) {
      iVar3 = _TranslateName(&PTR_s_american_101326b8,0x40,&DAT_102ad24c);
      if (iVar3 != 0) {
        if ((DAT_102ad244 == (wchar_t *)0x0) || ((char)*DAT_102ad244 == '\0')) {
          _GetLcidFromLanguage();
        }
        else {
          _GetLcidFromLangCountry();
        }
      }
      goto LAB_1010c174;
    }
  }
  _Value = _ProcessCodePage();
  if (((_Value == 0) || (BVar4 = IsValidCodePage(_Value & 0xffff), BVar4 == 0)) ||
     (BVar4 = IsValidLocale(DAT_102ad234,1), LVar1 = DAT_102ad234, BVar4 == 0)) {
LAB_1010c244:
    BVar4 = 0;
  }
  else {
    if (_LpCodePage != (UINT *)0x0) {
      uVar2 = (undefined2)DAT_102ad238;
      *(short *)_LpCodePage = (short)DAT_102ad234;
      *(undefined2 *)((int)_LpCodePage + 2) = uVar2;
      *(short *)(_LpCodePage + 1) = (short)_Value;
    }
    if (_LpOutStr != (LPLC_STRINGS)0x0) {
      if ((short)*_LpCodePage == 0x814) {
        FUN_10103c90(_LpOutStr,"Norwegian-Nynorsk");
      }
      else {
        iVar3 = (*DAT_102ad250)(LVar1,0x1001,_LpOutStr,0x40);
        if (iVar3 == 0) goto LAB_1010c244;
      }
      iVar3 = (*DAT_102ad250)(DAT_102ad238,0x1002,_LpOutStr->szLanguage + 0x20,0x40);
      if (iVar3 == 0) goto LAB_1010c244;
      __itoa(_Value,(char *)_LpOutStr->szCountry,10);
    }
    BVar4 = 1;
  }
  return BVar4;
}


/* END FUNCTION 0x1010c095 */

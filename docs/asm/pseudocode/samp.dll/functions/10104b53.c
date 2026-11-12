/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10104b53
 * Name: __tzset_lk
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __tzset_lk(void)

{
  char cVar1;
  char cVar2;
  UINT CodePage;
  char *_Str1;
  int iVar3;
  size_t sVar4;
  long lVar5;
  DWORD DVar6;
  char *_Str;
  int local_20 [3];
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_1012df58;
  uStack_c = 0x10104b5f;
  __lock(7);
  CodePage = DAT_102ad0f8;
  local_8 = (undefined *)0x0;
  DAT_102ad0d4 = 0;
  DAT_10156064 = 0xffffffff;
  DAT_10156058 = 0xffffffff;
  _Str1 = (char *)__getenv_lk(&DAT_1012df54);
  if ((_Str1 == (char *)0x0) || (*_Str1 == '\0')) {
    if (DAT_102ad0d8 != (char *)0x0) {
      _free(DAT_102ad0d8);
      DAT_102ad0d8 = (char *)0x0;
    }
    DVar6 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_102ad028);
    if (DVar6 != 0xffffffff) {
      DAT_102ad0d4 = 1;
      _DAT_10155fc0 = DAT_102ad028 * 0x3c;
      if (DAT_102ad06e != 0) {
        _DAT_10155fc0 = _DAT_10155fc0 + DAT_102ad07c * 0x3c;
      }
      if ((DAT_102ad0c2 == 0) || (DAT_102ad0d0 == 0)) {
        DAT_10155fc4 = 0;
        DAT_10155fc8 = 0;
      }
      else {
        DAT_10155fc4 = 1;
        DAT_10155fc8 = (DAT_102ad0d0 - DAT_102ad07c) * 0x3c;
      }
      iVar3 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&DAT_102ad02c,-1,PTR_DAT_10156050,0x3f,
                                  (LPCSTR)0x0,local_20);
      if ((iVar3 == 0) || (local_20[0] != 0)) {
        *PTR_DAT_10156050 = 0;
      }
      else {
        PTR_DAT_10156050[0x3f] = 0;
      }
      iVar3 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&DAT_102ad080,-1,PTR_DAT_10156054,0x3f,
                                  (LPCSTR)0x0,local_20);
      if ((iVar3 == 0) || (local_20[0] != 0)) {
        *PTR_DAT_10156054 = 0;
      }
      else {
        PTR_DAT_10156054[0x3f] = 0;
      }
    }
  }
  else {
    if (DAT_102ad0d8 != (char *)0x0) {
      iVar3 = _strcmp(_Str1,DAT_102ad0d8);
      if (iVar3 == 0) goto LAB_10104d57;
      if (DAT_102ad0d8 != (char *)0x0) {
        _free(DAT_102ad0d8);
      }
    }
    sVar4 = _strlen(_Str1);
    DAT_102ad0d8 = _malloc(sVar4 + 1);
    if (DAT_102ad0d8 != (char *)0x0) {
      FUN_10103c90(DAT_102ad0d8,_Str1);
      local_8 = (undefined *)0xffffffff;
      FUN_10104d6e();
      _strncpy(PTR_DAT_10156050,_Str1,3);
      PTR_DAT_10156050[3] = 0;
      _Str = _Str1 + 3;
      cVar1 = *_Str;
      if (cVar1 == '-') {
        _Str = _Str1 + 4;
      }
      lVar5 = _atol(_Str);
      _DAT_10155fc0 = lVar5 * 0xe10;
      for (; (cVar2 = *_Str, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':')))); _Str = _Str + 1) {
      }
      if (*_Str == ':') {
        _Str = _Str + 1;
        lVar5 = _atol(_Str);
        _DAT_10155fc0 = _DAT_10155fc0 + lVar5 * 0x3c;
        for (; ('/' < *_Str && (*_Str < ':')); _Str = _Str + 1) {
        }
        if (*_Str == ':') {
          _Str = _Str + 1;
          lVar5 = _atol(_Str);
          _DAT_10155fc0 = _DAT_10155fc0 + lVar5;
          for (; ('/' < *_Str && (*_Str < ':')); _Str = _Str + 1) {
          }
        }
      }
      if (cVar1 == '-') {
        _DAT_10155fc0 = -_DAT_10155fc0;
      }
      DAT_10155fc4 = (int)*_Str;
      if (DAT_10155fc4 != 0) {
        _strncpy(PTR_DAT_10156054,_Str,3);
        PTR_DAT_10156054[3] = 0;
        return;
      }
      *PTR_DAT_10156054 = 0;
      return;
    }
  }
LAB_10104d57:
  __local_unwind2(local_14,0xffffffff);
  return;
}


/* END FUNCTION 0x10104b53 */

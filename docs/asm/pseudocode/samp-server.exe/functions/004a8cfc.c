/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a8cfc
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
  uint *_Str1;
  int iVar3;
  size_t sVar4;
  long lVar5;
  DWORD DVar6;
  uint *_Str;
  int local_20 [3];
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004c4598;
  uStack_c = 0x4a8d08;
  __lock(7);
  CodePage = DAT_0051c658;
  local_8 = (undefined *)0x0;
  DAT_0051c474 = 0;
  DAT_004ec7a4 = 0xffffffff;
  DAT_004ec798 = 0xffffffff;
  _Str1 = (uint *)__getenv_lk("TZ");
  if ((_Str1 == (uint *)0x0) || ((char)*_Str1 == '\0')) {
    if (DAT_0051c478 != (uint *)0x0) {
      _free(DAT_0051c478);
      DAT_0051c478 = (uint *)0x0;
    }
    DVar6 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_0051c3c8);
    if (DVar6 != 0xffffffff) {
      DAT_0051c474 = 1;
      _DAT_004ec700 = DAT_0051c3c8 * 0x3c;
      if (DAT_0051c40e != 0) {
        _DAT_004ec700 = _DAT_004ec700 + DAT_0051c41c * 0x3c;
      }
      if ((DAT_0051c462 == 0) || (DAT_0051c470 == 0)) {
        DAT_004ec704 = 0;
        DAT_004ec708 = 0;
      }
      else {
        DAT_004ec704 = 1;
        DAT_004ec708 = (DAT_0051c470 - DAT_0051c41c) * 0x3c;
      }
      iVar3 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&DAT_0051c3cc,-1,PTR_DAT_004ec790,0x3f,
                                  (LPCSTR)0x0,local_20);
      if ((iVar3 == 0) || (local_20[0] != 0)) {
        *PTR_DAT_004ec790 = 0;
      }
      else {
        PTR_DAT_004ec790[0x3f] = 0;
      }
      iVar3 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&DAT_0051c420,-1,PTR_DAT_004ec794,0x3f,
                                  (LPCSTR)0x0,local_20);
      if ((iVar3 == 0) || (local_20[0] != 0)) {
        *PTR_DAT_004ec794 = 0;
      }
      else {
        PTR_DAT_004ec794[0x3f] = 0;
      }
    }
  }
  else {
    if (DAT_0051c478 != (uint *)0x0) {
      iVar3 = _strcmp((char *)_Str1,(char *)DAT_0051c478);
      if (iVar3 == 0) goto LAB_004a8f00;
      if (DAT_0051c478 != (uint *)0x0) {
        _free(DAT_0051c478);
      }
    }
    sVar4 = _strlen((char *)_Str1);
    DAT_0051c478 = _malloc(sVar4 + 1);
    if (DAT_0051c478 != (uint *)0x0) {
      FUN_004a68f0(DAT_0051c478,_Str1);
      local_8 = (undefined *)0xffffffff;
      FUN_004a8f17();
      _strncpy(PTR_DAT_004ec790,(char *)_Str1,3);
      PTR_DAT_004ec790[3] = 0;
      _Str = (uint *)((int)_Str1 + 3);
      cVar1 = *(char *)_Str;
      if (cVar1 == '-') {
        _Str = _Str1 + 1;
      }
      lVar5 = _atol((char *)_Str);
      _DAT_004ec700 = lVar5 * 0xe10;
      for (; (cVar2 = (char)*_Str, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
          _Str = (uint *)((int)_Str + 1)) {
      }
      if ((char)*_Str == ':') {
        _Str = (uint *)((int)_Str + 1);
        lVar5 = _atol((char *)_Str);
        _DAT_004ec700 = _DAT_004ec700 + lVar5 * 0x3c;
        for (; ('/' < (char)*_Str && ((char)*_Str < ':')); _Str = (uint *)((int)_Str + 1)) {
        }
        if ((char)*_Str == ':') {
          _Str = (uint *)((int)_Str + 1);
          lVar5 = _atol((char *)_Str);
          _DAT_004ec700 = _DAT_004ec700 + lVar5;
          for (; ('/' < (char)*_Str && ((char)*_Str < ':')); _Str = (uint *)((int)_Str + 1)) {
          }
        }
      }
      if (cVar1 == '-') {
        _DAT_004ec700 = -_DAT_004ec700;
      }
      DAT_004ec704 = (int)(char)*_Str;
      if (DAT_004ec704 != 0) {
        _strncpy(PTR_DAT_004ec794,(char *)_Str,3);
        PTR_DAT_004ec794[3] = 0;
        return;
      }
      *PTR_DAT_004ec794 = 0;
      return;
    }
  }
LAB_004a8f00:
  __local_unwind2((int)local_14,-1);
  return;
}


/* END FUNCTION 0x004a8cfc */

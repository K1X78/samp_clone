/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fd9df
 * Name: __CRT_INIT_12
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __CRT_INIT_12(undefined4 param_1,int param_2)

{
  BOOL BVar1;
  int iVar2;
  _ptiddata _Ptd;
  DWORD DVar3;
  DWORD local_9c;
  DWORD local_98;
  DWORD local_94;
  uint local_90;
  DWORD local_8c;
  CHAR aCStack_18 [4];
  pthreadlocinfo _Locale;
  
  if (param_2 == 1) {
    local_9c = 0x94;
    BVar1 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
    if (BVar1 != 0) {
      DAT_102acd44 = local_8c;
      DAT_102acd50 = local_98;
      _DAT_102acd54 = local_94;
      _DAT_102acd48 = local_90 & 0x7fff;
      if (local_8c != 2) {
        _DAT_102acd48 = _DAT_102acd48 | 0x8000;
      }
      _DAT_102acd4c = local_98 * 0x100 + local_94;
      iVar2 = __heap_init();
      if (iVar2 != 0) {
        iVar2 = __mtinit();
        if (iVar2 != 0) {
          __RTC_Initialize();
          DAT_102ae6a4 = GetCommandLineA();
          DAT_102acd90 = ___crtGetEnvironmentStringsA();
          iVar2 = __ioinit();
          if (-1 < iVar2) {
            iVar2 = __setargv();
            if (((-1 < iVar2) && (iVar2 = __setenvp(), -1 < iVar2)) &&
               (iVar2 = __cinit(0), iVar2 == 0)) {
              DAT_102acd8c = DAT_102acd8c + 1;
              return 1;
            }
            __ioterm();
          }
          __mtterm();
        }
        __heap_term();
      }
    }
  }
  else if (param_2 == 0) {
    if (0 < DAT_102acd8c) {
      DAT_102acd8c = DAT_102acd8c + -1;
      if (DAT_102acd80 == 0) {
        __cexit();
      }
      __ioterm();
      __mtterm();
      __heap_term();
      return 1;
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 != 3) {
        return 1;
      }
      __freeptd((_ptiddata)0x0);
      return 1;
    }
    _Ptd = _calloc(1,0x8c);
    if (_Ptd != (_ptiddata)0x0) {
      _Locale = DAT_10155bc8;
      iVar2 = (*DAT_102ace5c)();
      if (iVar2 != 0) {
        aCStack_18[0] = '/';
        aCStack_18[1] = -0x25;
        aCStack_18[2] = '\x0f';
        aCStack_18[3] = '\x10';
        __initptd(_Ptd,_Locale);
        DVar3 = GetCurrentThreadId();
        _Ptd->_thandle = 0xffffffff;
        _Ptd->_tid = DVar3;
        return 1;
      }
      aCStack_18[0] = 'C';
      aCStack_18[1] = -0x25;
      aCStack_18[2] = '\x0f';
      aCStack_18[3] = '\x10';
      _free(_Ptd);
    }
  }
  return 0;
}


/* END FUNCTION 0x100fd9df */
